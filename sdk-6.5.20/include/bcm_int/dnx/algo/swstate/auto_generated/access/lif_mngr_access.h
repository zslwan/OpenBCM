/** \file algo/swstate/auto_generated/access/lif_mngr_access.h
 *
 * sw state functions declarations
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef __LIF_MNGR_ACCESS_H__
#define __LIF_MNGR_ACCESS_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/lif_mngr_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <include/soc/dnx/dbal/dbal_structures.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_lif.h>
#include <soc/dnxc/swstate/callbacks/sw_state_htb_callbacks.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
#include <soc/dnxc/swstate/types/sw_state_hash_table.h>
/*
 * TYPEDEFs
 */

/**
 * implemented by: lif_mngr_db_is_init
 */
typedef int (*lif_mngr_db_is_init_cb)(
    int unit, uint8 *is_init);

/**
 * implemented by: lif_mngr_db_init
 */
typedef int (*lif_mngr_db_init_cb)(
    int unit);

/**
 * implemented by: lif_mngr_db_lif_mapping_ingress_lif1_to_global_lif_map_set
 */
typedef int (*lif_mngr_db_lif_mapping_ingress_lif1_to_global_lif_map_set_cb)(
    int unit, uint32 ingress_lif1_to_global_lif_map_idx_0, int ingress_lif1_to_global_lif_map);

/**
 * implemented by: lif_mngr_db_lif_mapping_ingress_lif1_to_global_lif_map_get
 */
typedef int (*lif_mngr_db_lif_mapping_ingress_lif1_to_global_lif_map_get_cb)(
    int unit, uint32 ingress_lif1_to_global_lif_map_idx_0, int *ingress_lif1_to_global_lif_map);

/**
 * implemented by: lif_mngr_db_lif_mapping_ingress_lif1_to_global_lif_map_alloc
 */
typedef int (*lif_mngr_db_lif_mapping_ingress_lif1_to_global_lif_map_alloc_cb)(
    int unit, uint32 nof_instances_to_alloc_0);

/**
 * implemented by: lif_mngr_db_lif_mapping_ingress_lif2_to_global_lif_map_set
 */
typedef int (*lif_mngr_db_lif_mapping_ingress_lif2_to_global_lif_map_set_cb)(
    int unit, uint32 ingress_lif2_to_global_lif_map_idx_0, int ingress_lif2_to_global_lif_map);

/**
 * implemented by: lif_mngr_db_lif_mapping_ingress_lif2_to_global_lif_map_get
 */
typedef int (*lif_mngr_db_lif_mapping_ingress_lif2_to_global_lif_map_get_cb)(
    int unit, uint32 ingress_lif2_to_global_lif_map_idx_0, int *ingress_lif2_to_global_lif_map);

/**
 * implemented by: lif_mngr_db_lif_mapping_ingress_lif2_to_global_lif_map_alloc
 */
typedef int (*lif_mngr_db_lif_mapping_ingress_lif2_to_global_lif_map_alloc_cb)(
    int unit, uint32 nof_instances_to_alloc_0);

/**
 * implemented by: lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_create
 */
typedef int (*lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_create_cb)(
    int unit, sw_state_htbl_init_info_t *init_info);

/**
 * implemented by: lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_find
 */
typedef int (*lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_find_cb)(
    int unit, const int *key, lif_mapping_local_lif_info_t *value, uint8 *found);

/**
 * implemented by: lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_insert
 */
typedef int (*lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_insert_cb)(
    int unit, const int *key, const lif_mapping_local_lif_info_t *value, uint8 *success);

/**
 * implemented by: lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_get_next
 */
typedef int (*lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_get_next_cb)(
    int unit, SW_STATE_HASH_TABLE_ITER *iter, const int *key, const lif_mapping_local_lif_info_t *value);

/**
 * implemented by: lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_clear
 */
typedef int (*lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_clear_cb)(
    int unit);

/**
 * implemented by: lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_delete
 */
typedef int (*lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_delete_cb)(
    int unit, const int *key);

/**
 * implemented by: lif_mngr_db_lif_mapping_egress_lif_to_global_lif_map_set
 */
typedef int (*lif_mngr_db_lif_mapping_egress_lif_to_global_lif_map_set_cb)(
    int unit, uint32 egress_lif_to_global_lif_map_idx_0, int egress_lif_to_global_lif_map);

/**
 * implemented by: lif_mngr_db_lif_mapping_egress_lif_to_global_lif_map_get
 */
typedef int (*lif_mngr_db_lif_mapping_egress_lif_to_global_lif_map_get_cb)(
    int unit, uint32 egress_lif_to_global_lif_map_idx_0, int *egress_lif_to_global_lif_map);

/**
 * implemented by: lif_mngr_db_lif_mapping_egress_lif_to_global_lif_map_alloc
 */
typedef int (*lif_mngr_db_lif_mapping_egress_lif_to_global_lif_map_alloc_cb)(
    int unit);

/**
 * implemented by: lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_create
 */
typedef int (*lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_create_cb)(
    int unit, sw_state_htbl_init_info_t *init_info);

/**
 * implemented by: lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_find
 */
typedef int (*lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_find_cb)(
    int unit, const int *key, int *value, uint8 *found);

/**
 * implemented by: lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_insert
 */
typedef int (*lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_insert_cb)(
    int unit, const int *key, const int *value, uint8 *success);

/**
 * implemented by: lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_get_next
 */
typedef int (*lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_get_next_cb)(
    int unit, SW_STATE_HASH_TABLE_ITER *iter, const int *key, const int *value);

/**
 * implemented by: lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_clear
 */
typedef int (*lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_clear_cb)(
    int unit);

/**
 * implemented by: lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_delete
 */
typedef int (*lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_delete_cb)(
    int unit, const int *key);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_symmetric_global_lif_set
 */
typedef int (*lif_mngr_db_global_lif_allocation_symmetric_global_lif_set_cb)(
    int unit, dnx_algo_res_t symmetric_global_lif);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_symmetric_global_lif_get
 */
typedef int (*lif_mngr_db_global_lif_allocation_symmetric_global_lif_get_cb)(
    int unit, dnx_algo_res_t *symmetric_global_lif);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_symmetric_global_lif_create
 */
typedef int (*lif_mngr_db_global_lif_allocation_symmetric_global_lif_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_symmetric_global_lif_allocate_single
 */
typedef int (*lif_mngr_db_global_lif_allocation_symmetric_global_lif_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_symmetric_global_lif_free_single
 */
typedef int (*lif_mngr_db_global_lif_allocation_symmetric_global_lif_free_single_cb)(
    int unit, int element);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_symmetric_global_lif_is_allocated
 */
typedef int (*lif_mngr_db_global_lif_allocation_symmetric_global_lif_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_ingress_global_lif_set
 */
typedef int (*lif_mngr_db_global_lif_allocation_ingress_global_lif_set_cb)(
    int unit, dnx_algo_res_t ingress_global_lif);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_ingress_global_lif_get
 */
typedef int (*lif_mngr_db_global_lif_allocation_ingress_global_lif_get_cb)(
    int unit, dnx_algo_res_t *ingress_global_lif);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_ingress_global_lif_create
 */
typedef int (*lif_mngr_db_global_lif_allocation_ingress_global_lif_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_ingress_global_lif_allocate_single
 */
typedef int (*lif_mngr_db_global_lif_allocation_ingress_global_lif_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_ingress_global_lif_free_single
 */
typedef int (*lif_mngr_db_global_lif_allocation_ingress_global_lif_free_single_cb)(
    int unit, int element);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_ingress_global_lif_is_allocated
 */
typedef int (*lif_mngr_db_global_lif_allocation_ingress_global_lif_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_egress_global_lif_set
 */
typedef int (*lif_mngr_db_global_lif_allocation_egress_global_lif_set_cb)(
    int unit, dnx_algo_res_t egress_global_lif);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_egress_global_lif_get
 */
typedef int (*lif_mngr_db_global_lif_allocation_egress_global_lif_get_cb)(
    int unit, dnx_algo_res_t *egress_global_lif);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_egress_global_lif_create
 */
typedef int (*lif_mngr_db_global_lif_allocation_egress_global_lif_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_egress_global_lif_allocate_single
 */
typedef int (*lif_mngr_db_global_lif_allocation_egress_global_lif_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_egress_global_lif_free_single
 */
typedef int (*lif_mngr_db_global_lif_allocation_egress_global_lif_free_single_cb)(
    int unit, int element);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_egress_global_lif_is_allocated
 */
typedef int (*lif_mngr_db_global_lif_allocation_egress_global_lif_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_ingress_global_lif_counter_set
 */
typedef int (*lif_mngr_db_global_lif_allocation_ingress_global_lif_counter_set_cb)(
    int unit, int ingress_global_lif_counter);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_ingress_global_lif_counter_get
 */
typedef int (*lif_mngr_db_global_lif_allocation_ingress_global_lif_counter_get_cb)(
    int unit, int *ingress_global_lif_counter);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_egress_global_lif_counter_set
 */
typedef int (*lif_mngr_db_global_lif_allocation_egress_global_lif_counter_set_cb)(
    int unit, int egress_global_lif_counter);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_egress_global_lif_counter_get
 */
typedef int (*lif_mngr_db_global_lif_allocation_egress_global_lif_counter_get_cb)(
    int unit, int *egress_global_lif_counter);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_alloc_bitmap
 */
typedef int (*lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_alloc_bitmap_cb)(
    int unit);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_bit_set
 */
typedef int (*lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_bit_set_cb)(
    int unit, uint32 _bit_num);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_bit_clear
 */
typedef int (*lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_bit_clear_cb)(
    int unit, uint32 _bit_num);

/**
 * implemented by: lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_bit_get
 */
typedef int (*lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_bit_get_cb)(
    int unit, uint32 _bit_num, uint8* result);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_shared_by_cores_set
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_shared_by_cores_set_cb)(
    int unit, dnx_algo_res_t inlif_table_shared_by_cores);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_shared_by_cores_get
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_shared_by_cores_get_cb)(
    int unit, dnx_algo_res_t *inlif_table_shared_by_cores);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_shared_by_cores_create
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_shared_by_cores_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_shared_by_cores_allocate_single
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_shared_by_cores_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_shared_by_cores_free_single
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_shared_by_cores_free_single_cb)(
    int unit, int element);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_shared_by_cores_is_allocated
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_shared_by_cores_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_shared_by_cores_get_next
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_shared_by_cores_get_next_cb)(
    int unit, int *element);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_shared_by_cores_nof_allocated_elements_in_range_get
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_shared_by_cores_nof_allocated_elements_in_range_get_cb)(
    int unit, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_set
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_set_cb)(
    int unit, uint32 inlif_table_dedicated_per_core_idx_0, dnx_algo_res_t inlif_table_dedicated_per_core);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_get
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_get_cb)(
    int unit, uint32 inlif_table_dedicated_per_core_idx_0, dnx_algo_res_t *inlif_table_dedicated_per_core);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_alloc
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_alloc_cb)(
    int unit, uint32 nof_instances_to_alloc_0);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_create
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_create_cb)(
    int unit, uint32 inlif_table_dedicated_per_core_idx_0, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_allocate_single
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_allocate_single_cb)(
    int unit, uint32 inlif_table_dedicated_per_core_idx_0, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_free_single
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_free_single_cb)(
    int unit, uint32 inlif_table_dedicated_per_core_idx_0, int element);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_is_allocated
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_is_allocated_cb)(
    int unit, uint32 inlif_table_dedicated_per_core_idx_0, int element, uint8 *is_allocated);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_get_next
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_get_next_cb)(
    int unit, uint32 inlif_table_dedicated_per_core_idx_0, int *element);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_nof_allocated_elements_in_range_get
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_nof_allocated_elements_in_range_get_cb)(
    int unit, uint32 inlif_table_dedicated_per_core_idx_0, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_set
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_set_cb)(
    int unit, dnx_algo_res_t inlif_table_dpc_all_cores);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_get
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_get_cb)(
    int unit, dnx_algo_res_t *inlif_table_dpc_all_cores);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_create
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_allocate_single
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_free_single
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_free_single_cb)(
    int unit, int element);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_free_several
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_free_several_cb)(
    int unit, uint32 nof_elements, int element);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_is_allocated
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_get_next
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_get_next_cb)(
    int unit, int *element);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_nof_allocated_elements_in_range_get
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_nof_allocated_elements_in_range_get_cb)(
    int unit, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_alloc_bitmap
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_alloc_bitmap_cb)(
    int unit, uint32 _nof_bits_to_alloc);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_bit_set
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_bit_set_cb)(
    int unit, uint32 _bit_num);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_bit_clear
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_bit_clear_cb)(
    int unit, uint32 _bit_num);

/**
 * implemented by: lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_bit_get
 */
typedef int (*lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_bit_get_cb)(
    int unit, uint32 _bit_num, uint8* result);

/**
 * implemented by: lif_mngr_db_egress_local_lif_set
 */
typedef int (*lif_mngr_db_egress_local_lif_set_cb)(
    int unit, uint32 egress_local_lif_idx_0, dnx_algo_res_t egress_local_lif);

/**
 * implemented by: lif_mngr_db_egress_local_lif_get
 */
typedef int (*lif_mngr_db_egress_local_lif_get_cb)(
    int unit, uint32 egress_local_lif_idx_0, dnx_algo_res_t *egress_local_lif);

/**
 * implemented by: lif_mngr_db_egress_local_lif_alloc
 */
typedef int (*lif_mngr_db_egress_local_lif_alloc_cb)(
    int unit, uint32 nof_instances_to_alloc_0);

/**
 * implemented by: lif_mngr_db_egress_local_lif_create
 */
typedef int (*lif_mngr_db_egress_local_lif_create_cb)(
    int unit, uint32 egress_local_lif_idx_0, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: lif_mngr_db_egress_local_lif_allocate_single
 */
typedef int (*lif_mngr_db_egress_local_lif_allocate_single_cb)(
    int unit, uint32 egress_local_lif_idx_0, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: lif_mngr_db_egress_local_lif_allocate_several
 */
typedef int (*lif_mngr_db_egress_local_lif_allocate_several_cb)(
    int unit, uint32 egress_local_lif_idx_0, uint32 flags, uint32 nof_elements, void *extra_arguments, int *element);

/**
 * implemented by: lif_mngr_db_egress_local_lif_free_several
 */
typedef int (*lif_mngr_db_egress_local_lif_free_several_cb)(
    int unit, uint32 egress_local_lif_idx_0, uint32 nof_elements, int element);

/**
 * implemented by: lif_mngr_db_egress_local_lif_is_allocated
 */
typedef int (*lif_mngr_db_egress_local_lif_is_allocated_cb)(
    int unit, uint32 egress_local_lif_idx_0, int element, uint8 *is_allocated);

/**
 * implemented by: lif_mngr_db_egress_local_lif_nof_free_elements_get
 */
typedef int (*lif_mngr_db_egress_local_lif_nof_free_elements_get_cb)(
    int unit, uint32 egress_local_lif_idx_0, int *nof_free_elements);

/**
 * implemented by: lif_mngr_db_egress_local_lif_get_next
 */
typedef int (*lif_mngr_db_egress_local_lif_get_next_cb)(
    int unit, uint32 egress_local_lif_idx_0, int *element);

/**
 * implemented by: lif_mngr_db_egress_local_lif_nof_allocated_elements_in_range_get
 */
typedef int (*lif_mngr_db_egress_local_lif_nof_allocated_elements_in_range_get_cb)(
    int unit, uint32 egress_local_lif_idx_0, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

/**
 * implemented by: lif_mngr_db_egress_local_lif_advanced_algorithm_info_set
 */
typedef int (*lif_mngr_db_egress_local_lif_advanced_algorithm_info_set_cb)(
    int unit, uint32 egress_local_lif_idx_0, void *algorithm_info);

/**
 * implemented by: lif_mngr_db_local_lif_info_ingress_lif1_set
 */
typedef int (*lif_mngr_db_local_lif_info_ingress_lif1_set_cb)(
    int unit, uint32 ingress_lif1_idx_0, CONST ingress_lif_info_t *ingress_lif1);

/**
 * implemented by: lif_mngr_db_local_lif_info_ingress_lif1_get
 */
typedef int (*lif_mngr_db_local_lif_info_ingress_lif1_get_cb)(
    int unit, uint32 ingress_lif1_idx_0, ingress_lif_info_t *ingress_lif1);

/**
 * implemented by: lif_mngr_db_local_lif_info_ingress_lif1_alloc
 */
typedef int (*lif_mngr_db_local_lif_info_ingress_lif1_alloc_cb)(
    int unit, uint32 nof_instances_to_alloc_0);

/**
 * implemented by: lif_mngr_db_local_lif_info_ingress_lif2_set
 */
typedef int (*lif_mngr_db_local_lif_info_ingress_lif2_set_cb)(
    int unit, uint32 ingress_lif2_idx_0, CONST ingress_lif_info_t *ingress_lif2);

/**
 * implemented by: lif_mngr_db_local_lif_info_ingress_lif2_get
 */
typedef int (*lif_mngr_db_local_lif_info_ingress_lif2_get_cb)(
    int unit, uint32 ingress_lif2_idx_0, ingress_lif_info_t *ingress_lif2);

/**
 * implemented by: lif_mngr_db_local_lif_info_ingress_lif2_alloc
 */
typedef int (*lif_mngr_db_local_lif_info_ingress_lif2_alloc_cb)(
    int unit, uint32 nof_instances_to_alloc_0);

/**
 * implemented by: lif_mngr_db_local_lif_info_egress_lif_htb_create
 */
typedef int (*lif_mngr_db_local_lif_info_egress_lif_htb_create_cb)(
    int unit, sw_state_htbl_init_info_t *init_info);

/**
 * implemented by: lif_mngr_db_local_lif_info_egress_lif_htb_find
 */
typedef int (*lif_mngr_db_local_lif_info_egress_lif_htb_find_cb)(
    int unit, const int *key, egress_lif_info_t *value, uint8 *found);

/**
 * implemented by: lif_mngr_db_local_lif_info_egress_lif_htb_insert
 */
typedef int (*lif_mngr_db_local_lif_info_egress_lif_htb_insert_cb)(
    int unit, const int *key, const egress_lif_info_t *value, uint8 *success);

/**
 * implemented by: lif_mngr_db_local_lif_info_egress_lif_htb_get_next
 */
typedef int (*lif_mngr_db_local_lif_info_egress_lif_htb_get_next_cb)(
    int unit, SW_STATE_HASH_TABLE_ITER *iter, const int *key, const egress_lif_info_t *value);

/**
 * implemented by: lif_mngr_db_local_lif_info_egress_lif_htb_clear
 */
typedef int (*lif_mngr_db_local_lif_info_egress_lif_htb_clear_cb)(
    int unit);

/**
 * implemented by: lif_mngr_db_local_lif_info_egress_lif_htb_delete
 */
typedef int (*lif_mngr_db_local_lif_info_egress_lif_htb_delete_cb)(
    int unit, const int *key);

/*
 * STRUCTs
 */

/**
 * This structure holds the access functions for the variable ingress_lif1_to_global_lif_map
 */
typedef struct {
    lif_mngr_db_lif_mapping_ingress_lif1_to_global_lif_map_set_cb set;
    lif_mngr_db_lif_mapping_ingress_lif1_to_global_lif_map_get_cb get;
    lif_mngr_db_lif_mapping_ingress_lif1_to_global_lif_map_alloc_cb alloc;
} lif_mngr_db_lif_mapping_ingress_lif1_to_global_lif_map_cbs;

/**
 * This structure holds the access functions for the variable ingress_lif2_to_global_lif_map
 */
typedef struct {
    lif_mngr_db_lif_mapping_ingress_lif2_to_global_lif_map_set_cb set;
    lif_mngr_db_lif_mapping_ingress_lif2_to_global_lif_map_get_cb get;
    lif_mngr_db_lif_mapping_ingress_lif2_to_global_lif_map_alloc_cb alloc;
} lif_mngr_db_lif_mapping_ingress_lif2_to_global_lif_map_cbs;

/**
 * This structure holds the access functions for the variable ingress_global_lif_to_lif_htb
 */
typedef struct {
    lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_create_cb create;
    lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_find_cb find;
    lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_insert_cb insert;
    lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_get_next_cb get_next;
    lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_clear_cb clear;
    lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_delete_cb delete;
} lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_cbs;

/**
 * This structure holds the access functions for the variable egress_lif_to_global_lif_map
 */
typedef struct {
    lif_mngr_db_lif_mapping_egress_lif_to_global_lif_map_set_cb set;
    lif_mngr_db_lif_mapping_egress_lif_to_global_lif_map_get_cb get;
    lif_mngr_db_lif_mapping_egress_lif_to_global_lif_map_alloc_cb alloc;
} lif_mngr_db_lif_mapping_egress_lif_to_global_lif_map_cbs;

/**
 * This structure holds the access functions for the variable egress_global_lif_to_lif_htb
 */
typedef struct {
    lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_create_cb create;
    lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_find_cb find;
    lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_insert_cb insert;
    lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_get_next_cb get_next;
    lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_clear_cb clear;
    lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_delete_cb delete;
} lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_cbs;

/**
 * This structure holds the access functions for the variable lif_mapping_info_t
 */
typedef struct {
    /**
     * Access struct for ingress_lif1_to_global_lif_map
     */
    lif_mngr_db_lif_mapping_ingress_lif1_to_global_lif_map_cbs ingress_lif1_to_global_lif_map;
    /**
     * Access struct for ingress_lif2_to_global_lif_map
     */
    lif_mngr_db_lif_mapping_ingress_lif2_to_global_lif_map_cbs ingress_lif2_to_global_lif_map;
    /**
     * Access struct for ingress_global_lif_to_lif_htb
     */
    lif_mngr_db_lif_mapping_ingress_global_lif_to_lif_htb_cbs ingress_global_lif_to_lif_htb;
    /**
     * Access struct for egress_lif_to_global_lif_map
     */
    lif_mngr_db_lif_mapping_egress_lif_to_global_lif_map_cbs egress_lif_to_global_lif_map;
    /**
     * Access struct for egress_global_lif_to_lif_htb
     */
    lif_mngr_db_lif_mapping_egress_global_lif_to_lif_htb_cbs egress_global_lif_to_lif_htb;
} lif_mngr_db_lif_mapping_cbs;

/**
 * This structure holds the access functions for the variable symmetric_global_lif
 */
typedef struct {
    lif_mngr_db_global_lif_allocation_symmetric_global_lif_set_cb set;
    lif_mngr_db_global_lif_allocation_symmetric_global_lif_get_cb get;
    lif_mngr_db_global_lif_allocation_symmetric_global_lif_create_cb create;
    lif_mngr_db_global_lif_allocation_symmetric_global_lif_allocate_single_cb allocate_single;
    lif_mngr_db_global_lif_allocation_symmetric_global_lif_free_single_cb free_single;
    lif_mngr_db_global_lif_allocation_symmetric_global_lif_is_allocated_cb is_allocated;
} lif_mngr_db_global_lif_allocation_symmetric_global_lif_cbs;

/**
 * This structure holds the access functions for the variable ingress_global_lif
 */
typedef struct {
    lif_mngr_db_global_lif_allocation_ingress_global_lif_set_cb set;
    lif_mngr_db_global_lif_allocation_ingress_global_lif_get_cb get;
    lif_mngr_db_global_lif_allocation_ingress_global_lif_create_cb create;
    lif_mngr_db_global_lif_allocation_ingress_global_lif_allocate_single_cb allocate_single;
    lif_mngr_db_global_lif_allocation_ingress_global_lif_free_single_cb free_single;
    lif_mngr_db_global_lif_allocation_ingress_global_lif_is_allocated_cb is_allocated;
} lif_mngr_db_global_lif_allocation_ingress_global_lif_cbs;

/**
 * This structure holds the access functions for the variable egress_global_lif
 */
typedef struct {
    lif_mngr_db_global_lif_allocation_egress_global_lif_set_cb set;
    lif_mngr_db_global_lif_allocation_egress_global_lif_get_cb get;
    lif_mngr_db_global_lif_allocation_egress_global_lif_create_cb create;
    lif_mngr_db_global_lif_allocation_egress_global_lif_allocate_single_cb allocate_single;
    lif_mngr_db_global_lif_allocation_egress_global_lif_free_single_cb free_single;
    lif_mngr_db_global_lif_allocation_egress_global_lif_is_allocated_cb is_allocated;
} lif_mngr_db_global_lif_allocation_egress_global_lif_cbs;

/**
 * This structure holds the access functions for the variable ingress_global_lif_counter
 */
typedef struct {
    lif_mngr_db_global_lif_allocation_ingress_global_lif_counter_set_cb set;
    lif_mngr_db_global_lif_allocation_ingress_global_lif_counter_get_cb get;
} lif_mngr_db_global_lif_allocation_ingress_global_lif_counter_cbs;

/**
 * This structure holds the access functions for the variable egress_global_lif_counter
 */
typedef struct {
    lif_mngr_db_global_lif_allocation_egress_global_lif_counter_set_cb set;
    lif_mngr_db_global_lif_allocation_egress_global_lif_counter_get_cb get;
} lif_mngr_db_global_lif_allocation_egress_global_lif_counter_cbs;

/**
 * This structure holds the access functions for the variable global_lif_symmetric_indication
 */
typedef struct {
    lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_alloc_bitmap_cb alloc_bitmap;
    lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_bit_set_cb bit_set;
    lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_bit_clear_cb bit_clear;
    lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_bit_get_cb bit_get;
} lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_cbs;

/**
 * This structure holds the access functions for the variable global_lif_allocation_info_t
 */
typedef struct {
    /**
     * Access struct for symmetric_global_lif
     */
    lif_mngr_db_global_lif_allocation_symmetric_global_lif_cbs symmetric_global_lif;
    /**
     * Access struct for ingress_global_lif
     */
    lif_mngr_db_global_lif_allocation_ingress_global_lif_cbs ingress_global_lif;
    /**
     * Access struct for egress_global_lif
     */
    lif_mngr_db_global_lif_allocation_egress_global_lif_cbs egress_global_lif;
    /**
     * Access struct for ingress_global_lif_counter
     */
    lif_mngr_db_global_lif_allocation_ingress_global_lif_counter_cbs ingress_global_lif_counter;
    /**
     * Access struct for egress_global_lif_counter
     */
    lif_mngr_db_global_lif_allocation_egress_global_lif_counter_cbs egress_global_lif_counter;
    /**
     * Access struct for global_lif_symmetric_indication
     */
    lif_mngr_db_global_lif_allocation_global_lif_symmetric_indication_cbs global_lif_symmetric_indication;
} lif_mngr_db_global_lif_allocation_cbs;

/**
 * This structure holds the access functions for the variable inlif_table_shared_by_cores
 */
typedef struct {
    lif_mngr_db_local_inlif_inlif_table_shared_by_cores_set_cb set;
    lif_mngr_db_local_inlif_inlif_table_shared_by_cores_get_cb get;
    lif_mngr_db_local_inlif_inlif_table_shared_by_cores_create_cb create;
    lif_mngr_db_local_inlif_inlif_table_shared_by_cores_allocate_single_cb allocate_single;
    lif_mngr_db_local_inlif_inlif_table_shared_by_cores_free_single_cb free_single;
    lif_mngr_db_local_inlif_inlif_table_shared_by_cores_is_allocated_cb is_allocated;
    lif_mngr_db_local_inlif_inlif_table_shared_by_cores_get_next_cb get_next;
    lif_mngr_db_local_inlif_inlif_table_shared_by_cores_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
} lif_mngr_db_local_inlif_inlif_table_shared_by_cores_cbs;

/**
 * This structure holds the access functions for the variable inlif_table_dedicated_per_core
 */
typedef struct {
    lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_set_cb set;
    lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_get_cb get;
    lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_alloc_cb alloc;
    lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_create_cb create;
    lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_allocate_single_cb allocate_single;
    lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_free_single_cb free_single;
    lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_is_allocated_cb is_allocated;
    lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_get_next_cb get_next;
    lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
} lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_cbs;

/**
 * This structure holds the access functions for the variable inlif_table_dpc_all_cores
 */
typedef struct {
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_set_cb set;
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_get_cb get;
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_create_cb create;
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_allocate_single_cb allocate_single;
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_free_single_cb free_single;
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_free_several_cb free_several;
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_is_allocated_cb is_allocated;
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_get_next_cb get_next;
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
} lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_cbs;

/**
 * This structure holds the access functions for the variable inlif_table_dpc_all_cores_indication
 */
typedef struct {
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_alloc_bitmap_cb alloc_bitmap;
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_bit_set_cb bit_set;
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_bit_clear_cb bit_clear;
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_bit_get_cb bit_get;
} lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_cbs;

/**
 * This structure holds the access functions for the variable local_inlif_allocation_info_t
 */
typedef struct {
    /**
     * Access struct for inlif_table_shared_by_cores
     */
    lif_mngr_db_local_inlif_inlif_table_shared_by_cores_cbs inlif_table_shared_by_cores;
    /**
     * Access struct for inlif_table_dedicated_per_core
     */
    lif_mngr_db_local_inlif_inlif_table_dedicated_per_core_cbs inlif_table_dedicated_per_core;
    /**
     * Access struct for inlif_table_dpc_all_cores
     */
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_cbs inlif_table_dpc_all_cores;
    /**
     * Access struct for inlif_table_dpc_all_cores_indication
     */
    lif_mngr_db_local_inlif_inlif_table_dpc_all_cores_indication_cbs inlif_table_dpc_all_cores_indication;
} lif_mngr_db_local_inlif_cbs;

/**
 * This structure holds the access functions for the variable egress_local_lif
 */
typedef struct {
    lif_mngr_db_egress_local_lif_set_cb set;
    lif_mngr_db_egress_local_lif_get_cb get;
    lif_mngr_db_egress_local_lif_alloc_cb alloc;
    lif_mngr_db_egress_local_lif_create_cb create;
    lif_mngr_db_egress_local_lif_allocate_single_cb allocate_single;
    lif_mngr_db_egress_local_lif_allocate_several_cb allocate_several;
    lif_mngr_db_egress_local_lif_free_several_cb free_several;
    lif_mngr_db_egress_local_lif_is_allocated_cb is_allocated;
    lif_mngr_db_egress_local_lif_nof_free_elements_get_cb nof_free_elements_get;
    lif_mngr_db_egress_local_lif_get_next_cb get_next;
    lif_mngr_db_egress_local_lif_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
    lif_mngr_db_egress_local_lif_advanced_algorithm_info_set_cb advanced_algorithm_info_set;
} lif_mngr_db_egress_local_lif_cbs;

/**
 * This structure holds the access functions for the variable ingress_lif_info_t
 */
typedef struct {
    lif_mngr_db_local_lif_info_ingress_lif1_set_cb set;
    lif_mngr_db_local_lif_info_ingress_lif1_get_cb get;
    lif_mngr_db_local_lif_info_ingress_lif1_alloc_cb alloc;
} lif_mngr_db_local_lif_info_ingress_lif1_cbs;

/**
 * This structure holds the access functions for the variable ingress_lif_info_t
 */
typedef struct {
    lif_mngr_db_local_lif_info_ingress_lif2_set_cb set;
    lif_mngr_db_local_lif_info_ingress_lif2_get_cb get;
    lif_mngr_db_local_lif_info_ingress_lif2_alloc_cb alloc;
} lif_mngr_db_local_lif_info_ingress_lif2_cbs;

/**
 * This structure holds the access functions for the variable egress_lif_htb
 */
typedef struct {
    lif_mngr_db_local_lif_info_egress_lif_htb_create_cb create;
    lif_mngr_db_local_lif_info_egress_lif_htb_find_cb find;
    lif_mngr_db_local_lif_info_egress_lif_htb_insert_cb insert;
    lif_mngr_db_local_lif_info_egress_lif_htb_get_next_cb get_next;
    lif_mngr_db_local_lif_info_egress_lif_htb_clear_cb clear;
    lif_mngr_db_local_lif_info_egress_lif_htb_delete_cb delete;
} lif_mngr_db_local_lif_info_egress_lif_htb_cbs;

/**
 * This structure holds the access functions for the variable lif_mngr_local_lif_info_t
 */
typedef struct {
    /**
     * Access struct for ingress_lif1
     */
    lif_mngr_db_local_lif_info_ingress_lif1_cbs ingress_lif1;
    /**
     * Access struct for ingress_lif2
     */
    lif_mngr_db_local_lif_info_ingress_lif2_cbs ingress_lif2;
    /**
     * Access struct for egress_lif_htb
     */
    lif_mngr_db_local_lif_info_egress_lif_htb_cbs egress_lif_htb;
} lif_mngr_db_local_lif_info_cbs;

/**
 * This structure holds the access functions for the variable lif_mngr_sw_state_t
 */
typedef struct {
    lif_mngr_db_is_init_cb is_init;
    lif_mngr_db_init_cb init;
    /**
     * Access struct for lif_mapping
     */
    lif_mngr_db_lif_mapping_cbs lif_mapping;
    /**
     * Access struct for global_lif_allocation
     */
    lif_mngr_db_global_lif_allocation_cbs global_lif_allocation;
    /**
     * Access struct for local_inlif
     */
    lif_mngr_db_local_inlif_cbs local_inlif;
    /**
     * Access struct for egress_local_lif
     */
    lif_mngr_db_egress_local_lif_cbs egress_local_lif;
    /**
     * Access struct for local_lif_info
     */
    lif_mngr_db_local_lif_info_cbs local_lif_info;
} lif_mngr_db_cbs;

/*
 * Global Variables
 */

/*
 * Global Variables
 */

extern lif_mngr_db_cbs lif_mngr_db;

#endif /* __LIF_MNGR_ACCESS_H__ */