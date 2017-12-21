/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_201603DA.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#include "Location-quality.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_Location_quality_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_Location_quality_value2enum_1[] = {
	{ 0,	13,	"loc-qual-bt1m" },
	{ 1,	13,	"loc-qual-bt5m" },
	{ 2,	14,	"loc-qual-bt12m" },
	{ 3,	14,	"loc-qual-bt50m" },
	{ 4,	15,	"loc-qual-bt125m" },
	{ 5,	15,	"loc-qual-bt500m" },
	{ 6,	16,	"loc-qual-bt1250m" },
	{ 7,	16,	"loc-qual-unknown" }
};
static const unsigned int asn_MAP_Location_quality_enum2value_1[] = {
	6,	/* loc-qual-bt1250m(6) */
	4,	/* loc-qual-bt125m(4) */
	2,	/* loc-qual-bt12m(2) */
	0,	/* loc-qual-bt1m(0) */
	5,	/* loc-qual-bt500m(5) */
	3,	/* loc-qual-bt50m(3) */
	1,	/* loc-qual-bt5m(1) */
	7	/* loc-qual-unknown(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_Location_quality_specs_1 = {
	asn_MAP_Location_quality_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_Location_quality_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Location_quality_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Location_quality = {
	"Location-quality",
	"Location-quality",
	&asn_OP_NativeEnumerated,
	NativeEnumerated_constraint,
	asn_DEF_Location_quality_tags_1,
	sizeof(asn_DEF_Location_quality_tags_1)
		/sizeof(asn_DEF_Location_quality_tags_1[0]), /* 1 */
	asn_DEF_Location_quality_tags_1,	/* Same as above */
	sizeof(asn_DEF_Location_quality_tags_1)
		/sizeof(asn_DEF_Location_quality_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	&asn_PER_type_Location_quality_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Location_quality_specs_1	/* Additional specs */
};

