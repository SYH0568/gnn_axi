# This script segment is generated automatically by AutoPilot

set id 5
set name example_urem_11nsbkb
set corename simcore_urem_seq
set op urem
set stage_num 15
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set start_width 1
set start_signed 0
set done_width 1
set in0_width 11
set in0_signed 0
set in1_width 3
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 3
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_urem] == "ap_gen_simcore_urem"} {
eval "ap_gen_simcore_urem { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_urem, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op urem
set corename DivnS_SEQ
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 6
set name example_mul_mul_1cud
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 13
set in0_signed 0
set in1_width 11
set in1_signed 0
set out_width 24
set exp i0*i1
set arg_lists {i0 {13 0 +} i1 {11 0 +} p {24 0 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 9 \
    name node_attr_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_0_0_V \
    op interface \
    ports { node_attr_0_0_V_address0 { O 6 vector } node_attr_0_0_V_ce0 { O 1 bit } node_attr_0_0_V_we0 { O 1 bit } node_attr_0_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 10 \
    name node_attr_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_0_1_V \
    op interface \
    ports { node_attr_0_1_V_address0 { O 6 vector } node_attr_0_1_V_ce0 { O 1 bit } node_attr_0_1_V_we0 { O 1 bit } node_attr_0_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 11 \
    name node_attr_0_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_0_2_V \
    op interface \
    ports { node_attr_0_2_V_address0 { O 6 vector } node_attr_0_2_V_ce0 { O 1 bit } node_attr_0_2_V_we0 { O 1 bit } node_attr_0_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_0_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 12 \
    name node_attr_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1_0_V \
    op interface \
    ports { node_attr_1_0_V_address0 { O 6 vector } node_attr_1_0_V_ce0 { O 1 bit } node_attr_1_0_V_we0 { O 1 bit } node_attr_1_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 13 \
    name node_attr_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1_1_V \
    op interface \
    ports { node_attr_1_1_V_address0 { O 6 vector } node_attr_1_1_V_ce0 { O 1 bit } node_attr_1_1_V_we0 { O 1 bit } node_attr_1_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 14 \
    name node_attr_1_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1_2_V \
    op interface \
    ports { node_attr_1_2_V_address0 { O 6 vector } node_attr_1_2_V_ce0 { O 1 bit } node_attr_1_2_V_we0 { O 1 bit } node_attr_1_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 15 \
    name node_attr_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_2_0_V \
    op interface \
    ports { node_attr_2_0_V_address0 { O 6 vector } node_attr_2_0_V_ce0 { O 1 bit } node_attr_2_0_V_we0 { O 1 bit } node_attr_2_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 16 \
    name node_attr_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_2_1_V \
    op interface \
    ports { node_attr_2_1_V_address0 { O 6 vector } node_attr_2_1_V_ce0 { O 1 bit } node_attr_2_1_V_we0 { O 1 bit } node_attr_2_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 17 \
    name node_attr_2_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_2_2_V \
    op interface \
    ports { node_attr_2_2_V_address0 { O 6 vector } node_attr_2_2_V_ce0 { O 1 bit } node_attr_2_2_V_we0 { O 1 bit } node_attr_2_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_2_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 18 \
    name node_attr_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_3_0_V \
    op interface \
    ports { node_attr_3_0_V_address0 { O 6 vector } node_attr_3_0_V_ce0 { O 1 bit } node_attr_3_0_V_we0 { O 1 bit } node_attr_3_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 19 \
    name node_attr_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_3_1_V \
    op interface \
    ports { node_attr_3_1_V_address0 { O 6 vector } node_attr_3_1_V_ce0 { O 1 bit } node_attr_3_1_V_we0 { O 1 bit } node_attr_3_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 20 \
    name node_attr_3_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_3_2_V \
    op interface \
    ports { node_attr_3_2_V_address0 { O 6 vector } node_attr_3_2_V_ce0 { O 1 bit } node_attr_3_2_V_we0 { O 1 bit } node_attr_3_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_3_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 21 \
    name node_attr_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_4_0_V \
    op interface \
    ports { node_attr_4_0_V_address0 { O 6 vector } node_attr_4_0_V_ce0 { O 1 bit } node_attr_4_0_V_we0 { O 1 bit } node_attr_4_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 22 \
    name node_attr_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_4_1_V \
    op interface \
    ports { node_attr_4_1_V_address0 { O 6 vector } node_attr_4_1_V_ce0 { O 1 bit } node_attr_4_1_V_we0 { O 1 bit } node_attr_4_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 23 \
    name node_attr_4_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_4_2_V \
    op interface \
    ports { node_attr_4_2_V_address0 { O 6 vector } node_attr_4_2_V_ce0 { O 1 bit } node_attr_4_2_V_we0 { O 1 bit } node_attr_4_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_4_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 24 \
    name node_attr_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_5_0_V \
    op interface \
    ports { node_attr_5_0_V_address0 { O 6 vector } node_attr_5_0_V_ce0 { O 1 bit } node_attr_5_0_V_we0 { O 1 bit } node_attr_5_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 25 \
    name node_attr_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_5_1_V \
    op interface \
    ports { node_attr_5_1_V_address0 { O 6 vector } node_attr_5_1_V_ce0 { O 1 bit } node_attr_5_1_V_we0 { O 1 bit } node_attr_5_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 26 \
    name node_attr_5_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_5_2_V \
    op interface \
    ports { node_attr_5_2_V_address0 { O 6 vector } node_attr_5_2_V_ce0 { O 1 bit } node_attr_5_2_V_we0 { O 1 bit } node_attr_5_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_5_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 27 \
    name node_attr_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_6_0_V \
    op interface \
    ports { node_attr_6_0_V_address0 { O 6 vector } node_attr_6_0_V_ce0 { O 1 bit } node_attr_6_0_V_we0 { O 1 bit } node_attr_6_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name node_attr_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_6_1_V \
    op interface \
    ports { node_attr_6_1_V_address0 { O 6 vector } node_attr_6_1_V_ce0 { O 1 bit } node_attr_6_1_V_we0 { O 1 bit } node_attr_6_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 29 \
    name node_attr_6_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_6_2_V \
    op interface \
    ports { node_attr_6_2_V_address0 { O 6 vector } node_attr_6_2_V_ce0 { O 1 bit } node_attr_6_2_V_we0 { O 1 bit } node_attr_6_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_6_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 30 \
    name node_attr_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_7_0_V \
    op interface \
    ports { node_attr_7_0_V_address0 { O 6 vector } node_attr_7_0_V_ce0 { O 1 bit } node_attr_7_0_V_we0 { O 1 bit } node_attr_7_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name node_attr_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_7_1_V \
    op interface \
    ports { node_attr_7_1_V_address0 { O 6 vector } node_attr_7_1_V_ce0 { O 1 bit } node_attr_7_1_V_we0 { O 1 bit } node_attr_7_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name node_attr_7_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_7_2_V \
    op interface \
    ports { node_attr_7_2_V_address0 { O 6 vector } node_attr_7_2_V_ce0 { O 1 bit } node_attr_7_2_V_we0 { O 1 bit } node_attr_7_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_7_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name node_attr_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_8_0_V \
    op interface \
    ports { node_attr_8_0_V_address0 { O 6 vector } node_attr_8_0_V_ce0 { O 1 bit } node_attr_8_0_V_we0 { O 1 bit } node_attr_8_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name node_attr_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_8_1_V \
    op interface \
    ports { node_attr_8_1_V_address0 { O 6 vector } node_attr_8_1_V_ce0 { O 1 bit } node_attr_8_1_V_we0 { O 1 bit } node_attr_8_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name node_attr_8_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_8_2_V \
    op interface \
    ports { node_attr_8_2_V_address0 { O 6 vector } node_attr_8_2_V_ce0 { O 1 bit } node_attr_8_2_V_we0 { O 1 bit } node_attr_8_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_8_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name node_attr_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_9_0_V \
    op interface \
    ports { node_attr_9_0_V_address0 { O 6 vector } node_attr_9_0_V_ce0 { O 1 bit } node_attr_9_0_V_we0 { O 1 bit } node_attr_9_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name node_attr_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_9_1_V \
    op interface \
    ports { node_attr_9_1_V_address0 { O 6 vector } node_attr_9_1_V_ce0 { O 1 bit } node_attr_9_1_V_we0 { O 1 bit } node_attr_9_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 38 \
    name node_attr_9_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_9_2_V \
    op interface \
    ports { node_attr_9_2_V_address0 { O 6 vector } node_attr_9_2_V_ce0 { O 1 bit } node_attr_9_2_V_we0 { O 1 bit } node_attr_9_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_9_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name node_attr_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_10_0_V \
    op interface \
    ports { node_attr_10_0_V_address0 { O 6 vector } node_attr_10_0_V_ce0 { O 1 bit } node_attr_10_0_V_we0 { O 1 bit } node_attr_10_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 40 \
    name node_attr_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_10_1_V \
    op interface \
    ports { node_attr_10_1_V_address0 { O 6 vector } node_attr_10_1_V_ce0 { O 1 bit } node_attr_10_1_V_we0 { O 1 bit } node_attr_10_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 41 \
    name node_attr_10_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_10_2_V \
    op interface \
    ports { node_attr_10_2_V_address0 { O 6 vector } node_attr_10_2_V_ce0 { O 1 bit } node_attr_10_2_V_we0 { O 1 bit } node_attr_10_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_10_2_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 42 \
    name node_attr_mat_s_0_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_node_attr_mat_s_0_V_V \
    op interface \
    ports { node_attr_mat_s_0_V_V_dout { I 14 vector } node_attr_mat_s_0_V_V_empty_n { I 1 bit } node_attr_mat_s_0_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 43 \
    name node_attr_mat_s_1_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_node_attr_mat_s_1_V_V \
    op interface \
    ports { node_attr_mat_s_1_V_V_dout { I 14 vector } node_attr_mat_s_1_V_V_empty_n { I 1 bit } node_attr_mat_s_1_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 44 \
    name node_attr_mat_s_2_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_node_attr_mat_s_2_V_V \
    op interface \
    ports { node_attr_mat_s_2_V_V_dout { I 14 vector } node_attr_mat_s_2_V_V_empty_n { I 1 bit } node_attr_mat_s_2_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 45 \
    name node_attr_mat_s_3_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_node_attr_mat_s_3_V_V \
    op interface \
    ports { node_attr_mat_s_3_V_V_dout { I 14 vector } node_attr_mat_s_3_V_V_empty_n { I 1 bit } node_attr_mat_s_3_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 46 \
    name node_attr_mat_s_4_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_node_attr_mat_s_4_V_V \
    op interface \
    ports { node_attr_mat_s_4_V_V_dout { I 14 vector } node_attr_mat_s_4_V_V_empty_n { I 1 bit } node_attr_mat_s_4_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 47 \
    name node_attr_mat_s_5_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_node_attr_mat_s_5_V_V \
    op interface \
    ports { node_attr_mat_s_5_V_V_dout { I 14 vector } node_attr_mat_s_5_V_V_empty_n { I 1 bit } node_attr_mat_s_5_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 48 \
    name node_attr_mat_s_6_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_node_attr_mat_s_6_V_V \
    op interface \
    ports { node_attr_mat_s_6_V_V_dout { I 14 vector } node_attr_mat_s_6_V_V_empty_n { I 1 bit } node_attr_mat_s_6_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 49 \
    name node_attr_mat_s_7_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_node_attr_mat_s_7_V_V \
    op interface \
    ports { node_attr_mat_s_7_V_V_dout { I 14 vector } node_attr_mat_s_7_V_V_empty_n { I 1 bit } node_attr_mat_s_7_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 50 \
    name node_attr_mat_s_8_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_node_attr_mat_s_8_V_V \
    op interface \
    ports { node_attr_mat_s_8_V_V_dout { I 14 vector } node_attr_mat_s_8_V_V_empty_n { I 1 bit } node_attr_mat_s_8_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 51 \
    name node_attr_mat_s_9_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_node_attr_mat_s_9_V_V \
    op interface \
    ports { node_attr_mat_s_9_V_V_dout { I 14 vector } node_attr_mat_s_9_V_V_empty_n { I 1 bit } node_attr_mat_s_9_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 52 \
    name node_attr_mat_s_10_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_node_attr_mat_s_10_V_V \
    op interface \
    ports { node_attr_mat_s_10_V_V_dout { I 14 vector } node_attr_mat_s_10_V_V_empty_n { I 1 bit } node_attr_mat_s_10_V_V_read { O 1 bit } } \
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
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
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


