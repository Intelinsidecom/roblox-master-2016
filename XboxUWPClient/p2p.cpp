#include "stdafx.h"

#include <windows.h>

#include "p2p.h"

#include <collection.h>
#include <string>

#include "rbx/Debug.h"
#include "async.h"

extern void dprintf( const char* fmt, ... );

enum { dbg = 0 };

//#undef RBXASSERT
//#define RBXASSERT(X)  ( (void)( (X) || (__debugbreak(), 1) ) )



namespace Xp2p
{
    enum 
    { 
        kRetransmitMaxPackets = 3,
        kRetransmitPeriodMs = 1000,
        kRetransmitLoopMs   = 30,
        kRetransmitQueueLength = 1000,
    };


    //////////////////////////////////////////////////////////////////////////

    Address::Address()
    {
        memset( &rawdata, 0, sizeof(rawdata) );
    }


    Address::Address(in6_addr addr, unsigned port)
    {
        memset( &rawdata, 0, sizeof(rawdata) );
        sockaddr_in6& sa = (sockaddr_in6&)rawdata;
        sa.sin6_family = AF_INET6;
        sa.sin6_port = htons(port);
        sa.sin6_addr = addr;
    }


    char*  Address::str(char* to ) const
    {
        char buf[128];
        inet_ntop(AF_INET6, &addr6(), buf, 128 ); 
        sprintf( to, "%s:%u", buf, port()  );
        return to;
    }

    //////////////////////////////////////////////////////////////////////////

    namespace
    {
        const char*  kBlobPrefix    = "xbl1|";
        const size_t kBlobPrefixLen = 5;

        const char kB64[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

        std::string Base64Encode( const char* data, size_t len )
        {
            std::string out;
            out.reserve( ((len + 2) / 3) * 4 );

            size_t i = 0;
            for( ; i + 3 <= len; i += 3 )
            {
                unsigned v = (unsigned)(unsigned char)data[i] << 16 | (unsigned)(unsigned char)data[i+1] << 8 | (unsigned)(unsigned char)data[i+2];
                out += kB64[(v >> 18) & 63];
                out += kB64[(v >> 12) & 63];
                out += kB64[(v >>  6) & 63];
                out += kB64[ v        & 63];
            }

            size_t rem = len - i;
            if( rem == 1 )
            {
                unsigned v = (unsigned)(unsigned char)data[i] << 16;
                out += kB64[(v >> 18) & 63];
                out += kB64[(v >> 12) & 63];
                out += "==";
            }
            else if( rem == 2 )
            {
                unsigned v = (unsigned)(unsigned char)data[i] << 16 | (unsigned)(unsigned char)data[i+1] << 8;
                out += kB64[(v >> 18) & 63];
                out += kB64[(v >> 12) & 63];
                out += kB64[(v >>  6) & 63];
                out += '=';
            }
            return out;
        }

        bool Base64Decode( const std::string& in, std::string& out )
        {
            out.clear();

            auto value = []( char c ) -> int
            {
                if( c >= 'A' && c <= 'Z' ) return c - 'A';
                if( c >= 'a' && c <= 'z' ) return c - 'a' + 26;
                if( c >= '0' && c <= '9' ) return c - '0' + 52;
                if( c == '+' ) return 62;
                if( c == '/' ) return 63;
                return -1;
            };

            int buf = 0, bits = 0;
            for( size_t i = 0; i < in.size(); ++i )
            {
                char c = in[i];
                if( c == '=' ) break;
                if( c == '\r' || c == '\n' || c == ' ' ) continue;

                int v = value(c);
                if( v < 0 ) return false;

                buf = (buf << 6) | v;
                bits += 6;
                if( bits >= 8 )
                {
                    bits -= 8;
                    out += (char)((buf >> bits) & 0xff);
                }
            }
            return true;
        }

        // Rank candidate host names: higher is better.
        //  4 = IPv6 global unicast   3 = IPv6 unique-local
        //  2 = IPv4 (as ::ffff:v4)   1 = IPv6 link-local
        // Note: not 'const T^' - C++/CX property getters are non-const.
        int scoreHost( Windows::Networking::HostName^ host, in6_addr& addr )
        {
            using namespace Windows::Networking;

            memset( &addr, 0, sizeof(addr) );

            // DisplayName is UTF-16; an IP literal is pure ASCII, so narrow it directly.
            Platform::String^ display = host->DisplayName;
            std::string name;
            name.reserve( display->Length() );
            for( unsigned int i = 0; i < display->Length(); ++i )
                name += (char)display->Data()[i];

            size_t scope = name.find('%');            // link-local carries "%<scope>"
            if( scope != std::string::npos ) name.resize( scope );

            if( host->Type == HostNameType::Ipv4 )
            {
                in_addr v4;
                if( inet_pton( AF_INET, name.c_str(), &v4 ) != 1 ) return 0;
                // Dual-stack socket (IPV6_V6ONLY cleared in Sock) accepts v4-mapped.
                addr.s6_addr[10] = 0xff;
                addr.s6_addr[11] = 0xff;
                memcpy( &addr.s6_addr[12], &v4, 4 );
                return 2;
            }

            if( host->Type != HostNameType::Ipv6 ) return 0;
            if( inet_pton( AF_INET6, name.c_str(), &addr ) != 1 ) return 0;

            if( IN6_IS_ADDR_UNSPECIFIED( &addr ) || IN6_IS_ADDR_LOOPBACK( &addr ) ) return 0;
            if( ( addr.s6_addr[0] & 0xe0 ) == 0x20 ) return 4;  // 2000::/3
            if( ( addr.s6_addr[0] & 0xfe ) == 0xfc ) return 3;  // fc00::/7
            if( IN6_IS_ADDR_LINKLOCAL( &addr ) )      return 1;
            return 0;
        }
    }

    Platform::String^ GetLocalAddressBlob()
    {
        in6_addr best = {};
        int bestScore = 0;

        for( Windows::Networking::HostName^ host : Windows::Networking::Connectivity::NetworkInformation::GetHostNames() )
        {
            in6_addr addr;
            int score = scoreHost( host, addr );
            if( score > bestScore )
            {
                best = addr;
                bestScore = score;
            }
        }

        if( bestScore <= 0 )
        {
            dprintf( "p2p: WARN: no publishable local address\n" );
            return ref new Platform::String( L"" );
        }

        char ip[64];
        if( !inet_ntop( AF_INET6, &best, ip, sizeof(ip) ) )
            return ref new Platform::String( L"" );

        std::string plain = std::string(kBlobPrefix) + ip + "|" + std::to_string( (unsigned)kNetworkPort );
        std::string encoded = Base64Encode( plain.data(), plain.size() );
        std::wstring wencoded( encoded.begin(), encoded.end() );
        return ref new Platform::String( wencoded.c_str() );
    }

    bool ParseAddressBlob( Platform::String^ blob, Address& out )
    {
        if( !blob || blob->IsEmpty() ) return false;

        std::string encoded;
        encoded.reserve( blob->Length() );
        for( unsigned int i = 0; i < blob->Length(); ++i )
            encoded += (char)blob->Data()[i];

        std::string plain;
        if( !Base64Decode( encoded, plain ) ) return false;
        if( plain.size() <= kBlobPrefixLen || plain.compare( 0, kBlobPrefixLen, kBlobPrefix ) != 0 ) return false;

        std::string rest = plain.substr( kBlobPrefixLen );
        size_t bar = rest.rfind('|');
        if( bar == std::string::npos ) return false;

        std::string ip = rest.substr( 0, bar );
        size_t scope = ip.find('%');
        if( scope != std::string::npos ) ip.resize( scope );

        char* end = nullptr;
        unsigned long port = strtoul( rest.c_str() + bar + 1, &end, 10 );
        if( end == rest.c_str() + bar + 1 || port == 0 || port > 65535 ) return false;

        in6_addr addr;
        if( inet_pton( AF_INET6, ip.c_str(), &addr ) != 1 ) return false;

        out = Address( addr, (unsigned)port );
        return true;
    }

    //////////////////////////////////////////////////////////////////////////

    Sock::Sock(unsigned port)
    {
        int result;

        fd = socket( AF_INET6, SOCK_DGRAM, IPPROTO_UDP );

        int v6only = 0;
        setsockopt( fd, IPPROTO_IPV6, IPV6_V6ONLY, (char*)&v6only, sizeof(v6only) ); // MS tells to do this, idk.

        IN6_ADDR any = {};
        Address local( any, port );
        result = bind( fd, local.toSockaddr(), local.size() );
        if(dbg) dprintf( "p2p: socket %d bind to local %d\n", fd, result );
    }


    Sock::~Sock()
    {
        closesocket( fd );
        if(dbg) dprintf( "p2p: socket %d closed\n", fd );
    }


    int Sock::send( const Address& to, const void* data, unsigned size, unsigned timeoutMs )
    {
        RBXASSERT(data);

        fd_set set;
        int result;
        timeval tout = { timeoutMs / 1000, (timeoutMs % 1000)*1000 };

        FD_ZERO( &set );
        FD_SET( fd, &set );
        result = select( 1, 0, &set, 0, &tout );
        if( result > 0 && FD_ISSET( fd, &set ) )
        {
            result = ::sendto( fd, (const char*)data, size, 0, to.toSockaddr(), to.size() );
            DWORD err = WSAGetLastError();
            return result;
        }
        if( result == 0 )
        {
            return Net_Timeout;
        }
        return Net_Fail;
    }


    int Sock::recv( Address* from, void* data, unsigned size, unsigned timeoutMs )
    {
        RBXASSERT(from);
        RBXASSERT(data);

        fd_set set;
        int result;
        int namelen = from->size();
        timeval tout = { timeoutMs / 1000, (timeoutMs % 1000)*1000 };

        FD_ZERO( &set );
        FD_SET( fd, &set );
        result = select( 1, &set, 0, 0, &tout );
        if( result > 0 && FD_ISSET( fd, &set ) )
        {
            result = ::recvfrom( fd, (char*)data, size, 0, from->toSockaddr(), &namelen );
            DWORD err = WSAGetLastError();
            return result;
        }
        if( result == 0 )
        {
            return Net_Timeout;
        }
        return Net_Fail;
    }



    //////////////////////////////////////////////////////////////////////////
    //

    Peer::Peer()
    {
        state     = State_New;
        pingTime  = 0;
        userData  = 0;
        addressLearned = false;
        userObject   = nullptr;
        txseq     = 0;
        rxseq     = 0;
        txseqR    = 0;
        rxseqR    = 0;
        rxackR    = 0;
        id        = 0xffffffff;
    }


    int Peer::setstate( int expect, int replace )
    {
        return InterlockedCompareExchange( &state, replace, expect );
    }

    //////////////////////////////////////////////////////////////////////////

    static void dbgPrintPacket( const PacketHeader* header )
    {
        dprintf( "packet: id %u  type %u  size %u  peer %u  seq %u  seqR %u  flags 0x%x\n", (unsigned)header->id, (unsigned)header->type, (unsigned)header->size, (unsigned)header->id, (unsigned)header->seq, (unsigned)header->seqR, (unsigned)header->flags );
    }

    static void dbgPrintTx( PeerPtr peer )
    {
        dprintf( "peer: id %u  tx %u  rx %u  txr %u  rxr %u\n", (unsigned)peer->id, (unsigned)peer->txseq, (unsigned)peer->rxseq, (unsigned)peer->txseqR, (unsigned)peer->rxseqR );
    }

    //////////////////////////////////////////////////////////////////////////

    Network::Network( MultiplayerSessionMember^ currentUser ) 
        : sock( kNetworkPort )
    {
        myMemberId = currentUser->MemberId;
        controlRunFlag = 1;
        controlThreadObject = boost::thread( [this]()->void { controlThread(); } );

    }


    Network::~Network()
    {
        controlRunFlag = 0;
        controlThreadObject.join();

        {
            lock lck(peerMutex);
            for( auto p: peers )
                destroyPeer(p);
        }

        for( unsigned num = 1; num; )
        {
            {
                lock lck(peerMutex);
                num = peers.size();
            }
            Sleep(10);
        }
    }



    NetResult Network::sendPacket( PeerPtr peer, PacketHeader* packet, unsigned timeoutMs, unsigned flags )
    {
        RBXASSERT( packet->type != 0 ); // don't use type 0, probably an error!
        RBXASSERT( packet->size <= sizeof(PacketStorage) ); // uwot!
        RBXASSERT( packet->size >= sizeof(PacketHeader)  ); // uwot! #2
        RBXASSERT( peer.get() );

        int oldstate = peer->setstate( Peer::State_Ready, Peer::State_Busy );
        switch(oldstate)
        {
        case Peer::State_Ready:
            break;
        case Peer::State_Busy:
        case Peer::State_Busy2:
            return Net_Retry;
        default:
            return Net_NotReady;
        }

        packet->id    = myMemberId;
        packet->flags = flags;
        packet->seq = ++ peer->txseq;
        packet->timestamp = (unsigned)GetTickCount64();
       
        if( flags & Packet_Reliable )
        {
            packet->seqR = ++ peer->txseqR;

            if( peer->reliable.size() < kRetransmitQueueLength )
            {
                PacketHeader* copy = (PacketHeader*)malloc( packet->size ); // retain the packet
                memcpy( copy, packet, packet->size );
                peer->reliable.push_back( copy );
            }
            else
            {
                dprintf( "p2p: WARN: peer retransmit queue is FULL, packet will not be reliable: ");
                dbgPrintPacket(packet);
            }
        }
        else
        {
            packet->seqR = peer->txseqR;
        }
        // NOTE: do not change the packet below! If it's reliable, its copy will not have the changes!

        if( Peer::State_Busy != peer->setstate( Peer::State_Busy, Peer::State_Ready ) )
            RBXASSERT( !"peer lock violation" );

        char buf[128];
        if(dbg) dprintf( "p2p: outgoing to %s (%u) type %u seq %u seqR %u size %u flags 0x%x", peer->remoteAddr.str(buf), (unsigned)packet->id, (unsigned)packet->type, (unsigned)packet->seq, (unsigned)packet->seqR, (unsigned)packet->size, (unsigned)packet->flags );

        // assumes peer->remoteAddr never changes
        int result = sock.send( peer->remoteAddr, packet, packet->size, timeoutMs );

        if(dbg) dprintf( result == packet->size? "... ok\n": "... failed!\n" );

        if( result < 0 )
        {
            return (NetResult)result;
        }
        if( result != packet->size )
        {
            return Net_Fail;
        }
        return Net_Ok;
    }


    NetResult Network::recvPacket( PacketStorage* packet, unsigned timeoutMs )
    {
        Address from;
        int result = sock.recv( &from, packet, sizeof(PacketStorage), timeoutMs );
        
        if( result < 0 )                               return (NetResult)result;  // recv error (timeout/disconnect/whatever)
        if( packet->size     > sizeof(PacketStorage) ) return Net_Packet; // bad packet size
        if( (unsigned)result < sizeof(PacketHeader)  ) return Net_Packet; // bad packet size
        
        char buf[128];
        if(dbg) dprintf("p2p: incoming from %s (%u) type %u seq %u seqR %u size %u flags 0x%x ... ok\n", from.str(buf), (unsigned)packet->id, (unsigned)packet->type, (unsigned)packet->seq, (unsigned)packet->seqR, (unsigned)packet->size, (unsigned)packet->flags );

        // SecureDeviceAssociation used to hand us the peer's real address. Now that we
        // only have what the member published, adopt the actual source address of the
        // first packet we can attribute to a known peer - this corrects the endpoint
        // when NAT rewrote it, and makes the connection work even if the published
        // address was unreachable from our side.
        if( (unsigned)result >= sizeof(PacketHeader) )
        {
            lock lck(peerMutex);
            for( auto& itor: peers )
            {
                if( itor->id == packet->id && !itor->addressLearned )
                {
                    itor->remoteAddr    = from;
                    itor->addressLearned = true;
                    if(dbg) dprintf( "p2p: learned address of peer %u from inbound packet\n", packet->id );
                    break;
                }
            }
        }
        return Net_Ok;
    }

    // it's kinda out-of-band, sequencing is irrelevant
    static bool sendAck( Sock& sock, const Address& addr, unsigned myid, unsigned seqR )
    {
        PacketHeader ack = {};
        ack.type         = 0; // yep
        ack.seqR         = seqR;
        ack.id           = myid;
        ack.timestamp    = (unsigned)GetTickCount64();

        int acqr = sock.send( addr, &ack, sizeof(ack), 10 );
        return acqr == sizeof(ack);
    }

    NetResult Network::processPacket( PeerPtr& who, PacketHeader* header )
    {
        char buf[120];

        if(1)
        {
            lock lck(peerMutex);
            for( auto& itor: peers )  if( itor->id == header->id )  { who = itor; break; }
        }
        
        if( !who ) return Net_Peer;

        int oldstate = who->setstate( Peer::State_Ready, Peer::State_Busy );
        switch(oldstate)
        {
        case Peer::State_Ready:
            break;
        case Peer::State_Busy:
        case Peer::State_Busy2:
            return Net_Retry;
        default:
            return Net_NotReady;
        }

        Address remoteAddr( who->remoteAddr );
        bool       isReliable = header->flags & Packet_Reliable;
        bool       needAck    = false;
        NetResult  result; // intentionally uninitialized

        if( header->type == 0 ) // it's an ack packet from the peer
        {
            if( header->seqR == who->rxackR + 1 )
            {
                if(dbg) dprintf("p2p: got ACK for %u\n", header->seqR );
                who->rxackR = header->seqR;
            }
            result = Net_Packet;  // the client is not interested in it, discard
        }
        else if( isReliable )
        {
            if( header->seqR == who->rxseqR + 1 ) // okay: although the reliable packet is what we expect, looks like we're going to lose some unreliable packets later
            {
                needAck = true;
                result = Net_Ok;
            }
            else if( header->seqR <= who->rxseqR ) // okay..ish: it's from the past, so we discard the packet but send an ack
            {
                needAck = true;
                result = Net_Packet; 
            }
            else // it's from the future, so discard, because there's another reliable packet in flight
            {
                result = Net_Packet;
            }
        }
        else // regular
        {
            if( header->seq >= who->rxseq + 1 ) // packet is in-sequence or from the future
            {
                if( header->seqR == who->rxseqR ) // good: we don't have any reliable packets in-between, so even if the packet is from the future, we still accept it
                {
                    result = Net_Ok;
                }
                else // bad: there's a reliable packet with a lower 'seq' that's not been delivered yet, discard this packet
                {
                    result = Net_Packet;
                }
            }
            else // the packet is from the past, discard
            {
                result = Net_Packet;
            }
        }

        // final step:
        if( result == Net_Ok ) // update on success
        {
            who->rxseq    = header->seq;
            who->rxseqR   = header->seqR;
            who->pingTime = (unsigned)GetTickCount64();
        }

        who->setstate( Peer::State_Busy, Peer::State_Ready );

        if( needAck )
        {
            sendAck(sock, remoteAddr, myMemberId, header->seqR);
        }
        
        return result;
    }


    PeerPtr Network::createPeer( MultiplayerSessionMember^ member, boost::function<void(PeerPtr)> onConnected )
    {
        lock lck(peerMutex);

        for( auto x: peers )
            if( x->id == member->MemberId )
                return x;


        PeerPtr peer( new Peer );
        peers.push_back(peer);
        boost::thread( [this, peer, member, onConnected]() -> void { connectPeer( peer, member, onConnected ); } ).detach();
        return peer;
    }


    void Network::destroyPeer( PeerPtr peer )
    {
        RBXASSERT( !peers.empty() ); // um...
        boost::thread(
            [this, peer]() -> void
            {
                unsigned index;
                for (;;)
                {
                    peerMutex.lock();
                    index = std::find( peers.begin(), peers.end(), peer ) - peers.begin();
                    if( index == peers.size() ) { peerMutex.unlock(); return; } // not found
                    
                    if( Peer::State_Ready   == peer->setstate( Peer::State_Ready, Peer::State_Dead ) ) break;
                    if( Peer::State_New     == peer->setstate( Peer::State_New,   Peer::State_Dead ) ) break;
                    if( Peer::State_Waiting == peer->setstate( Peer::State_Waiting, Peer::State_Dead ) ) break;
                    if( Peer::State_Error   == peer->setstate( Peer::State_Error, Peer::State_Dead ) ) break;
                    peerMutex.unlock();

                    SleepEx(10, false);
                }
                // the mutex is still locked

                char buf[128];
                if(dbg) dprintf( "p2p: destroy peer %s\n", peer->remoteAddr.str(buf) );

                for( auto ptr: peer->reliable ) { free(ptr); }

                RBXASSERT( !peers.empty() );
                RBXASSERT( index < peers.size() );
                peers[index] = peers.back();
                peers.resize( peers.size() - 1 );

                peerMutex.unlock();
            }
        ).detach();
    }


    void Network::connectPeer( PeerPtr peer, MultiplayerSessionMember^ member, boost::function<void(PeerPtr)> onConnected )
    {
        if( Peer::State_New != peer->setstate( Peer::State_New, Peer::State_Connecting ) )
            RBXASSERT( !"oops" );

        peer->id = member->MemberId;

        if( !ParseAddressBlob( member->SecureDeviceAddressBase64, peer->remoteAddr ) )
        {
            if(dbg) dprintf( "p2p: member %u published no usable endpoint\n", member->MemberId );
            peer->setstate( Peer::State_Connecting, Peer::State_Error );
            return;
        }

        char buf[128];
        if(dbg) dprintf( "p2p: connect to member %u -> %s\n", member->MemberId, peer->remoteAddr.str(buf) );

        // got the address, we can now send the data
        peer->setstate( Peer::State_Connecting, Peer::State_Ready );
        onConnected(peer);
    }


    // transmission control
    void Network::controlThread()
    {
        unsigned peerItor = 0;
        while( controlRunFlag )
        {
            Sleep(kRetransmitLoopMs);

            // pick a peer
            PeerPtr peer;
            peerMutex.lock();
            if( !peers.empty() ) 
                peer = peers[ peerItor++ % peers.size() ];
            peerMutex.unlock();

            if(!peer)
                continue;

            // Acquire a lock on the peer
            int oldstate;
            while( 1 ) 
            {
                oldstate = peer->setstate( Peer::State_Ready, Peer::State_Busy2 );
                if( oldstate == Peer::State_Ready ) break; // good
                if( oldstate != Peer::State_Busy ) break; // bad
                Sleep(1); // wait a bit and try again
            }

            if( oldstate != Peer::State_Ready )
                continue; // the peer is not in an operational state, ignore

            unsigned delUpTo = 0;
            unsigned numSend = 0;
            PacketHeader* toSend[kRetransmitMaxPackets] = {};

            for( unsigned j=0, e=peer->reliable.size(); j<e && numSend < kRetransmitMaxPackets; ++j )
            {
                PacketHeader* packet = peer->reliable[j];
                if( packet->seqR <= peer->rxackR )
                {
                    delUpTo = j; // we got confirmation for this packet, discard
                    continue;
                }

                if( packet->timestamp + kRetransmitPeriodMs > (unsigned)GetTickCount64() )
                    break; // the packet is not yet eligible for retry, and all following packets either, because they're ordered
               
                toSend[numSend++] = packet;
            }

            if( delUpTo )
            {
                for( unsigned j=0; j<delUpTo; ++j ) 
                { 
                    if(dbg) { dprintf("p2p: removing reliable packet: "); dbgPrintPacket(peer->reliable[j] ); }
                    free(peer->reliable[j]); 
                }
                peer->reliable.erase( peer->reliable.begin(), peer->reliable.begin() + delUpTo );
            }

            // unlock the peer, as the actual net send operations can be concurrent
            if( Peer::State_Busy2 != peer->setstate(Peer::State_Busy2, Peer::State_Ready ) )
                RBXASSERT( !"peer lock violation #2" );

            // retransmit
            for( unsigned j=0; j<numSend; ++j )
            {
                toSend[j]->timestamp = (unsigned)GetTickCount64();
                if(dbg) { dprintf("p2p: retransmit "); dbgPrintPacket(toSend[j]); }
                int result = sock.send( peer->remoteAddr, toSend[j], toSend[j]->size, 10 );
                if( result < 0 ) break; // error with the socket don't continue
            }
        }
    }

    enum Bool { True, False, IDunno };
}

