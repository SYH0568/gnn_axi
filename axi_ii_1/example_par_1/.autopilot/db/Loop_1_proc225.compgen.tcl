# This script segment is generated automatically by AutoPilot

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
    id 5 \
    name node_attr_mat_s_V_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_mat_s_V_V \
    op interface \
    ports { node_attr_mat_s_V_V_address0 { O 4 vector } node_attr_mat_s_V_V_ce0 { O 1 bit } node_attr_mat_s_V_V_we0 { O 1 bit } node_attr_mat_s_V_V_d0 { O 14 vector } node_attr_mat_s_V_V_q0 { I 14 vector } node_attr_mat_s_V_V_address1 { O 4 vector } node_attr_mat_s_V_V_ce1 { O 1 bit } node_attr_mat_s_V_V_we1 { O 1 bit } node_attr_mat_s_V_V_d1 { O 14 vector } node_attr_mat_s_V_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_mat_s_V_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 6 \
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
    id 7 \
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
    id 8 \
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
    id 9 \
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
    id 10 \
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
    id 11 \
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
    id 12 \
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
    id 13 \
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
    id 14 \
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
    id 15 \
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
    id 16 \
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
    id 17 \
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
    id 18 \
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
    id 19 \
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
    id 20 \
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
    id 21 \
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
    id 22 \
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
    id 23 \
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
    id 24 \
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
    id 25 \
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
    id 26 \
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
    id 27 \
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
    id 28 \
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
    id 29 \
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
    id 30 \
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
    id 31 \
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
    id 32 \
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
    id 33 \
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
    id 34 \
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
    id 35 \
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
    id 36 \
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
    id 37 \
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
    id 38 \
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


