/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#include "ASN_NGAP_LoggedMDTNr.h"

#include "ASN_NGAP_BluetoothMeasurementConfiguration.h"
#include "ASN_NGAP_WLANMeasurementConfiguration.h"
#include "ASN_NGAP_SensorMeasurementConfiguration.h"
#include "ASN_NGAP_AreaScopeOfNeighCellsList.h"
#include "ASN_NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_NGAP_LoggedMDTNr_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_LoggedMDTNr, loggingInterval),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_LoggingInterval,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggingInterval"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_LoggedMDTNr, loggingDuration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_LoggingDuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggingDuration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_LoggedMDTNr, loggedMDTTrigger),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_LoggedMDTTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggedMDTTrigger"
		},
	{ ATF_POINTER, 5, offsetof(struct ASN_NGAP_LoggedMDTNr, bluetoothMeasurementConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_BluetoothMeasurementConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bluetoothMeasurementConfiguration"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_NGAP_LoggedMDTNr, wLANMeasurementConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_WLANMeasurementConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wLANMeasurementConfiguration"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_NGAP_LoggedMDTNr, sensorMeasurementConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_SensorMeasurementConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sensorMeasurementConfiguration"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_NGAP_LoggedMDTNr, areaScopeOfNeighCellsList),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_AreaScopeOfNeighCellsList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"areaScopeOfNeighCellsList"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_NGAP_LoggedMDTNr, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_ProtocolExtensionContainer_174P149,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_NGAP_LoggedMDTNr_oms_1[] = { 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_ASN_NGAP_LoggedMDTNr_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_NGAP_LoggedMDTNr_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* loggingInterval */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* loggingDuration */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* loggedMDTTrigger */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* bluetoothMeasurementConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* wLANMeasurementConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sensorMeasurementConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* areaScopeOfNeighCellsList */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_LoggedMDTNr_specs_1 = {
	sizeof(struct ASN_NGAP_LoggedMDTNr),
	offsetof(struct ASN_NGAP_LoggedMDTNr, _asn_ctx),
	asn_MAP_ASN_NGAP_LoggedMDTNr_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_ASN_NGAP_LoggedMDTNr_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_LoggedMDTNr = {
	"LoggedMDTNr",
	"LoggedMDTNr",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_NGAP_LoggedMDTNr_tags_1,
	sizeof(asn_DEF_ASN_NGAP_LoggedMDTNr_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_LoggedMDTNr_tags_1[0]), /* 1 */
	asn_DEF_ASN_NGAP_LoggedMDTNr_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_NGAP_LoggedMDTNr_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_LoggedMDTNr_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_NGAP_LoggedMDTNr_1,
	8,	/* Elements count */
	&asn_SPC_ASN_NGAP_LoggedMDTNr_specs_1	/* Additional specs */
};

