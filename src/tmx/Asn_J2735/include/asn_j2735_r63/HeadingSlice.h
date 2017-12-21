/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_201603DA.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#ifndef	_HeadingSlice_H_
#define	_HeadingSlice_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HeadingSlice {
	HeadingSlice_from000_0to022_5degrees	= 0,
	HeadingSlice_from022_5to045_0degrees	= 1,
	HeadingSlice_from045_0to067_5degrees	= 2,
	HeadingSlice_from067_5to090_0degrees	= 3,
	HeadingSlice_from090_0to112_5degrees	= 4,
	HeadingSlice_from112_5to135_0degrees	= 5,
	HeadingSlice_from135_0to157_5degrees	= 6,
	HeadingSlice_from157_5to180_0degrees	= 7,
	HeadingSlice_from180_0to202_5degrees	= 8,
	HeadingSlice_from202_5to225_0degrees	= 9,
	HeadingSlice_from225_0to247_5degrees	= 10,
	HeadingSlice_from247_5to270_0degrees	= 11,
	HeadingSlice_from270_0to292_5degrees	= 12,
	HeadingSlice_from292_5to315_0degrees	= 13,
	HeadingSlice_from315_0to337_5degrees	= 14,
	HeadingSlice_from337_5to360_0degrees	= 15
} e_HeadingSlice;

/* HeadingSlice */
typedef BIT_STRING_t	 HeadingSlice_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_HeadingSlice_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_HeadingSlice;
asn_struct_free_f HeadingSlice_free;
asn_struct_print_f HeadingSlice_print;
asn_constr_check_f HeadingSlice_constraint;
ber_type_decoder_f HeadingSlice_decode_ber;
der_type_encoder_f HeadingSlice_encode_der;
xer_type_decoder_f HeadingSlice_decode_xer;
xer_type_encoder_f HeadingSlice_encode_xer;
per_type_decoder_f HeadingSlice_decode_uper;
per_type_encoder_f HeadingSlice_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HeadingSlice_H_ */
#include "asn_internal.h"
