/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_201603DA.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#include "TimeConfidence.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_TimeConfidence_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_TimeConfidence_value2enum_1[] = {
	{ 0,	11,	"unavailable" },
	{ 1,	12,	"time-100-000" },
	{ 2,	12,	"time-050-000" },
	{ 3,	12,	"time-020-000" },
	{ 4,	12,	"time-010-000" },
	{ 5,	12,	"time-002-000" },
	{ 6,	12,	"time-001-000" },
	{ 7,	12,	"time-000-500" },
	{ 8,	12,	"time-000-200" },
	{ 9,	12,	"time-000-100" },
	{ 10,	12,	"time-000-050" },
	{ 11,	12,	"time-000-020" },
	{ 12,	12,	"time-000-010" },
	{ 13,	12,	"time-000-005" },
	{ 14,	12,	"time-000-002" },
	{ 15,	12,	"time-000-001" },
	{ 16,	14,	"time-000-000-5" },
	{ 17,	14,	"time-000-000-2" },
	{ 18,	14,	"time-000-000-1" },
	{ 19,	15,	"time-000-000-05" },
	{ 20,	15,	"time-000-000-02" },
	{ 21,	15,	"time-000-000-01" },
	{ 22,	16,	"time-000-000-005" },
	{ 23,	16,	"time-000-000-002" },
	{ 24,	16,	"time-000-000-001" },
	{ 25,	18,	"time-000-000-000-5" },
	{ 26,	18,	"time-000-000-000-2" },
	{ 27,	18,	"time-000-000-000-1" },
	{ 28,	19,	"time-000-000-000-05" },
	{ 29,	19,	"time-000-000-000-02" },
	{ 30,	19,	"time-000-000-000-01" },
	{ 31,	20,	"time-000-000-000-005" },
	{ 32,	20,	"time-000-000-000-002" },
	{ 33,	20,	"time-000-000-000-001" },
	{ 34,	22,	"time-000-000-000-000-5" },
	{ 35,	22,	"time-000-000-000-000-2" },
	{ 36,	22,	"time-000-000-000-000-1" },
	{ 37,	23,	"time-000-000-000-000-05" },
	{ 38,	23,	"time-000-000-000-000-02" },
	{ 39,	23,	"time-000-000-000-000-01" }
};
static const unsigned int asn_MAP_TimeConfidence_enum2value_1[] = {
	39,	/* time-000-000-000-000-01(39) */
	38,	/* time-000-000-000-000-02(38) */
	37,	/* time-000-000-000-000-05(37) */
	36,	/* time-000-000-000-000-1(36) */
	35,	/* time-000-000-000-000-2(35) */
	34,	/* time-000-000-000-000-5(34) */
	33,	/* time-000-000-000-001(33) */
	32,	/* time-000-000-000-002(32) */
	31,	/* time-000-000-000-005(31) */
	30,	/* time-000-000-000-01(30) */
	29,	/* time-000-000-000-02(29) */
	28,	/* time-000-000-000-05(28) */
	27,	/* time-000-000-000-1(27) */
	26,	/* time-000-000-000-2(26) */
	25,	/* time-000-000-000-5(25) */
	24,	/* time-000-000-001(24) */
	23,	/* time-000-000-002(23) */
	22,	/* time-000-000-005(22) */
	21,	/* time-000-000-01(21) */
	20,	/* time-000-000-02(20) */
	19,	/* time-000-000-05(19) */
	18,	/* time-000-000-1(18) */
	17,	/* time-000-000-2(17) */
	16,	/* time-000-000-5(16) */
	15,	/* time-000-001(15) */
	14,	/* time-000-002(14) */
	13,	/* time-000-005(13) */
	12,	/* time-000-010(12) */
	11,	/* time-000-020(11) */
	10,	/* time-000-050(10) */
	9,	/* time-000-100(9) */
	8,	/* time-000-200(8) */
	7,	/* time-000-500(7) */
	6,	/* time-001-000(6) */
	5,	/* time-002-000(5) */
	4,	/* time-010-000(4) */
	3,	/* time-020-000(3) */
	2,	/* time-050-000(2) */
	1,	/* time-100-000(1) */
	0	/* unavailable(0) */
};
const asn_INTEGER_specifics_t asn_SPC_TimeConfidence_specs_1 = {
	asn_MAP_TimeConfidence_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TimeConfidence_enum2value_1,	/* N => "tag"; sorted by N */
	40,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TimeConfidence_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TimeConfidence = {
	"TimeConfidence",
	"TimeConfidence",
	&asn_OP_NativeEnumerated,
	NativeEnumerated_constraint,
	asn_DEF_TimeConfidence_tags_1,
	sizeof(asn_DEF_TimeConfidence_tags_1)
		/sizeof(asn_DEF_TimeConfidence_tags_1[0]), /* 1 */
	asn_DEF_TimeConfidence_tags_1,	/* Same as above */
	sizeof(asn_DEF_TimeConfidence_tags_1)
		/sizeof(asn_DEF_TimeConfidence_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	&asn_PER_type_TimeConfidence_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TimeConfidence_specs_1	/* Additional specs */
};

