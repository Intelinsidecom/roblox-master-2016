#ifndef _FMODXBOX360_H
#define _FMODXBOX360_H

/*
[ENUM] 
[
    [NAME] 
    FMOD_THREAD

    [DESCRIPTION]
    Values for FMOD_THREAD_PROCESSOR_ASSIGNMENTS structure.

    [REMARKS]

    [PLATFORMS]
    Xbox360

    [SEE_ALSO]
    FMOD_THREAD_PROCESSOR_ASSIGNMENTS
]
*/
typedef enum
{
    FMOD_THREAD_CORE0THREAD0,  /* Thread will be created on HW Thread 0 of Core 0 */
    FMOD_THREAD_CORE0THREAD1,  /* Thread will be created on HW Thread 1 of Core 0 */
    FMOD_THREAD_CORE1THREAD0,  /* Thread will be created on HW Thread 0 of Core 1 */
    FMOD_THREAD_CORE1THREAD1,  /* Thread will be created on HW Thread 1 of Core 1 */
    FMOD_THREAD_CORE2THREAD0,  /* Thread will be created on HW Thread 0 of Core 2. All threads will be created on this core if non specified */
    FMOD_THREAD_CORE2THREAD1   /* Thread will be created on HW Thread 1 of Core 2 */
} FMOD_THREAD;


/*
[STRUCTURE] 
[
    [DESCRIPTION]   
    Use this structure with System::init to set which processor(s) FMOD will create its
    threads on.
    Pass this structure in as the "extradriverdata" parameter in System::init.

    [REMARKS]

    [PLATFORMS]
    Xbox360

    [SEE_ALSO]      
    FMOD_THREAD
    System::init
]
*/
typedef struct FMOD_THREAD_PROCESSOR_ASSIGNMENTS
{
    FMOD_THREAD mixer;       /* [in] FMOD software mixer thread */
    FMOD_THREAD stream;      /* [in] FMOD stream thread */
    FMOD_THREAD nonblocking; /* [in] FMOD thread for FMOD_NONBLOCKING */
    FMOD_THREAD file;        /* [in] FMOD file thread */
    FMOD_THREAD xaudio;      /* [in] Thread XAudio runs on */

} FMOD_THREAD_PROCESSOR_ASSIGNMENTS;

#endif