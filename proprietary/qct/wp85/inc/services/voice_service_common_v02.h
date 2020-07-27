#ifndef VOICE_SERVICE_COMMON_SERVICE_02_H
#define VOICE_SERVICE_COMMON_SERVICE_02_H
/**
  @file voice_service_common_v02.h

  @brief This is the public header file which defines the voice_service_common service Data structures.

  This header file defines the types and structures that were defined in
  voice_service_common. It contains the constant values defined, enums, structures,
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
  Copyright (c) 2013-2015 Qualcomm Technologies, Inc.
  All rights reserved.
  Confidential and Proprietary - Qualcomm Technologies, Inc.


  $Header: //source/qcom/qct/interfaces/qmi/voice/main/latest/api/voice_service_common_v02.h#13 $
 *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/
/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*
 *THIS IS AN AUTO GENERATED FILE. DO NOT ALTER IN ANY WAY
 *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/

/* This file was generated with Tool version 6.14.4
   It was generated on: Fri May  1 2015 (Spin 1)
   From IDL File: voice_service_common_v02.idl */

/** @defgroup voice_service_common_qmi_consts Constant values defined in the IDL */
/** @defgroup voice_service_common_qmi_msg_ids Constant values for QMI message IDs */
/** @defgroup voice_service_common_qmi_enums Enumerated types used in QMI messages */
/** @defgroup voice_service_common_qmi_messages Structures sent as QMI messages */
/** @defgroup voice_service_common_qmi_aggregates Aggregate types used in QMI messages */
/** @defgroup voice_service_common_qmi_accessor Accessor for QMI service object */
/** @defgroup voice_service_common_qmi_version Constant values for versioning information */

#include <stdint.h>
#include "qmi_idl_lib.h"


#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup voice_service_common_qmi_version
    @{
  */
/** Major Version Number of the IDL used to generate this file */
#define VOICE_SERVICE_COMMON_V02_IDL_MAJOR_VERS 0x02
/** Revision Number of the IDL used to generate this file */
#define VOICE_SERVICE_COMMON_V02_IDL_MINOR_VERS 0x0A
/** Major Version Number of the qmi_idl_compiler used to generate this file */
#define VOICE_SERVICE_COMMON_V02_IDL_TOOL_VERS 0x06

/**
    @}
  */

/** @addtogroup voice_service_common_qmi_enums
    @{
  */
typedef enum {
  CALL_TYPE_ENUM_MIN_ENUM_VAL_V02 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  CALL_TYPE_VOICE_V02 = 0x00, /**<  Voice \n  */
  CALL_TYPE_VOICE_FORCED_V02 = 0x01, /**<  Avoid modem call classification \n  */
  CALL_TYPE_VOICE_IP_V02 = 0x02, /**<  Voice over IP  \n  */
  CALL_TYPE_VT_V02 = 0x03, /**<  Videotelephony call over IP \n  */
  CALL_TYPE_VIDEOSHARE_V02 = 0x04, /**<  Videoshare \n  */
  CALL_TYPE_TEST_V02 = 0x05, /**<  Test call type \n  */
  CALL_TYPE_OTAPA_V02 = 0x06, /**<  OTAPA \n  */
  CALL_TYPE_STD_OTASP_V02 = 0x07, /**<  Standard OTASP \n  */
  CALL_TYPE_NON_STD_OTASP_V02 = 0x08, /**<  Nonstandard OTASP \n  */
  CALL_TYPE_EMERGENCY_V02 = 0x09, /**<  Emergency \n  */
  CALL_TYPE_SUPS_V02 = 0x0A, /**<  Supplementary service \n  */
  CALL_TYPE_EMERGENCY_IP_V02 = 0x0B, /**<  Emergency VoIP \n  */
  CALL_TYPE_ECALL_V02 = 0x0C, /**<  eCall \n  */
  CALL_TYPE_EMERGENCY_VT_V02 = 0x0D, /**<  Emergency videotelephony call over IP  */
  CALL_TYPE_ENUM_MAX_ENUM_VAL_V02 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}call_type_enum_v02;
/**
    @}
  */

/** @addtogroup voice_service_common_qmi_enums
    @{
  */
typedef enum {
  CALL_STATE_ENUM_MIN_ENUM_VAL_V02 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  CALL_STATE_ORIGINATING_V02 = 0x01, /**<  Origination \n  */
  CALL_STATE_INCOMING_V02 = 0x02, /**<  Incoming \n  */
  CALL_STATE_CONVERSATION_V02 = 0x03, /**<  Conversation \n  */
  CALL_STATE_CC_IN_PROGRESS_V02 = 0x04, /**<  Call is originating but waiting for call control to complete  \n  */
  CALL_STATE_ALERTING_V02 = 0x05, /**<  Alerting \n  */
  CALL_STATE_HOLD_V02 = 0x06, /**<  Hold \n  */
  CALL_STATE_WAITING_V02 = 0x07, /**<  Waiting \n  */
  CALL_STATE_DISCONNECTING_V02 = 0x08, /**<  Disconnecting \n  */
  CALL_STATE_END_V02 = 0x09, /**<  End \n  */
  CALL_STATE_SETUP_V02 = 0x0A, /**<  MT call is in Setup state in 3GPP \n  */
  CALL_STATE_ENUM_MAX_ENUM_VAL_V02 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}call_state_enum_v02;
/**
    @}
  */

/** @addtogroup voice_service_common_qmi_enums
    @{
  */
typedef enum {
  CALL_DIRECTION_ENUM_MIN_ENUM_VAL_V02 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  CALL_DIRECTION_MO_V02 = 0x01, /**<  MO call \n  */
  CALL_DIRECTION_MT_V02 = 0x02, /**<  MT call \n  */
  CALL_DIRECTION_ENUM_MAX_ENUM_VAL_V02 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}call_direction_enum_v02;
/**
    @}
  */

/** @addtogroup voice_service_common_qmi_enums
    @{
  */
typedef enum {
  PI_NUM_ENUM_MIN_ENUM_VAL_V02 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  PRESENTATION_NUM_ALLOWED_V02 = 0x00, /**<  Allowed presentation \n  */
  PRESENTATION_NUM_RESTRICTED_V02 = 0x01, /**<  Restricted presentation \n  */
  PRESENTATION_NUM_NUM_UNAVAILABLE_V02 = 0x02, /**<  Unavailable presentation \n  */
  PRESENTATION_NUM_RESERVED_V02 = 0x03, /**<  Reserved presentation \n  */
  PRESENTATION_NUM_PAYPHONE_V02 = 0x04, /**<  Payphone presentation (GSM/UMTS specific)  */
  PI_NUM_ENUM_MAX_ENUM_VAL_V02 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}pi_num_enum_v02;
/**
    @}
  */

/** @addtogroup voice_service_common_qmi_enums
    @{
  */
typedef enum {
  PI_NAME_ENUM_MIN_ENUM_VAL_V02 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  PRESENTATION_NAME_PRESENTATION_ALLOWED_V02 = 0x00, /**<  Allowed presentation \n  */
  PRESENTATION_NAME_PRESENTATION_RESTRICTED_V02 = 0x01, /**<  Restricted presentation \n  */
  PRESENTATION_NAME_UNAVAILABLE_V02 = 0x02, /**<  Unavailable presentation \n  */
  PRESENTATION_NAME_NAME_PRESENTATION_RESTRICTED_V02 = 0x03, /**<  Restricted name presentation  */
  PI_NAME_ENUM_MAX_ENUM_VAL_V02 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}pi_name_enum_v02;
/**
    @}
  */

/** @addtogroup voice_service_common_qmi_enums
    @{
  */
typedef enum {
  CALL_END_REASON_ENUM_MIN_ENUM_VAL_V02 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  CALL_END_CAUSE_OFFLINE_V02 = 0x00,
  CALL_END_CAUSE_CDMA_LOCK_V02 = 0x14,
  CALL_END_CAUSE_NO_SRV_V02 = 0x15,
  CALL_END_CAUSE_FADE_V02 = 0x16,
  CALL_END_CAUSE_INTERCEPT_V02 = 0x17,
  CALL_END_CAUSE_REORDER_V02 = 0x18,
  CALL_END_CAUSE_REL_NORMAL_V02 = 0x19,
  CALL_END_CAUSE_REL_SO_REJ_V02 = 0x1A,
  CALL_END_CAUSE_INCOM_CALL_V02 = 0x1B,
  CALL_END_CAUSE_ALERT_STOP_V02 = 0x1C,
  CALL_END_CAUSE_CLIENT_END_V02 = 0x1D,
  CALL_END_CAUSE_ACTIVATION_V02 = 0x1E,
  CALL_END_CAUSE_MC_ABORT_V02 = 0x1F,
  CALL_END_CAUSE_MAX_ACCESS_PROBE_V02 = 0x20,
  CALL_END_CAUSE_PSIST_N_V02 = 0x21,
  CALL_END_CAUSE_UIM_NOT_PRESENT_V02 = 0x22,
  CALL_END_CAUSE_ACC_IN_PROG_V02 = 0x23,
  CALL_END_CAUSE_ACC_FAIL_V02 = 0x24,
  CALL_END_CAUSE_RETRY_ORDER_V02 = 0x25,
  CALL_END_CAUSE_CCS_NOT_SUPPORTED_BY_BS_V02 = 0x26,
  CALL_END_CAUSE_NO_RESPONSE_FROM_BS_V02 = 0x27,
  CALL_END_CAUSE_REJECTED_BY_BS_V02 = 0x28,
  CALL_END_CAUSE_INCOMPATIBLE_V02 = 0x29,
  CALL_END_CAUSE_ACCESS_BLOCK_V02 = 0x2A,
  CALL_END_CAUSE_ALREADY_IN_TC_V02 = 0x2B,
  CALL_END_CAUSE_EMERGENCY_FLASHED_V02 = 0x2C,
  CALL_END_CAUSE_USER_CALL_ORIG_DURING_GPS_V02 = 0x2D,
  CALL_END_CAUSE_USER_CALL_ORIG_DURING_SMS_V02 = 0x2E,
  CALL_END_CAUSE_USER_CALL_ORIG_DURING_DATA_V02 = 0x2F,
  CALL_END_CAUSE_REDIR_OR_HANDOFF_V02 = 0x30,
  CALL_END_CAUSE_ACCESS_BLOCK_ALL_V02 = 0x31,
  CALL_END_CAUSE_OTASP_SPC_ERR_V02 = 0x32,
  CALL_END_CAUSE_IS707B_MAX_ACC_V02 = 0x33,
  CALL_END_CAUSE_ACC_FAIL_REJ_ORD_V02 = 0x34,
  CALL_END_CAUSE_ACC_FAIL_RETRY_ORD_V02 = 0x35,
  CALL_END_CAUSE_TIMEOUT_T42_V02 = 0x36,
  CALL_END_CAUSE_TIMEOUT_T40_V02 = 0x37,
  CALL_END_CAUSE_SRV_INIT_FAIL_V02 = 0x38,
  CALL_END_CAUSE_T50_EXP_V02 = 0x39,
  CALL_END_CAUSE_T51_EXP_V02 = 0x3A,
  CALL_END_CAUSE_RL_ACK_TIMEOUT_V02 = 0x3B,
  CALL_END_CAUSE_BAD_FL_V02 = 0x3C,
  CALL_END_CAUSE_TRM_REQ_FAIL_V02 = 0x3D,
  CALL_END_CAUSE_TIMEOUT_T41_V02 = 0x3E,
  CALL_END_CAUSE_INCOM_REJ_V02 = 0x66,
  CALL_END_CAUSE_SETUP_REJ_V02 = 0x67,
  CALL_END_CAUSE_NETWORK_END_V02 = 0x68,
  CALL_END_CAUSE_NO_FUNDS_V02 = 0x69,
  CALL_END_CAUSE_NO_GW_SRV_V02 = 0x6A,
  CALL_END_CAUSE_NO_CDMA_SRV_V02 = 0x6B,
  CALL_END_CAUSE_NO_FULL_SRV_V02 = 0x6C,
  CALL_END_CAUSE_MAX_PS_CALLS_V02 = 0x6D,
  CALL_END_CAUSE_UNKNOWN_SUBSCRIBER_V02 = 0x6E,
  CALL_END_CAUSE_ILLEGAL_SUBSCRIBER_V02 = 0x6F,
  CALL_END_CAUSE_BEARER_SERVICE_NOT_PROVISIONED_V02 = 0x70,
  CALL_END_CAUSE_TELE_SERVICE_NOT_PROVISIONED_V02 = 0x71,
  CALL_END_CAUSE_ILLEGAL_EQUIPMENT_V02 = 0x72,
  CALL_END_CAUSE_CALL_BARRED_V02 = 0x73,
  CALL_END_CAUSE_ILLEGAL_SS_OPERATION_V02 = 0x74,
  CALL_END_CAUSE_SS_ERROR_STATUS_V02 = 0x75,
  CALL_END_CAUSE_SS_NOT_AVAILABLE_V02 = 0x76,
  CALL_END_CAUSE_SS_SUBSCRIPTION_VIOLATION_V02 = 0x77,
  CALL_END_CAUSE_SS_INCOMPATIBILITY_V02 = 0x78,
  CALL_END_CAUSE_FACILITY_NOT_SUPPORTED_V02 = 0x79,
  CALL_END_CAUSE_ABSENT_SUBSCRIBER_V02 = 0x7A,
  CALL_END_CAUSE_SHORT_TERM_DENIAL_V02 = 0x7B,
  CALL_END_CAUSE_LONG_TERM_DENIAL_V02 = 0x7C,
  CALL_END_CAUSE_SYSTEM_FAILURE_V02 = 0x7D,
  CALL_END_CAUSE_DATA_MISSING_V02 = 0x7E,
  CALL_END_CAUSE_UNEXPECTED_DATA_VALUE_V02 = 0x7F,
  CALL_END_CAUSE_PWD_REGISTRATION_FAILURE_V02 = 0x80,
  CALL_END_CAUSE_NEGATIVE_PWD_CHECK_V02 = 0x81,
  CALL_END_CAUSE_NUM_OF_PWD_ATTEMPTS_VIOLATION_V02 = 0x82,
  CALL_END_CAUSE_POSITION_METHOD_FAILURE_V02 = 0x83,
  CALL_END_CAUSE_UNKNOWN_ALPHABET_V02 = 0x84,
  CALL_END_CAUSE_USSD_BUSY_V02 = 0x85,
  CALL_END_CAUSE_REJECTED_BY_USER_V02 = 0x86,
  CALL_END_CAUSE_REJECTED_BY_NETWORK_V02 = 0x87,
  CALL_END_CAUSE_DEFLECTION_TO_SERVED_SUBSCRIBER_V02 = 0x88,
  CALL_END_CAUSE_SPECIAL_SERVICE_CODE_V02 = 0x89,
  CALL_END_CAUSE_INVALID_DEFLECTED_TO_NUMBER_V02 = 0x8A,
  CALL_END_CAUSE_MPTY_PARTICIPANTS_EXCEEDED_V02 = 0x8B,
  CALL_END_CAUSE_RESOURCES_NOT_AVAILABLE_V02 = 0x8C,
  CALL_END_CAUSE_UNASSIGNED_NUMBER_V02 = 0x8D,
  CALL_END_CAUSE_NO_ROUTE_TO_DESTINATION_V02 = 0x8E,
  CALL_END_CAUSE_CHANNEL_UNACCEPTABLE_V02 = 0x8F,
  CALL_END_CAUSE_OPERATOR_DETERMINED_BARRING_V02 = 0x90,
  CALL_END_CAUSE_NORMAL_CALL_CLEARING_V02 = 0x91,
  CALL_END_CAUSE_USER_BUSY_V02 = 0x92,
  CALL_END_CAUSE_NO_USER_RESPONDING_V02 = 0x93,
  CALL_END_CAUSE_USER_ALERTING_NO_ANSWER_V02 = 0x94,
  CALL_END_CAUSE_CALL_REJECTED_V02 = 0x95,
  CALL_END_CAUSE_NUMBER_CHANGED_V02 = 0x96,
  CALL_END_CAUSE_PREEMPTION_V02 = 0x97,
  CALL_END_CAUSE_DESTINATION_OUT_OF_ORDER_V02 = 0x98,
  CALL_END_CAUSE_INVALID_NUMBER_FORMAT_V02 = 0x99,
  CALL_END_CAUSE_FACILITY_REJECTED_V02 = 0x9A,
  CALL_END_CAUSE_RESP_TO_STATUS_ENQUIRY_V02 = 0x9B,
  CALL_END_CAUSE_NORMAL_UNSPECIFIED_V02 = 0x9C,
  CALL_END_CAUSE_NO_CIRCUIT_OR_CHANNEL_AVAILABLE_V02 = 0x9D,
  CALL_END_CAUSE_NETWORK_OUT_OF_ORDER_V02 = 0x9E,
  CALL_END_CAUSE_TEMPORARY_FAILURE_V02 = 0x9F,
  CALL_END_CAUSE_SWITCHING_EQUIPMENT_CONGESTION_V02 = 0xA0,
  CALL_END_CAUSE_ACCESS_INFORMATION_DISCARDED_V02 = 0xA1,
  CALL_END_CAUSE_REQUESTED_CIRCUIT_OR_CHANNEL_NOT_AVAILABLE_V02 = 0xA2,
  CALL_END_CAUSE_RESOURCES_UNAVAILABLE_OR_UNSPECIFIED_V02 = 0xA3,
  CALL_END_CAUSE_QOS_UNAVAILABLE_V02 = 0xA4,
  CALL_END_CAUSE_REQUESTED_FACILITY_NOT_SUBSCRIBED_V02 = 0xA5,
  CALL_END_CAUSE_INCOMING_CALLS_BARRED_WITHIN_CUG_V02 = 0xA6,
  CALL_END_CAUSE_BEARER_CAPABILITY_NOT_AUTH_V02 = 0xA7,
  CALL_END_CAUSE_BEARER_CAPABILITY_UNAVAILABLE_V02 = 0xA8,
  CALL_END_CAUSE_SERVICE_OPTION_NOT_AVAILABLE_V02 = 0xA9,
  CALL_END_CAUSE_ACM_LIMIT_EXCEEDED_V02 = 0xAA,
  CALL_END_CAUSE_BEARER_SERVICE_NOT_IMPLEMENTED_V02 = 0xAB,
  CALL_END_CAUSE_REQUESTED_FACILITY_NOT_IMPLEMENTED_V02 = 0xAC,
  CALL_END_CAUSE_ONLY_DIGITAL_INFORMATION_BEARER_AVAILABLE_V02 = 0xAD,
  CALL_END_CAUSE_SERVICE_OR_OPTION_NOT_IMPLEMENTED_V02 = 0xAE,
  CALL_END_CAUSE_INVALID_TRANSACTION_IDENTIFIER_V02 = 0xAF,
  CALL_END_CAUSE_USER_NOT_MEMBER_OF_CUG_V02 = 0xB0,
  CALL_END_CAUSE_INCOMPATIBLE_DESTINATION_V02 = 0xB1,
  CALL_END_CAUSE_INVALID_TRANSIT_NW_SELECTION_V02 = 0xB2,
  CALL_END_CAUSE_SEMANTICALLY_INCORRECT_MESSAGE_V02 = 0xB3,
  CALL_END_CAUSE_INVALID_MANDATORY_INFORMATION_V02 = 0xB4,
  CALL_END_CAUSE_MESSAGE_TYPE_NON_IMPLEMENTED_V02 = 0xB5,
  CALL_END_CAUSE_MESSAGE_TYPE_NOT_COMPATIBLE_WITH_PROTOCOL_STATE_V02 = 0xB6,
  CALL_END_CAUSE_INFORMATION_ELEMENT_NON_EXISTENT_V02 = 0xB7,
  CALL_END_CAUSE_CONDITONAL_IE_ERROR_V02 = 0xB8,
  CALL_END_CAUSE_MESSAGE_NOT_COMPATIBLE_WITH_PROTOCOL_STATE_V02 = 0xB9,
  CALL_END_CAUSE_RECOVERY_ON_TIMER_EXPIRED_V02 = 0xBA,
  CALL_END_CAUSE_PROTOCOL_ERROR_UNSPECIFIED_V02 = 0xBB,
  CALL_END_CAUSE_INTERWORKING_UNSPECIFIED_V02 = 0xBC,
  CALL_END_CAUSE_OUTGOING_CALLS_BARRED_WITHIN_CUG_V02 = 0xBD,
  CALL_END_CAUSE_NO_CUG_SELECTION_V02 = 0xBE,
  CALL_END_CAUSE_UNKNOWN_CUG_INDEX_V02 = 0xBF,
  CALL_END_CAUSE_CUG_INDEX_INCOMPATIBLE_V02 = 0xC0,
  CALL_END_CAUSE_CUG_CALL_FAILURE_UNSPECIFIED_V02 = 0xC1,
  CALL_END_CAUSE_CLIR_NOT_SUBSCRIBED_V02 = 0xC2,
  CALL_END_CAUSE_CCBS_POSSIBLE_V02 = 0xC3,
  CALL_END_CAUSE_CCBS_NOT_POSSIBLE_V02 = 0xC4,
  CALL_END_CAUSE_IMSI_UNKNOWN_IN_HLR_V02 = 0xC5,
  CALL_END_CAUSE_ILLEGAL_MS_V02 = 0xC6,
  CALL_END_CAUSE_IMSI_UNKNOWN_IN_VLR_V02 = 0xC7,
  CALL_END_CAUSE_IMEI_NOT_ACCEPTED_V02 = 0xC8,
  CALL_END_CAUSE_ILLEGAL_ME_V02 = 0xC9,
  CALL_END_CAUSE_PLMN_NOT_ALLOWED_V02 = 0xCA,
  CALL_END_CAUSE_LOCATION_AREA_NOT_ALLOWED_V02 = 0xCB,
  CALL_END_CAUSE_ROAMING_NOT_ALLOWED_IN_THIS_LOCATION_AREA_V02 = 0xCC,
  CALL_END_CAUSE_NO_SUITABLE_CELLS_IN_LOCATION_AREA_V02 = 0xCD,
  CALL_END_CAUSE_NETWORK_FAILURE_V02 = 0xCE,
  CALL_END_CAUSE_MAC_FAILURE_V02 = 0xCF,
  CALL_END_CAUSE_SYNCH_FAILURE_V02 = 0xD0,
  CALL_END_CAUSE_NETWORK_CONGESTION_V02 = 0xD1,
  CALL_END_CAUSE_GSM_AUTHENTICATION_UNACCEPTABLE_V02 = 0xD2,
  CALL_END_CAUSE_SERVICE_NOT_SUBSCRIBED_V02 = 0xD3,
  CALL_END_CAUSE_SERVICE_TEMPORARILY_OUT_OF_ORDER_V02 = 0xD4,
  CALL_END_CAUSE_CALL_CANNOT_BE_IDENTIFIED_V02 = 0xD5,
  CALL_END_CAUSE_INCORRECT_SEMANTICS_IN_MESSAGE_V02 = 0xD6,
  CALL_END_CAUSE_MANDATORY_INFORMATION_INVALID_V02 = 0xD7,
  CALL_END_CAUSE_ACCESS_STRATUM_FAILURE_V02 = 0xD8,
  CALL_END_CAUSE_INVALID_SIM_V02 = 0xD9,
  CALL_END_CAUSE_WRONG_STATE_V02 = 0xDA,
  CALL_END_CAUSE_ACCESS_CLASS_BLOCKED_V02 = 0xDB,
  CALL_END_CAUSE_NO_RESOURCES_V02 = 0xDC,
  CALL_END_CAUSE_INVALID_USER_DATA_V02 = 0xDD,
  CALL_END_CAUSE_TIMER_T3230_EXPIRED_V02 = 0xDE,
  CALL_END_CAUSE_NO_CELL_AVAILABLE_V02 = 0xDF,
  CALL_END_CAUSE_ABORT_MSG_RECEIVED_V02 = 0xE0,
  CALL_END_CAUSE_RADIO_LINK_LOST_V02 = 0xE1,
  CALL_END_CAUSE_TIMER_T303_EXPIRED_V02 = 0xE2,
  CALL_END_CAUSE_CNM_MM_REL_PENDING_V02 = 0xE3,
  CALL_END_CAUSE_ACCESS_STRATUM_REJ_RR_REL_IND_V02 = 0xE4,
  CALL_END_CAUSE_ACCESS_STRATUM_REJ_RR_RANDOM_ACCESS_FAILURE_V02 = 0xE5,
  CALL_END_CAUSE_ACCESS_STRATUM_REJ_RRC_REL_IND_V02 = 0xE6,
  CALL_END_CAUSE_ACCESS_STRATUM_REJ_RRC_CLOSE_SESSION_IND_V02 = 0xE7,
  CALL_END_CAUSE_ACCESS_STRATUM_REJ_RRC_OPEN_SESSION_FAILURE_V02 = 0xE8,
  CALL_END_CAUSE_ACCESS_STRATUM_REJ_LOW_LEVEL_FAIL_V02 = 0xE9,
  CALL_END_CAUSE_ACCESS_STRATUM_REJ_LOW_LEVEL_FAIL_REDIAL_NOT_ALLOWED_V02 = 0xEA,
  CALL_END_CAUSE_ACCESS_STRATUM_REJ_LOW_LEVEL_IMMED_RETRY_V02 = 0xEB,
  CALL_END_CAUSE_ACCESS_STRATUM_REJ_ABORT_RADIO_UNAVAILABLE_V02 = 0xEC,
  CALL_END_CAUSE_SERVICE_OPTION_NOT_SUPPORTED_V02 = 0xED,
  CALL_END_CAUSE_AS_REJ_LRRC_UL_DATA_CNF_FAILURE_TXN_V02 = 0xEF,
  CALL_END_CAUSE_AS_REJ_LRRC_UL_DATA_CNF_FAILURE_HO_V02 = 0xF0,
  CALL_END_CAUSE_AS_REJ_LRRC_UL_DATA_CNF_FAILURE_CONN_REL_V02 = 0xF1,
  CALL_END_CAUSE_AS_REJ_LRRC_UL_DATA_CNF_FAILURE_RLF_V02 = 0xF2,
  CALL_END_CAUSE_AS_REJ_LRRC_UL_DATA_CNF_FAILURE_CTRL_NOT_CONN_V02 = 0xF3,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_EST_SUCCESS_V02 = 0xF4,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_EST_FAILURE_V02 = 0xF5,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_EST_FAILURE_ABORTED_V02 = 0xF6,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_EST_FAILURE_ACCESS_BARRED_V02 = 0xF7,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_EST_FAILURE_CELL_RESEL_V02 = 0xF8,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_EST_FAILURE_CONFIG_FAILURE_V02 = 0xF9,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_EST_FAILURE_TIMER_EXPIRED_V02 = 0xFA,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_EST_FAILURE_LINK_FAILURE_V02 = 0xFB,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_EST_FAILURE_NOT_CAMPED_V02 = 0xFC,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_EST_FAILURE_SI_FAILURE_V02 = 0xFD,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_EST_FAILURE_CONN_REJECT_V02 = 0xFE,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_REL_NORMAL_V02 = 0xFF,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_REL_RLF_V02 = 0x100,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_REL_CRE_FAILURE_V02 = 0x101,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_REL_OOS_DURING_CRE_V02 = 0x102,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_REL_ABORTED_V02 = 0x103,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_REL_SIB_READ_ERROR_V02 = 0x104,
  CALL_END_CAUSE_AS_REJ_LRRC_CONN_REL_ABORTED_IRAT_SUCCESS_V02 = 0x105,
  CALL_END_CAUSE_AS_REJ_LRRC_RADIO_LINK_FAILURE_V02 = 0x106,
  CALL_END_CAUSE_AS_REJ_DETACH_WITH_REATTACH_LTE_NW_DETACH_V02 = 0x107,
  CALL_END_CAUSE_AS_REJ_DETACH_WITH_OUT_REATTACH_LTE_NW_DETACH_V02 = 0x108,
  CALL_END_CAUSE_BAD_REQ_WAIT_INVITE_V02 = 0x12C,
  CALL_END_CAUSE_BAD_REQ_WAIT_REINVITE_V02 = 0x12D,
  CALL_END_CAUSE_INVALID_REMOTE_URI_V02 = 0x12E,
  CALL_END_CAUSE_REMOTE_UNSUPP_MEDIA_TYPE_V02 = 0x12F,
  CALL_END_CAUSE_PEER_NOT_REACHABLE_V02 = 0x130,
  CALL_END_CAUSE_NETWORK_NO_RESP_TIME_OUT_V02 = 0x131,
  CALL_END_CAUSE_NETWORK_NO_RESP_HOLD_FAIL_V02 = 0x132,
  CALL_END_CAUSE_DATA_CONNECTION_LOST_V02 = 0x133,
  CALL_END_CAUSE_UPGRADE_DOWNGRADE_REJ_V02 = 0x134,
  CALL_END_CAUSE_SIP_403_FORBIDDEN_V02 = 0x135,
  CALL_END_CAUSE_NO_NETWORK_RESP_V02 = 0x136,
  CALL_END_CAUSE_UPGRADE_DOWNGRADE_FAILED_V02 = 0x137,
  CALL_END_CAUSE_UPGRADE_DOWNGRADE_CANCELLED_V02 = 0x138,
  CALL_END_CAUSE_SSAC_REJECT_V02 = 0x139,
  CALL_END_CAUSE_THERMAL_EMERGENCY_V02 = 0x13A,
  CALL_END_CAUSE_1XCSFB_SOFT_FAILURE_V02 = 0x13B,
  CALL_END_CAUSE_1XCSFB_HARD_FAILURE_V02 = 0x13C,
  CALL_END_CAUSE_CONNECTION_EST_FAILURE_V02 = 0x13D,
  CALL_END_CAUSE_CONNECTION_FAILURE_V02 = 0x13E,
  CALL_END_CAUSE_RRC_CONN_REL_NO_MT_SETUP_V02 = 0x13F,
  CALL_END_CAUSE_ESR_FAILURE_V02 = 0x140,
  CALL_END_CAUSE_MT_CSFB_NO_RESPONSE_FROM_NW_V02 = 0x141,
  CALL_END_CAUSE_BUSY_EVERYWHERE_V02 = 0x142,
  CALL_END_CAUSE_ANSWERED_ELSEWHERE_V02 = 0x143,
  CALL_END_CAUSE_RLF_DURING_CC_DISCONNECT_V02 = 0x144,
  CALL_END_CAUSE_TEMP_REDIAL_ALLOWED_V02 = 0x145,
  CALL_END_CAUSE_PERM_REDIAL_NOT_NEEDED_V02 = 0x146,
  CALL_END_CAUSE_MERGED_TO_CONFERENCE_V02 = 0x147,
  CALL_END_CAUSE_LOW_BATTERY_V02 = 0x148,
  CALL_END_CAUSE_CALL_DEFLECTED_V02 = 0x149,
  CALL_END_CAUSE_RTP_RTCP_TIMEOUT_V02 = 0x14A,
  CALL_END_CAUSE_RINGING_RINGBACK_TIMEOUT_V02 = 0x14B,
  CALL_END_CAUSE_REG_RESTORATION_V02 = 0x14C,
  CALL_END_CAUSE_CODEC_ERROR_V02 = 0x14D,
  CALL_END_CAUSE_UNSUPPORTED_SDP_V02 = 0x14E,
  CALL_END_CAUSE_RTP_FAILURE_V02 = 0x14F,
  CALL_END_CAUSE_QoS_FAILURE_V02 = 0x150,
  CALL_END_CAUSE_MULTIPLE_CHOICES_V02 = 0x151,
  CALL_END_CAUSE_MOVED_PERMANENTLY_V02 = 0x152,
  CALL_END_CAUSE_MOVED_TEMPORARILY_V02 = 0x153,
  CALL_END_CAUSE_USE_PROXY_V02 = 0x154,
  CALL_END_CAUSE_ALTERNATE_SERVICE_V02 = 0x155,
  CALL_END_CAUSE_ALTERNATE_EMERGENCY_CALL_V02 = 0x156,
  CALL_END_CAUSE_UNAUTHORIZED_V02 = 0x157,
  CALL_END_CAUSE_PAYMENT_REQUIRED_V02 = 0x158,
  CALL_END_CAUSE_METHOD_NOT_ALLOWED_V02 = 0x159,
  CALL_END_CAUSE_NOT_ACCEPTABLE_V02 = 0x15A,
  CALL_END_CAUSE_PROXY_AUTHENTICATION_REQUIRED_V02 = 0x15B,
  CALL_END_CAUSE_GONE_V02 = 0x15C,
  CALL_END_CAUSE_REQUEST_ENTITY_TOO_LARGE_V02 = 0x15D,
  CALL_END_CAUSE_REQUEST_URI_TOO_LARGE_V02 = 0x15E,
  CALL_END_CAUSE_UNSUPPORTED_URI_SCHEME_V02 = 0x15F,
  CALL_END_CAUSE_BAD_EXTENSION_V02 = 0x160,
  CALL_END_CAUSE_EXTENSION_REQUIRED_V02 = 0x161,
  CALL_END_CAUSE_INTERVAL_TOO_BRIEF_V02 = 0x162,
  CALL_END_CAUSE_CALL_OR_TRANS_DOES_NOT_EXIST_V02 = 0x163,
  CALL_END_CAUSE_LOOP_DETECTED_V02 = 0x164,
  CALL_END_CAUSE_TOO_MANY_HOPS_V02 = 0x165,
  CALL_END_CAUSE_ADDRESS_INCOMPLETE_V02 = 0x166,
  CALL_END_CAUSE_AMBIGUOUS_V02 = 0x167,
  CALL_END_CAUSE_REQUEST_TERMINATED_V02 = 0x168,
  CALL_END_CAUSE_NOT_ACCEPTABLE_HERE_V02 = 0x169,
  CALL_END_CAUSE_REQUEST_PENDING_V02 = 0x16A,
  CALL_END_CAUSE_UNDECIPHERABLE_V02 = 0x16B,
  CALL_END_CAUSE_SERVER_INTERNAL_ERROR_V02 = 0x16C,
  CALL_END_CAUSE_NOT_IMPLEMENTED_V02 = 0x16D,
  CALL_END_CAUSE_BAD_GATEWAY_V02 = 0x16E,
  CALL_END_CAUSE_SERVER_TIME_OUT_V02 = 0x16F,
  CALL_END_CAUSE_VERSION_NOT_SUPPORTED_V02 = 0x170,
  CALL_END_CAUSE_MESSAGE_TOO_LARGE_V02 = 0x171,
  CALL_END_CAUSE_DOES_NOT_EXIST_ANYWHERE_V02 = 0x172,
  CALL_END_CAUSE_SESS_DESCR_NOT_ACCEPTABLE_V02 = 0x173,
  CALL_END_CAUSE_SRVCC_END_CALL_V02 = 0x174,
  CALL_END_CAUSE_INTERNAL_ERROR_V02 = 0x175,
  CALL_END_CAUSE_SERVER_UNAVAILABLE_V02 = 0x176,
  CALL_END_CAUSE_PRECONDITION_FAILURE_V02 = 0x177,
  CALL_END_CAUSE_DRVCC_IN_PROG_V02 = 0x178,
  CALL_END_CAUSE_DRVCC_END_CALL_V02 = 0x179,
  CALL_END_CAUSE_CS_HARD_FAILURE_V02 = 0x17A,
  CALL_END_CAUSE_CS_ACQ_FAILURE_V02 = 0x17B,
  CALL_END_CAUSE_FALLBACK_TO_CS_V02 = 0x17C,
  CALL_END_CAUSE_DEAD_BATTERY_V02 = 0x17D,
  CALL_END_CAUSE_HO_NOT_FEASIBLE_V02 = 0x17E,
  CALL_END_CAUSE_1XCSFB_MSG_INVAILD_V02 = 0x1F4,
  CALL_END_CAUSE_1XCSFB_MSG_IGNORE_V02 = 0x1F5,
  CALL_END_CAUSE_1XCSFB_FAIL_ACQ_FAIL_V02 = 0x1F6,
  CALL_END_CAUSE_1XCSFB_FAIL_CALL_REL_REL_ORDER_V02 = 0x1F7,
  CALL_END_CAUSE_1XCSFB_FAIL_CALL_REL_REORDER_V02 = 0x1F8,
  CALL_END_CAUSE_1XCSFB_FAIL_CALL_REL_INTERCEPT_ORDER_V02 = 0x1F9,
  CALL_END_CAUSE_1XCSFB_FAIL_CALL_REL_NORMAL_V02 = 0x1FA,
  CALL_END_CAUSE_1XCSFB_FAIL_CALL_REL_SO_REJ_V02 = 0x1FB,
  CALL_END_CAUSE_1XCSFB_FAIL_CALL_REL_OTASP_SPC_ERR_V02 = 0x1FC,
  CALL_END_CAUSE_1XCSFB_FAILURE_SRCH_TT_FAIL_V02 = 0x1FD,
  CALL_END_CAUSE_1XCSFB_FAILURE_TCH_INIT_FAIL_V02 = 0x1FE,
  CALL_END_CAUSE_1XCSFB_FAILURE_FAILURE_USER_CALL_END_V02 = 0x1FF,
  CALL_END_CAUSE_1XCSFB_FAILURE_FAILURE_RETRY_EXHAUST_V02 = 0x200,
  CALL_END_CAUSE_1XCSFB_FAILURE_FAILURE_CALL_REL_REG_REJ_V02 = 0x201,
  CALL_END_CAUSE_1XCSFB_FAILURE_FAILURE_CALL_REL_NW_REL_ODR_V02 = 0x202,
  CALL_END_CAUSE_1XCSFB_HO_FAILURE_V02 = 0x203,
  CALL_END_CAUSE_EMM_REJ_TIMER_T3417_EXT_EXP_V02 = 0x258,
  CALL_END_CAUSE_EMM_REJ_TIMER_T3417_EXP_V02 = 0x259,
  CALL_END_CAUSE_EMM_REJ_SERVICE_REQ_FAILURE_LTE_NW_REJECT_V02 = 0x25A,
  CALL_END_CAUSE_EMM_REJ_SERVICE_REQ_FAILURE_CS_DOMAIN_NOT_AVAILABLE_V02 = 0x25B,
  CALL_END_CAUSE_EMM_REJ_V02 = 0x25C,
  CALL_END_REASON_ENUM_MAX_ENUM_VAL_V02 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}call_end_reason_enum_v02;
/**
    @}
  */

/** @addtogroup voice_service_common_qmi_aggregates
    @{
  */
/**
 */
typedef struct {

  uint8_t call_id;
  /**<   Unique call identifier for the call.
  */

  call_end_reason_enum_v02 call_end_reason;
  /**<   Call end reason;
       see @latexonly Table~\ref{tbl:endReasons}@endlatexonly for a list of
       valid voice-related call end reasons.
  */
}voice_call_end_reason_type_v02;  /* Type */
/**
    @}
  */

/** @addtogroup voice_service_common_qmi_enums
    @{
  */
typedef enum {
  ALERTING_TYPE_ENUM_MIN_ENUM_VAL_V02 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  ALERTING_LOCAL_V02 = 0x00,
  ALERTING_REMOTE_V02 = 0x01,
  ALERTING_TYPE_ENUM_MAX_ENUM_VAL_V02 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}alerting_type_enum_v02;
/**
    @}
  */

/* Conditional compilation tags for message removal */

/*Extern Definition of Type Table Object*/
/*THIS IS AN INTERNAL OBJECT AND SHOULD ONLY*/
/*BE ACCESSED BY AUTOGENERATED FILES*/
extern const qmi_idl_type_table_object voice_service_common_qmi_idl_type_table_object_v02;


#ifdef __cplusplus
}
#endif
#endif

