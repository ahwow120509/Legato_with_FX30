#ifndef IMSA_SERVICE_01_H
#define IMSA_SERVICE_01_H
/**
  @file ip_multimedia_subsystem_application_v01.h

  @brief This is the public header file which defines the imsa service Data structures.

  This header file defines the types and structures that were defined in
  imsa. It contains the constant values defined, enums, structures,
  messages, and service message IDs (in that order) Structures that were
  defined in the IDL as messages contain mandatory elements, optional
  elements, a combination of mandatory and optional elements (mandatory
  always come before optionals in the structure), or nothing (null message)

  An optional element in a message is preceded by a uint8_t value that must be
  set to true if the element is going to be included. When decoding a received
  message, the uint8_t values will be set to true or false by the decode
  routine, and should be checked before accessing the values that they
  correspond to.

  Variable sized arrays are defined as static sized arrays with an unsigned
  integer (32 bit) preceding it that must be set to the number of elements
  in the array that are valid. For Example:

  uint32_t test_opaque_len;
  uint8_t test_opaque[16];

  If only 4 elements are added to test_opaque[] then test_opaque_len must be
  set to 4 before sending the message.  When decoding, the _len value is set 
  by the decode routine and should be checked so that the correct number of
  elements in the array will be accessed.

*/
/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*
  Copyright (c) 2012-2014 Qualcomm Technologies, Inc.
  All rights reserved.
  Confidential and Proprietary - Qualcomm Technologies, Inc.


  $Header: //source/qcom/qct/interfaces/qmi/imsa/main/latest/api/ip_multimedia_subsystem_application_v01.h#14 $
 *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/
/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====* 
 *THIS IS AN AUTO GENERATED FILE. DO NOT ALTER IN ANY WAY
 *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/

/* This file was generated with Tool version 6.7 
   It was generated on: Sat Jan 25 2014 (Spin 0)
   From IDL File: ip_multimedia_subsystem_application_v01.idl */

/** @defgroup imsa_qmi_consts Constant values defined in the IDL */
/** @defgroup imsa_qmi_msg_ids Constant values for QMI message IDs */
/** @defgroup imsa_qmi_enums Enumerated types used in QMI messages */
/** @defgroup imsa_qmi_messages Structures sent as QMI messages */
/** @defgroup imsa_qmi_aggregates Aggregate types used in QMI messages */
/** @defgroup imsa_qmi_accessor Accessor for QMI service object */
/** @defgroup imsa_qmi_version Constant values for versioning information */

#include <stdint.h>
#include "qmi_idl_lib.h"
#include "common_v01.h"


#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup imsa_qmi_version
    @{
  */
/** Major Version Number of the IDL used to generate this file */
#define IMSA_V01_IDL_MAJOR_VERS 0x01
/** Revision Number of the IDL used to generate this file */
#define IMSA_V01_IDL_MINOR_VERS 0x08
/** Major Version Number of the qmi_idl_compiler used to generate this file */
#define IMSA_V01_IDL_TOOL_VERS 0x06
/** Maximum Defined Message ID */
#define IMSA_V01_MAX_MESSAGE_ID 0x0025
/**
    @}
  */


/** @addtogroup imsa_qmi_consts 
    @{ 
  */
#define IMSA_HO_FAILURE_CAUSE_CODE_STR_LEN_V01 125
/**
    @}
  */

/** @addtogroup imsa_qmi_enums
    @{
  */
typedef enum {
  IMSA_SERVICE_STATUS_ENUM_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  IMSA_NO_SERVICE_V01 = 0, 
  IMSA_LIMITED_SERVICE_V01 = 1, 
  IMSA_FULL_SERVICE_V01 = 2, 
  IMSA_SERVICE_STATUS_ENUM_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}imsa_service_status_enum_v01;
/**
    @}
  */

/** @addtogroup imsa_qmi_enums
    @{
  */
typedef enum {
  IMSA_SERVICE_RAT_ENUM_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  IMSA_WLAN_V01 = 0, /**<  IMS service on WLAN.  */
  IMSA_WWAN_V01 = 1, /**<  IMS service on WWAN.  */
  IMSA_IWLAN_V01 = 2, /**<  IMS service on Interworking-WLAN  */
  IMSA_SERVICE_RAT_ENUM_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}imsa_service_rat_enum_v01;
/**
    @}
  */

/** @addtogroup imsa_qmi_enums
    @{
  */
typedef enum {
  IMSA_IMS_REGISTRATION_STATUS_ENUM_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  IMSA_STATUS_NOT_REGISTERED_V01 = 0, /**<  Not registered for IMS  */
  IMSA_STATUS_REGISTERING_V01 = 1, /**<  Registering for IMS  */
  IMSA_STATUS_REGISTERED_V01 = 2, /**<  Registered for IMS  */
  IMSA_IMS_REGISTRATION_STATUS_ENUM_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}imsa_ims_registration_status_enum_v01;
/**
    @}
  */

/** @addtogroup imsa_qmi_enums
    @{
  */
typedef enum {
  IMSA_RAT_HANDOVER_STATUS_ENUM_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  IMSA_STATUS_RAT_HO_SUCCESS_V01 = 0, /**<  RAT Handover Success  */
  IMSA_STATUS_RAT_HO_FAILURE_V01 = 1, /**<  RAT Handover Failure  */
  IMSA_RAT_HANDOVER_STATUS_ENUM_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}imsa_rat_handover_status_enum_v01;
/**
    @}
  */

/** @addtogroup imsa_qmi_aggregates
    @{
  */
/**  IMS Service Not Available 
 IMS Limited Service 
 IMS Full Service 
 */
typedef struct {

  imsa_rat_handover_status_enum_v01 rat_ho_status;

  imsa_service_rat_enum_v01 source_rat;

  imsa_service_rat_enum_v01 target_rat;

  char cause_code[IMSA_HO_FAILURE_CAUSE_CODE_STR_LEN_V01 + 1];
}imsa_rat_handover_status_info_v01;  /* Type */
/**
    @}
  */

typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}imsa_get_registration_status_req_msg_v01;

/** @addtogroup imsa_qmi_messages
    @{
  */
/** Response Message; Gets the registration status for various IMS services for the
             requesting control point. */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;

  /* Optional */
  /*  IMS Registration Status */
  uint8_t ims_registered_valid;  /**< Must be set to true if ims_registered is being passed */
  uint8_t ims_registered;
  /**<   Values: \n
       - TRUE  -- UE is registered on the IMS network \n
       - FALSE -- UE is not registered on the IMS network
       This TLV is deprecated and new TLV 'ims_reg_status' is used.
   */

  /* Optional */
  /*  IMS Registration Error Code */
  uint8_t ims_registration_failure_error_code_valid;  /**< Must be set to true if ims_registration_failure_error_code is being passed */
  uint16_t ims_registration_failure_error_code;
  /**<   IMS registration error code. An error code is returned when the IMS 
       registration status is IMSA_STATUS_NOT_REGISTERED. \n
       Values: \n
       - 3xx -- Redirection responses \n
       - 4xx -- Client failure responses \n
       - 5xx -- Server failure responses \n
       - 6xx -- Global failure responses
  */

  /* Optional */
  /*  New IMS Registration Status */
  uint8_t ims_reg_status_valid;  /**< Must be set to true if ims_reg_status is being passed */
  imsa_ims_registration_status_enum_v01 ims_reg_status;
  /**<   Enum representing the IMS registration status. Values: \n
      - IMSA_STATUS_NOT_REGISTERED (0) --  Not registered for IMS 
      - IMSA_STATUS_REGISTERING (1) --  Registering for IMS 
      - IMSA_STATUS_REGISTERED (2) --  Registered for IMS 
 */
}imsa_get_registration_status_resp_msg_v01;  /* Message */
/**
    @}
  */

typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}imsa_get_service_status_req_msg_v01;

/** @addtogroup imsa_qmi_messages
    @{
  */
/** Response Message; Gets the service status for various IMS services for the
             requesting control point. */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;

  /* Optional */
  /*  SMS Service Status */
  uint8_t sms_service_status_valid;  /**< Must be set to true if sms_service_status is being passed */
  imsa_service_status_enum_v01 sms_service_status;
  /**<   Values: \n
       - 0 -- IMS SMS service is not available \n
       - 1 -- IMS SMS is in limited service \n
       - 2 -- IMS SMS is in full service
  */

  /* Optional */
  /*  VoIP Service Status */
  uint8_t voip_service_status_valid;  /**< Must be set to true if voip_service_status is being passed */
  imsa_service_status_enum_v01 voip_service_status;
  /**<   Values: \n
       - 0 -- IMS VoIP service is not available \n
       - 2 -- IMS VoIP is in full service
  */

  /* Optional */
  /*  VT Service Status */
  uint8_t vt_service_status_valid;  /**< Must be set to true if vt_service_status is being passed */
  imsa_service_status_enum_v01 vt_service_status;
  /**<   Values: \n
       - 0 -- IMS VT service is not available \n
       - 2 -- IMS VT is in full service
  */

  /* Optional */
  /*  SMS RAT  */
  uint8_t sms_service_rat_valid;  /**< Must be set to true if sms_service_rat is being passed */
  imsa_service_rat_enum_v01 sms_service_rat;
  /**<   Enum representing the SMS service RAT. Values: \n
      - IMSA_WLAN (0) --  IMS service on WLAN. 
      - IMSA_WWAN (1) --  IMS service on WWAN. 
      - IMSA_IWLAN (2) --  IMS service on Interworking-WLAN 
 */

  /* Optional */
  /*  VoIP RAT  */
  uint8_t voip_service_rat_valid;  /**< Must be set to true if voip_service_rat is being passed */
  imsa_service_rat_enum_v01 voip_service_rat;
  /**<   Enum representing the VOIP service RAT. Values: \n
      - IMSA_WLAN (0) --  IMS service on WLAN. 
      - IMSA_WWAN (1) --  IMS service on WWAN. 
      - IMSA_IWLAN (2) --  IMS service on Interworking-WLAN 
 */

  /* Optional */
  /*  VT RAT */
  uint8_t vt_service_rat_valid;  /**< Must be set to true if vt_service_rat is being passed */
  imsa_service_rat_enum_v01 vt_service_rat;
  /**<   Enum representing the VT service RAT. Values: \n
      - IMSA_WLAN (0) --  IMS service on WLAN. 
      - IMSA_WWAN (1) --  IMS service on WWAN. 
      - IMSA_IWLAN (2) --  IMS service on Interworking-WLAN 
 */

  /* Optional */
  /*  UT Service Status */
  uint8_t ut_service_status_valid;  /**< Must be set to true if ut_service_status is being passed */
  imsa_service_status_enum_v01 ut_service_status;
  /**<   Values: \n
       - 0 -- IMS UT service is not available \n
       - 2 -- IMS UT is in full service
  */

  /* Optional */
  /*  UT RAT */
  uint8_t ut_service_rat_valid;  /**< Must be set to true if ut_service_rat is being passed */
  imsa_service_rat_enum_v01 ut_service_rat;
  /**<   Enum representing the UT service RAT. Values: \n
      - IMSA_WLAN (0) --  IMS service on WLAN. 
      - IMSA_WWAN (1) --  IMS service on WWAN. 
      - IMSA_IWLAN (2) --  IMS service on Interworking-WLAN 
 */
}imsa_get_service_status_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup imsa_qmi_messages
    @{
  */
/** Request Message; Sets the registration state for different IMS service indications
             for the requesting control point. */
typedef struct {

  /* Optional */
  /*  Registration Status Configuration */
  uint8_t reg_status_config_valid;  /**< Must be set to true if reg_status_config is being passed */
  uint8_t reg_status_config;
  /**<   Values: \n
       - 0x00 -- Disable \n
       - 0x01 -- Enable
         */

  /* Optional */
  /*  Service Status Configuration */
  uint8_t service_status_config_valid;  /**< Must be set to true if service_status_config is being passed */
  uint8_t service_status_config;
  /**<   Values: \n
       - 0x00 -- Disable \n
       - 0x01 -- Enable
  */

  /* Optional */
  /*  RAT Handover Status Configuration */
  uint8_t rat_handover_config_valid;  /**< Must be set to true if rat_handover_config is being passed */
  uint8_t rat_handover_config;
  /**<   Values: \n
       - 0x00 -- Disable \n
       - 0x01 -- Enable
  */
}imsa_ind_reg_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup imsa_qmi_messages
    @{
  */
/** Response Message; Sets the registration state for different IMS service indications
             for the requesting control point. */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}imsa_ind_reg_rsp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup imsa_qmi_messages
    @{
  */
/** Indication Message; Indication sent when the IMS service registration status changes. */
typedef struct {

  /* Mandatory */
  /*  IMS Registration Status */
  uint8_t ims_registered;
  /**<   Values: \n
       - TRUE  -- UE is registered on the IMS network \n
       - FALSE -- UE is not registered on the IMS network \n
       This TLV is deprecated and new TLV 'ims_reg_status' is used.
   */

  /* Optional */
  /*  IMS Registration Error Code */
  uint8_t ims_registration_failure_error_code_valid;  /**< Must be set to true if ims_registration_failure_error_code is being passed */
  uint16_t ims_registration_failure_error_code;
  /**<   IMS registration error code. An error code is returned when the IMS
       registration status is IMSA_STATUS_NOT_REGISTERED.\n
       Values: \n
       - 3xx -- Redirection responses \n
       - 4xx -- Client failure responses \n
       - 5xx -- Server failure responses \n
       - 6xx -- Global failure responses
  */

  /* Optional */
  /*  New IMS Registration Status */
  uint8_t ims_reg_status_valid;  /**< Must be set to true if ims_reg_status is being passed */
  imsa_ims_registration_status_enum_v01 ims_reg_status;
  /**<   Enum representing the IMS registration status. Values: \n
      - IMSA_STATUS_NOT_REGISTERED (0) --  Not registered for IMS 
      - IMSA_STATUS_REGISTERING (1) --  Registering for IMS 
      - IMSA_STATUS_REGISTERED (2) --  Registered for IMS 
 */
}imsa_registration_status_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup imsa_qmi_messages
    @{
  */
/** Indication Message; Indication sent when the service status of an IMS service changes. */
typedef struct {

  /* Optional */
  /*  SMS Service Status */
  uint8_t sms_service_status_valid;  /**< Must be set to true if sms_service_status is being passed */
  imsa_service_status_enum_v01 sms_service_status;
  /**<   Values: \n
       - 0 -- IMS SMS service is not available \n
       - 1 -- IMS SMS is in limited service \n
       - 2 -- IMS SMS is in full service
   */

  /* Optional */
  /*  VoIP Service Status */
  uint8_t voip_service_status_valid;  /**< Must be set to true if voip_service_status is being passed */
  imsa_service_status_enum_v01 voip_service_status;
  /**<   Values: \n
       - 0 -- IMS VoIP service is not available \n
       - 2 -- IMS VoIP is in full service
    */

  /* Optional */
  /*  VT Service Status */
  uint8_t vt_service_status_valid;  /**< Must be set to true if vt_service_status is being passed */
  imsa_service_status_enum_v01 vt_service_status;
  /**<   Values: \n
       - 0 -- IMS VT service is not available \n
       - 2 -- IMS VT is in full service
  */

  /* Optional */
  /*  SMS RAT  */
  uint8_t sms_service_rat_valid;  /**< Must be set to true if sms_service_rat is being passed */
  imsa_service_rat_enum_v01 sms_service_rat;
  /**<   Enum representing the SMS service RAT. Values: \n
      - IMSA_WLAN (0) --  IMS service on WLAN. 
      - IMSA_WWAN (1) --  IMS service on WWAN. 
      - IMSA_IWLAN (2) --  IMS service on Interworking-WLAN 
 */

  /* Optional */
  /*  VoIP RAT  */
  uint8_t voip_service_rat_valid;  /**< Must be set to true if voip_service_rat is being passed */
  imsa_service_rat_enum_v01 voip_service_rat;
  /**<   Enum representing the VOIP service RAT. Values: \n
      - IMSA_WLAN (0) --  IMS service on WLAN. 
      - IMSA_WWAN (1) --  IMS service on WWAN. 
      - IMSA_IWLAN (2) --  IMS service on Interworking-WLAN 
 */

  /* Optional */
  /*  VT RAT */
  uint8_t vt_service_rat_valid;  /**< Must be set to true if vt_service_rat is being passed */
  imsa_service_rat_enum_v01 vt_service_rat;
  /**<   Enum representing the VT service RAT. Values: \n
      - IMSA_WLAN (0) --  IMS service on WLAN. 
      - IMSA_WWAN (1) --  IMS service on WWAN. 
      - IMSA_IWLAN (2) --  IMS service on Interworking-WLAN 
 */

  /* Optional */
  /*  UT Service Status */
  uint8_t ut_service_status_valid;  /**< Must be set to true if ut_service_status is being passed */
  imsa_service_status_enum_v01 ut_service_status;
  /**<   Values: \n
       - 0 -- IMS UT service is not available \n
       - 2 -- IMS UT is in full service
  */

  /* Optional */
  /*  UT RAT */
  uint8_t ut_service_rat_valid;  /**< Must be set to true if ut_service_rat is being passed */
  imsa_service_rat_enum_v01 ut_service_rat;
  /**<   Enum representing the UT service RAT. Values: \n
      - IMSA_WLAN (0) --  IMS service on WLAN. 
      - IMSA_WWAN (1) --  IMS service on WWAN. 
      - IMSA_IWLAN (2) --  IMS service on Interworking-WLAN 
 */
}imsa_service_status_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup imsa_qmi_messages
    @{
  */
/** Indication Message; Indication sent when the status of RAT handover changes. */
typedef struct {

  /* Optional */
  /*  RAT Handover Status Information */
  uint8_t rat_ho_status_info_valid;  /**< Must be set to true if rat_ho_status_info is being passed */
  imsa_rat_handover_status_info_v01 rat_ho_status_info;
  /**<   RAT handover status information */
}imsa_rat_handover_status_ind_msg_v01;  /* Message */
/**
    @}
  */

/*Service Message Definition*/
/** @addtogroup imsa_qmi_msg_ids
    @{
  */
#define QMI_IMSA_GET_SUPPORTED_MSGS_REQ_V01 0x001E
#define QMI_IMSA_GET_SUPPORTED_MSGS_RESP_V01 0x001E
#define QMI_IMSA_GET_SUPPORTED_FIELDS_REQ_V01 0x001F
#define QMI_IMSA_GET_SUPPORTED_FIELDS_RESP_V01 0x001F
#define QMI_IMSA_GET_REGISTRATION_STATUS_REQ_V01 0x0020
#define QMI_IMSA_GET_REGISTRATION_STATUS_RSP_V01 0x0020
#define QMI_IMSA_GET_SERVICE_STATUS_REQ_V01 0x0021
#define QMI_IMSA_GET_SERVICE_STATUS_RSP_V01 0x0021
#define QMI_IMSA_IND_REG_REQ_V01 0x0022
#define QMI_IMSA_IND_REG_RSP_V01 0x0022
#define QMI_IMSA_REGISTRATION_STATUS_IND_V01 0x0023
#define QMI_IMSA_SERVICE_STATUS_IND_V01 0x0024
#define QMI_IMSA_RAT_HANDOVER_STATUS_IND_V01 0x0025
/**
    @}
  */

/* Service Object Accessor */
/** @addtogroup wms_qmi_accessor 
    @{
  */
/** This function is used internally by the autogenerated code.  Clients should use the
   macro imsa_get_service_object_v01( ) that takes in no arguments. */
qmi_idl_service_object_type imsa_get_service_object_internal_v01
 ( int32_t idl_maj_version, int32_t idl_min_version, int32_t library_version );
 
/** This macro should be used to get the service object */ 
#define imsa_get_service_object_v01( ) \
          imsa_get_service_object_internal_v01( \
            IMSA_V01_IDL_MAJOR_VERS, IMSA_V01_IDL_MINOR_VERS, \
            IMSA_V01_IDL_TOOL_VERS )
/** 
    @} 
  */


#ifdef __cplusplus
}
#endif
#endif

