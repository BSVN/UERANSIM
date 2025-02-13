/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_UE_NGAP_IDs_H_
#define	_ASN_NGAP_UE_NGAP_IDs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_AMF-UE-NGAP-ID.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_UE_NGAP_IDs_PR {
	ASN_NGAP_UE_NGAP_IDs_PR_NOTHING,	/* No components present */
	ASN_NGAP_UE_NGAP_IDs_PR_uE_NGAP_ID_pair,
	ASN_NGAP_UE_NGAP_IDs_PR_aMF_UE_NGAP_ID,
	ASN_NGAP_UE_NGAP_IDs_PR_choice_Extensions
} ASN_NGAP_UE_NGAP_IDs_PR;

/* Forward declarations */
struct ASN_NGAP_UE_NGAP_ID_pair;
struct ASN_NGAP_ProtocolIE_SingleContainer;

/* ASN_NGAP_UE-NGAP-IDs */
typedef struct ASN_NGAP_UE_NGAP_IDs {
	ASN_NGAP_UE_NGAP_IDs_PR present;
	union ASN_NGAP_UE_NGAP_IDs_u {
		struct ASN_NGAP_UE_NGAP_ID_pair	*uE_NGAP_ID_pair;
		ASN_NGAP_AMF_UE_NGAP_ID_t	 aMF_UE_NGAP_ID;
		struct ASN_NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_UE_NGAP_IDs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_UE_NGAP_IDs;
extern asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_UE_NGAP_IDs_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_UE_NGAP_IDs_1[3];
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_UE_NGAP_IDs_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_UE_NGAP_IDs_H_ */
#include <asn_internal.h>
