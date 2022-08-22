# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 2119
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
set ID 2120
set hasByteEnable 0
set MemName example_node_attrgXb_x_memcore
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
set MemName example_node_attrgXb_x
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
set ID 2121
set hasByteEnable 0
set MemName example_edge_indehub_memcore
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
set MemName example_edge_indehub
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
set ID 2122
set hasByteEnable 0
set MemName example_edge_indeikb_memcore
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
set MemName example_edge_indeikb
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
    id 2123 \
    name node_attr_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_0_0_V \
    op interface \
    ports { node_attr_0_0_V_address0 { O 6 vector } node_attr_0_0_V_ce0 { O 1 bit } node_attr_0_0_V_d0 { O 14 vector } node_attr_0_0_V_q0 { I 14 vector } node_attr_0_0_V_we0 { O 1 bit } node_attr_0_0_V_address1 { O 6 vector } node_attr_0_0_V_ce1 { O 1 bit } node_attr_0_0_V_d1 { O 14 vector } node_attr_0_0_V_q1 { I 14 vector } node_attr_0_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2124 \
    name node_attr_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_0_1_V \
    op interface \
    ports { node_attr_0_1_V_address0 { O 6 vector } node_attr_0_1_V_ce0 { O 1 bit } node_attr_0_1_V_d0 { O 14 vector } node_attr_0_1_V_q0 { I 14 vector } node_attr_0_1_V_we0 { O 1 bit } node_attr_0_1_V_address1 { O 6 vector } node_attr_0_1_V_ce1 { O 1 bit } node_attr_0_1_V_d1 { O 14 vector } node_attr_0_1_V_q1 { I 14 vector } node_attr_0_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2125 \
    name node_attr_0_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_0_2_V \
    op interface \
    ports { node_attr_0_2_V_address0 { O 6 vector } node_attr_0_2_V_ce0 { O 1 bit } node_attr_0_2_V_d0 { O 14 vector } node_attr_0_2_V_q0 { I 14 vector } node_attr_0_2_V_we0 { O 1 bit } node_attr_0_2_V_address1 { O 6 vector } node_attr_0_2_V_ce1 { O 1 bit } node_attr_0_2_V_d1 { O 14 vector } node_attr_0_2_V_q1 { I 14 vector } node_attr_0_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_0_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2126 \
    name node_attr_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1_0_V \
    op interface \
    ports { node_attr_1_0_V_address0 { O 6 vector } node_attr_1_0_V_ce0 { O 1 bit } node_attr_1_0_V_d0 { O 14 vector } node_attr_1_0_V_q0 { I 14 vector } node_attr_1_0_V_we0 { O 1 bit } node_attr_1_0_V_address1 { O 6 vector } node_attr_1_0_V_ce1 { O 1 bit } node_attr_1_0_V_d1 { O 14 vector } node_attr_1_0_V_q1 { I 14 vector } node_attr_1_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2127 \
    name node_attr_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1_1_V \
    op interface \
    ports { node_attr_1_1_V_address0 { O 6 vector } node_attr_1_1_V_ce0 { O 1 bit } node_attr_1_1_V_d0 { O 14 vector } node_attr_1_1_V_q0 { I 14 vector } node_attr_1_1_V_we0 { O 1 bit } node_attr_1_1_V_address1 { O 6 vector } node_attr_1_1_V_ce1 { O 1 bit } node_attr_1_1_V_d1 { O 14 vector } node_attr_1_1_V_q1 { I 14 vector } node_attr_1_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2128 \
    name node_attr_1_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_1_2_V \
    op interface \
    ports { node_attr_1_2_V_address0 { O 6 vector } node_attr_1_2_V_ce0 { O 1 bit } node_attr_1_2_V_d0 { O 14 vector } node_attr_1_2_V_q0 { I 14 vector } node_attr_1_2_V_we0 { O 1 bit } node_attr_1_2_V_address1 { O 6 vector } node_attr_1_2_V_ce1 { O 1 bit } node_attr_1_2_V_d1 { O 14 vector } node_attr_1_2_V_q1 { I 14 vector } node_attr_1_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2129 \
    name node_attr_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_2_0_V \
    op interface \
    ports { node_attr_2_0_V_address0 { O 6 vector } node_attr_2_0_V_ce0 { O 1 bit } node_attr_2_0_V_d0 { O 14 vector } node_attr_2_0_V_q0 { I 14 vector } node_attr_2_0_V_we0 { O 1 bit } node_attr_2_0_V_address1 { O 6 vector } node_attr_2_0_V_ce1 { O 1 bit } node_attr_2_0_V_d1 { O 14 vector } node_attr_2_0_V_q1 { I 14 vector } node_attr_2_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2130 \
    name node_attr_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_2_1_V \
    op interface \
    ports { node_attr_2_1_V_address0 { O 6 vector } node_attr_2_1_V_ce0 { O 1 bit } node_attr_2_1_V_d0 { O 14 vector } node_attr_2_1_V_q0 { I 14 vector } node_attr_2_1_V_we0 { O 1 bit } node_attr_2_1_V_address1 { O 6 vector } node_attr_2_1_V_ce1 { O 1 bit } node_attr_2_1_V_d1 { O 14 vector } node_attr_2_1_V_q1 { I 14 vector } node_attr_2_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2131 \
    name node_attr_2_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_2_2_V \
    op interface \
    ports { node_attr_2_2_V_address0 { O 6 vector } node_attr_2_2_V_ce0 { O 1 bit } node_attr_2_2_V_d0 { O 14 vector } node_attr_2_2_V_q0 { I 14 vector } node_attr_2_2_V_we0 { O 1 bit } node_attr_2_2_V_address1 { O 6 vector } node_attr_2_2_V_ce1 { O 1 bit } node_attr_2_2_V_d1 { O 14 vector } node_attr_2_2_V_q1 { I 14 vector } node_attr_2_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_2_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2132 \
    name node_attr_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_3_0_V \
    op interface \
    ports { node_attr_3_0_V_address0 { O 6 vector } node_attr_3_0_V_ce0 { O 1 bit } node_attr_3_0_V_d0 { O 14 vector } node_attr_3_0_V_q0 { I 14 vector } node_attr_3_0_V_we0 { O 1 bit } node_attr_3_0_V_address1 { O 6 vector } node_attr_3_0_V_ce1 { O 1 bit } node_attr_3_0_V_d1 { O 14 vector } node_attr_3_0_V_q1 { I 14 vector } node_attr_3_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2133 \
    name node_attr_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_3_1_V \
    op interface \
    ports { node_attr_3_1_V_address0 { O 6 vector } node_attr_3_1_V_ce0 { O 1 bit } node_attr_3_1_V_d0 { O 14 vector } node_attr_3_1_V_q0 { I 14 vector } node_attr_3_1_V_we0 { O 1 bit } node_attr_3_1_V_address1 { O 6 vector } node_attr_3_1_V_ce1 { O 1 bit } node_attr_3_1_V_d1 { O 14 vector } node_attr_3_1_V_q1 { I 14 vector } node_attr_3_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2134 \
    name node_attr_3_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_3_2_V \
    op interface \
    ports { node_attr_3_2_V_address0 { O 6 vector } node_attr_3_2_V_ce0 { O 1 bit } node_attr_3_2_V_d0 { O 14 vector } node_attr_3_2_V_q0 { I 14 vector } node_attr_3_2_V_we0 { O 1 bit } node_attr_3_2_V_address1 { O 6 vector } node_attr_3_2_V_ce1 { O 1 bit } node_attr_3_2_V_d1 { O 14 vector } node_attr_3_2_V_q1 { I 14 vector } node_attr_3_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_3_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2135 \
    name node_attr_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_4_0_V \
    op interface \
    ports { node_attr_4_0_V_address0 { O 6 vector } node_attr_4_0_V_ce0 { O 1 bit } node_attr_4_0_V_d0 { O 14 vector } node_attr_4_0_V_q0 { I 14 vector } node_attr_4_0_V_we0 { O 1 bit } node_attr_4_0_V_address1 { O 6 vector } node_attr_4_0_V_ce1 { O 1 bit } node_attr_4_0_V_d1 { O 14 vector } node_attr_4_0_V_q1 { I 14 vector } node_attr_4_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2136 \
    name node_attr_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_4_1_V \
    op interface \
    ports { node_attr_4_1_V_address0 { O 6 vector } node_attr_4_1_V_ce0 { O 1 bit } node_attr_4_1_V_d0 { O 14 vector } node_attr_4_1_V_q0 { I 14 vector } node_attr_4_1_V_we0 { O 1 bit } node_attr_4_1_V_address1 { O 6 vector } node_attr_4_1_V_ce1 { O 1 bit } node_attr_4_1_V_d1 { O 14 vector } node_attr_4_1_V_q1 { I 14 vector } node_attr_4_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2137 \
    name node_attr_4_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_4_2_V \
    op interface \
    ports { node_attr_4_2_V_address0 { O 6 vector } node_attr_4_2_V_ce0 { O 1 bit } node_attr_4_2_V_d0 { O 14 vector } node_attr_4_2_V_q0 { I 14 vector } node_attr_4_2_V_we0 { O 1 bit } node_attr_4_2_V_address1 { O 6 vector } node_attr_4_2_V_ce1 { O 1 bit } node_attr_4_2_V_d1 { O 14 vector } node_attr_4_2_V_q1 { I 14 vector } node_attr_4_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_4_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2138 \
    name node_attr_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_5_0_V \
    op interface \
    ports { node_attr_5_0_V_address0 { O 6 vector } node_attr_5_0_V_ce0 { O 1 bit } node_attr_5_0_V_d0 { O 14 vector } node_attr_5_0_V_q0 { I 14 vector } node_attr_5_0_V_we0 { O 1 bit } node_attr_5_0_V_address1 { O 6 vector } node_attr_5_0_V_ce1 { O 1 bit } node_attr_5_0_V_d1 { O 14 vector } node_attr_5_0_V_q1 { I 14 vector } node_attr_5_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2139 \
    name node_attr_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_5_1_V \
    op interface \
    ports { node_attr_5_1_V_address0 { O 6 vector } node_attr_5_1_V_ce0 { O 1 bit } node_attr_5_1_V_d0 { O 14 vector } node_attr_5_1_V_q0 { I 14 vector } node_attr_5_1_V_we0 { O 1 bit } node_attr_5_1_V_address1 { O 6 vector } node_attr_5_1_V_ce1 { O 1 bit } node_attr_5_1_V_d1 { O 14 vector } node_attr_5_1_V_q1 { I 14 vector } node_attr_5_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2140 \
    name node_attr_5_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_5_2_V \
    op interface \
    ports { node_attr_5_2_V_address0 { O 6 vector } node_attr_5_2_V_ce0 { O 1 bit } node_attr_5_2_V_d0 { O 14 vector } node_attr_5_2_V_q0 { I 14 vector } node_attr_5_2_V_we0 { O 1 bit } node_attr_5_2_V_address1 { O 6 vector } node_attr_5_2_V_ce1 { O 1 bit } node_attr_5_2_V_d1 { O 14 vector } node_attr_5_2_V_q1 { I 14 vector } node_attr_5_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_5_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2141 \
    name node_attr_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_6_0_V \
    op interface \
    ports { node_attr_6_0_V_address0 { O 6 vector } node_attr_6_0_V_ce0 { O 1 bit } node_attr_6_0_V_d0 { O 14 vector } node_attr_6_0_V_q0 { I 14 vector } node_attr_6_0_V_we0 { O 1 bit } node_attr_6_0_V_address1 { O 6 vector } node_attr_6_0_V_ce1 { O 1 bit } node_attr_6_0_V_d1 { O 14 vector } node_attr_6_0_V_q1 { I 14 vector } node_attr_6_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2142 \
    name node_attr_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_6_1_V \
    op interface \
    ports { node_attr_6_1_V_address0 { O 6 vector } node_attr_6_1_V_ce0 { O 1 bit } node_attr_6_1_V_d0 { O 14 vector } node_attr_6_1_V_q0 { I 14 vector } node_attr_6_1_V_we0 { O 1 bit } node_attr_6_1_V_address1 { O 6 vector } node_attr_6_1_V_ce1 { O 1 bit } node_attr_6_1_V_d1 { O 14 vector } node_attr_6_1_V_q1 { I 14 vector } node_attr_6_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2143 \
    name node_attr_6_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_6_2_V \
    op interface \
    ports { node_attr_6_2_V_address0 { O 6 vector } node_attr_6_2_V_ce0 { O 1 bit } node_attr_6_2_V_d0 { O 14 vector } node_attr_6_2_V_q0 { I 14 vector } node_attr_6_2_V_we0 { O 1 bit } node_attr_6_2_V_address1 { O 6 vector } node_attr_6_2_V_ce1 { O 1 bit } node_attr_6_2_V_d1 { O 14 vector } node_attr_6_2_V_q1 { I 14 vector } node_attr_6_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_6_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2144 \
    name node_attr_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_7_0_V \
    op interface \
    ports { node_attr_7_0_V_address0 { O 6 vector } node_attr_7_0_V_ce0 { O 1 bit } node_attr_7_0_V_d0 { O 14 vector } node_attr_7_0_V_q0 { I 14 vector } node_attr_7_0_V_we0 { O 1 bit } node_attr_7_0_V_address1 { O 6 vector } node_attr_7_0_V_ce1 { O 1 bit } node_attr_7_0_V_d1 { O 14 vector } node_attr_7_0_V_q1 { I 14 vector } node_attr_7_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2145 \
    name node_attr_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_7_1_V \
    op interface \
    ports { node_attr_7_1_V_address0 { O 6 vector } node_attr_7_1_V_ce0 { O 1 bit } node_attr_7_1_V_d0 { O 14 vector } node_attr_7_1_V_q0 { I 14 vector } node_attr_7_1_V_we0 { O 1 bit } node_attr_7_1_V_address1 { O 6 vector } node_attr_7_1_V_ce1 { O 1 bit } node_attr_7_1_V_d1 { O 14 vector } node_attr_7_1_V_q1 { I 14 vector } node_attr_7_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2146 \
    name node_attr_7_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_7_2_V \
    op interface \
    ports { node_attr_7_2_V_address0 { O 6 vector } node_attr_7_2_V_ce0 { O 1 bit } node_attr_7_2_V_d0 { O 14 vector } node_attr_7_2_V_q0 { I 14 vector } node_attr_7_2_V_we0 { O 1 bit } node_attr_7_2_V_address1 { O 6 vector } node_attr_7_2_V_ce1 { O 1 bit } node_attr_7_2_V_d1 { O 14 vector } node_attr_7_2_V_q1 { I 14 vector } node_attr_7_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_7_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2147 \
    name node_attr_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_8_0_V \
    op interface \
    ports { node_attr_8_0_V_address0 { O 6 vector } node_attr_8_0_V_ce0 { O 1 bit } node_attr_8_0_V_d0 { O 14 vector } node_attr_8_0_V_q0 { I 14 vector } node_attr_8_0_V_we0 { O 1 bit } node_attr_8_0_V_address1 { O 6 vector } node_attr_8_0_V_ce1 { O 1 bit } node_attr_8_0_V_d1 { O 14 vector } node_attr_8_0_V_q1 { I 14 vector } node_attr_8_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2148 \
    name node_attr_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_8_1_V \
    op interface \
    ports { node_attr_8_1_V_address0 { O 6 vector } node_attr_8_1_V_ce0 { O 1 bit } node_attr_8_1_V_d0 { O 14 vector } node_attr_8_1_V_q0 { I 14 vector } node_attr_8_1_V_we0 { O 1 bit } node_attr_8_1_V_address1 { O 6 vector } node_attr_8_1_V_ce1 { O 1 bit } node_attr_8_1_V_d1 { O 14 vector } node_attr_8_1_V_q1 { I 14 vector } node_attr_8_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2149 \
    name node_attr_8_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_8_2_V \
    op interface \
    ports { node_attr_8_2_V_address0 { O 6 vector } node_attr_8_2_V_ce0 { O 1 bit } node_attr_8_2_V_d0 { O 14 vector } node_attr_8_2_V_q0 { I 14 vector } node_attr_8_2_V_we0 { O 1 bit } node_attr_8_2_V_address1 { O 6 vector } node_attr_8_2_V_ce1 { O 1 bit } node_attr_8_2_V_d1 { O 14 vector } node_attr_8_2_V_q1 { I 14 vector } node_attr_8_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_8_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2150 \
    name node_attr_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_9_0_V \
    op interface \
    ports { node_attr_9_0_V_address0 { O 6 vector } node_attr_9_0_V_ce0 { O 1 bit } node_attr_9_0_V_d0 { O 14 vector } node_attr_9_0_V_q0 { I 14 vector } node_attr_9_0_V_we0 { O 1 bit } node_attr_9_0_V_address1 { O 6 vector } node_attr_9_0_V_ce1 { O 1 bit } node_attr_9_0_V_d1 { O 14 vector } node_attr_9_0_V_q1 { I 14 vector } node_attr_9_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2151 \
    name node_attr_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_9_1_V \
    op interface \
    ports { node_attr_9_1_V_address0 { O 6 vector } node_attr_9_1_V_ce0 { O 1 bit } node_attr_9_1_V_d0 { O 14 vector } node_attr_9_1_V_q0 { I 14 vector } node_attr_9_1_V_we0 { O 1 bit } node_attr_9_1_V_address1 { O 6 vector } node_attr_9_1_V_ce1 { O 1 bit } node_attr_9_1_V_d1 { O 14 vector } node_attr_9_1_V_q1 { I 14 vector } node_attr_9_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2152 \
    name node_attr_9_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_9_2_V \
    op interface \
    ports { node_attr_9_2_V_address0 { O 6 vector } node_attr_9_2_V_ce0 { O 1 bit } node_attr_9_2_V_d0 { O 14 vector } node_attr_9_2_V_q0 { I 14 vector } node_attr_9_2_V_we0 { O 1 bit } node_attr_9_2_V_address1 { O 6 vector } node_attr_9_2_V_ce1 { O 1 bit } node_attr_9_2_V_d1 { O 14 vector } node_attr_9_2_V_q1 { I 14 vector } node_attr_9_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_9_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2153 \
    name node_attr_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_10_0_V \
    op interface \
    ports { node_attr_10_0_V_address0 { O 6 vector } node_attr_10_0_V_ce0 { O 1 bit } node_attr_10_0_V_d0 { O 14 vector } node_attr_10_0_V_q0 { I 14 vector } node_attr_10_0_V_we0 { O 1 bit } node_attr_10_0_V_address1 { O 6 vector } node_attr_10_0_V_ce1 { O 1 bit } node_attr_10_0_V_d1 { O 14 vector } node_attr_10_0_V_q1 { I 14 vector } node_attr_10_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2154 \
    name node_attr_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_10_1_V \
    op interface \
    ports { node_attr_10_1_V_address0 { O 6 vector } node_attr_10_1_V_ce0 { O 1 bit } node_attr_10_1_V_d0 { O 14 vector } node_attr_10_1_V_q0 { I 14 vector } node_attr_10_1_V_we0 { O 1 bit } node_attr_10_1_V_address1 { O 6 vector } node_attr_10_1_V_ce1 { O 1 bit } node_attr_10_1_V_d1 { O 14 vector } node_attr_10_1_V_q1 { I 14 vector } node_attr_10_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2155 \
    name node_attr_10_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_10_2_V \
    op interface \
    ports { node_attr_10_2_V_address0 { O 6 vector } node_attr_10_2_V_ce0 { O 1 bit } node_attr_10_2_V_d0 { O 14 vector } node_attr_10_2_V_q0 { I 14 vector } node_attr_10_2_V_we0 { O 1 bit } node_attr_10_2_V_address1 { O 6 vector } node_attr_10_2_V_ce1 { O 1 bit } node_attr_10_2_V_d1 { O 14 vector } node_attr_10_2_V_q1 { I 14 vector } node_attr_10_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_10_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2156 \
    name edge_attr_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_0_0_V \
    op interface \
    ports { edge_attr_0_0_V_address0 { O 7 vector } edge_attr_0_0_V_ce0 { O 1 bit } edge_attr_0_0_V_d0 { O 14 vector } edge_attr_0_0_V_q0 { I 14 vector } edge_attr_0_0_V_we0 { O 1 bit } edge_attr_0_0_V_address1 { O 7 vector } edge_attr_0_0_V_ce1 { O 1 bit } edge_attr_0_0_V_d1 { O 14 vector } edge_attr_0_0_V_q1 { I 14 vector } edge_attr_0_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2157 \
    name edge_attr_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_0_1_V \
    op interface \
    ports { edge_attr_0_1_V_address0 { O 7 vector } edge_attr_0_1_V_ce0 { O 1 bit } edge_attr_0_1_V_d0 { O 14 vector } edge_attr_0_1_V_q0 { I 14 vector } edge_attr_0_1_V_we0 { O 1 bit } edge_attr_0_1_V_address1 { O 7 vector } edge_attr_0_1_V_ce1 { O 1 bit } edge_attr_0_1_V_d1 { O 14 vector } edge_attr_0_1_V_q1 { I 14 vector } edge_attr_0_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2158 \
    name edge_attr_0_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_0_2_V \
    op interface \
    ports { edge_attr_0_2_V_address0 { O 7 vector } edge_attr_0_2_V_ce0 { O 1 bit } edge_attr_0_2_V_d0 { O 14 vector } edge_attr_0_2_V_q0 { I 14 vector } edge_attr_0_2_V_we0 { O 1 bit } edge_attr_0_2_V_address1 { O 7 vector } edge_attr_0_2_V_ce1 { O 1 bit } edge_attr_0_2_V_d1 { O 14 vector } edge_attr_0_2_V_q1 { I 14 vector } edge_attr_0_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_0_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2159 \
    name edge_attr_0_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_0_3_V \
    op interface \
    ports { edge_attr_0_3_V_address0 { O 7 vector } edge_attr_0_3_V_ce0 { O 1 bit } edge_attr_0_3_V_d0 { O 14 vector } edge_attr_0_3_V_q0 { I 14 vector } edge_attr_0_3_V_we0 { O 1 bit } edge_attr_0_3_V_address1 { O 7 vector } edge_attr_0_3_V_ce1 { O 1 bit } edge_attr_0_3_V_d1 { O 14 vector } edge_attr_0_3_V_q1 { I 14 vector } edge_attr_0_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_0_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2160 \
    name edge_attr_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1_0_V \
    op interface \
    ports { edge_attr_1_0_V_address0 { O 7 vector } edge_attr_1_0_V_ce0 { O 1 bit } edge_attr_1_0_V_d0 { O 14 vector } edge_attr_1_0_V_q0 { I 14 vector } edge_attr_1_0_V_we0 { O 1 bit } edge_attr_1_0_V_address1 { O 7 vector } edge_attr_1_0_V_ce1 { O 1 bit } edge_attr_1_0_V_d1 { O 14 vector } edge_attr_1_0_V_q1 { I 14 vector } edge_attr_1_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2161 \
    name edge_attr_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1_1_V \
    op interface \
    ports { edge_attr_1_1_V_address0 { O 7 vector } edge_attr_1_1_V_ce0 { O 1 bit } edge_attr_1_1_V_d0 { O 14 vector } edge_attr_1_1_V_q0 { I 14 vector } edge_attr_1_1_V_we0 { O 1 bit } edge_attr_1_1_V_address1 { O 7 vector } edge_attr_1_1_V_ce1 { O 1 bit } edge_attr_1_1_V_d1 { O 14 vector } edge_attr_1_1_V_q1 { I 14 vector } edge_attr_1_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2162 \
    name edge_attr_1_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1_2_V \
    op interface \
    ports { edge_attr_1_2_V_address0 { O 7 vector } edge_attr_1_2_V_ce0 { O 1 bit } edge_attr_1_2_V_d0 { O 14 vector } edge_attr_1_2_V_q0 { I 14 vector } edge_attr_1_2_V_we0 { O 1 bit } edge_attr_1_2_V_address1 { O 7 vector } edge_attr_1_2_V_ce1 { O 1 bit } edge_attr_1_2_V_d1 { O 14 vector } edge_attr_1_2_V_q1 { I 14 vector } edge_attr_1_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2163 \
    name edge_attr_1_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_1_3_V \
    op interface \
    ports { edge_attr_1_3_V_address0 { O 7 vector } edge_attr_1_3_V_ce0 { O 1 bit } edge_attr_1_3_V_d0 { O 14 vector } edge_attr_1_3_V_q0 { I 14 vector } edge_attr_1_3_V_we0 { O 1 bit } edge_attr_1_3_V_address1 { O 7 vector } edge_attr_1_3_V_ce1 { O 1 bit } edge_attr_1_3_V_d1 { O 14 vector } edge_attr_1_3_V_q1 { I 14 vector } edge_attr_1_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_1_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2164 \
    name edge_attr_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_2_0_V \
    op interface \
    ports { edge_attr_2_0_V_address0 { O 7 vector } edge_attr_2_0_V_ce0 { O 1 bit } edge_attr_2_0_V_d0 { O 14 vector } edge_attr_2_0_V_q0 { I 14 vector } edge_attr_2_0_V_we0 { O 1 bit } edge_attr_2_0_V_address1 { O 7 vector } edge_attr_2_0_V_ce1 { O 1 bit } edge_attr_2_0_V_d1 { O 14 vector } edge_attr_2_0_V_q1 { I 14 vector } edge_attr_2_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2165 \
    name edge_attr_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_2_1_V \
    op interface \
    ports { edge_attr_2_1_V_address0 { O 7 vector } edge_attr_2_1_V_ce0 { O 1 bit } edge_attr_2_1_V_d0 { O 14 vector } edge_attr_2_1_V_q0 { I 14 vector } edge_attr_2_1_V_we0 { O 1 bit } edge_attr_2_1_V_address1 { O 7 vector } edge_attr_2_1_V_ce1 { O 1 bit } edge_attr_2_1_V_d1 { O 14 vector } edge_attr_2_1_V_q1 { I 14 vector } edge_attr_2_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2166 \
    name edge_attr_2_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_2_2_V \
    op interface \
    ports { edge_attr_2_2_V_address0 { O 7 vector } edge_attr_2_2_V_ce0 { O 1 bit } edge_attr_2_2_V_d0 { O 14 vector } edge_attr_2_2_V_q0 { I 14 vector } edge_attr_2_2_V_we0 { O 1 bit } edge_attr_2_2_V_address1 { O 7 vector } edge_attr_2_2_V_ce1 { O 1 bit } edge_attr_2_2_V_d1 { O 14 vector } edge_attr_2_2_V_q1 { I 14 vector } edge_attr_2_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_2_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2167 \
    name edge_attr_2_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_2_3_V \
    op interface \
    ports { edge_attr_2_3_V_address0 { O 7 vector } edge_attr_2_3_V_ce0 { O 1 bit } edge_attr_2_3_V_d0 { O 14 vector } edge_attr_2_3_V_q0 { I 14 vector } edge_attr_2_3_V_we0 { O 1 bit } edge_attr_2_3_V_address1 { O 7 vector } edge_attr_2_3_V_ce1 { O 1 bit } edge_attr_2_3_V_d1 { O 14 vector } edge_attr_2_3_V_q1 { I 14 vector } edge_attr_2_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_2_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2168 \
    name edge_attr_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_3_0_V \
    op interface \
    ports { edge_attr_3_0_V_address0 { O 7 vector } edge_attr_3_0_V_ce0 { O 1 bit } edge_attr_3_0_V_d0 { O 14 vector } edge_attr_3_0_V_q0 { I 14 vector } edge_attr_3_0_V_we0 { O 1 bit } edge_attr_3_0_V_address1 { O 7 vector } edge_attr_3_0_V_ce1 { O 1 bit } edge_attr_3_0_V_d1 { O 14 vector } edge_attr_3_0_V_q1 { I 14 vector } edge_attr_3_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2169 \
    name edge_attr_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_3_1_V \
    op interface \
    ports { edge_attr_3_1_V_address0 { O 7 vector } edge_attr_3_1_V_ce0 { O 1 bit } edge_attr_3_1_V_d0 { O 14 vector } edge_attr_3_1_V_q0 { I 14 vector } edge_attr_3_1_V_we0 { O 1 bit } edge_attr_3_1_V_address1 { O 7 vector } edge_attr_3_1_V_ce1 { O 1 bit } edge_attr_3_1_V_d1 { O 14 vector } edge_attr_3_1_V_q1 { I 14 vector } edge_attr_3_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2170 \
    name edge_attr_3_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_3_2_V \
    op interface \
    ports { edge_attr_3_2_V_address0 { O 7 vector } edge_attr_3_2_V_ce0 { O 1 bit } edge_attr_3_2_V_d0 { O 14 vector } edge_attr_3_2_V_q0 { I 14 vector } edge_attr_3_2_V_we0 { O 1 bit } edge_attr_3_2_V_address1 { O 7 vector } edge_attr_3_2_V_ce1 { O 1 bit } edge_attr_3_2_V_d1 { O 14 vector } edge_attr_3_2_V_q1 { I 14 vector } edge_attr_3_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_3_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2171 \
    name edge_attr_3_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_3_3_V \
    op interface \
    ports { edge_attr_3_3_V_address0 { O 7 vector } edge_attr_3_3_V_ce0 { O 1 bit } edge_attr_3_3_V_d0 { O 14 vector } edge_attr_3_3_V_q0 { I 14 vector } edge_attr_3_3_V_we0 { O 1 bit } edge_attr_3_3_V_address1 { O 7 vector } edge_attr_3_3_V_ce1 { O 1 bit } edge_attr_3_3_V_d1 { O 14 vector } edge_attr_3_3_V_q1 { I 14 vector } edge_attr_3_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_3_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2172 \
    name edge_attr_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_4_0_V \
    op interface \
    ports { edge_attr_4_0_V_address0 { O 7 vector } edge_attr_4_0_V_ce0 { O 1 bit } edge_attr_4_0_V_d0 { O 14 vector } edge_attr_4_0_V_q0 { I 14 vector } edge_attr_4_0_V_we0 { O 1 bit } edge_attr_4_0_V_address1 { O 7 vector } edge_attr_4_0_V_ce1 { O 1 bit } edge_attr_4_0_V_d1 { O 14 vector } edge_attr_4_0_V_q1 { I 14 vector } edge_attr_4_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2173 \
    name edge_attr_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_4_1_V \
    op interface \
    ports { edge_attr_4_1_V_address0 { O 7 vector } edge_attr_4_1_V_ce0 { O 1 bit } edge_attr_4_1_V_d0 { O 14 vector } edge_attr_4_1_V_q0 { I 14 vector } edge_attr_4_1_V_we0 { O 1 bit } edge_attr_4_1_V_address1 { O 7 vector } edge_attr_4_1_V_ce1 { O 1 bit } edge_attr_4_1_V_d1 { O 14 vector } edge_attr_4_1_V_q1 { I 14 vector } edge_attr_4_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2174 \
    name edge_attr_4_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_4_2_V \
    op interface \
    ports { edge_attr_4_2_V_address0 { O 7 vector } edge_attr_4_2_V_ce0 { O 1 bit } edge_attr_4_2_V_d0 { O 14 vector } edge_attr_4_2_V_q0 { I 14 vector } edge_attr_4_2_V_we0 { O 1 bit } edge_attr_4_2_V_address1 { O 7 vector } edge_attr_4_2_V_ce1 { O 1 bit } edge_attr_4_2_V_d1 { O 14 vector } edge_attr_4_2_V_q1 { I 14 vector } edge_attr_4_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_4_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2175 \
    name edge_attr_4_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_4_3_V \
    op interface \
    ports { edge_attr_4_3_V_address0 { O 7 vector } edge_attr_4_3_V_ce0 { O 1 bit } edge_attr_4_3_V_d0 { O 14 vector } edge_attr_4_3_V_q0 { I 14 vector } edge_attr_4_3_V_we0 { O 1 bit } edge_attr_4_3_V_address1 { O 7 vector } edge_attr_4_3_V_ce1 { O 1 bit } edge_attr_4_3_V_d1 { O 14 vector } edge_attr_4_3_V_q1 { I 14 vector } edge_attr_4_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_4_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2176 \
    name edge_attr_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_5_0_V \
    op interface \
    ports { edge_attr_5_0_V_address0 { O 7 vector } edge_attr_5_0_V_ce0 { O 1 bit } edge_attr_5_0_V_d0 { O 14 vector } edge_attr_5_0_V_q0 { I 14 vector } edge_attr_5_0_V_we0 { O 1 bit } edge_attr_5_0_V_address1 { O 7 vector } edge_attr_5_0_V_ce1 { O 1 bit } edge_attr_5_0_V_d1 { O 14 vector } edge_attr_5_0_V_q1 { I 14 vector } edge_attr_5_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2177 \
    name edge_attr_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_5_1_V \
    op interface \
    ports { edge_attr_5_1_V_address0 { O 7 vector } edge_attr_5_1_V_ce0 { O 1 bit } edge_attr_5_1_V_d0 { O 14 vector } edge_attr_5_1_V_q0 { I 14 vector } edge_attr_5_1_V_we0 { O 1 bit } edge_attr_5_1_V_address1 { O 7 vector } edge_attr_5_1_V_ce1 { O 1 bit } edge_attr_5_1_V_d1 { O 14 vector } edge_attr_5_1_V_q1 { I 14 vector } edge_attr_5_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2178 \
    name edge_attr_5_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_5_2_V \
    op interface \
    ports { edge_attr_5_2_V_address0 { O 7 vector } edge_attr_5_2_V_ce0 { O 1 bit } edge_attr_5_2_V_d0 { O 14 vector } edge_attr_5_2_V_q0 { I 14 vector } edge_attr_5_2_V_we0 { O 1 bit } edge_attr_5_2_V_address1 { O 7 vector } edge_attr_5_2_V_ce1 { O 1 bit } edge_attr_5_2_V_d1 { O 14 vector } edge_attr_5_2_V_q1 { I 14 vector } edge_attr_5_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_5_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2179 \
    name edge_attr_5_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_5_3_V \
    op interface \
    ports { edge_attr_5_3_V_address0 { O 7 vector } edge_attr_5_3_V_ce0 { O 1 bit } edge_attr_5_3_V_d0 { O 14 vector } edge_attr_5_3_V_q0 { I 14 vector } edge_attr_5_3_V_we0 { O 1 bit } edge_attr_5_3_V_address1 { O 7 vector } edge_attr_5_3_V_ce1 { O 1 bit } edge_attr_5_3_V_d1 { O 14 vector } edge_attr_5_3_V_q1 { I 14 vector } edge_attr_5_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_5_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2180 \
    name edge_attr_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_6_0_V \
    op interface \
    ports { edge_attr_6_0_V_address0 { O 7 vector } edge_attr_6_0_V_ce0 { O 1 bit } edge_attr_6_0_V_d0 { O 14 vector } edge_attr_6_0_V_q0 { I 14 vector } edge_attr_6_0_V_we0 { O 1 bit } edge_attr_6_0_V_address1 { O 7 vector } edge_attr_6_0_V_ce1 { O 1 bit } edge_attr_6_0_V_d1 { O 14 vector } edge_attr_6_0_V_q1 { I 14 vector } edge_attr_6_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2181 \
    name edge_attr_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_6_1_V \
    op interface \
    ports { edge_attr_6_1_V_address0 { O 7 vector } edge_attr_6_1_V_ce0 { O 1 bit } edge_attr_6_1_V_d0 { O 14 vector } edge_attr_6_1_V_q0 { I 14 vector } edge_attr_6_1_V_we0 { O 1 bit } edge_attr_6_1_V_address1 { O 7 vector } edge_attr_6_1_V_ce1 { O 1 bit } edge_attr_6_1_V_d1 { O 14 vector } edge_attr_6_1_V_q1 { I 14 vector } edge_attr_6_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2182 \
    name edge_attr_6_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_6_2_V \
    op interface \
    ports { edge_attr_6_2_V_address0 { O 7 vector } edge_attr_6_2_V_ce0 { O 1 bit } edge_attr_6_2_V_d0 { O 14 vector } edge_attr_6_2_V_q0 { I 14 vector } edge_attr_6_2_V_we0 { O 1 bit } edge_attr_6_2_V_address1 { O 7 vector } edge_attr_6_2_V_ce1 { O 1 bit } edge_attr_6_2_V_d1 { O 14 vector } edge_attr_6_2_V_q1 { I 14 vector } edge_attr_6_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_6_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2183 \
    name edge_attr_6_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_6_3_V \
    op interface \
    ports { edge_attr_6_3_V_address0 { O 7 vector } edge_attr_6_3_V_ce0 { O 1 bit } edge_attr_6_3_V_d0 { O 14 vector } edge_attr_6_3_V_q0 { I 14 vector } edge_attr_6_3_V_we0 { O 1 bit } edge_attr_6_3_V_address1 { O 7 vector } edge_attr_6_3_V_ce1 { O 1 bit } edge_attr_6_3_V_d1 { O 14 vector } edge_attr_6_3_V_q1 { I 14 vector } edge_attr_6_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_6_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2184 \
    name edge_attr_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_7_0_V \
    op interface \
    ports { edge_attr_7_0_V_address0 { O 7 vector } edge_attr_7_0_V_ce0 { O 1 bit } edge_attr_7_0_V_d0 { O 14 vector } edge_attr_7_0_V_q0 { I 14 vector } edge_attr_7_0_V_we0 { O 1 bit } edge_attr_7_0_V_address1 { O 7 vector } edge_attr_7_0_V_ce1 { O 1 bit } edge_attr_7_0_V_d1 { O 14 vector } edge_attr_7_0_V_q1 { I 14 vector } edge_attr_7_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2185 \
    name edge_attr_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_7_1_V \
    op interface \
    ports { edge_attr_7_1_V_address0 { O 7 vector } edge_attr_7_1_V_ce0 { O 1 bit } edge_attr_7_1_V_d0 { O 14 vector } edge_attr_7_1_V_q0 { I 14 vector } edge_attr_7_1_V_we0 { O 1 bit } edge_attr_7_1_V_address1 { O 7 vector } edge_attr_7_1_V_ce1 { O 1 bit } edge_attr_7_1_V_d1 { O 14 vector } edge_attr_7_1_V_q1 { I 14 vector } edge_attr_7_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2186 \
    name edge_attr_7_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_7_2_V \
    op interface \
    ports { edge_attr_7_2_V_address0 { O 7 vector } edge_attr_7_2_V_ce0 { O 1 bit } edge_attr_7_2_V_d0 { O 14 vector } edge_attr_7_2_V_q0 { I 14 vector } edge_attr_7_2_V_we0 { O 1 bit } edge_attr_7_2_V_address1 { O 7 vector } edge_attr_7_2_V_ce1 { O 1 bit } edge_attr_7_2_V_d1 { O 14 vector } edge_attr_7_2_V_q1 { I 14 vector } edge_attr_7_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_7_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2187 \
    name edge_attr_7_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_7_3_V \
    op interface \
    ports { edge_attr_7_3_V_address0 { O 7 vector } edge_attr_7_3_V_ce0 { O 1 bit } edge_attr_7_3_V_d0 { O 14 vector } edge_attr_7_3_V_q0 { I 14 vector } edge_attr_7_3_V_we0 { O 1 bit } edge_attr_7_3_V_address1 { O 7 vector } edge_attr_7_3_V_ce1 { O 1 bit } edge_attr_7_3_V_d1 { O 14 vector } edge_attr_7_3_V_q1 { I 14 vector } edge_attr_7_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_7_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2188 \
    name edge_attr_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_8_0_V \
    op interface \
    ports { edge_attr_8_0_V_address0 { O 7 vector } edge_attr_8_0_V_ce0 { O 1 bit } edge_attr_8_0_V_d0 { O 14 vector } edge_attr_8_0_V_q0 { I 14 vector } edge_attr_8_0_V_we0 { O 1 bit } edge_attr_8_0_V_address1 { O 7 vector } edge_attr_8_0_V_ce1 { O 1 bit } edge_attr_8_0_V_d1 { O 14 vector } edge_attr_8_0_V_q1 { I 14 vector } edge_attr_8_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2189 \
    name edge_attr_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_8_1_V \
    op interface \
    ports { edge_attr_8_1_V_address0 { O 7 vector } edge_attr_8_1_V_ce0 { O 1 bit } edge_attr_8_1_V_d0 { O 14 vector } edge_attr_8_1_V_q0 { I 14 vector } edge_attr_8_1_V_we0 { O 1 bit } edge_attr_8_1_V_address1 { O 7 vector } edge_attr_8_1_V_ce1 { O 1 bit } edge_attr_8_1_V_d1 { O 14 vector } edge_attr_8_1_V_q1 { I 14 vector } edge_attr_8_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2190 \
    name edge_attr_8_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_8_2_V \
    op interface \
    ports { edge_attr_8_2_V_address0 { O 7 vector } edge_attr_8_2_V_ce0 { O 1 bit } edge_attr_8_2_V_d0 { O 14 vector } edge_attr_8_2_V_q0 { I 14 vector } edge_attr_8_2_V_we0 { O 1 bit } edge_attr_8_2_V_address1 { O 7 vector } edge_attr_8_2_V_ce1 { O 1 bit } edge_attr_8_2_V_d1 { O 14 vector } edge_attr_8_2_V_q1 { I 14 vector } edge_attr_8_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_8_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2191 \
    name edge_attr_8_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_8_3_V \
    op interface \
    ports { edge_attr_8_3_V_address0 { O 7 vector } edge_attr_8_3_V_ce0 { O 1 bit } edge_attr_8_3_V_d0 { O 14 vector } edge_attr_8_3_V_q0 { I 14 vector } edge_attr_8_3_V_we0 { O 1 bit } edge_attr_8_3_V_address1 { O 7 vector } edge_attr_8_3_V_ce1 { O 1 bit } edge_attr_8_3_V_d1 { O 14 vector } edge_attr_8_3_V_q1 { I 14 vector } edge_attr_8_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_8_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2192 \
    name edge_attr_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_9_0_V \
    op interface \
    ports { edge_attr_9_0_V_address0 { O 7 vector } edge_attr_9_0_V_ce0 { O 1 bit } edge_attr_9_0_V_d0 { O 14 vector } edge_attr_9_0_V_q0 { I 14 vector } edge_attr_9_0_V_we0 { O 1 bit } edge_attr_9_0_V_address1 { O 7 vector } edge_attr_9_0_V_ce1 { O 1 bit } edge_attr_9_0_V_d1 { O 14 vector } edge_attr_9_0_V_q1 { I 14 vector } edge_attr_9_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2193 \
    name edge_attr_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_9_1_V \
    op interface \
    ports { edge_attr_9_1_V_address0 { O 7 vector } edge_attr_9_1_V_ce0 { O 1 bit } edge_attr_9_1_V_d0 { O 14 vector } edge_attr_9_1_V_q0 { I 14 vector } edge_attr_9_1_V_we0 { O 1 bit } edge_attr_9_1_V_address1 { O 7 vector } edge_attr_9_1_V_ce1 { O 1 bit } edge_attr_9_1_V_d1 { O 14 vector } edge_attr_9_1_V_q1 { I 14 vector } edge_attr_9_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2194 \
    name edge_attr_9_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_9_2_V \
    op interface \
    ports { edge_attr_9_2_V_address0 { O 7 vector } edge_attr_9_2_V_ce0 { O 1 bit } edge_attr_9_2_V_d0 { O 14 vector } edge_attr_9_2_V_q0 { I 14 vector } edge_attr_9_2_V_we0 { O 1 bit } edge_attr_9_2_V_address1 { O 7 vector } edge_attr_9_2_V_ce1 { O 1 bit } edge_attr_9_2_V_d1 { O 14 vector } edge_attr_9_2_V_q1 { I 14 vector } edge_attr_9_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_9_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2195 \
    name edge_attr_9_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_9_3_V \
    op interface \
    ports { edge_attr_9_3_V_address0 { O 7 vector } edge_attr_9_3_V_ce0 { O 1 bit } edge_attr_9_3_V_d0 { O 14 vector } edge_attr_9_3_V_q0 { I 14 vector } edge_attr_9_3_V_we0 { O 1 bit } edge_attr_9_3_V_address1 { O 7 vector } edge_attr_9_3_V_ce1 { O 1 bit } edge_attr_9_3_V_d1 { O 14 vector } edge_attr_9_3_V_q1 { I 14 vector } edge_attr_9_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_9_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2196 \
    name edge_attr_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_10_0_V \
    op interface \
    ports { edge_attr_10_0_V_address0 { O 7 vector } edge_attr_10_0_V_ce0 { O 1 bit } edge_attr_10_0_V_d0 { O 14 vector } edge_attr_10_0_V_q0 { I 14 vector } edge_attr_10_0_V_we0 { O 1 bit } edge_attr_10_0_V_address1 { O 7 vector } edge_attr_10_0_V_ce1 { O 1 bit } edge_attr_10_0_V_d1 { O 14 vector } edge_attr_10_0_V_q1 { I 14 vector } edge_attr_10_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2197 \
    name edge_attr_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_10_1_V \
    op interface \
    ports { edge_attr_10_1_V_address0 { O 7 vector } edge_attr_10_1_V_ce0 { O 1 bit } edge_attr_10_1_V_d0 { O 14 vector } edge_attr_10_1_V_q0 { I 14 vector } edge_attr_10_1_V_we0 { O 1 bit } edge_attr_10_1_V_address1 { O 7 vector } edge_attr_10_1_V_ce1 { O 1 bit } edge_attr_10_1_V_d1 { O 14 vector } edge_attr_10_1_V_q1 { I 14 vector } edge_attr_10_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2198 \
    name edge_attr_10_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_10_2_V \
    op interface \
    ports { edge_attr_10_2_V_address0 { O 7 vector } edge_attr_10_2_V_ce0 { O 1 bit } edge_attr_10_2_V_d0 { O 14 vector } edge_attr_10_2_V_q0 { I 14 vector } edge_attr_10_2_V_we0 { O 1 bit } edge_attr_10_2_V_address1 { O 7 vector } edge_attr_10_2_V_ce1 { O 1 bit } edge_attr_10_2_V_d1 { O 14 vector } edge_attr_10_2_V_q1 { I 14 vector } edge_attr_10_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_10_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2199 \
    name edge_attr_10_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_10_3_V \
    op interface \
    ports { edge_attr_10_3_V_address0 { O 7 vector } edge_attr_10_3_V_ce0 { O 1 bit } edge_attr_10_3_V_d0 { O 14 vector } edge_attr_10_3_V_q0 { I 14 vector } edge_attr_10_3_V_we0 { O 1 bit } edge_attr_10_3_V_address1 { O 7 vector } edge_attr_10_3_V_ce1 { O 1 bit } edge_attr_10_3_V_d1 { O 14 vector } edge_attr_10_3_V_q1 { I 14 vector } edge_attr_10_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_10_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2200 \
    name edge_attr_11_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_11_0_V \
    op interface \
    ports { edge_attr_11_0_V_address0 { O 7 vector } edge_attr_11_0_V_ce0 { O 1 bit } edge_attr_11_0_V_d0 { O 14 vector } edge_attr_11_0_V_q0 { I 14 vector } edge_attr_11_0_V_we0 { O 1 bit } edge_attr_11_0_V_address1 { O 7 vector } edge_attr_11_0_V_ce1 { O 1 bit } edge_attr_11_0_V_d1 { O 14 vector } edge_attr_11_0_V_q1 { I 14 vector } edge_attr_11_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_11_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2201 \
    name edge_attr_11_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_11_1_V \
    op interface \
    ports { edge_attr_11_1_V_address0 { O 7 vector } edge_attr_11_1_V_ce0 { O 1 bit } edge_attr_11_1_V_d0 { O 14 vector } edge_attr_11_1_V_q0 { I 14 vector } edge_attr_11_1_V_we0 { O 1 bit } edge_attr_11_1_V_address1 { O 7 vector } edge_attr_11_1_V_ce1 { O 1 bit } edge_attr_11_1_V_d1 { O 14 vector } edge_attr_11_1_V_q1 { I 14 vector } edge_attr_11_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_11_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2202 \
    name edge_attr_11_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_11_2_V \
    op interface \
    ports { edge_attr_11_2_V_address0 { O 7 vector } edge_attr_11_2_V_ce0 { O 1 bit } edge_attr_11_2_V_d0 { O 14 vector } edge_attr_11_2_V_q0 { I 14 vector } edge_attr_11_2_V_we0 { O 1 bit } edge_attr_11_2_V_address1 { O 7 vector } edge_attr_11_2_V_ce1 { O 1 bit } edge_attr_11_2_V_d1 { O 14 vector } edge_attr_11_2_V_q1 { I 14 vector } edge_attr_11_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_11_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2203 \
    name edge_attr_11_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_11_3_V \
    op interface \
    ports { edge_attr_11_3_V_address0 { O 7 vector } edge_attr_11_3_V_ce0 { O 1 bit } edge_attr_11_3_V_d0 { O 14 vector } edge_attr_11_3_V_q0 { I 14 vector } edge_attr_11_3_V_we0 { O 1 bit } edge_attr_11_3_V_address1 { O 7 vector } edge_attr_11_3_V_ce1 { O 1 bit } edge_attr_11_3_V_d1 { O 14 vector } edge_attr_11_3_V_q1 { I 14 vector } edge_attr_11_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_11_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2204 \
    name edge_attr_12_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_12_0_V \
    op interface \
    ports { edge_attr_12_0_V_address0 { O 7 vector } edge_attr_12_0_V_ce0 { O 1 bit } edge_attr_12_0_V_d0 { O 14 vector } edge_attr_12_0_V_q0 { I 14 vector } edge_attr_12_0_V_we0 { O 1 bit } edge_attr_12_0_V_address1 { O 7 vector } edge_attr_12_0_V_ce1 { O 1 bit } edge_attr_12_0_V_d1 { O 14 vector } edge_attr_12_0_V_q1 { I 14 vector } edge_attr_12_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_12_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2205 \
    name edge_attr_12_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_12_1_V \
    op interface \
    ports { edge_attr_12_1_V_address0 { O 7 vector } edge_attr_12_1_V_ce0 { O 1 bit } edge_attr_12_1_V_d0 { O 14 vector } edge_attr_12_1_V_q0 { I 14 vector } edge_attr_12_1_V_we0 { O 1 bit } edge_attr_12_1_V_address1 { O 7 vector } edge_attr_12_1_V_ce1 { O 1 bit } edge_attr_12_1_V_d1 { O 14 vector } edge_attr_12_1_V_q1 { I 14 vector } edge_attr_12_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_12_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2206 \
    name edge_attr_12_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_12_2_V \
    op interface \
    ports { edge_attr_12_2_V_address0 { O 7 vector } edge_attr_12_2_V_ce0 { O 1 bit } edge_attr_12_2_V_d0 { O 14 vector } edge_attr_12_2_V_q0 { I 14 vector } edge_attr_12_2_V_we0 { O 1 bit } edge_attr_12_2_V_address1 { O 7 vector } edge_attr_12_2_V_ce1 { O 1 bit } edge_attr_12_2_V_d1 { O 14 vector } edge_attr_12_2_V_q1 { I 14 vector } edge_attr_12_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_12_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2207 \
    name edge_attr_12_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_attr_12_3_V \
    op interface \
    ports { edge_attr_12_3_V_address0 { O 7 vector } edge_attr_12_3_V_ce0 { O 1 bit } edge_attr_12_3_V_d0 { O 14 vector } edge_attr_12_3_V_q0 { I 14 vector } edge_attr_12_3_V_we0 { O 1 bit } edge_attr_12_3_V_address1 { O 7 vector } edge_attr_12_3_V_ce1 { O 1 bit } edge_attr_12_3_V_d1 { O 14 vector } edge_attr_12_3_V_q1 { I 14 vector } edge_attr_12_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_attr_12_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2208 \
    name edge_index_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_0_0_V \
    op interface \
    ports { edge_index_0_0_V_address0 { O 7 vector } edge_index_0_0_V_ce0 { O 1 bit } edge_index_0_0_V_d0 { O 14 vector } edge_index_0_0_V_q0 { I 14 vector } edge_index_0_0_V_we0 { O 1 bit } edge_index_0_0_V_address1 { O 7 vector } edge_index_0_0_V_ce1 { O 1 bit } edge_index_0_0_V_d1 { O 14 vector } edge_index_0_0_V_q1 { I 14 vector } edge_index_0_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2209 \
    name edge_index_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_0_1_V \
    op interface \
    ports { edge_index_0_1_V_address0 { O 7 vector } edge_index_0_1_V_ce0 { O 1 bit } edge_index_0_1_V_d0 { O 14 vector } edge_index_0_1_V_q0 { I 14 vector } edge_index_0_1_V_we0 { O 1 bit } edge_index_0_1_V_address1 { O 7 vector } edge_index_0_1_V_ce1 { O 1 bit } edge_index_0_1_V_d1 { O 14 vector } edge_index_0_1_V_q1 { I 14 vector } edge_index_0_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2210 \
    name edge_index_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1_0_V \
    op interface \
    ports { edge_index_1_0_V_address0 { O 7 vector } edge_index_1_0_V_ce0 { O 1 bit } edge_index_1_0_V_d0 { O 14 vector } edge_index_1_0_V_q0 { I 14 vector } edge_index_1_0_V_we0 { O 1 bit } edge_index_1_0_V_address1 { O 7 vector } edge_index_1_0_V_ce1 { O 1 bit } edge_index_1_0_V_d1 { O 14 vector } edge_index_1_0_V_q1 { I 14 vector } edge_index_1_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2211 \
    name edge_index_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_1_1_V \
    op interface \
    ports { edge_index_1_1_V_address0 { O 7 vector } edge_index_1_1_V_ce0 { O 1 bit } edge_index_1_1_V_d0 { O 14 vector } edge_index_1_1_V_q0 { I 14 vector } edge_index_1_1_V_we0 { O 1 bit } edge_index_1_1_V_address1 { O 7 vector } edge_index_1_1_V_ce1 { O 1 bit } edge_index_1_1_V_d1 { O 14 vector } edge_index_1_1_V_q1 { I 14 vector } edge_index_1_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2212 \
    name edge_index_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_2_0_V \
    op interface \
    ports { edge_index_2_0_V_address0 { O 7 vector } edge_index_2_0_V_ce0 { O 1 bit } edge_index_2_0_V_d0 { O 14 vector } edge_index_2_0_V_q0 { I 14 vector } edge_index_2_0_V_we0 { O 1 bit } edge_index_2_0_V_address1 { O 7 vector } edge_index_2_0_V_ce1 { O 1 bit } edge_index_2_0_V_d1 { O 14 vector } edge_index_2_0_V_q1 { I 14 vector } edge_index_2_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2213 \
    name edge_index_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_2_1_V \
    op interface \
    ports { edge_index_2_1_V_address0 { O 7 vector } edge_index_2_1_V_ce0 { O 1 bit } edge_index_2_1_V_d0 { O 14 vector } edge_index_2_1_V_q0 { I 14 vector } edge_index_2_1_V_we0 { O 1 bit } edge_index_2_1_V_address1 { O 7 vector } edge_index_2_1_V_ce1 { O 1 bit } edge_index_2_1_V_d1 { O 14 vector } edge_index_2_1_V_q1 { I 14 vector } edge_index_2_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2214 \
    name edge_index_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_3_0_V \
    op interface \
    ports { edge_index_3_0_V_address0 { O 7 vector } edge_index_3_0_V_ce0 { O 1 bit } edge_index_3_0_V_d0 { O 14 vector } edge_index_3_0_V_q0 { I 14 vector } edge_index_3_0_V_we0 { O 1 bit } edge_index_3_0_V_address1 { O 7 vector } edge_index_3_0_V_ce1 { O 1 bit } edge_index_3_0_V_d1 { O 14 vector } edge_index_3_0_V_q1 { I 14 vector } edge_index_3_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2215 \
    name edge_index_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_3_1_V \
    op interface \
    ports { edge_index_3_1_V_address0 { O 7 vector } edge_index_3_1_V_ce0 { O 1 bit } edge_index_3_1_V_d0 { O 14 vector } edge_index_3_1_V_q0 { I 14 vector } edge_index_3_1_V_we0 { O 1 bit } edge_index_3_1_V_address1 { O 7 vector } edge_index_3_1_V_ce1 { O 1 bit } edge_index_3_1_V_d1 { O 14 vector } edge_index_3_1_V_q1 { I 14 vector } edge_index_3_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2216 \
    name edge_index_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_4_0_V \
    op interface \
    ports { edge_index_4_0_V_address0 { O 7 vector } edge_index_4_0_V_ce0 { O 1 bit } edge_index_4_0_V_d0 { O 14 vector } edge_index_4_0_V_q0 { I 14 vector } edge_index_4_0_V_we0 { O 1 bit } edge_index_4_0_V_address1 { O 7 vector } edge_index_4_0_V_ce1 { O 1 bit } edge_index_4_0_V_d1 { O 14 vector } edge_index_4_0_V_q1 { I 14 vector } edge_index_4_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2217 \
    name edge_index_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_4_1_V \
    op interface \
    ports { edge_index_4_1_V_address0 { O 7 vector } edge_index_4_1_V_ce0 { O 1 bit } edge_index_4_1_V_d0 { O 14 vector } edge_index_4_1_V_q0 { I 14 vector } edge_index_4_1_V_we0 { O 1 bit } edge_index_4_1_V_address1 { O 7 vector } edge_index_4_1_V_ce1 { O 1 bit } edge_index_4_1_V_d1 { O 14 vector } edge_index_4_1_V_q1 { I 14 vector } edge_index_4_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2218 \
    name edge_index_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_5_0_V \
    op interface \
    ports { edge_index_5_0_V_address0 { O 7 vector } edge_index_5_0_V_ce0 { O 1 bit } edge_index_5_0_V_d0 { O 14 vector } edge_index_5_0_V_q0 { I 14 vector } edge_index_5_0_V_we0 { O 1 bit } edge_index_5_0_V_address1 { O 7 vector } edge_index_5_0_V_ce1 { O 1 bit } edge_index_5_0_V_d1 { O 14 vector } edge_index_5_0_V_q1 { I 14 vector } edge_index_5_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2219 \
    name edge_index_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_5_1_V \
    op interface \
    ports { edge_index_5_1_V_address0 { O 7 vector } edge_index_5_1_V_ce0 { O 1 bit } edge_index_5_1_V_d0 { O 14 vector } edge_index_5_1_V_q0 { I 14 vector } edge_index_5_1_V_we0 { O 1 bit } edge_index_5_1_V_address1 { O 7 vector } edge_index_5_1_V_ce1 { O 1 bit } edge_index_5_1_V_d1 { O 14 vector } edge_index_5_1_V_q1 { I 14 vector } edge_index_5_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2220 \
    name edge_index_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_6_0_V \
    op interface \
    ports { edge_index_6_0_V_address0 { O 7 vector } edge_index_6_0_V_ce0 { O 1 bit } edge_index_6_0_V_d0 { O 14 vector } edge_index_6_0_V_q0 { I 14 vector } edge_index_6_0_V_we0 { O 1 bit } edge_index_6_0_V_address1 { O 7 vector } edge_index_6_0_V_ce1 { O 1 bit } edge_index_6_0_V_d1 { O 14 vector } edge_index_6_0_V_q1 { I 14 vector } edge_index_6_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2221 \
    name edge_index_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_6_1_V \
    op interface \
    ports { edge_index_6_1_V_address0 { O 7 vector } edge_index_6_1_V_ce0 { O 1 bit } edge_index_6_1_V_d0 { O 14 vector } edge_index_6_1_V_q0 { I 14 vector } edge_index_6_1_V_we0 { O 1 bit } edge_index_6_1_V_address1 { O 7 vector } edge_index_6_1_V_ce1 { O 1 bit } edge_index_6_1_V_d1 { O 14 vector } edge_index_6_1_V_q1 { I 14 vector } edge_index_6_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2222 \
    name edge_index_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_7_0_V \
    op interface \
    ports { edge_index_7_0_V_address0 { O 7 vector } edge_index_7_0_V_ce0 { O 1 bit } edge_index_7_0_V_d0 { O 14 vector } edge_index_7_0_V_q0 { I 14 vector } edge_index_7_0_V_we0 { O 1 bit } edge_index_7_0_V_address1 { O 7 vector } edge_index_7_0_V_ce1 { O 1 bit } edge_index_7_0_V_d1 { O 14 vector } edge_index_7_0_V_q1 { I 14 vector } edge_index_7_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2223 \
    name edge_index_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_7_1_V \
    op interface \
    ports { edge_index_7_1_V_address0 { O 7 vector } edge_index_7_1_V_ce0 { O 1 bit } edge_index_7_1_V_d0 { O 14 vector } edge_index_7_1_V_q0 { I 14 vector } edge_index_7_1_V_we0 { O 1 bit } edge_index_7_1_V_address1 { O 7 vector } edge_index_7_1_V_ce1 { O 1 bit } edge_index_7_1_V_d1 { O 14 vector } edge_index_7_1_V_q1 { I 14 vector } edge_index_7_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2224 \
    name edge_index_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_8_0_V \
    op interface \
    ports { edge_index_8_0_V_address0 { O 7 vector } edge_index_8_0_V_ce0 { O 1 bit } edge_index_8_0_V_d0 { O 14 vector } edge_index_8_0_V_q0 { I 14 vector } edge_index_8_0_V_we0 { O 1 bit } edge_index_8_0_V_address1 { O 7 vector } edge_index_8_0_V_ce1 { O 1 bit } edge_index_8_0_V_d1 { O 14 vector } edge_index_8_0_V_q1 { I 14 vector } edge_index_8_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2225 \
    name edge_index_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_8_1_V \
    op interface \
    ports { edge_index_8_1_V_address0 { O 7 vector } edge_index_8_1_V_ce0 { O 1 bit } edge_index_8_1_V_d0 { O 14 vector } edge_index_8_1_V_q0 { I 14 vector } edge_index_8_1_V_we0 { O 1 bit } edge_index_8_1_V_address1 { O 7 vector } edge_index_8_1_V_ce1 { O 1 bit } edge_index_8_1_V_d1 { O 14 vector } edge_index_8_1_V_q1 { I 14 vector } edge_index_8_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2226 \
    name edge_index_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_9_0_V \
    op interface \
    ports { edge_index_9_0_V_address0 { O 7 vector } edge_index_9_0_V_ce0 { O 1 bit } edge_index_9_0_V_d0 { O 14 vector } edge_index_9_0_V_q0 { I 14 vector } edge_index_9_0_V_we0 { O 1 bit } edge_index_9_0_V_address1 { O 7 vector } edge_index_9_0_V_ce1 { O 1 bit } edge_index_9_0_V_d1 { O 14 vector } edge_index_9_0_V_q1 { I 14 vector } edge_index_9_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2227 \
    name edge_index_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_9_1_V \
    op interface \
    ports { edge_index_9_1_V_address0 { O 7 vector } edge_index_9_1_V_ce0 { O 1 bit } edge_index_9_1_V_d0 { O 14 vector } edge_index_9_1_V_q0 { I 14 vector } edge_index_9_1_V_we0 { O 1 bit } edge_index_9_1_V_address1 { O 7 vector } edge_index_9_1_V_ce1 { O 1 bit } edge_index_9_1_V_d1 { O 14 vector } edge_index_9_1_V_q1 { I 14 vector } edge_index_9_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2228 \
    name edge_index_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_10_0_V \
    op interface \
    ports { edge_index_10_0_V_address0 { O 7 vector } edge_index_10_0_V_ce0 { O 1 bit } edge_index_10_0_V_d0 { O 14 vector } edge_index_10_0_V_q0 { I 14 vector } edge_index_10_0_V_we0 { O 1 bit } edge_index_10_0_V_address1 { O 7 vector } edge_index_10_0_V_ce1 { O 1 bit } edge_index_10_0_V_d1 { O 14 vector } edge_index_10_0_V_q1 { I 14 vector } edge_index_10_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2229 \
    name edge_index_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_10_1_V \
    op interface \
    ports { edge_index_10_1_V_address0 { O 7 vector } edge_index_10_1_V_ce0 { O 1 bit } edge_index_10_1_V_d0 { O 14 vector } edge_index_10_1_V_q0 { I 14 vector } edge_index_10_1_V_we0 { O 1 bit } edge_index_10_1_V_address1 { O 7 vector } edge_index_10_1_V_ce1 { O 1 bit } edge_index_10_1_V_d1 { O 14 vector } edge_index_10_1_V_q1 { I 14 vector } edge_index_10_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2230 \
    name edge_index_11_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_11_0_V \
    op interface \
    ports { edge_index_11_0_V_address0 { O 7 vector } edge_index_11_0_V_ce0 { O 1 bit } edge_index_11_0_V_d0 { O 14 vector } edge_index_11_0_V_q0 { I 14 vector } edge_index_11_0_V_we0 { O 1 bit } edge_index_11_0_V_address1 { O 7 vector } edge_index_11_0_V_ce1 { O 1 bit } edge_index_11_0_V_d1 { O 14 vector } edge_index_11_0_V_q1 { I 14 vector } edge_index_11_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_11_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2231 \
    name edge_index_11_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_11_1_V \
    op interface \
    ports { edge_index_11_1_V_address0 { O 7 vector } edge_index_11_1_V_ce0 { O 1 bit } edge_index_11_1_V_d0 { O 14 vector } edge_index_11_1_V_q0 { I 14 vector } edge_index_11_1_V_we0 { O 1 bit } edge_index_11_1_V_address1 { O 7 vector } edge_index_11_1_V_ce1 { O 1 bit } edge_index_11_1_V_d1 { O 14 vector } edge_index_11_1_V_q1 { I 14 vector } edge_index_11_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_11_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2232 \
    name edge_index_12_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_12_0_V \
    op interface \
    ports { edge_index_12_0_V_address0 { O 7 vector } edge_index_12_0_V_ce0 { O 1 bit } edge_index_12_0_V_d0 { O 14 vector } edge_index_12_0_V_q0 { I 14 vector } edge_index_12_0_V_we0 { O 1 bit } edge_index_12_0_V_address1 { O 7 vector } edge_index_12_0_V_ce1 { O 1 bit } edge_index_12_0_V_d1 { O 14 vector } edge_index_12_0_V_q1 { I 14 vector } edge_index_12_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_12_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2233 \
    name edge_index_12_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename edge_index_12_1_V \
    op interface \
    ports { edge_index_12_1_V_address0 { O 7 vector } edge_index_12_1_V_ce0 { O 1 bit } edge_index_12_1_V_d0 { O 14 vector } edge_index_12_1_V_q0 { I 14 vector } edge_index_12_1_V_we0 { O 1 bit } edge_index_12_1_V_address1 { O 7 vector } edge_index_12_1_V_ce1 { O 1 bit } edge_index_12_1_V_d1 { O 14 vector } edge_index_12_1_V_q1 { I 14 vector } edge_index_12_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'edge_index_12_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2234 \
    name layer11_out_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_0_V \
    op interface \
    ports { layer11_out_0_V_address0 { O 7 vector } layer11_out_0_V_ce0 { O 1 bit } layer11_out_0_V_d0 { O 14 vector } layer11_out_0_V_q0 { I 14 vector } layer11_out_0_V_we0 { O 1 bit } layer11_out_0_V_address1 { O 7 vector } layer11_out_0_V_ce1 { O 1 bit } layer11_out_0_V_d1 { O 14 vector } layer11_out_0_V_q1 { I 14 vector } layer11_out_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2235 \
    name layer11_out_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_1_V \
    op interface \
    ports { layer11_out_1_V_address0 { O 7 vector } layer11_out_1_V_ce0 { O 1 bit } layer11_out_1_V_d0 { O 14 vector } layer11_out_1_V_q0 { I 14 vector } layer11_out_1_V_we0 { O 1 bit } layer11_out_1_V_address1 { O 7 vector } layer11_out_1_V_ce1 { O 1 bit } layer11_out_1_V_d1 { O 14 vector } layer11_out_1_V_q1 { I 14 vector } layer11_out_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2236 \
    name layer11_out_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_2_V \
    op interface \
    ports { layer11_out_2_V_address0 { O 7 vector } layer11_out_2_V_ce0 { O 1 bit } layer11_out_2_V_d0 { O 14 vector } layer11_out_2_V_q0 { I 14 vector } layer11_out_2_V_we0 { O 1 bit } layer11_out_2_V_address1 { O 7 vector } layer11_out_2_V_ce1 { O 1 bit } layer11_out_2_V_d1 { O 14 vector } layer11_out_2_V_q1 { I 14 vector } layer11_out_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2237 \
    name layer11_out_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_3_V \
    op interface \
    ports { layer11_out_3_V_address0 { O 7 vector } layer11_out_3_V_ce0 { O 1 bit } layer11_out_3_V_d0 { O 14 vector } layer11_out_3_V_q0 { I 14 vector } layer11_out_3_V_we0 { O 1 bit } layer11_out_3_V_address1 { O 7 vector } layer11_out_3_V_ce1 { O 1 bit } layer11_out_3_V_d1 { O 14 vector } layer11_out_3_V_q1 { I 14 vector } layer11_out_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2238 \
    name layer11_out_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_4_V \
    op interface \
    ports { layer11_out_4_V_address0 { O 7 vector } layer11_out_4_V_ce0 { O 1 bit } layer11_out_4_V_d0 { O 14 vector } layer11_out_4_V_q0 { I 14 vector } layer11_out_4_V_we0 { O 1 bit } layer11_out_4_V_address1 { O 7 vector } layer11_out_4_V_ce1 { O 1 bit } layer11_out_4_V_d1 { O 14 vector } layer11_out_4_V_q1 { I 14 vector } layer11_out_4_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2239 \
    name layer11_out_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_5_V \
    op interface \
    ports { layer11_out_5_V_address0 { O 7 vector } layer11_out_5_V_ce0 { O 1 bit } layer11_out_5_V_d0 { O 14 vector } layer11_out_5_V_q0 { I 14 vector } layer11_out_5_V_we0 { O 1 bit } layer11_out_5_V_address1 { O 7 vector } layer11_out_5_V_ce1 { O 1 bit } layer11_out_5_V_d1 { O 14 vector } layer11_out_5_V_q1 { I 14 vector } layer11_out_5_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2240 \
    name layer11_out_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_6_V \
    op interface \
    ports { layer11_out_6_V_address0 { O 7 vector } layer11_out_6_V_ce0 { O 1 bit } layer11_out_6_V_d0 { O 14 vector } layer11_out_6_V_q0 { I 14 vector } layer11_out_6_V_we0 { O 1 bit } layer11_out_6_V_address1 { O 7 vector } layer11_out_6_V_ce1 { O 1 bit } layer11_out_6_V_d1 { O 14 vector } layer11_out_6_V_q1 { I 14 vector } layer11_out_6_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2241 \
    name layer11_out_7_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_7_V \
    op interface \
    ports { layer11_out_7_V_address0 { O 7 vector } layer11_out_7_V_ce0 { O 1 bit } layer11_out_7_V_d0 { O 14 vector } layer11_out_7_V_q0 { I 14 vector } layer11_out_7_V_we0 { O 1 bit } layer11_out_7_V_address1 { O 7 vector } layer11_out_7_V_ce1 { O 1 bit } layer11_out_7_V_d1 { O 14 vector } layer11_out_7_V_q1 { I 14 vector } layer11_out_7_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2242 \
    name layer11_out_8_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_8_V \
    op interface \
    ports { layer11_out_8_V_address0 { O 7 vector } layer11_out_8_V_ce0 { O 1 bit } layer11_out_8_V_d0 { O 14 vector } layer11_out_8_V_q0 { I 14 vector } layer11_out_8_V_we0 { O 1 bit } layer11_out_8_V_address1 { O 7 vector } layer11_out_8_V_ce1 { O 1 bit } layer11_out_8_V_d1 { O 14 vector } layer11_out_8_V_q1 { I 14 vector } layer11_out_8_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2243 \
    name layer11_out_9_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_9_V \
    op interface \
    ports { layer11_out_9_V_address0 { O 7 vector } layer11_out_9_V_ce0 { O 1 bit } layer11_out_9_V_d0 { O 14 vector } layer11_out_9_V_q0 { I 14 vector } layer11_out_9_V_we0 { O 1 bit } layer11_out_9_V_address1 { O 7 vector } layer11_out_9_V_ce1 { O 1 bit } layer11_out_9_V_d1 { O 14 vector } layer11_out_9_V_q1 { I 14 vector } layer11_out_9_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2244 \
    name layer11_out_10_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_10_V \
    op interface \
    ports { layer11_out_10_V_address0 { O 7 vector } layer11_out_10_V_ce0 { O 1 bit } layer11_out_10_V_d0 { O 14 vector } layer11_out_10_V_q0 { I 14 vector } layer11_out_10_V_we0 { O 1 bit } layer11_out_10_V_address1 { O 7 vector } layer11_out_10_V_ce1 { O 1 bit } layer11_out_10_V_d1 { O 14 vector } layer11_out_10_V_q1 { I 14 vector } layer11_out_10_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2245 \
    name layer11_out_11_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_11_V \
    op interface \
    ports { layer11_out_11_V_address0 { O 7 vector } layer11_out_11_V_ce0 { O 1 bit } layer11_out_11_V_d0 { O 14 vector } layer11_out_11_V_q0 { I 14 vector } layer11_out_11_V_we0 { O 1 bit } layer11_out_11_V_address1 { O 7 vector } layer11_out_11_V_ce1 { O 1 bit } layer11_out_11_V_d1 { O 14 vector } layer11_out_11_V_q1 { I 14 vector } layer11_out_11_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2246 \
    name layer11_out_12_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer11_out_12_V \
    op interface \
    ports { layer11_out_12_V_address0 { O 7 vector } layer11_out_12_V_ce0 { O 1 bit } layer11_out_12_V_d0 { O 14 vector } layer11_out_12_V_q0 { I 14 vector } layer11_out_12_V_we0 { O 1 bit } layer11_out_12_V_address1 { O 7 vector } layer11_out_12_V_ce1 { O 1 bit } layer11_out_12_V_d1 { O 14 vector } layer11_out_12_V_q1 { I 14 vector } layer11_out_12_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer11_out_12_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2247 \
    name const_size_in_1 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_const_size_in_1 \
    op interface \
    ports { const_size_in_1 { O 16 vector } const_size_in_1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2248 \
    name const_size_in_2 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_const_size_in_2 \
    op interface \
    ports { const_size_in_2 { O 16 vector } const_size_in_2_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2249 \
    name const_size_in_3 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_const_size_in_3 \
    op interface \
    ports { const_size_in_3 { O 16 vector } const_size_in_3_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2250 \
    name const_size_out_1 \
    type other \
    dir O \
    reset_level 1 \
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
    reset_level 1 \
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
    reset_level 1 \
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
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
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


