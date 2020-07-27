/** @file pa_pcm_simu.h
 *
 * Legato @ref pa_pcm_simu include file.
 *
 * Copyright (C) Sierra Wireless Inc.
 */

#ifndef PA_PCM_SIMU_H_INCLUDE_GUARD
#define PA_PCM_SIMU_H_INCLUDE_GUARD

//--------------------------------------------------------------------------------------------------
/**
 * Initialize the pa_pcm simu.
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_pcmSimu_Init
(
    void
);

//--------------------------------------------------------------------------------------------------
/**
 * Init the data buffer with the correct size.
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_pcmSimu_InitData
(
    uint32_t len
);

//--------------------------------------------------------------------------------------------------
/**
 * Release the data buffer.
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_pcmSimu_ReleaseData
(
    void
);

//--------------------------------------------------------------------------------------------------
/**
 * Get the data buffer.
 *
 */
//--------------------------------------------------------------------------------------------------
uint8_t* pa_pcmSimu_GetDataPtr
(
    void
);

//--------------------------------------------------------------------------------------------------
/**
 * Set the semaphore to unlock the test thread.
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_pcmSimu_SetSemaphore
(
    le_sem_Ref_t*    semaphorePtr
);

#endif

