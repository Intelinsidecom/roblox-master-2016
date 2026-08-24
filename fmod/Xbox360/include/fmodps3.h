/* ========================================================================================= */
/* FMOD PS3 Specific header file. Copyright (c), Firelight Technologies Pty, Ltd. 2005-2008. */
/* ========================================================================================= */

#ifndef _FMODPS3_H
#define _FMODPS3_H

#include <sysutil/sysutil_sysparam.h>

#include "fmod.h"


/*
[STRUCTURE] 
[
    [DESCRIPTION]
    Use this structure with System::init to set the information required for ps3
    initialisation.

    Pass this structure in as the "extradriverdata" parameter in System::init.

    [REMARKS]

    [PLATFORMS]
    PS3

    [SEE_ALSO]
    System::init
]
*/
typedef struct FMOD_PS3_EXTRADRIVERDATA
{
    int         spu_priority_mixer;                /* SPU thread priority of the mixer. (highest: 16, lowest: 255, default: 16). Ignored if using SPURS. */
    int         spu_priority_streamer;             /* SPU thread priority of the MPEG decoder (highest: 16, lowest: 255, default: 200). Ignored if using SPURS. */
    int         spu_priority_at3;                  /* SPU thread priority of the AT3 decoder (highest: 16, lowest: 255, default: 200) AT3 no longer supported! (See docs) */
    
    void        *spurs;                            /* Pointer to SPURS instance. (Set this to NULL if not using SPURS) */

    void        *rsx_pool;                         /* Pointer to start of RSX memory pool */
    unsigned int rsx_pool_size;                    /* Size of RSX memory pool to use */

    CellAudioOutConfiguration *cell_audio_config;  /* Pass in a pointer to a CellAudioOutConfiguration and it will be filled out with the settings FMOD used to configure cellAudio.  */
} FMOD_PS3_EXTRADRIVERDATA;

#endif
