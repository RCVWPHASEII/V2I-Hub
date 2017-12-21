/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_201603DA.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#include "WeatherReport.h"

asn_TYPE_member_t asn_MBR_WeatherReport_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WeatherReport, isRaining),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EssPrecipYesNo,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"isRaining"
		},
	{ ATF_POINTER, 5, offsetof(struct WeatherReport, rainRate),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EssPrecipRate,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"rainRate"
		},
	{ ATF_POINTER, 4, offsetof(struct WeatherReport, precipSituation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EssPrecipSituation,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"precipSituation"
		},
	{ ATF_POINTER, 3, offsetof(struct WeatherReport, solarRadiation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EssSolarRadiation,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"solarRadiation"
		},
	{ ATF_POINTER, 2, offsetof(struct WeatherReport, friction),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EssMobileFriction,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"friction"
		},
	{ ATF_POINTER, 1, offsetof(struct WeatherReport, roadFriction),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CoefficientOfFriction,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"roadFriction"
		},
};
static const int asn_MAP_WeatherReport_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_WeatherReport_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_WeatherReport_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* isRaining */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rainRate */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* precipSituation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* solarRadiation */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* friction */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* roadFriction */
};
asn_SEQUENCE_specifics_t asn_SPC_WeatherReport_specs_1 = {
	sizeof(struct WeatherReport),
	offsetof(struct WeatherReport, _asn_ctx),
	asn_MAP_WeatherReport_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_WeatherReport_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_WeatherReport = {
	"WeatherReport",
	"WeatherReport",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_WeatherReport_tags_1,
	sizeof(asn_DEF_WeatherReport_tags_1)
		/sizeof(asn_DEF_WeatherReport_tags_1[0]), /* 1 */
	asn_DEF_WeatherReport_tags_1,	/* Same as above */
	sizeof(asn_DEF_WeatherReport_tags_1)
		/sizeof(asn_DEF_WeatherReport_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_WeatherReport_1,
	6,	/* Elements count */
	&asn_SPC_WeatherReport_specs_1	/* Additional specs */
};

