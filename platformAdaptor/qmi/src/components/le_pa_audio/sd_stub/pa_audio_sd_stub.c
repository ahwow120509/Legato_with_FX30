/**
 * @file pa_audio_sd_stub.c
 *
 * Pa audio stub for pa_audio API.
 *
 * Copyright (C) Sierra Wireless Inc.
 */

#include "legato.h"
#include "sdudefs.h"

//--------------------------------------------------------------------------------------------------
/**
 * Sd client stub functions.
 *
 */
//--------------------------------------------------------------------------------------------------
int sdclient_receive_rsp(void* buffer, int len)
{
    uint32_t *rspPtr = buffer;
    *rspPtr = 1;
    return 0;
}

//--------------------------------------------------------------------------------------------------
/**
 * Stub functions.
 *
 */
//--------------------------------------------------------------------------------------------------
int sdclient_send_msg(sdmsg_type* msg)
{
    return 0;
}

//--------------------------------------------------------------------------------------------------
/**
 * Stub functions.
 *
 */
//--------------------------------------------------------------------------------------------------
void sdclient_set_handler( msg_handler_type msg_handler )
{

}

//--------------------------------------------------------------------------------------------------
/**
 * Stub functions.
 *
 */
//--------------------------------------------------------------------------------------------------
void sdclient_init( char* sockName )
{

}
