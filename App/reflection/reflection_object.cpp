#include "stdafx.h"

#include "reflection/object.h"
#include "g3d/format.h"


#ifdef RBX_PLATFORM_XBOX360
extern "C" int XexCheckExecutablePrivilege(unsigned long PrivilegeType);
extern "C" void* _ReturnAddress();
#define FB_STAGE(t) XexCheckExecutablePrivilege(t)
#else
#define FB_STAGE(t) ((void)0)
#endif

using namespace RBX;
using namespace RBX::Reflection;

bool Descriptor::lockedDown  = false;

void (*MemberDescriptor::memberHidingHook)(MemberDescriptor*, MemberDescriptor*) = 0;


static ClassDescriptor::ClassDescriptors& staticData2()
{
	static ClassDescriptor::ClassDescriptors result;
	return result;
}

#if defined(RBX_PLATFORM_XBOX360)
namespace { ClassDescriptor* g_x360RootDescriptor = NULL; }
#else
static void initStaticData2()
{
	staticData2();
}
#endif

ClassDescriptor::ClassDescriptors& ClassDescriptor::allClasses()
{
#if defined(RBX_PLATFORM_XBOX360)
	return staticData2();
#else
	static boost::once_flag flag = BOOST_ONCE_INIT;
	boost::call_once(&initStaticData2, flag);
	return staticData2();
#endif
}

#if defined(RBX_PLATFORM_XBOX360)
namespace {
	std::map<const char*, ClassDescriptor*>& classDescriptorRegistry360()
	{
		static std::map<const char*, ClassDescriptor*> registry;
		return registry;
	}
}
namespace RBX { namespace Reflection {
	ClassDescriptor* findClassDescriptor360(const char* name)
	{
		std::map<const char*, ClassDescriptor*>::iterator iter = classDescriptorRegistry360().find(name);
		return (iter != classDescriptorRegistry360().end()) ? iter->second : NULL;
	}
	void addClassDescriptor360(const char* name, ClassDescriptor* desc)
	{
		classDescriptorRegistry360()[name] = desc;
	}
}}
#endif

#if defined(RBX_PLATFORM_XBOX360)
ClassDescriptor* createRootDescriptor360()
{
	if (!g_x360RootDescriptor)
		g_x360RootDescriptor = new ClassDescriptor;  // private default ctor (friend access)
	return g_x360RootDescriptor;
}
#endif

#if defined(RBX_PLATFORM_XBOX360)
namespace RBX {
	std::map<const Name*, const ICreator*>& creatorsRegistry()
	{
		static std::map<const Name*, const ICreator*> registry;
		return registry;
	}
}
#endif


ClassDescriptor::ClassDescriptor()
	:Descriptor("<<<ROOT>>>", Descriptor::Attributes())
	,MemberDescriptorContainer<PropertyDescriptor>(NULL)
	,MemberDescriptorContainer<FunctionDescriptor>(NULL)
	,MemberDescriptorContainer<EventDescriptor>(NULL)
	,MemberDescriptorContainer<YieldFunctionDescriptor>(NULL)
	,MemberDescriptorContainer<CallbackDescriptor>(NULL)
	,base(NULL)
	,bReplicateType(true)
	,bCanXmlWrite(true)
	,bIsScriptable(true)
	,security(Security::None)
{
}

unsigned int ClassDescriptor::checksum(const EventDescriptor* eventDesc, boost::crc_32_type& result)
{
    result.process_bytes(eventDesc->name.c_str(), eventDesc->name.toString().size());
    for(std::list<SignatureDescriptor::Item>::const_iterator argIter = eventDesc->getSignature().arguments.begin(); 
        argIter != eventDesc->getSignature().arguments.end(); ++argIter)
    {
        const SignatureDescriptor::Item arg = *argIter;
        result.process_bytes(arg.name->c_str(), arg.name->toString().size());
        result.process_bytes(arg.type->name.c_str(), arg.type->name.toString().size());
    }
    return result.checksum();
}

unsigned int ClassDescriptor::checksum(const PropertyDescriptor* propDesc, boost::crc_32_type& result)
{
    result.process_bytes(propDesc->name.c_str(), propDesc->name.toString().size());
    result.process_bytes(propDesc->type.name.c_str(), propDesc->type.name.toString().size());
    result.process_byte(propDesc->canReplicate());
    if (propDesc->bIsEnum)
    {
        const EnumPropertyDescriptor& enumDesc = static_cast<const EnumPropertyDescriptor&>(*propDesc);
        result.process_byte((unsigned char)enumDesc.enumDescriptor.getEnumCountMSB());
    }
    return result.checksum();
}

unsigned int ClassDescriptor::checksum(const ClassDescriptor* desc, boost::crc_32_type& result)
{
    result.process_bytes(desc->name.c_str(), desc->name.toString().size());
    result.process_byte(desc->getReplicationLevel());
    MemberDescriptorContainer<PropertyDescriptor>::Collection::const_iterator propIter =
        desc->MemberDescriptorContainer<PropertyDescriptor>::descriptors_begin();
    MemberDescriptorContainer<PropertyDescriptor>::Collection::const_iterator propEnd =
        desc->MemberDescriptorContainer<PropertyDescriptor>::descriptors_end();
    for (; propIter != propEnd; propIter++)
    {
        const PropertyDescriptor* propDesc = *propIter;
        checksum(propDesc, result);
    }
    MemberDescriptorContainer<EventDescriptor>::Collection::const_iterator eventIter =
        desc->MemberDescriptorContainer<EventDescriptor>::descriptors_begin();
    MemberDescriptorContainer<EventDescriptor>::Collection::const_iterator eventEnd =
        desc->MemberDescriptorContainer<EventDescriptor>::descriptors_end();
    for (; eventIter != eventEnd; eventIter++)
    {
        const EventDescriptor* eventDesc = *eventIter;
        checksum(eventDesc, result);
    }
    return result.checksum();
}

unsigned int ClassDescriptor::checksum(const Type* typeDesc, boost::crc_32_type& result)
{
    result.process_bytes(typeDesc->name.c_str(), typeDesc->name.toString().size());
    result.process_byte(typeDesc->isFloat);
    result.process_byte(typeDesc->isNumber);
    return result.checksum();
}

unsigned int ClassDescriptor::checksum()
{
    static unsigned int checksumValue = 0;
    if (checksumValue == 0)
    {
        StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "Calculating checksum...");
        boost::crc_32_type result;

        ClassDescriptors::const_iterator iter = all_begin();
        while (iter!=all_end())
        {
            const ClassDescriptor* desc = (*iter);
            checksum(desc, result);
            ++iter;
        }
        checksumValue = result.checksum();
    }
    StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "API checksum %d", checksumValue);
    return checksumValue;
}

// Used for sorting
static bool compare2(const ClassDescriptor* a, const ClassDescriptor* b)
{
	return a->name < b->name;
}

int ClassDescriptor::count = 0;

ClassDescriptor::ClassDescriptor(ClassDescriptor& base, const char* name, Attributes attributes, Security::Permissions security)
	:Descriptor(name, attributes)
	,MemberDescriptorContainer<PropertyDescriptor>(&base)
	,MemberDescriptorContainer<FunctionDescriptor>(&base)
	,MemberDescriptorContainer<EventDescriptor>(&base)
	,MemberDescriptorContainer<YieldFunctionDescriptor>(&base)
	,MemberDescriptorContainer<CallbackDescriptor>(&base)
	,base(&base)
	,bReplicateType((attributes.flags>>1) & 0x3)
	,bCanXmlWrite((attributes.flags>>3) & 0x1)
	,bIsScriptable((attributes.flags>>4) & 0x1)
	,security(security)
{
	count++;

	// Xbox 360 diagnostic: if any class descriptor's insertion runs away
	// (unbounded/corrupted reflection DB), emit markers + log sizes instead of
	// spinning silently inside classDescriptor() in xenia. Broaden to ALL
	// classes because the current hang occurs at StarterGuiService, well
	// before SoundChannel's descriptor is ever constructed.
	const int diagMarkEvery = 1000000;
	const int diagMarkLimit = 8;
	const std::string diagName = this->name.toString();
	const size_t diagAllSize = allClasses().size();
	FB_STAGE(0x90); // class descriptor construction entered

	if (diagAllSize < 8 || (diagAllSize & 0x3FF) == 0)
		StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "classDescriptor enter: %s (derived=%d all=%d) ret=%p", diagName.c_str(), (int)base.derivedClasses.size(), (int)diagAllSize, _ReturnAddress());

	{
		ClassDescriptors::iterator iter;
		int spins = 0;
		int marks = 0;
		iter = base.derivedClasses.begin();
		while (iter != base.derivedClasses.end() && compare2(*iter, this))
		{
			if (++spins >= diagMarkEvery)
			{
				StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "derivedClasses runaway: %s (iter=%d all=%d)", diagName.c_str(), spins, (int)diagAllSize);
				FB_STAGE(0x91); // derivedClasses lower_bound runaway
				spins = 0;
				if (++marks >= diagMarkLimit)
					break;
			}
			++iter;
		}
		RBXASSERT(iter == base.derivedClasses.end() || *iter != this);
		base.derivedClasses.insert(iter, this);
		FB_STAGE(0x95); // derivedClasses insert done
	}

	{
		ClassDescriptors::iterator iter = allClasses().begin();
		int spins = 0;
		int marks = 0;
		while (iter != allClasses().end())
		{
			ClassDescriptor* desc = *iter;
			if (this->name < desc->name)
				break;
			if (++spins >= diagMarkEvery)
			{
				StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "allClasses runaway: %s (iter=%d all=%d)", diagName.c_str(), spins, (int)diagAllSize);
				FB_STAGE(0x92); // allClasses scan runaway
				spins = 0;
				if (++marks >= diagMarkLimit)
					break;
			}
			++iter;
		}
		allClasses().insert(iter, this);
		FB_STAGE(0x96); // allClasses insert done
	}
}

bool ClassDescriptor::operator==(const ClassDescriptor& other) const
{
	return this == &other;
}

bool ClassDescriptor::operator!=(const ClassDescriptor& other) const
{
	return this != &other;
}

bool ClassDescriptor::isBaseOf(const ClassDescriptor& child) const
{
	return child.base && child.base->isA(*this);
}

bool ClassDescriptor::isA(const ClassDescriptor& test) const
{
	if (name == test.name)
		return true;
	if (base)
		return base->isA(test);
	return false;
}


//bool ClassDescriptor::isBaseOf(const char* childName) const;
bool ClassDescriptor::isA(const char* testName) const
{
	if (name == testName)
		return true;
	if (base)
		return base->isA(testName);
	return false;
}


bool MemberDescriptor::isMemberOf(const ClassDescriptor& classDescriptor) const
{
	const ClassDescriptor* d = &classDescriptor;
	do
	{
		if (*d == this->owner)
			return true;
		d = d->getBase();
	}
	while (*d != ClassDescriptor::rootDescriptor());

	return false;
}



bool MemberDescriptor::isMemberOf(const DescribedBase* instance) const
{
	RBXASSERT(instance != NULL);
	return isMemberOf(instance->getDescriptor());
}
