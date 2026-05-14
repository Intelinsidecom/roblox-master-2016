#include "Replicator.HashItem.h"

#include "Item.h"
#include "Replicator.h"
#include "ReplicatorStats.h"

#include "FastLog.h"
#include "V8DataModel/DataModel.h"

#include "BitStream.h"
#include "Util/ProgramMemoryChecker.h"
#include "V8DataModel/HackDefines.h"
#include "Security/FuzzyTokens.h"
#include "Security/ApiSecurity.h"
#include "v8datamodel/HackDefines.h"

#if defined(I_AM_GOY_THAT_LOVES_VMPROTECT)
#include "VMProtectSDK.h"
#endif

namespace RBX {
    namespace Network {
        
        Replicator::HashItem::HashItem(Replicator* replicator, const PmcHashContainer* const hashes, unsigned long long fuzzyToken,
            unsigned long long apiToken, unsigned long long prevApiToken)
            : Item(*replicator)
            , hashes(*hashes)
            , fuzzyToken(fuzzyToken)
            , apiToken(apiToken)
            , prevApiToken(prevApiToken)
        {
#if defined(_WIN32) && !defined(RBX_PLATFORM_DURANGO) && !defined(RBX_PLATFORM_UWP)
            this->hashes.hash.push_back(RBX::Security::getIndirectly<LINE_RAND4>((void*)(&RBX::Security::rbxTextSize)));
            this->hashes.hash.push_back(RBX::Security::getIndirectly<LINE_RAND4>((void*)(&RBX::Security::rbxTextBase)));
#endif
        }

        // make sure to _copy_ data to the item and not re-read it from other memory.
        bool Replicator::HashItem::write(RakNet::BitStream& bitStream) {
#if defined(I_AM_GOY_THAT_LOVES_VMPROTECT)
            VMProtectBeginVirtualization(NULL);
#endif
            // There is a small amount of obscuring that is done to make this slightly harder to
            // analyze.  "nonce" = "number used once"
            writeItemType(bitStream, ItemTypeHash);
            unsigned char numItems;
            numItems = hashes.hash.size();
            bitStream << numItems;
            unsigned int obscuringXorValue = hashes.nonce ^ hashes.hash[numItems-1];
            bitStream << obscuringXorValue; 
            for (unsigned char i = 0; i < numItems-1; ++i)
            {
                obscuringXorValue ^= hashes.hash[i];
                bitStream << obscuringXorValue;
            }
            bitStream << hashes.hash[numItems-1];
            bitStream << fuzzyToken;
            bitStream << apiToken;
            bitStream << prevApiToken;
#if defined(I_AM_GOY_THAT_LOVES_VMPROTECT)
            VMProtectEnd();
#endif
            return true;
        }

    }
}
