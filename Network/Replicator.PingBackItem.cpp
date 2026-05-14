#include "Replicator.PingBackItem.h"

#include "Item.h"
#include "Replicator.h"
#include "ReplicatorStats.h"
#include "V8DataModel/DataModel.h"
#include "V8DataModel/HackDefines.h"

#include "RakNetTime.h"
#include "BitStream.h"

#if defined(I_AM_GOY_THAT_LOVES_VMPROTECT)
#include "VMProtectSDK.h"
#endif

namespace RBX {
namespace Network {

Replicator::PingBackItem::PingBackItem(Replicator* replicator, RakNet::Time time, unsigned int extraStats)
		: PooledItem(*replicator), time(time), extraStats(extraStats)
	{}

bool Replicator::PingBackItem::write(RakNet::BitStream& bitStream) {
    #if defined(I_AM_GOY_THAT_LOVES_VMPROTECT)
	VMProtectBeginMutation("32");
    #endif

    int byteStart = bitStream.GetNumberOfBytesUsed();

	writeItemType(bitStream, ItemTypePingBack);
	bitStream << true;
	bitStream << time;

#if !defined(LOVE_ALL_ACCESS)
	unsigned int sendStats = DataModel::sendStats |
			DataModel::get(&replicator)->allHackFlagsOredTogether();
#else
    unsigned int sendStats = 0;
#endif
    bitStream << sendStats;

    if (replicator.canUseProtocolVersion(34))
    {
#if !defined(RBX_RCC_SECURITY) && !defined(RBX_STUDIO_BUILD)
        if (time & 0x20)
        {
            extraStats = ~extraStats;
        }

#endif
        bitStream.Write(static_cast<uint32_t>(extraStats));
    }

    if (replicator.settings().trackDataTypes) {
        replicator.replicatorStats.incrementPacketsSent(ReplicatorStats::PACKET_TYPE_Ping);
        replicator.replicatorStats.samplePacketsSent(ReplicatorStats::PACKET_TYPE_Ping, bitStream.GetNumberOfBytesUsed()-byteStart);
    }
#if defined(I_AM_GOY_THAT_LOVES_VMPROTECT)
	VMProtectEnd();
#endif
	return true;
}

}
}
