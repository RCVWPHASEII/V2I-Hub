/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_201603DA.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#include "AdvisorySpeed.h"

static int
memb_regional_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_regional_constr_7 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_regional_constr_7 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_regional_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RegionalExtension_124P0,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_regional_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_7 = {
	sizeof(struct AdvisorySpeed__regional),
	offsetof(struct AdvisorySpeed__regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_7 = {
	"regional",
	"regional",
	&asn_OP_SEQUENCE_OF,
	SEQUENCE_OF_constraint,
	asn_DEF_regional_tags_7,
	sizeof(asn_DEF_regional_tags_7)
		/sizeof(asn_DEF_regional_tags_7[0]) - 1, /* 1 */
	asn_DEF_regional_tags_7,	/* Same as above */
	sizeof(asn_DEF_regional_tags_7)
		/sizeof(asn_DEF_regional_tags_7[0]), /* 2 */
	0,	/* No OER visible constraints */
	&asn_PER_type_regional_constr_7,
	asn_MBR_regional_7,
	1,	/* Single element */
	&asn_SPC_regional_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AdvisorySpeed_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AdvisorySpeed, type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdvisorySpeedType,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"type"
		},
	{ ATF_POINTER, 5, offsetof(struct AdvisorySpeed, speed),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedAdvice,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"speed"
		},
	{ ATF_POINTER, 4, offsetof(struct AdvisorySpeed, confidence),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedConfidence,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"confidence"
		},
	{ ATF_POINTER, 3, offsetof(struct AdvisorySpeed, distance),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ZoneLength,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"distance"
		},
	{ ATF_POINTER, 2, offsetof(struct AdvisorySpeed, Class),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RestrictionClassID,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"class"
		},
	{ ATF_POINTER, 1, offsetof(struct AdvisorySpeed, regional),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_regional_7,
		0,
		memb_regional_constraint_1,
		0,	/* OER is not compiled, use -gen-OER */
		&asn_PER_memb_regional_constr_7,
		0,
		"regional"
		},
};
static const int asn_MAP_AdvisorySpeed_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_AdvisorySpeed_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AdvisorySpeed_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* speed */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* confidence */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* distance */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* class */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* regional */
};
asn_SEQUENCE_specifics_t asn_SPC_AdvisorySpeed_specs_1 = {
	sizeof(struct AdvisorySpeed),
	offsetof(struct AdvisorySpeed, _asn_ctx),
	asn_MAP_AdvisorySpeed_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_AdvisorySpeed_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AdvisorySpeed = {
	"AdvisorySpeed",
	"AdvisorySpeed",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_AdvisorySpeed_tags_1,
	sizeof(asn_DEF_AdvisorySpeed_tags_1)
		/sizeof(asn_DEF_AdvisorySpeed_tags_1[0]), /* 1 */
	asn_DEF_AdvisorySpeed_tags_1,	/* Same as above */
	sizeof(asn_DEF_AdvisorySpeed_tags_1)
		/sizeof(asn_DEF_AdvisorySpeed_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_AdvisorySpeed_1,
	6,	/* Elements count */
	&asn_SPC_AdvisorySpeed_specs_1	/* Additional specs */
};

