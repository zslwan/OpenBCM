/** \file dnx/swstate/auto_generated/diagnostic/algo_trunk_commandline.c
 *
 * sw state functions definitions
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

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_SWSTATEDNX_GENERAL

#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/algo_trunk_diagnostic.h>
#include "algo_trunk_commandline.h"
#include <bcm_int/dnx/algo/swstate/auto_generated/access/algo_trunk_access.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_algo_trunk_cmds[] = {
    {"egress_trunk", NULL, sh_dnx_swstate_algo_trunk_egress_trunk_cmds, NULL, &dnx_swstate_algo_trunk_egress_trunk_man},
    {"pools", NULL, sh_dnx_swstate_algo_trunk_pools_cmds, NULL, &dnx_swstate_algo_trunk_pools_man},
    {"psc_profiles", NULL, sh_dnx_swstate_algo_trunk_psc_profiles_cmds, NULL, &dnx_swstate_algo_trunk_psc_profiles_man},
    {"dump", sh_dnx_swstate_algo_trunk_dump_cmd, NULL, dnx_swstate_algo_trunk_dump_options, &dnx_swstate_algo_trunk_dump_man},
    {"size_get", sh_dnx_swstate_algo_trunk_size_get_cmd, NULL, dnx_swstate_algo_trunk_size_get_options, &dnx_swstate_algo_trunk_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_trunk_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_trunk_diagnostic_operation_counters_options, &dnx_swstate_algo_trunk_diagnostic_operation_counters_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_algo_trunk_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    algo_trunk_db.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(algo_trunk_db_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_dump_man = {
    "swstate algo_trunk dump",
    "print the module's content",
    "swstate algo_trunk dump",
    "swstate algo_trunk dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_trunk_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_size_get_man = {
    "swstate algo_trunk size_get",
    "print the module's size",
    "swstate algo_trunk size_get",
    "swstate algo_trunk size_get",
};


shr_error_e sh_dnx_swstate_algo_trunk_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{


    SHR_FUNC_INIT_VARS(unit);

    dnx_sw_state_diagnostic_operation_counters_print(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_diagnostic_operation_counters_man = {
    "swstate algo_trunk diagnostic_operation_counters",
    "print the module's diagnostic operation counters",
    "swstate algo_trunk diagnostic_operation_counters",
    "swstate algo_trunk diagnostic_operation_counters",
};


sh_sand_man_t dnx_swstate_algo_trunk_man = {
    cmd_dnx_swstate_algo_trunk_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_trunk_desc[] = "swstate algo_trunk commands";



sh_sand_cmd_t sh_dnx_swstate_algo_trunk_egress_trunk_cmds[] = {
    {"dump", sh_dnx_swstate_algo_trunk_egress_trunk_dump_cmd, NULL, dnx_swstate_algo_trunk_egress_trunk_dump_options, &dnx_swstate_algo_trunk_egress_trunk_dump_man},
    {"size_get", sh_dnx_swstate_algo_trunk_egress_trunk_size_get_cmd, NULL, dnx_swstate_algo_trunk_egress_trunk_size_get_options, &dnx_swstate_algo_trunk_egress_trunk_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_trunk_egress_trunk_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_trunk_egress_trunk_diagnostic_operation_counters_options, &dnx_swstate_algo_trunk_egress_trunk_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_egress_trunk_man = {
    cmd_dnx_swstate_algo_trunk_egress_trunk_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_trunk_egress_trunk_desc[] = "algo_trunk_db egress_trunk commands";


shr_error_e sh_dnx_swstate_algo_trunk_egress_trunk_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_trunk_db_egress_trunk_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_egress_trunk_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_egress_trunk_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_trunk_db egress_trunk dump []\n",
    "algo_trunk_db egress_trunk dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_trunk_egress_trunk_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~EGRESS_TRUNK~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_egress_trunk_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_egress_trunk_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_trunk_db egress_trunk size_get",
    "algo_trunk_db egress_trunk size_get",
};


shr_error_e sh_dnx_swstate_algo_trunk_egress_trunk_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~EGRESS_TRUNK~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_egress_trunk_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_egress_trunk_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "algo_trunk_db egress_trunk diagnostic_operation_counters",
    "algo_trunk_db egress_trunk diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_algo_trunk_pools_cmds[] = {
    {"groups", NULL, sh_dnx_swstate_algo_trunk_pools_groups_cmds, NULL, &dnx_swstate_algo_trunk_pools_groups_man},
    {"dump", sh_dnx_swstate_algo_trunk_pools_dump_cmd, NULL, dnx_swstate_algo_trunk_pools_dump_options, &dnx_swstate_algo_trunk_pools_dump_man},
    {"size_get", sh_dnx_swstate_algo_trunk_pools_size_get_cmd, NULL, dnx_swstate_algo_trunk_pools_size_get_options, &dnx_swstate_algo_trunk_pools_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_trunk_pools_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_trunk_pools_diagnostic_operation_counters_options, &dnx_swstate_algo_trunk_pools_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_man = {
    cmd_dnx_swstate_algo_trunk_pools_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_trunk_pools_desc[] = "algo_trunk_db pools commands";


shr_error_e sh_dnx_swstate_algo_trunk_pools_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  pools_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("pools_idx_0", pools_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_trunk_db_pools_dump(unit, pools_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_pools_dump_options[] = {
    {"pools_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_trunk_db pools dump [,pools_idx_0=<int>]\n",
    "algo_trunk_db pools dump pools_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_trunk_pools_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~POOLS~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_pools_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_trunk_db pools size_get",
    "algo_trunk_db pools size_get",
};


shr_error_e sh_dnx_swstate_algo_trunk_pools_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~POOLS~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_pools_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "algo_trunk_db pools diagnostic_operation_counters",
    "algo_trunk_db pools diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_algo_trunk_pools_groups_cmds[] = {
    {"spa_id_manager", NULL, sh_dnx_swstate_algo_trunk_pools_groups_spa_id_manager_cmds, NULL, &dnx_swstate_algo_trunk_pools_groups_spa_id_manager_man},
    {"tm_index_manager", NULL, sh_dnx_swstate_algo_trunk_pools_groups_tm_index_manager_cmds, NULL, &dnx_swstate_algo_trunk_pools_groups_tm_index_manager_man},
    {"dump", sh_dnx_swstate_algo_trunk_pools_groups_dump_cmd, NULL, dnx_swstate_algo_trunk_pools_groups_dump_options, &dnx_swstate_algo_trunk_pools_groups_dump_man},
    {"size_get", sh_dnx_swstate_algo_trunk_pools_groups_size_get_cmd, NULL, dnx_swstate_algo_trunk_pools_groups_size_get_options, &dnx_swstate_algo_trunk_pools_groups_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_trunk_pools_groups_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_trunk_pools_groups_diagnostic_operation_counters_options, &dnx_swstate_algo_trunk_pools_groups_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_groups_man = {
    cmd_dnx_swstate_algo_trunk_pools_groups_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_trunk_pools_groups_desc[] = "algo_trunk_db pools groups commands";


shr_error_e sh_dnx_swstate_algo_trunk_pools_groups_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  pools_idx_0 = 0;
    int  groups_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("pools_idx_0", pools_idx_0);
    SH_SAND_GET_INT32("groups_idx_0", groups_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_trunk_db_pools_groups_dump(unit, pools_idx_0, groups_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_pools_groups_dump_options[] = {
    {"pools_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"groups_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_groups_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_trunk_db pools groups dump [,pools_idx_0=<int>,groups_idx_0=<int>]\n",
    "algo_trunk_db pools groups dump pools_idx_0=0 groups_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_trunk_pools_groups_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~POOLS~GROUPS~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_pools_groups_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_groups_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_trunk_db pools groups size_get",
    "algo_trunk_db pools groups size_get",
};


shr_error_e sh_dnx_swstate_algo_trunk_pools_groups_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~POOLS~GROUPS~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_pools_groups_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_groups_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "algo_trunk_db pools groups diagnostic_operation_counters",
    "algo_trunk_db pools groups diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_algo_trunk_pools_groups_spa_id_manager_cmds[] = {
    {"dump", sh_dnx_swstate_algo_trunk_pools_groups_spa_id_manager_dump_cmd, NULL, dnx_swstate_algo_trunk_pools_groups_spa_id_manager_dump_options, &dnx_swstate_algo_trunk_pools_groups_spa_id_manager_dump_man},
    {"size_get", sh_dnx_swstate_algo_trunk_pools_groups_spa_id_manager_size_get_cmd, NULL, dnx_swstate_algo_trunk_pools_groups_spa_id_manager_size_get_options, &dnx_swstate_algo_trunk_pools_groups_spa_id_manager_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_trunk_pools_groups_spa_id_manager_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_trunk_pools_groups_spa_id_manager_diagnostic_operation_counters_options, &dnx_swstate_algo_trunk_pools_groups_spa_id_manager_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_groups_spa_id_manager_man = {
    cmd_dnx_swstate_algo_trunk_pools_groups_spa_id_manager_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_trunk_pools_groups_spa_id_manager_desc[] = "algo_trunk_db pools groups spa_id_manager commands";


shr_error_e sh_dnx_swstate_algo_trunk_pools_groups_spa_id_manager_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  pools_idx_0 = 0;
    int  groups_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("pools_idx_0", pools_idx_0);
    SH_SAND_GET_INT32("groups_idx_0", groups_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_trunk_db_pools_groups_spa_id_manager_dump(unit, pools_idx_0, groups_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_pools_groups_spa_id_manager_dump_options[] = {
    {"pools_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"groups_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_groups_spa_id_manager_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_trunk_db pools groups spa_id_manager dump [,pools_idx_0=<int>,groups_idx_0=<int>]\n",
    "algo_trunk_db pools groups spa_id_manager dump pools_idx_0=0 groups_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_trunk_pools_groups_spa_id_manager_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~POOLS~GROUPS~SPA_ID_MANAGER~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_pools_groups_spa_id_manager_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_groups_spa_id_manager_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_trunk_db pools groups spa_id_manager size_get",
    "algo_trunk_db pools groups spa_id_manager size_get",
};


shr_error_e sh_dnx_swstate_algo_trunk_pools_groups_spa_id_manager_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~POOLS~GROUPS~SPA_ID_MANAGER~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_pools_groups_spa_id_manager_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_groups_spa_id_manager_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "algo_trunk_db pools groups spa_id_manager diagnostic_operation_counters",
    "algo_trunk_db pools groups spa_id_manager diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_algo_trunk_pools_groups_tm_index_manager_cmds[] = {
    {"dump", sh_dnx_swstate_algo_trunk_pools_groups_tm_index_manager_dump_cmd, NULL, dnx_swstate_algo_trunk_pools_groups_tm_index_manager_dump_options, &dnx_swstate_algo_trunk_pools_groups_tm_index_manager_dump_man},
    {"size_get", sh_dnx_swstate_algo_trunk_pools_groups_tm_index_manager_size_get_cmd, NULL, dnx_swstate_algo_trunk_pools_groups_tm_index_manager_size_get_options, &dnx_swstate_algo_trunk_pools_groups_tm_index_manager_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_trunk_pools_groups_tm_index_manager_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_trunk_pools_groups_tm_index_manager_diagnostic_operation_counters_options, &dnx_swstate_algo_trunk_pools_groups_tm_index_manager_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_groups_tm_index_manager_man = {
    cmd_dnx_swstate_algo_trunk_pools_groups_tm_index_manager_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_trunk_pools_groups_tm_index_manager_desc[] = "algo_trunk_db pools groups tm_index_manager commands";


shr_error_e sh_dnx_swstate_algo_trunk_pools_groups_tm_index_manager_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  pools_idx_0 = 0;
    int  groups_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("pools_idx_0", pools_idx_0);
    SH_SAND_GET_INT32("groups_idx_0", groups_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_trunk_db_pools_groups_tm_index_manager_dump(unit, pools_idx_0, groups_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_pools_groups_tm_index_manager_dump_options[] = {
    {"pools_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"groups_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_groups_tm_index_manager_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_trunk_db pools groups tm_index_manager dump [,pools_idx_0=<int>,groups_idx_0=<int>]\n",
    "algo_trunk_db pools groups tm_index_manager dump pools_idx_0=0 groups_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_trunk_pools_groups_tm_index_manager_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~POOLS~GROUPS~TM_INDEX_MANAGER~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_pools_groups_tm_index_manager_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_groups_tm_index_manager_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_trunk_db pools groups tm_index_manager size_get",
    "algo_trunk_db pools groups tm_index_manager size_get",
};


shr_error_e sh_dnx_swstate_algo_trunk_pools_groups_tm_index_manager_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~POOLS~GROUPS~TM_INDEX_MANAGER~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_pools_groups_tm_index_manager_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_pools_groups_tm_index_manager_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "algo_trunk_db pools groups tm_index_manager diagnostic_operation_counters",
    "algo_trunk_db pools groups tm_index_manager diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_algo_trunk_psc_profiles_cmds[] = {
    {"dump", sh_dnx_swstate_algo_trunk_psc_profiles_dump_cmd, NULL, dnx_swstate_algo_trunk_psc_profiles_dump_options, &dnx_swstate_algo_trunk_psc_profiles_dump_man},
    {"size_get", sh_dnx_swstate_algo_trunk_psc_profiles_size_get_cmd, NULL, dnx_swstate_algo_trunk_psc_profiles_size_get_options, &dnx_swstate_algo_trunk_psc_profiles_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_trunk_psc_profiles_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_trunk_psc_profiles_diagnostic_operation_counters_options, &dnx_swstate_algo_trunk_psc_profiles_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_psc_profiles_man = {
    cmd_dnx_swstate_algo_trunk_psc_profiles_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_trunk_psc_profiles_desc[] = "algo_trunk_db psc_profiles commands";


shr_error_e sh_dnx_swstate_algo_trunk_psc_profiles_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_trunk_db_psc_profiles_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_psc_profiles_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_psc_profiles_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_trunk_db psc_profiles dump []\n",
    "algo_trunk_db psc_profiles dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_trunk_psc_profiles_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~PSC_PROFILES~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_psc_profiles_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_psc_profiles_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_trunk_db psc_profiles size_get",
    "algo_trunk_db psc_profiles size_get",
};


shr_error_e sh_dnx_swstate_algo_trunk_psc_profiles_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(algo_trunk_db_info[unit], algo_trunk_db_layout_str, ALGO_TRUNK_DB_INFO_NOF_ENTRIES, "ALGO_TRUNK_DB~PSC_PROFILES~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_trunk_psc_profiles_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_trunk_psc_profiles_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "algo_trunk_db psc_profiles diagnostic_operation_counters",
    "algo_trunk_db psc_profiles diagnostic_operation_counters",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE