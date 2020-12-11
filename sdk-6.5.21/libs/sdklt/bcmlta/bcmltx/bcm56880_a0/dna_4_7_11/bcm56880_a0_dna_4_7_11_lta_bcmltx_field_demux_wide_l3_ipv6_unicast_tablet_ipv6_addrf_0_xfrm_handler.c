/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
/* Logical Table Adaptor for component bcmltx */
/* Handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmltx_field_demux_wide.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_lrd_xfrm_field_desc.h>


extern const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_src_field_desc_s0[];

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_dst_field_desc[4] = {
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 175,
        .field_idx = 0,
        .minbit    = 158,
        .maxbit    = 173,
        .entry_idx = 0,
        .sym       = "IFTA80_E2T_03_B0_DOUBLEm.TABLE_FIELDS_1f[50:35]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 176,
        .field_idx = 0,
        .minbit    = 47,
        .maxbit    = 119,
        .entry_idx = 0,
        .sym       = "IFTA80_E2T_03_B0_DOUBLEm.TABLE_FIELDS_0f[112:40]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 33,
        .field_idx = 0,
        .minbit    = 123,
        .maxbit    = 157,
        .entry_idx = 0,
        .sym       = "IFTA80_E2T_03_B0_DOUBLEm.TABLE_FIELDS_1f[34:0]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 177,
        .field_idx = 0,
        .minbit    = 13,
        .maxbit    = 16,
        .entry_idx = 0,
        .sym       = "IFTA80_E2T_03_B0_DOUBLEm.TABLE_FIELDS_0f[9:6]",
        .reserved  = 0
    },
};

static const
bcmltd_field_list_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_src_list_s0 = {
    .field_num = 4,
    .field_array = bcm56880_a0_dna_4_7_11_lrd_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_dst_list_d0 = {
    .field_num = 4,
    .field_array = bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_dst_field_desc
};

static const uint32_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_transform_src_s0[1] = {
    BCM56880_A0_DNA_4_7_11_L3_IPV6_UNICAST_TABLEt_IPV6_ADDRf,
};

static const uint32_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_transform_dst_d0[4] = {
    BCMLTD_INTERNAL_FIELD_BASE + 175,
    BCMLTD_INTERNAL_FIELD_BASE + 176,
    BCMLTD_INTERNAL_FIELD_BASE + 33,
    BCMLTD_INTERNAL_FIELD_BASE + 177,
};

static const bcmltd_generic_arg_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_comp_data = {
    .sid       = BCM56880_A0_DNA_4_7_11_L3_IPV6_UNICAST_TABLEt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_transform_src_s0,
    .field_list  = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_src_list_s0,
    .rfields     = 4,
    .rfield      = bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_transform_dst_d0,
    .rfield_list = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_dst_list_d0,
    .comp_data   = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 4,
    .field       = bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_transform_dst_d0,
    .field_list  = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_transform_src_s0,
    .rfield_list = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_src_list_s0,
    .comp_data   = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_comp_data
};

const bcmltd_xfrm_handler_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_field_demux_wide_transform,
    .arg           = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_field_mux_wide_transform,
    .arg           = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_wide_l3_ipv6_unicast_tablet_ipv6_addrf_0_xfrm_handler_rev_arg_s0_d0
};

