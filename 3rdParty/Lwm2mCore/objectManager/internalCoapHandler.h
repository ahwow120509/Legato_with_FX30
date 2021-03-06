/**
 * @file internalCoapHandler.h
 *
 * Coap request handlers
 *
 *
 * Copyright (C) Sierra Wireless Inc.
 *
 */

#ifndef INTERNAL_COAP_HANDLERS_H
#define INTERNAL_COAP_HANDLERS_H

#include "er-coap-13.h"

/**
  * @addtogroup lwm2mcore_coaphandler_int
  * @{
  */
//--------------------------------------------------------------------------------------------------
/**
 * @brief Retrieves the registered coap request handler and returns the coap request details
 *
 * @return
 *  - CoAP error code from user application
 *  - COAP_501_NOT_IMPLEMENTED if there is no registered handler found.
 */
//--------------------------------------------------------------------------------------------------
coap_status_t lwm2mcore_CallCoapEventHandler
(
    coap_packet_t* message        ///< [IN] CoAP request
);
/**
  * @}
  */

#endif
