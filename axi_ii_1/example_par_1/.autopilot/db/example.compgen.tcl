# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 2336
set hasByteEnable 0
set MemName example_node_attryd2_memcore
set CoreName ap_simcore_mem
set PortList { 2 2 }
set DataWd 14
set AddrRange 60
set AddrWd 6
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 0.594
set ClkPeriod 5
set RegisteredInput 0
set memSimGenFunc ap_gen_simcore_mem
set memImplGenFunc ::AESL_LIB_VIRTEX::xil_gen_RAM
eval "set memGenArgs  { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "

set Depth 2
set FullThresh 0
set CoreName ap_simcore_mem_df_channel
set MemName example_node_attryd2
if {${::AESL::PGuard_autocg_gen} || ${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem_df_channel] == "ap_gen_simcore_mem_df_channel"} {
    eval "ap_gen_simcore_mem_df_channel { \
    id ${ID} \
    name ${MemName} \
    memcorename ${MemName}_memcore \
    corename ${CoreName} \
    op mem_df_channel \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage} \
    max_latency ${MaxLatency} \
    registered_input ${RegisteredInput} \
    port_num 2 \
    use_pre_full 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    memSimGenFunc $memSimGenFunc\
    memImplGenFunc $memImplGenFunc\
    memGenArgs \{$memGenArgs\} \
} "
} else {
puts "@W \[IMPL-105\] Cannot find ap_gen_simcore_mem_df_channel, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 2337
set hasByteEnable 0
set MemName example_layer11_ogqb_memcore
set CoreName ap_simcore_mem
set PortList { 2 0 }
set DataWd 7
set AddrRange 120
set AddrWd 7
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 0.626375
set ClkPeriod 5
set RegisteredInput 0
set memSimGenFunc ap_gen_simcore_mem
set memImplGenFunc ::AESL_LIB_VIRTEX::xil_gen_RAM
eval "set memGenArgs  { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "

set Depth 2
set FullThresh 0
set CoreName ap_simcore_mem_df_channel
set MemName example_layer11_ogqb
if {${::AESL::PGuard_autocg_gen} || ${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem_df_channel] == "ap_gen_simcore_mem_df_channel"} {
    eval "ap_gen_simcore_mem_df_channel { \
    id ${ID} \
    name ${MemName} \
    memcorename ${MemName}_memcore \
    corename ${CoreName} \
    op mem_df_channel \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage} \
    max_latency ${MaxLatency} \
    registered_input ${RegisteredInput} \
    port_num 2 \
    use_pre_full 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    memSimGenFunc $memSimGenFunc\
    memImplGenFunc $memImplGenFunc\
    memGenArgs \{$memGenArgs\} \
} "
} else {
puts "@W \[IMPL-105\] Cannot find ap_gen_simcore_mem_df_channel, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 2338
set hasByteEnable 0
set MemName example_node_attrgDb_memcore
set CoreName ap_simcore_mem
set PortList { 2 1 }
set DataWd 14
set AddrRange 60
set AddrWd 6
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 0.594
set ClkPeriod 5
set RegisteredInput 0
set memSimGenFunc ap_gen_simcore_mem
set memImplGenFunc ::AESL_LIB_VIRTEX::xil_gen_RAM
eval "set memGenArgs  { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "

set Depth 2
set FullThresh 0
set CoreName ap_simcore_mem_df_channel
set MemName example_node_attrgDb
if {${::AESL::PGuard_autocg_gen} || ${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem_df_channel] == "ap_gen_simcore_mem_df_channel"} {
    eval "ap_gen_simcore_mem_df_channel { \
    id ${ID} \
    name ${MemName} \
    memcorename ${MemName}_memcore \
    corename ${CoreName} \
    op mem_df_channel \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage} \
    max_latency ${MaxLatency} \
    registered_input ${RegisteredInput} \
    port_num 2 \
    use_pre_full 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    memSimGenFunc $memSimGenFunc\
    memImplGenFunc $memImplGenFunc\
    memGenArgs \{$memGenArgs\} \
} "
} else {
puts "@W \[IMPL-105\] Cannot find ap_gen_simcore_mem_df_channel, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 2339
set hasByteEnable 0
set MemName example_edge_attrhab_memcore
set CoreName ap_simcore_mem
set PortList { 2 1 }
set DataWd 14
set AddrRange 120
set AddrWd 7
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.158
set ClkPeriod 5
set RegisteredInput 0
set memSimGenFunc ap_gen_simcore_mem
set memImplGenFunc ::AESL_LIB_VIRTEX::xil_gen_RAM
eval "set memGenArgs  { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "

set Depth 2
set FullThresh 0
set CoreName ap_simcore_mem_df_channel
set MemName example_edge_attrhab
if {${::AESL::PGuard_autocg_gen} || ${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem_df_channel] == "ap_gen_simcore_mem_df_channel"} {
    eval "ap_gen_simcore_mem_df_channel { \
    id ${ID} \
    name ${MemName} \
    memcorename ${MemName}_memcore \
    corename ${CoreName} \
    op mem_df_channel \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage} \
    max_latency ${MaxLatency} \
    registered_input ${RegisteredInput} \
    port_num 2 \
    use_pre_full 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    memSimGenFunc $memSimGenFunc\
    memImplGenFunc $memImplGenFunc\
    memGenArgs \{$memGenArgs\} \
} "
} else {
puts "@W \[IMPL-105\] Cannot find ap_gen_simcore_mem_df_channel, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 2340
set hasByteEnable 0
set MemName example_node_attriXb_x_memcore
set CoreName ap_simcore_mem
set PortList { 2 0 }
set DataWd 14
set AddrRange 60
set AddrWd 6
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 0.594
set ClkPeriod 5
set RegisteredInput 0
set memSimGenFunc ap_gen_simcore_mem
set memImplGenFunc ::AESL_LIB_VIRTEX::xil_gen_RAM
eval "set memGenArgs  { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "

set Depth 2
set FullThresh 0
set CoreName ap_simcore_mem_df_channel
set MemName example_node_attriXb_x
if {${::AESL::PGuard_autocg_gen} || ${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem_df_channel] == "ap_gen_simcore_mem_df_channel"} {
    eval "ap_gen_simcore_mem_df_channel { \
    id ${ID} \
    name ${MemName} \
    memcorename ${MemName}_memcore \
    corename ${CoreName} \
    op mem_df_channel \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage} \
    max_latency ${MaxLatency} \
    registered_input ${RegisteredInput} \
    port_num 2 \
    use_pre_full 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    memSimGenFunc $memSimGenFunc\
    memImplGenFunc $memImplGenFunc\
    memGenArgs \{$memGenArgs\} \
} "
} else {
puts "@W \[IMPL-105\] Cannot find ap_gen_simcore_mem_df_channel, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 2341
set hasByteEnable 0
set MemName example_edge_indejub_memcore
set CoreName ap_simcore_mem
set PortList { 2 2 }
set DataWd 14
set AddrRange 120
set AddrWd 7
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.158
set ClkPeriod 5
set RegisteredInput 0
set memSimGenFunc ap_gen_simcore_mem
set memImplGenFunc ::AESL_LIB_VIRTEX::xil_gen_RAM
eval "set memGenArgs  { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "

set Depth 2
set FullThresh 0
set CoreName ap_simcore_mem_df_channel
set MemName example_edge_indejub
if {${::AESL::PGuard_autocg_gen} || ${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem_df_channel] == "ap_gen_simcore_mem_df_channel"} {
    eval "ap_gen_simcore_mem_df_channel { \
    id ${ID} \
    name ${MemName} \
    memcorename ${MemName}_memcore \
    corename ${CoreName} \
    op mem_df_channel \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage} \
    max_latency ${MaxLatency} \
    registered_input ${RegisteredInput} \
    port_num 2 \
    use_pre_full 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    memSimGenFunc $memSimGenFunc\
    memImplGenFunc $memImplGenFunc\
    memGenArgs \{$memGenArgs\} \
} "
} else {
puts "@W \[IMPL-105\] Cannot find ap_gen_simcore_mem_df_channel, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

set axilite_register_dict [dict create]
# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2342 \
    name node_attr_mat_s_V_V \
    reset_level 0 \
    sync_rst true \
    dir I \
    corename node_attr_mat_s_V_V \
    op interface \
    ports { node_attr_mat_s_V_V_address0 { O 4 vector } node_attr_mat_s_V_V_ce0 { O 1 bit } node_attr_mat_s_V_V_d0 { O 14 vector } node_attr_mat_s_V_V_q0 { I 14 vector } node_attr_mat_s_V_V_we0 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_mat_s_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2421 \
    name layer11_out_s_0_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_0_V_V_TDATA { O 16 vector } layer11_out_s_0_V_V_TVALID { O 1 bit } layer11_out_s_0_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_0_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2422 \
    name layer11_out_s_1_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_1_V_V_TDATA { O 16 vector } layer11_out_s_1_V_V_TVALID { O 1 bit } layer11_out_s_1_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_1_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2423 \
    name layer11_out_s_2_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_2_V_V_TDATA { O 16 vector } layer11_out_s_2_V_V_TVALID { O 1 bit } layer11_out_s_2_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_2_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2424 \
    name layer11_out_s_3_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_3_V_V_TDATA { O 16 vector } layer11_out_s_3_V_V_TVALID { O 1 bit } layer11_out_s_3_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_3_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2425 \
    name layer11_out_s_4_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_4_V_V_TDATA { O 16 vector } layer11_out_s_4_V_V_TVALID { O 1 bit } layer11_out_s_4_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_4_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2426 \
    name layer11_out_s_5_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_5_V_V_TDATA { O 16 vector } layer11_out_s_5_V_V_TVALID { O 1 bit } layer11_out_s_5_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_5_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2427 \
    name layer11_out_s_6_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_6_V_V_TDATA { O 16 vector } layer11_out_s_6_V_V_TVALID { O 1 bit } layer11_out_s_6_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_6_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2428 \
    name layer11_out_s_7_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_7_V_V_TDATA { O 16 vector } layer11_out_s_7_V_V_TVALID { O 1 bit } layer11_out_s_7_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_7_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2429 \
    name layer11_out_s_8_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_8_V_V_TDATA { O 16 vector } layer11_out_s_8_V_V_TVALID { O 1 bit } layer11_out_s_8_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_8_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2430 \
    name layer11_out_s_9_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_9_V_V_TDATA { O 16 vector } layer11_out_s_9_V_V_TVALID { O 1 bit } layer11_out_s_9_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_9_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2431 \
    name layer11_out_s_10_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_10_V_V_TDATA { O 16 vector } layer11_out_s_10_V_V_TVALID { O 1 bit } layer11_out_s_10_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_10_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2432 \
    name layer11_out_s_11_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_11_V_V_TDATA { O 16 vector } layer11_out_s_11_V_V_TVALID { O 1 bit } layer11_out_s_11_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_11_V_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 2433 \
    name layer11_out_s_12_V_V \
    reset_level 0 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { layer11_out_s_12_V_V_TDATA { O 16 vector } layer11_out_s_12_V_V_TVALID { O 1 bit } layer11_out_s_12_V_V_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_s_12_V_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2343 \
    name edge_attr_mat_s_0_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_0_V_V \
    op interface \
    ports { edge_attr_mat_s_0_V_V_dout { I 14 vector } edge_attr_mat_s_0_V_V_empty_n { I 1 bit } edge_attr_mat_s_0_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2344 \
    name edge_attr_mat_s_1_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_1_V_V \
    op interface \
    ports { edge_attr_mat_s_1_V_V_dout { I 14 vector } edge_attr_mat_s_1_V_V_empty_n { I 1 bit } edge_attr_mat_s_1_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2345 \
    name edge_attr_mat_s_2_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_2_V_V \
    op interface \
    ports { edge_attr_mat_s_2_V_V_dout { I 14 vector } edge_attr_mat_s_2_V_V_empty_n { I 1 bit } edge_attr_mat_s_2_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2346 \
    name edge_attr_mat_s_3_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_3_V_V \
    op interface \
    ports { edge_attr_mat_s_3_V_V_dout { I 14 vector } edge_attr_mat_s_3_V_V_empty_n { I 1 bit } edge_attr_mat_s_3_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2347 \
    name edge_attr_mat_s_4_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_4_V_V \
    op interface \
    ports { edge_attr_mat_s_4_V_V_dout { I 14 vector } edge_attr_mat_s_4_V_V_empty_n { I 1 bit } edge_attr_mat_s_4_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2348 \
    name edge_attr_mat_s_5_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_5_V_V \
    op interface \
    ports { edge_attr_mat_s_5_V_V_dout { I 14 vector } edge_attr_mat_s_5_V_V_empty_n { I 1 bit } edge_attr_mat_s_5_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2349 \
    name edge_attr_mat_s_6_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_6_V_V \
    op interface \
    ports { edge_attr_mat_s_6_V_V_dout { I 14 vector } edge_attr_mat_s_6_V_V_empty_n { I 1 bit } edge_attr_mat_s_6_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2350 \
    name edge_attr_mat_s_7_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_7_V_V \
    op interface \
    ports { edge_attr_mat_s_7_V_V_dout { I 14 vector } edge_attr_mat_s_7_V_V_empty_n { I 1 bit } edge_attr_mat_s_7_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2351 \
    name edge_attr_mat_s_8_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_8_V_V \
    op interface \
    ports { edge_attr_mat_s_8_V_V_dout { I 14 vector } edge_attr_mat_s_8_V_V_empty_n { I 1 bit } edge_attr_mat_s_8_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2352 \
    name edge_attr_mat_s_9_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_9_V_V \
    op interface \
    ports { edge_attr_mat_s_9_V_V_dout { I 14 vector } edge_attr_mat_s_9_V_V_empty_n { I 1 bit } edge_attr_mat_s_9_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2353 \
    name edge_attr_mat_s_10_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_10_V_V \
    op interface \
    ports { edge_attr_mat_s_10_V_V_dout { I 14 vector } edge_attr_mat_s_10_V_V_empty_n { I 1 bit } edge_attr_mat_s_10_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2354 \
    name edge_attr_mat_s_11_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_11_V_V \
    op interface \
    ports { edge_attr_mat_s_11_V_V_dout { I 14 vector } edge_attr_mat_s_11_V_V_empty_n { I 1 bit } edge_attr_mat_s_11_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2355 \
    name edge_attr_mat_s_12_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_12_V_V \
    op interface \
    ports { edge_attr_mat_s_12_V_V_dout { I 14 vector } edge_attr_mat_s_12_V_V_empty_n { I 1 bit } edge_attr_mat_s_12_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2356 \
    name edge_attr_mat_s_13_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_13_V_V \
    op interface \
    ports { edge_attr_mat_s_13_V_V_dout { I 14 vector } edge_attr_mat_s_13_V_V_empty_n { I 1 bit } edge_attr_mat_s_13_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2357 \
    name edge_attr_mat_s_14_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_14_V_V \
    op interface \
    ports { edge_attr_mat_s_14_V_V_dout { I 14 vector } edge_attr_mat_s_14_V_V_empty_n { I 1 bit } edge_attr_mat_s_14_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2358 \
    name edge_attr_mat_s_15_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_15_V_V \
    op interface \
    ports { edge_attr_mat_s_15_V_V_dout { I 14 vector } edge_attr_mat_s_15_V_V_empty_n { I 1 bit } edge_attr_mat_s_15_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2359 \
    name edge_attr_mat_s_16_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_16_V_V \
    op interface \
    ports { edge_attr_mat_s_16_V_V_dout { I 14 vector } edge_attr_mat_s_16_V_V_empty_n { I 1 bit } edge_attr_mat_s_16_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2360 \
    name edge_attr_mat_s_17_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_17_V_V \
    op interface \
    ports { edge_attr_mat_s_17_V_V_dout { I 14 vector } edge_attr_mat_s_17_V_V_empty_n { I 1 bit } edge_attr_mat_s_17_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2361 \
    name edge_attr_mat_s_18_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_18_V_V \
    op interface \
    ports { edge_attr_mat_s_18_V_V_dout { I 14 vector } edge_attr_mat_s_18_V_V_empty_n { I 1 bit } edge_attr_mat_s_18_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2362 \
    name edge_attr_mat_s_19_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_19_V_V \
    op interface \
    ports { edge_attr_mat_s_19_V_V_dout { I 14 vector } edge_attr_mat_s_19_V_V_empty_n { I 1 bit } edge_attr_mat_s_19_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2363 \
    name edge_attr_mat_s_20_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_20_V_V \
    op interface \
    ports { edge_attr_mat_s_20_V_V_dout { I 14 vector } edge_attr_mat_s_20_V_V_empty_n { I 1 bit } edge_attr_mat_s_20_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2364 \
    name edge_attr_mat_s_21_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_21_V_V \
    op interface \
    ports { edge_attr_mat_s_21_V_V_dout { I 14 vector } edge_attr_mat_s_21_V_V_empty_n { I 1 bit } edge_attr_mat_s_21_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2365 \
    name edge_attr_mat_s_22_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_22_V_V \
    op interface \
    ports { edge_attr_mat_s_22_V_V_dout { I 14 vector } edge_attr_mat_s_22_V_V_empty_n { I 1 bit } edge_attr_mat_s_22_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2366 \
    name edge_attr_mat_s_23_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_23_V_V \
    op interface \
    ports { edge_attr_mat_s_23_V_V_dout { I 14 vector } edge_attr_mat_s_23_V_V_empty_n { I 1 bit } edge_attr_mat_s_23_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2367 \
    name edge_attr_mat_s_24_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_24_V_V \
    op interface \
    ports { edge_attr_mat_s_24_V_V_dout { I 14 vector } edge_attr_mat_s_24_V_V_empty_n { I 1 bit } edge_attr_mat_s_24_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2368 \
    name edge_attr_mat_s_25_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_25_V_V \
    op interface \
    ports { edge_attr_mat_s_25_V_V_dout { I 14 vector } edge_attr_mat_s_25_V_V_empty_n { I 1 bit } edge_attr_mat_s_25_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2369 \
    name edge_attr_mat_s_26_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_26_V_V \
    op interface \
    ports { edge_attr_mat_s_26_V_V_dout { I 14 vector } edge_attr_mat_s_26_V_V_empty_n { I 1 bit } edge_attr_mat_s_26_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2370 \
    name edge_attr_mat_s_27_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_27_V_V \
    op interface \
    ports { edge_attr_mat_s_27_V_V_dout { I 14 vector } edge_attr_mat_s_27_V_V_empty_n { I 1 bit } edge_attr_mat_s_27_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2371 \
    name edge_attr_mat_s_28_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_28_V_V \
    op interface \
    ports { edge_attr_mat_s_28_V_V_dout { I 14 vector } edge_attr_mat_s_28_V_V_empty_n { I 1 bit } edge_attr_mat_s_28_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2372 \
    name edge_attr_mat_s_29_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_29_V_V \
    op interface \
    ports { edge_attr_mat_s_29_V_V_dout { I 14 vector } edge_attr_mat_s_29_V_V_empty_n { I 1 bit } edge_attr_mat_s_29_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2373 \
    name edge_attr_mat_s_30_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_30_V_V \
    op interface \
    ports { edge_attr_mat_s_30_V_V_dout { I 14 vector } edge_attr_mat_s_30_V_V_empty_n { I 1 bit } edge_attr_mat_s_30_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2374 \
    name edge_attr_mat_s_31_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_31_V_V \
    op interface \
    ports { edge_attr_mat_s_31_V_V_dout { I 14 vector } edge_attr_mat_s_31_V_V_empty_n { I 1 bit } edge_attr_mat_s_31_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2375 \
    name edge_attr_mat_s_32_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_32_V_V \
    op interface \
    ports { edge_attr_mat_s_32_V_V_dout { I 14 vector } edge_attr_mat_s_32_V_V_empty_n { I 1 bit } edge_attr_mat_s_32_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2376 \
    name edge_attr_mat_s_33_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_33_V_V \
    op interface \
    ports { edge_attr_mat_s_33_V_V_dout { I 14 vector } edge_attr_mat_s_33_V_V_empty_n { I 1 bit } edge_attr_mat_s_33_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2377 \
    name edge_attr_mat_s_34_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_34_V_V \
    op interface \
    ports { edge_attr_mat_s_34_V_V_dout { I 14 vector } edge_attr_mat_s_34_V_V_empty_n { I 1 bit } edge_attr_mat_s_34_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2378 \
    name edge_attr_mat_s_35_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_35_V_V \
    op interface \
    ports { edge_attr_mat_s_35_V_V_dout { I 14 vector } edge_attr_mat_s_35_V_V_empty_n { I 1 bit } edge_attr_mat_s_35_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2379 \
    name edge_attr_mat_s_36_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_36_V_V \
    op interface \
    ports { edge_attr_mat_s_36_V_V_dout { I 14 vector } edge_attr_mat_s_36_V_V_empty_n { I 1 bit } edge_attr_mat_s_36_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2380 \
    name edge_attr_mat_s_37_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_37_V_V \
    op interface \
    ports { edge_attr_mat_s_37_V_V_dout { I 14 vector } edge_attr_mat_s_37_V_V_empty_n { I 1 bit } edge_attr_mat_s_37_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2381 \
    name edge_attr_mat_s_38_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_38_V_V \
    op interface \
    ports { edge_attr_mat_s_38_V_V_dout { I 14 vector } edge_attr_mat_s_38_V_V_empty_n { I 1 bit } edge_attr_mat_s_38_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2382 \
    name edge_attr_mat_s_39_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_39_V_V \
    op interface \
    ports { edge_attr_mat_s_39_V_V_dout { I 14 vector } edge_attr_mat_s_39_V_V_empty_n { I 1 bit } edge_attr_mat_s_39_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2383 \
    name edge_attr_mat_s_40_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_40_V_V \
    op interface \
    ports { edge_attr_mat_s_40_V_V_dout { I 14 vector } edge_attr_mat_s_40_V_V_empty_n { I 1 bit } edge_attr_mat_s_40_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2384 \
    name edge_attr_mat_s_41_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_41_V_V \
    op interface \
    ports { edge_attr_mat_s_41_V_V_dout { I 14 vector } edge_attr_mat_s_41_V_V_empty_n { I 1 bit } edge_attr_mat_s_41_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2385 \
    name edge_attr_mat_s_42_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_42_V_V \
    op interface \
    ports { edge_attr_mat_s_42_V_V_dout { I 14 vector } edge_attr_mat_s_42_V_V_empty_n { I 1 bit } edge_attr_mat_s_42_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2386 \
    name edge_attr_mat_s_43_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_43_V_V \
    op interface \
    ports { edge_attr_mat_s_43_V_V_dout { I 14 vector } edge_attr_mat_s_43_V_V_empty_n { I 1 bit } edge_attr_mat_s_43_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2387 \
    name edge_attr_mat_s_44_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_44_V_V \
    op interface \
    ports { edge_attr_mat_s_44_V_V_dout { I 14 vector } edge_attr_mat_s_44_V_V_empty_n { I 1 bit } edge_attr_mat_s_44_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2388 \
    name edge_attr_mat_s_45_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_45_V_V \
    op interface \
    ports { edge_attr_mat_s_45_V_V_dout { I 14 vector } edge_attr_mat_s_45_V_V_empty_n { I 1 bit } edge_attr_mat_s_45_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2389 \
    name edge_attr_mat_s_46_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_46_V_V \
    op interface \
    ports { edge_attr_mat_s_46_V_V_dout { I 14 vector } edge_attr_mat_s_46_V_V_empty_n { I 1 bit } edge_attr_mat_s_46_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2390 \
    name edge_attr_mat_s_47_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_47_V_V \
    op interface \
    ports { edge_attr_mat_s_47_V_V_dout { I 14 vector } edge_attr_mat_s_47_V_V_empty_n { I 1 bit } edge_attr_mat_s_47_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2391 \
    name edge_attr_mat_s_48_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_48_V_V \
    op interface \
    ports { edge_attr_mat_s_48_V_V_dout { I 14 vector } edge_attr_mat_s_48_V_V_empty_n { I 1 bit } edge_attr_mat_s_48_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2392 \
    name edge_attr_mat_s_49_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_49_V_V \
    op interface \
    ports { edge_attr_mat_s_49_V_V_dout { I 14 vector } edge_attr_mat_s_49_V_V_empty_n { I 1 bit } edge_attr_mat_s_49_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2393 \
    name edge_attr_mat_s_50_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_50_V_V \
    op interface \
    ports { edge_attr_mat_s_50_V_V_dout { I 14 vector } edge_attr_mat_s_50_V_V_empty_n { I 1 bit } edge_attr_mat_s_50_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2394 \
    name edge_attr_mat_s_51_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_attr_mat_s_51_V_V \
    op interface \
    ports { edge_attr_mat_s_51_V_V_dout { I 14 vector } edge_attr_mat_s_51_V_V_empty_n { I 1 bit } edge_attr_mat_s_51_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2395 \
    name edge_index_mat_s_0_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_0_V_V \
    op interface \
    ports { edge_index_mat_s_0_V_V_dout { I 14 vector } edge_index_mat_s_0_V_V_empty_n { I 1 bit } edge_index_mat_s_0_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2396 \
    name edge_index_mat_s_1_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_1_V_V \
    op interface \
    ports { edge_index_mat_s_1_V_V_dout { I 14 vector } edge_index_mat_s_1_V_V_empty_n { I 1 bit } edge_index_mat_s_1_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2397 \
    name edge_index_mat_s_2_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_2_V_V \
    op interface \
    ports { edge_index_mat_s_2_V_V_dout { I 14 vector } edge_index_mat_s_2_V_V_empty_n { I 1 bit } edge_index_mat_s_2_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2398 \
    name edge_index_mat_s_3_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_3_V_V \
    op interface \
    ports { edge_index_mat_s_3_V_V_dout { I 14 vector } edge_index_mat_s_3_V_V_empty_n { I 1 bit } edge_index_mat_s_3_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2399 \
    name edge_index_mat_s_4_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_4_V_V \
    op interface \
    ports { edge_index_mat_s_4_V_V_dout { I 14 vector } edge_index_mat_s_4_V_V_empty_n { I 1 bit } edge_index_mat_s_4_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2400 \
    name edge_index_mat_s_5_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_5_V_V \
    op interface \
    ports { edge_index_mat_s_5_V_V_dout { I 14 vector } edge_index_mat_s_5_V_V_empty_n { I 1 bit } edge_index_mat_s_5_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2401 \
    name edge_index_mat_s_6_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_6_V_V \
    op interface \
    ports { edge_index_mat_s_6_V_V_dout { I 14 vector } edge_index_mat_s_6_V_V_empty_n { I 1 bit } edge_index_mat_s_6_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2402 \
    name edge_index_mat_s_7_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_7_V_V \
    op interface \
    ports { edge_index_mat_s_7_V_V_dout { I 14 vector } edge_index_mat_s_7_V_V_empty_n { I 1 bit } edge_index_mat_s_7_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2403 \
    name edge_index_mat_s_8_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_8_V_V \
    op interface \
    ports { edge_index_mat_s_8_V_V_dout { I 14 vector } edge_index_mat_s_8_V_V_empty_n { I 1 bit } edge_index_mat_s_8_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2404 \
    name edge_index_mat_s_9_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_9_V_V \
    op interface \
    ports { edge_index_mat_s_9_V_V_dout { I 14 vector } edge_index_mat_s_9_V_V_empty_n { I 1 bit } edge_index_mat_s_9_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2405 \
    name edge_index_mat_s_10_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_10_V_V \
    op interface \
    ports { edge_index_mat_s_10_V_V_dout { I 14 vector } edge_index_mat_s_10_V_V_empty_n { I 1 bit } edge_index_mat_s_10_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2406 \
    name edge_index_mat_s_11_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_11_V_V \
    op interface \
    ports { edge_index_mat_s_11_V_V_dout { I 14 vector } edge_index_mat_s_11_V_V_empty_n { I 1 bit } edge_index_mat_s_11_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2407 \
    name edge_index_mat_s_12_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_12_V_V \
    op interface \
    ports { edge_index_mat_s_12_V_V_dout { I 14 vector } edge_index_mat_s_12_V_V_empty_n { I 1 bit } edge_index_mat_s_12_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2408 \
    name edge_index_mat_s_13_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_13_V_V \
    op interface \
    ports { edge_index_mat_s_13_V_V_dout { I 14 vector } edge_index_mat_s_13_V_V_empty_n { I 1 bit } edge_index_mat_s_13_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2409 \
    name edge_index_mat_s_14_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_14_V_V \
    op interface \
    ports { edge_index_mat_s_14_V_V_dout { I 14 vector } edge_index_mat_s_14_V_V_empty_n { I 1 bit } edge_index_mat_s_14_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2410 \
    name edge_index_mat_s_15_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_15_V_V \
    op interface \
    ports { edge_index_mat_s_15_V_V_dout { I 14 vector } edge_index_mat_s_15_V_V_empty_n { I 1 bit } edge_index_mat_s_15_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2411 \
    name edge_index_mat_s_16_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_16_V_V \
    op interface \
    ports { edge_index_mat_s_16_V_V_dout { I 14 vector } edge_index_mat_s_16_V_V_empty_n { I 1 bit } edge_index_mat_s_16_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2412 \
    name edge_index_mat_s_17_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_17_V_V \
    op interface \
    ports { edge_index_mat_s_17_V_V_dout { I 14 vector } edge_index_mat_s_17_V_V_empty_n { I 1 bit } edge_index_mat_s_17_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2413 \
    name edge_index_mat_s_18_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_18_V_V \
    op interface \
    ports { edge_index_mat_s_18_V_V_dout { I 14 vector } edge_index_mat_s_18_V_V_empty_n { I 1 bit } edge_index_mat_s_18_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2414 \
    name edge_index_mat_s_19_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_19_V_V \
    op interface \
    ports { edge_index_mat_s_19_V_V_dout { I 14 vector } edge_index_mat_s_19_V_V_empty_n { I 1 bit } edge_index_mat_s_19_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2415 \
    name edge_index_mat_s_20_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_20_V_V \
    op interface \
    ports { edge_index_mat_s_20_V_V_dout { I 14 vector } edge_index_mat_s_20_V_V_empty_n { I 1 bit } edge_index_mat_s_20_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2416 \
    name edge_index_mat_s_21_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_21_V_V \
    op interface \
    ports { edge_index_mat_s_21_V_V_dout { I 14 vector } edge_index_mat_s_21_V_V_empty_n { I 1 bit } edge_index_mat_s_21_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2417 \
    name edge_index_mat_s_22_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_22_V_V \
    op interface \
    ports { edge_index_mat_s_22_V_V_dout { I 14 vector } edge_index_mat_s_22_V_V_empty_n { I 1 bit } edge_index_mat_s_22_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2418 \
    name edge_index_mat_s_23_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_23_V_V \
    op interface \
    ports { edge_index_mat_s_23_V_V_dout { I 14 vector } edge_index_mat_s_23_V_V_empty_n { I 1 bit } edge_index_mat_s_23_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2419 \
    name edge_index_mat_s_24_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_24_V_V \
    op interface \
    ports { edge_index_mat_s_24_V_V_dout { I 14 vector } edge_index_mat_s_24_V_V_empty_n { I 1 bit } edge_index_mat_s_24_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2420 \
    name edge_index_mat_s_25_V_V \
    type fifo \
    dir I \
    reset_level 0 \
    sync_rst true \
    corename dc_edge_index_mat_s_25_V_V \
    op interface \
    ports { edge_index_mat_s_25_V_V_dout { I 14 vector } edge_index_mat_s_25_V_V_empty_n { I 1 bit } edge_index_mat_s_25_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2434 \
    name const_size_in_1 \
    type other \
    dir O \
    reset_level 0 \
    sync_rst true \
    corename dc_const_size_in_1 \
    op interface \
    ports { const_size_in_1 { O 16 vector } const_size_in_1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2435 \
    name const_size_in_2 \
    type other \
    dir O \
    reset_level 0 \
    sync_rst true \
    corename dc_const_size_in_2 \
    op interface \
    ports { const_size_in_2 { O 16 vector } const_size_in_2_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2436 \
    name const_size_in_3 \
    type other \
    dir O \
    reset_level 0 \
    sync_rst true \
    corename dc_const_size_in_3 \
    op interface \
    ports { const_size_in_3 { O 16 vector } const_size_in_3_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2437 \
    name const_size_out_1 \
    type other \
    dir O \
    reset_level 0 \
    sync_rst true \
    corename dc_const_size_out_1 \
    op interface \
    ports { const_size_out_1 { O 16 vector } const_size_out_1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 0 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 0 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst_n
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 0 \
    sync_rst true \
    corename apif_ap_rst_n \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


# RegSlice definition:
set ID 2438
set RegSliceName regslice_core
set RegSliceInstName regslice_core_U
set CoreName ap_simcore_regslice_core
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $RegSliceName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_regSlice] == "::AESL_LIB_VIRTEX::xil_gen_regSlice"} {
eval "::AESL_LIB_VIRTEX::xil_gen_regSlice { \
    name ${RegSliceName} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_regSlice, check your platform lib"
}
}


