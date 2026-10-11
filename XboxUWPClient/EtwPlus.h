
#pragma once

#ifndef _ETWPLUS_H_UWP_
#define _ETWPLUS_H_UWP_

#include <string.h>

#pragma pack(push, 8)
#include <windows.h>
#include <evntprov.h>
#pragma pack(pop)

//////////////////////////////////////////////////////////////////////////
// Field types

typedef enum _ETX_FIELD_TYPE
{
    EtxFieldType_Null = 0,
    EtxFieldType_UnicodeString,
    EtxFieldType_Int32,
    EtxFieldType_Float,
    EtxFieldType_Double,
    EtxFieldType_GUID
} ETX_FIELD_TYPE;

typedef struct _ETX_FIELD_DESCRIPTOR
{
    UINT32 Type;     // ETX_FIELD_TYPE
    UINT32 Reserved;
} ETX_FIELD_DESCRIPTOR;

//////////////////////////////////////////////////////////////////////////
// Event / provider option enums used by the generated descriptors

typedef enum _ETX_EVENT_ENABLED_STATE
{
    EtxEventEnabledState_Undefined = 0,
    EtxEventEnabledState_ProviderDefault
} ETX_EVENT_ENABLED_STATE;

typedef enum _ETX_POPULATION_SAMPLE
{
    EtxPopulationSample_Undefined = 0,
    EtxPopulationSample_UseProviderPopulationSample
} ETX_POPULATION_SAMPLE;

typedef enum _ETX_EVENT_LATENCY
{
    EtxEventLatency_Undefined = 0,
    EtxEventLatency_ProviderDefault
} ETX_EVENT_LATENCY;

typedef enum _ETX_EVENT_PRIORITY
{
    EtxEventPriority_Undefined = 0,
    EtxEventPriority_ProviderDefault
} ETX_EVENT_PRIORITY;

typedef enum _ETX_PROVIDER_ENABLED_STATE
{
    EtxProviderEnabledState_Undefined = 0,
    EtxProviderEnabledState_OnByDefault
} ETX_PROVIDER_ENABLED_STATE;

typedef enum _ETX_PROVIDER_LATENCY
{
    EtxProviderLatency_Undefined = 0,
    EtxProviderLatency_RealTime
} ETX_PROVIDER_LATENCY;

typedef enum _ETX_PROVIDER_PRIORITY
{
    EtxProviderPriority_Undefined = 0,
    EtxProviderPriority_Critical
} ETX_PROVIDER_PRIORITY;

//////////////////////////////////////////////////////////////////////////
// Descriptors. Member order must match the initializers emitted by
// EtwPlusTool (see xdpevents.h).

typedef struct _ETX_EVENT_DESCRIPTOR
{
    EVENT_DESCRIPTOR   Descriptor;        // Id, Version, Channel, Level, Opcode, Task, Keyword
    const char*        Name;
    const char*        Version;
    ETX_FIELD_DESCRIPTOR* FieldDescriptors;
    UINT32             FieldCount;
    UINT32             Reserved;
    UINT32             EnabledState;
    UINT32             EnabledStateDefault;
    UINT32             PopulationSample;
    UINT32             PopulationSampleDefault;
    UINT32             Latency;
    UINT32             LatencyDefault;
    UINT32             Priority;
    UINT32             PriorityDefault;
} ETX_EVENT_DESCRIPTOR;

typedef struct _ETX_PROVIDER_DESCRIPTOR
{
    const char*            Name;
    GUID                   Guid;
    UINT32                 EventCount;
    ETX_EVENT_DESCRIPTOR*  Events;
    UINT32                 Reserved;
    UINT32                 EnabledState;
    UINT32                 EnabledStateDefault;
    UINT32                 Reserved2;
    UINT32                 Reserved3;
    UINT32                 Latency;
    UINT32                 LatencyDefault;
    UINT32                 Priority;
    UINT32                 PriorityDefault;
} ETX_PROVIDER_DESCRIPTOR;

//////////////////////////////////////////////////////////////////////////
// Helpers

__inline ULONG EtxRegister(ETX_PROVIDER_DESCRIPTOR* provider, REGHANDLE* handle)
{
    return EventRegister(&provider->Guid, NULL, 0, handle);
}

__inline ULONG EtxUnregister(ETX_PROVIDER_DESCRIPTOR* provider, REGHANDLE* handle)
{
    (void)provider;
    if (*handle == (REGHANDLE)0)
        return ERROR_SUCCESS;
    return EventUnregister(*handle);
}

__inline void EtxFillCommonFields_v7(EVENT_DATA_DESCRIPTOR* descriptor, UINT8* scratch, UINT32 scratchSize)
{
    if (scratchSize)
        memset(scratch, 0, scratchSize);
    EventDataDescCreate(descriptor, scratch, scratchSize);
}

__inline ULONG EtxEventWrite(const ETX_EVENT_DESCRIPTOR* eventDescriptor,
                             ETX_PROVIDER_DESCRIPTOR* provider,
                             REGHANDLE handle,
                             ULONG dataDescriptorCount,
                             EVENT_DATA_DESCRIPTOR* dataDescriptors)
{
    (void)provider;
    return EventWrite(handle, &eventDescriptor->Descriptor, dataDescriptorCount, dataDescriptors);
}

#endif // _ETWPLUS_H_UWP_
