#ifndef BCMPKT_ERSPAN3_FIXED_HDR_T_DEFS_H
#define BCMPKT_ERSPAN3_FIXED_HDR_T_DEFS_H
/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) header.yml.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 */

/*!
 * \name ERSPAN3_FIXED_HDR_T field IDs.
 * \anchor BCMPKT_ERSPAN3_FIXED_HDR_T_XXX
 */
#define BCMPKT_ERSPAN3_FIXED_HDR_T_COS               0
#define BCMPKT_ERSPAN3_FIXED_HDR_T_VER               1
#define BCMPKT_ERSPAN3_FIXED_HDR_T_TIMESTAMP         2
#define BCMPKT_ERSPAN3_FIXED_HDR_T_VLAN              3
#define BCMPKT_ERSPAN3_FIXED_HDR_T_SESSION_ID        4
#define BCMPKT_ERSPAN3_FIXED_HDR_T_BSO               5
#define BCMPKT_ERSPAN3_FIXED_HDR_T_T                 6
#define BCMPKT_ERSPAN3_FIXED_HDR_T_P_FT_HWID_D_GRA_O 7
#define BCMPKT_ERSPAN3_FIXED_HDR_T_GBP_SID           8

#define BCMPKT_ERSPAN3_FIXED_HDR_T_FID_INVALID        -1
#define BCMPKT_ERSPAN3_FIXED_HDR_T_FID_COUNT          9
#define BCMPKT_ERSPAN3_FIXED_HDR_T_FID_START          0
#define BCMPKT_ERSPAN3_FIXED_HDR_T_FID_END            (BCMPKT_ERSPAN3_FIXED_HDR_T_FID_COUNT - 1)

#define BCMPKT_ERSPAN3_FIXED_HDR_T_I_SUPPORT          0
#define BCMPKT_ERSPAN3_FIXED_HDR_T_I_FID_COUNT        1

#define BCMPKT_ERSPAN3_FIXED_HDR_T_FIELD_NAME_MAP_INIT \
    {"COS", BCMPKT_ERSPAN3_FIXED_HDR_T_COS},\
    {"VER", BCMPKT_ERSPAN3_FIXED_HDR_T_VER},\
    {"TIMESTAMP", BCMPKT_ERSPAN3_FIXED_HDR_T_TIMESTAMP},\
    {"VLAN", BCMPKT_ERSPAN3_FIXED_HDR_T_VLAN},\
    {"SESSION_ID", BCMPKT_ERSPAN3_FIXED_HDR_T_SESSION_ID},\
    {"BSO", BCMPKT_ERSPAN3_FIXED_HDR_T_BSO},\
    {"T", BCMPKT_ERSPAN3_FIXED_HDR_T_T},\
    {"P_FT_HWID_D_GRA_O", BCMPKT_ERSPAN3_FIXED_HDR_T_P_FT_HWID_D_GRA_O},\
    {"GBP_SID", BCMPKT_ERSPAN3_FIXED_HDR_T_GBP_SID},\
    {"erspan3_fixed_hdr_t fid count", BCMPKT_ERSPAN3_FIXED_HDR_T_FID_COUNT}

#endif /* BCMPKT_ERSPAN3_FIXED_HDR_T_DEFS_H */