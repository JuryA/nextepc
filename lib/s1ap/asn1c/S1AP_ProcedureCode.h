/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-CommonDataTypes"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_S1AP_ProcedureCode_H_
#define	_S1AP_ProcedureCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_ProcedureCode */
typedef long	 S1AP_ProcedureCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_ProcedureCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProcedureCode;
asn_struct_free_f S1AP_ProcedureCode_free;
asn_struct_print_f S1AP_ProcedureCode_print;
asn_constr_check_f S1AP_ProcedureCode_constraint;
ber_type_decoder_f S1AP_ProcedureCode_decode_ber;
der_type_encoder_f S1AP_ProcedureCode_encode_der;
xer_type_decoder_f S1AP_ProcedureCode_decode_xer;
xer_type_encoder_f S1AP_ProcedureCode_encode_xer;
oer_type_decoder_f S1AP_ProcedureCode_decode_oer;
oer_type_encoder_f S1AP_ProcedureCode_encode_oer;
per_type_decoder_f S1AP_ProcedureCode_decode_uper;
per_type_encoder_f S1AP_ProcedureCode_encode_uper;
per_type_decoder_f S1AP_ProcedureCode_decode_aper;
per_type_encoder_f S1AP_ProcedureCode_encode_aper;
#define S1AP_ProcedureCode_id_HandoverPreparation	((S1AP_ProcedureCode_t)0)
#define S1AP_ProcedureCode_id_HandoverResourceAllocation	((S1AP_ProcedureCode_t)1)
#define S1AP_ProcedureCode_id_HandoverNotification	((S1AP_ProcedureCode_t)2)
#define S1AP_ProcedureCode_id_PathSwitchRequest	((S1AP_ProcedureCode_t)3)
#define S1AP_ProcedureCode_id_HandoverCancel	((S1AP_ProcedureCode_t)4)
#define S1AP_ProcedureCode_id_E_RABSetup	((S1AP_ProcedureCode_t)5)
#define S1AP_ProcedureCode_id_E_RABModify	((S1AP_ProcedureCode_t)6)
#define S1AP_ProcedureCode_id_E_RABRelease	((S1AP_ProcedureCode_t)7)
#define S1AP_ProcedureCode_id_E_RABReleaseIndication	((S1AP_ProcedureCode_t)8)
#define S1AP_ProcedureCode_id_InitialContextSetup	((S1AP_ProcedureCode_t)9)
#define S1AP_ProcedureCode_id_Paging	((S1AP_ProcedureCode_t)10)
#define S1AP_ProcedureCode_id_downlinkNASTransport	((S1AP_ProcedureCode_t)11)
#define S1AP_ProcedureCode_id_initialUEMessage	((S1AP_ProcedureCode_t)12)
#define S1AP_ProcedureCode_id_uplinkNASTransport	((S1AP_ProcedureCode_t)13)
#define S1AP_ProcedureCode_id_Reset	((S1AP_ProcedureCode_t)14)
#define S1AP_ProcedureCode_id_ErrorIndication	((S1AP_ProcedureCode_t)15)
#define S1AP_ProcedureCode_id_NASNonDeliveryIndication	((S1AP_ProcedureCode_t)16)
#define S1AP_ProcedureCode_id_S1Setup	((S1AP_ProcedureCode_t)17)
#define S1AP_ProcedureCode_id_UEContextReleaseRequest	((S1AP_ProcedureCode_t)18)
#define S1AP_ProcedureCode_id_DownlinkS1cdma2000tunnelling	((S1AP_ProcedureCode_t)19)
#define S1AP_ProcedureCode_id_UplinkS1cdma2000tunnelling	((S1AP_ProcedureCode_t)20)
#define S1AP_ProcedureCode_id_UEContextModification	((S1AP_ProcedureCode_t)21)
#define S1AP_ProcedureCode_id_UECapabilityInfoIndication	((S1AP_ProcedureCode_t)22)
#define S1AP_ProcedureCode_id_UEContextRelease	((S1AP_ProcedureCode_t)23)
#define S1AP_ProcedureCode_id_eNBStatusTransfer	((S1AP_ProcedureCode_t)24)
#define S1AP_ProcedureCode_id_MMEStatusTransfer	((S1AP_ProcedureCode_t)25)
#define S1AP_ProcedureCode_id_DeactivateTrace	((S1AP_ProcedureCode_t)26)
#define S1AP_ProcedureCode_id_TraceStart	((S1AP_ProcedureCode_t)27)
#define S1AP_ProcedureCode_id_TraceFailureIndication	((S1AP_ProcedureCode_t)28)
#define S1AP_ProcedureCode_id_ENBConfigurationUpdate	((S1AP_ProcedureCode_t)29)
#define S1AP_ProcedureCode_id_MMEConfigurationUpdate	((S1AP_ProcedureCode_t)30)
#define S1AP_ProcedureCode_id_LocationReportingControl	((S1AP_ProcedureCode_t)31)
#define S1AP_ProcedureCode_id_LocationReportingFailureIndication	((S1AP_ProcedureCode_t)32)
#define S1AP_ProcedureCode_id_LocationReport	((S1AP_ProcedureCode_t)33)
#define S1AP_ProcedureCode_id_OverloadStart	((S1AP_ProcedureCode_t)34)
#define S1AP_ProcedureCode_id_OverloadStop	((S1AP_ProcedureCode_t)35)
#define S1AP_ProcedureCode_id_WriteReplaceWarning	((S1AP_ProcedureCode_t)36)
#define S1AP_ProcedureCode_id_eNBDirectInformationTransfer	((S1AP_ProcedureCode_t)37)
#define S1AP_ProcedureCode_id_MMEDirectInformationTransfer	((S1AP_ProcedureCode_t)38)
#define S1AP_ProcedureCode_id_PrivateMessage	((S1AP_ProcedureCode_t)39)
#define S1AP_ProcedureCode_id_eNBConfigurationTransfer	((S1AP_ProcedureCode_t)40)
#define S1AP_ProcedureCode_id_MMEConfigurationTransfer	((S1AP_ProcedureCode_t)41)
#define S1AP_ProcedureCode_id_CellTrafficTrace	((S1AP_ProcedureCode_t)42)
#define S1AP_ProcedureCode_id_Kill	((S1AP_ProcedureCode_t)43)
#define S1AP_ProcedureCode_id_downlinkUEAssociatedLPPaTransport	((S1AP_ProcedureCode_t)44)
#define S1AP_ProcedureCode_id_uplinkUEAssociatedLPPaTransport	((S1AP_ProcedureCode_t)45)
#define S1AP_ProcedureCode_id_downlinkNonUEAssociatedLPPaTransport	((S1AP_ProcedureCode_t)46)
#define S1AP_ProcedureCode_id_uplinkNonUEAssociatedLPPaTransport	((S1AP_ProcedureCode_t)47)
#define S1AP_ProcedureCode_id_UERadioCapabilityMatch	((S1AP_ProcedureCode_t)48)
#define S1AP_ProcedureCode_id_PWSRestartIndication	((S1AP_ProcedureCode_t)49)
#define S1AP_ProcedureCode_id_E_RABModificationIndication	((S1AP_ProcedureCode_t)50)
#define S1AP_ProcedureCode_id_PWSFailureIndication	((S1AP_ProcedureCode_t)51)
#define S1AP_ProcedureCode_id_RerouteNASRequest	((S1AP_ProcedureCode_t)52)
#define S1AP_ProcedureCode_id_UEContextModificationIndication	((S1AP_ProcedureCode_t)53)
#define S1AP_ProcedureCode_id_ConnectionEstablishmentIndication	((S1AP_ProcedureCode_t)54)
#define S1AP_ProcedureCode_id_UEContextSuspend	((S1AP_ProcedureCode_t)55)
#define S1AP_ProcedureCode_id_UEContextResume	((S1AP_ProcedureCode_t)56)
#define S1AP_ProcedureCode_id_NASDeliveryIndication	((S1AP_ProcedureCode_t)57)
#define S1AP_ProcedureCode_id_RetrieveUEInformation	((S1AP_ProcedureCode_t)58)
#define S1AP_ProcedureCode_id_UEInformationTransfer	((S1AP_ProcedureCode_t)59)
#define S1AP_ProcedureCode_id_eNBCPRelocationIndication	((S1AP_ProcedureCode_t)60)
#define S1AP_ProcedureCode_id_MMECPRelocationIndication	((S1AP_ProcedureCode_t)61)

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ProcedureCode_H_ */
#include <asn_internal.h>
