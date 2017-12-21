/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_201603DA_with_PMM.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#include "MobilityNeedsType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_MobilityNeedsType_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_MobilityNeedsType_value2enum_1[] = {
	{ 0,	14,	"noSpecialNeeds" },
	{ 1,	10,	"wheelchair" },
	{ 2,	9,	"needsSeat" }
};
static const unsigned int asn_MAP_MobilityNeedsType_enum2value_1[] = {
	2,	/* needsSeat(2) */
	0,	/* noSpecialNeeds(0) */
	1	/* wheelchair(1) */
};
const asn_INTEGER_specifics_t asn_SPC_MobilityNeedsType_specs_1 = {
	asn_MAP_MobilityNeedsType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_MobilityNeedsType_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_MobilityNeedsType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_MobilityNeedsType = {
	"MobilityNeedsType",
	"MobilityNeedsType",
	&asn_OP_NativeEnumerated,
	NativeEnumerated_constraint,
	asn_DEF_MobilityNeedsType_tags_1,
	sizeof(asn_DEF_MobilityNeedsType_tags_1)
		/sizeof(asn_DEF_MobilityNeedsType_tags_1[0]), /* 1 */
	asn_DEF_MobilityNeedsType_tags_1,	/* Same as above */
	sizeof(asn_DEF_MobilityNeedsType_tags_1)
		/sizeof(asn_DEF_MobilityNeedsType_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	&asn_PER_type_MobilityNeedsType_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_MobilityNeedsType_specs_1	/* Additional specs */
};

