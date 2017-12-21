/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "../J2735_201603DA.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#ifndef	_ConnectionManeuverAssist_addGrpC_H_
#define	_ConnectionManeuverAssist_addGrpC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "VehicleToLanePositionList.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NodeOffsetPointXY;

/* ConnectionManeuverAssist-addGrpC */
typedef struct ConnectionManeuverAssist_addGrpC {
	VehicleToLanePositionList_t	 vehicleToLanePositions;
	struct NodeOffsetPointXY	*rsuDistanceFromAnchor	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConnectionManeuverAssist_addGrpC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConnectionManeuverAssist_addGrpC;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NodeOffsetPointXY.h"

#endif	/* _ConnectionManeuverAssist_addGrpC_H_ */
#include "asn_internal.h"
