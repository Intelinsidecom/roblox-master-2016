#include "stdafx.h"

#include "util/name.h"

#include "rbx/threadsafe.h"

#include "rbx/Debug.h"

#include <boost/thread/once.hpp>
#include <boost/unordered_map.hpp>

using namespace RBX;

// Diagnostic markers (see Xbox360Client/Stubs.cpp RBXStage / _Init_thread_*).
// Declared locally: no header changes. Emits a logged XexCheckExecutablePrivilege.
extern "C" int XexCheckExecutablePrivilege(unsigned long PrivilegeType);
static void __cdecl RBXStage(unsigned long tag)
{
#ifdef RBX_PLATFORM_XBOX360
	XexCheckExecutablePrivilege(tag);
#endif
}


namespace { 

struct StrHash : std::unary_function<const char*, std::size_t>
{
	size_t operator()(const char*s) const
	{
		size_t h = boost::hash_range(s, s + strlen(s) );
		return h;
	}
};

struct StrEqualTo : public std::binary_function<const char*, const char*, bool>
{
	bool operator()(const char* a, const char* b) const
	{
		return strcmp(a, b) == 0;
	}
};

} // namespace

class Name::NameMap : public boost::unordered_map<const char *, Name*, StrHash, StrEqualTo>
{
public:
	~NameMap();
};



Name::Name(const char* const& name)
	:str(name)
{
	setOrderIndex();
}

Name::NameMap::~NameMap()
{
	NameMap::iterator iter = begin();
	while (iter!=end())
	{
		delete iter->second;
		++iter;
	}
}

//////////////////////////////////////////
// Cumbersome code to ensure that the mutex is initalized 
// in a thread-safe manner
static RBX::mutex& moo2()
{
	RBXStage(0x92); // moo2 entry: about to construct static RBX::mutex (boost::mutex)
	static RBX::mutex mutex2;
	RBXStage(0x93); // mutex2 constructed
	StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "DIAG NAMEMUTEX %p", (void*)&mutex2);
	return mutex2;
}
static void initMoo()
{
	moo2();
}
static boost::once_flag mooFlag = BOOST_ONCE_INIT;
RBX::mutex& Name::mutex()
{
#if defined(RBX_PLATFORM_XBOX360)
	// XDK: moo2()'s function-local static is already initialized thread-safely
	// (VS2010 magic statics / _Init_thread_header). Skipping the redundant
	// boost::call_once avoids the win32 named-event once rendezvous
	// (Local\{C15730E2-...}-once-flag) which stalls during static init in xenia.
	return moo2();
#else
	boost::call_once(&initMoo, mooFlag);
	return moo2();
#endif
}
//
////////////////////////////////////////////

Name::NameMap& Name::map()
{
	RBXStage(0x94); // map entry
	static NameMap n;
	RBXStage(0x95); // NameMap constructed
	return n;
}

size_t Name::approximateMemoryUsage()
{
	// is this reasonable?
	return 64 * map().size();
}
size_t Name::size()
{
	return map().size();
}

static const Name* nullName;

#ifdef RBX_PLATFORM_XBOX360
// Xbox 360 (xenia): file-scope, constant-initialized (no magic-static guard).
// Boot is single-threaded, so the plain lazy check is safe and avoids spinning.
static const Name* x360NullName = NULL;
// setOrderIndex's `static std::vector<Name*> ordered` (guarded) is hit on EVERY
// name declare; keep it at file scope on 360 (global-ctor init, no guard).
static std::vector<Name*> x360OrderedNames;
#endif

static void declareNullName()
{
	nullName = &Name::declare("");
}

const Name& Name::getNullName() {
#if defined(RBX_PLATFORM_XBOX360)
	if (!x360NullName)
		x360NullName = &declare("");
	return *x360NullName;
#else
	static boost::once_flag flag2 = BOOST_ONCE_INIT;
	boost::call_once(&declareNullName, flag2);
	return *nullName;
#endif
}

void Name::setOrderIndex()
{
	RBXStage(0x9E); // setOrderIndex entry
#if defined(RBX_PLATFORM_XBOX360)
	std::vector<Name*>& ordered = x360OrderedNames;
#else
	static std::vector<Name*> ordered;
#endif

	// Xbox 360 diagnostic: the hang occurs at StarterGuiService while interning
	// names under the name-table mutex. Log the vector size + the string, and
	// detect an unbounded lower-bound walk (corrupted ordering) instead of
	// spinning silently.
	RBXStage(0xA0);
	StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "setOrderIndex enter: \"%s\" (ordered=%d)", str.c_str(), (int)ordered.size());

	const size_t runawayLimit = 1000000;
	size_t spins = 0;

	// Go from highest to lowest to keep sort order index comparisons invariant
	size_t i = ordered.size();
	for (; i > 0; --i)
	{
		if (++spins >= runawayLimit)
		{
			StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "setOrderIndex runaway: \"%s\" (ordered=%d i=%d)", str.c_str(), (int)ordered.size(), (int)i);
			RBXStage(0xA1); // setOrderIndex lower-bound walk runaway
			break;
		}
		RBXASSERT(ordered[i-1]->str != str);
		if (str > ordered[i-1]->str)
			break;

		ordered[i-1]->sortIndex++;
		RBXASSERT(ordered[i-1]->sortIndex == i);
	}
	this->sortIndex = i;
	ordered.insert(ordered.begin() + i, this);
	RBXStage(0xA2); // setOrderIndex vector insert done

#ifdef _DEBUG
	for (size_t j = 0; j < ordered.size(); ++j)
		RBXASSERT(ordered[j]->sortIndex == j);
#endif
	RBXStage(0x9F); // setOrderIndex returned (std::vector insert OK)
}

const Name& Name::declare(const char* const& sName) {

	if (sName==NULL)
	{
		return getNullName();
	}

	Name* result;
	{
		// This scope needs to be closed before calling getNullName or the 
		// mutex will be recursively locked.

		RBX::mutex::scoped_lock lock(mutex());
        const Name& (*thisFunction)(const char* const &) = &RBX::Name::declare; // required due to overload.
        checkRbxCaller<kCallCheckCallersCode, callCheckSetApiFlag<kNameApiOffset> >(reinterpret_cast<void*>(thisFunction));

		NameMap::iterator iter = map().find(sName);
		if (iter!=map().end())
			return *iter->second;

		RBXStage(0x9A); // about to `new Name(sName)` (std::string + setOrderIndex/vector)
		Name* name = new Name(sName);
		RBXStage(0x9B); // new Name OK
		RBXStage(0x9C); // about to unordered_map insert map()[c_str] = name
		RBXStage(0xA3); // logging the string being inserted
		StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "declare insert: \"%s\"", name->c_str());
		RBXStage(0x9D); // about to unordered_map operator[] insert (boost::unordered_map)
		map()[name->c_str()] = name;
		RBXStage(0x8D); // unordered_map insert OK

		result = name;
	}

	RBXASSERT(sName[0]=='\0' || (!result->str.empty() && lookup(sName) != Name::getNullName()) );
	return *result;
}

const Name& Name::lookup(const char* const& sName) {
	RBXStage(0x96); // lookup entry
	if (sName==NULL)  
		return getNullName();

	const Name* result = NULL;
	{
		RBX::mutex::scoped_lock lock(mutex());
		RBXStage(0x97); // mutex lock acquired, before checkRbxCaller
        const Name& (*thisFunction)(const char* const &) = &RBX::Name::lookup; // required due to overload.
        checkRbxCaller<kCallCheckCallersCode, callCheckSetApiFlag<kNameApiOffset> >(
            reinterpret_cast<void*>(thisFunction));
		RBXStage(0x98); // checkRbxCaller passed, before map().find

		NameMap::iterator iter = map().find(sName);
		if (iter!=map().end())
			result = iter->second;
	}

	// Avoid recursively locking mutex().
	return result != NULL ? *result : Name::getNullName();
}

std::ostream& RBX::operator<<( std::ostream& os, const Name& name )
{
	return os << name.c_str();
}
