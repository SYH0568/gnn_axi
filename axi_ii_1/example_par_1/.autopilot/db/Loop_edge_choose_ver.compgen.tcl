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
    id 1905 \
    name layer10_out_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_0_0_V \
    op interface \
    ports { layer10_out_0_0_V_address0 { O 6 vector } layer10_out_0_0_V_ce0 { O 1 bit } layer10_out_0_0_V_q0 { I 14 vector } layer10_out_0_0_V_address1 { O 6 vector } layer10_out_0_0_V_ce1 { O 1 bit } layer10_out_0_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1906 \
    name node_attr_1D_s_mat_0_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_0_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_0_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_0_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_0_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_0_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_0_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_0_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_0_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_0_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_0_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1907 \
    name layer10_out_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_1_0_V \
    op interface \
    ports { layer10_out_1_0_V_address0 { O 6 vector } layer10_out_1_0_V_ce0 { O 1 bit } layer10_out_1_0_V_q0 { I 14 vector } layer10_out_1_0_V_address1 { O 6 vector } layer10_out_1_0_V_ce1 { O 1 bit } layer10_out_1_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1908 \
    name node_attr_1D_s_mat_1_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_1_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_1_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_1_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_1_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_1_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_1_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_1_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_1_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_1_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_1_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1909 \
    name layer10_out_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_2_0_V \
    op interface \
    ports { layer10_out_2_0_V_address0 { O 6 vector } layer10_out_2_0_V_ce0 { O 1 bit } layer10_out_2_0_V_q0 { I 14 vector } layer10_out_2_0_V_address1 { O 6 vector } layer10_out_2_0_V_ce1 { O 1 bit } layer10_out_2_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1910 \
    name node_attr_1D_s_mat_2_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_2_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_2_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_2_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_2_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_2_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_2_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_2_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_2_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_2_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_2_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1911 \
    name node_attr_1D_s_mat_3_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_3_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_3_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_3_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_3_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_3_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_3_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_3_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_3_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_3_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_3_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1912 \
    name node_attr_1D_s_mat_4_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_4_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_4_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_4_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_4_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_4_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_4_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_4_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_4_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_4_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_4_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1913 \
    name node_attr_1D_s_mat_5_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_5_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_5_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_5_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_5_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_5_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_5_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_5_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_5_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_5_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_5_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1914 \
    name layer10_out_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_3_0_V \
    op interface \
    ports { layer10_out_3_0_V_address0 { O 6 vector } layer10_out_3_0_V_ce0 { O 1 bit } layer10_out_3_0_V_q0 { I 14 vector } layer10_out_3_0_V_address1 { O 6 vector } layer10_out_3_0_V_ce1 { O 1 bit } layer10_out_3_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1915 \
    name node_attr_1D_s_mat_6_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_6_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_6_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_6_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_6_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_6_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_6_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_6_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_6_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_6_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_6_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1916 \
    name layer10_out_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_4_0_V \
    op interface \
    ports { layer10_out_4_0_V_address0 { O 6 vector } layer10_out_4_0_V_ce0 { O 1 bit } layer10_out_4_0_V_q0 { I 14 vector } layer10_out_4_0_V_address1 { O 6 vector } layer10_out_4_0_V_ce1 { O 1 bit } layer10_out_4_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1917 \
    name node_attr_1D_s_mat_7_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_7_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_7_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_7_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_7_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_7_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_7_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_7_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_7_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_7_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_7_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1918 \
    name layer10_out_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_5_0_V \
    op interface \
    ports { layer10_out_5_0_V_address0 { O 6 vector } layer10_out_5_0_V_ce0 { O 1 bit } layer10_out_5_0_V_q0 { I 14 vector } layer10_out_5_0_V_address1 { O 6 vector } layer10_out_5_0_V_ce1 { O 1 bit } layer10_out_5_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1919 \
    name node_attr_1D_s_mat_8_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_8_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_8_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_8_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_8_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_8_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_8_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_8_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_8_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_8_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_8_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1920 \
    name layer10_out_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_6_0_V \
    op interface \
    ports { layer10_out_6_0_V_address0 { O 6 vector } layer10_out_6_0_V_ce0 { O 1 bit } layer10_out_6_0_V_q0 { I 14 vector } layer10_out_6_0_V_address1 { O 6 vector } layer10_out_6_0_V_ce1 { O 1 bit } layer10_out_6_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1921 \
    name node_attr_1D_s_mat_9_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_9_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_9_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_9_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_9_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_9_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_9_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_9_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_9_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_9_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_9_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1922 \
    name layer10_out_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_7_0_V \
    op interface \
    ports { layer10_out_7_0_V_address0 { O 6 vector } layer10_out_7_0_V_ce0 { O 1 bit } layer10_out_7_0_V_q0 { I 14 vector } layer10_out_7_0_V_address1 { O 6 vector } layer10_out_7_0_V_ce1 { O 1 bit } layer10_out_7_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1923 \
    name node_attr_1D_s_mat_10_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_10_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_10_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_10_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_10_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_10_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_10_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_10_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_10_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_10_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_10_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1924 \
    name layer10_out_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_8_0_V \
    op interface \
    ports { layer10_out_8_0_V_address0 { O 6 vector } layer10_out_8_0_V_ce0 { O 1 bit } layer10_out_8_0_V_q0 { I 14 vector } layer10_out_8_0_V_address1 { O 6 vector } layer10_out_8_0_V_ce1 { O 1 bit } layer10_out_8_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1925 \
    name node_attr_1D_s_mat_11_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_11_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_11_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_11_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_11_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_11_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_11_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_11_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_11_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_11_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_11_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1926 \
    name layer10_out_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_9_0_V \
    op interface \
    ports { layer10_out_9_0_V_address0 { O 6 vector } layer10_out_9_0_V_ce0 { O 1 bit } layer10_out_9_0_V_q0 { I 14 vector } layer10_out_9_0_V_address1 { O 6 vector } layer10_out_9_0_V_ce1 { O 1 bit } layer10_out_9_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1927 \
    name node_attr_1D_s_mat_12_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_12_0_0_V \
    op interface \
    ports { node_attr_1D_s_mat_12_0_0_V_address0 { O 6 vector } node_attr_1D_s_mat_12_0_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_12_0_0_V_we0 { O 1 bit } node_attr_1D_s_mat_12_0_0_V_d0 { O 14 vector } node_attr_1D_s_mat_12_0_0_V_address1 { O 6 vector } node_attr_1D_s_mat_12_0_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_12_0_0_V_we1 { O 1 bit } node_attr_1D_s_mat_12_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_12_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1928 \
    name node_attr_1D_r_mat_0_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_0_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_0_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_0_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_0_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_0_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_0_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_0_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_0_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_0_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_0_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1929 \
    name node_attr_1D_r_mat_1_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_1_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_1_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_1_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_1_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_1_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_1_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_1_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_1_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_1_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_1_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1930 \
    name node_attr_1D_r_mat_2_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_2_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_2_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_2_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_2_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_2_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_2_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_2_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_2_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_2_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_2_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1931 \
    name node_attr_1D_r_mat_3_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_3_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_3_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_3_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_3_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_3_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_3_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_3_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_3_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_3_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_3_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1932 \
    name node_attr_1D_r_mat_4_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_4_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_4_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_4_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_4_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_4_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_4_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_4_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_4_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_4_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_4_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1933 \
    name node_attr_1D_r_mat_5_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_5_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_5_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_5_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_5_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_5_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_5_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_5_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_5_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_5_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_5_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1934 \
    name node_attr_1D_r_mat_6_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_6_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_6_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_6_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_6_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_6_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_6_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_6_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_6_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_6_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_6_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1935 \
    name node_attr_1D_r_mat_7_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_7_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_7_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_7_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_7_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_7_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_7_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_7_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_7_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_7_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_7_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1936 \
    name node_attr_1D_r_mat_8_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_8_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_8_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_8_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_8_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_8_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_8_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_8_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_8_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_8_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_8_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1937 \
    name node_attr_1D_r_mat_9_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_9_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_9_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_9_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_9_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_9_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_9_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_9_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_9_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_9_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_9_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1938 \
    name node_attr_1D_r_mat_10_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_10_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_10_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_10_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_10_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_10_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_10_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_10_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_10_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_10_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_10_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1939 \
    name node_attr_1D_r_mat_11_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_11_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_11_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_11_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_11_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_11_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_11_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_11_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_11_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_11_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_11_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1940 \
    name layer10_out_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_10_0_V \
    op interface \
    ports { layer10_out_10_0_V_address0 { O 6 vector } layer10_out_10_0_V_ce0 { O 1 bit } layer10_out_10_0_V_q0 { I 14 vector } layer10_out_10_0_V_address1 { O 6 vector } layer10_out_10_0_V_ce1 { O 1 bit } layer10_out_10_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1941 \
    name node_attr_1D_r_mat_12_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_12_0_0_V \
    op interface \
    ports { node_attr_1D_r_mat_12_0_0_V_address0 { O 6 vector } node_attr_1D_r_mat_12_0_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_12_0_0_V_we0 { O 1 bit } node_attr_1D_r_mat_12_0_0_V_d0 { O 14 vector } node_attr_1D_r_mat_12_0_0_V_address1 { O 6 vector } node_attr_1D_r_mat_12_0_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_12_0_0_V_we1 { O 1 bit } node_attr_1D_r_mat_12_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_12_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1942 \
    name layer10_out_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_0_1_V \
    op interface \
    ports { layer10_out_0_1_V_address0 { O 6 vector } layer10_out_0_1_V_ce0 { O 1 bit } layer10_out_0_1_V_q0 { I 14 vector } layer10_out_0_1_V_address1 { O 6 vector } layer10_out_0_1_V_ce1 { O 1 bit } layer10_out_0_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1943 \
    name node_attr_1D_s_mat_0_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_0_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_0_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_0_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_0_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_0_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_0_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_0_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_0_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_0_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_0_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1944 \
    name layer10_out_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_1_1_V \
    op interface \
    ports { layer10_out_1_1_V_address0 { O 6 vector } layer10_out_1_1_V_ce0 { O 1 bit } layer10_out_1_1_V_q0 { I 14 vector } layer10_out_1_1_V_address1 { O 6 vector } layer10_out_1_1_V_ce1 { O 1 bit } layer10_out_1_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1945 \
    name node_attr_1D_s_mat_1_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_1_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_1_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_1_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_1_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_1_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_1_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_1_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_1_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_1_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_1_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1946 \
    name layer10_out_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_2_1_V \
    op interface \
    ports { layer10_out_2_1_V_address0 { O 6 vector } layer10_out_2_1_V_ce0 { O 1 bit } layer10_out_2_1_V_q0 { I 14 vector } layer10_out_2_1_V_address1 { O 6 vector } layer10_out_2_1_V_ce1 { O 1 bit } layer10_out_2_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1947 \
    name node_attr_1D_s_mat_2_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_2_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_2_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_2_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_2_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_2_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_2_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_2_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_2_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_2_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_2_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1948 \
    name node_attr_1D_s_mat_3_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_3_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_3_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_3_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_3_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_3_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_3_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_3_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_3_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_3_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_3_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1949 \
    name node_attr_1D_s_mat_4_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_4_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_4_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_4_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_4_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_4_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_4_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_4_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_4_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_4_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_4_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1950 \
    name node_attr_1D_s_mat_5_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_5_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_5_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_5_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_5_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_5_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_5_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_5_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_5_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_5_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_5_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1951 \
    name layer10_out_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_3_1_V \
    op interface \
    ports { layer10_out_3_1_V_address0 { O 6 vector } layer10_out_3_1_V_ce0 { O 1 bit } layer10_out_3_1_V_q0 { I 14 vector } layer10_out_3_1_V_address1 { O 6 vector } layer10_out_3_1_V_ce1 { O 1 bit } layer10_out_3_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1952 \
    name node_attr_1D_s_mat_6_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_6_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_6_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_6_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_6_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_6_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_6_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_6_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_6_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_6_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_6_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1953 \
    name layer10_out_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_4_1_V \
    op interface \
    ports { layer10_out_4_1_V_address0 { O 6 vector } layer10_out_4_1_V_ce0 { O 1 bit } layer10_out_4_1_V_q0 { I 14 vector } layer10_out_4_1_V_address1 { O 6 vector } layer10_out_4_1_V_ce1 { O 1 bit } layer10_out_4_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1954 \
    name node_attr_1D_s_mat_7_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_7_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_7_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_7_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_7_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_7_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_7_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_7_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_7_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_7_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_7_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1955 \
    name layer10_out_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_5_1_V \
    op interface \
    ports { layer10_out_5_1_V_address0 { O 6 vector } layer10_out_5_1_V_ce0 { O 1 bit } layer10_out_5_1_V_q0 { I 14 vector } layer10_out_5_1_V_address1 { O 6 vector } layer10_out_5_1_V_ce1 { O 1 bit } layer10_out_5_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1956 \
    name node_attr_1D_s_mat_8_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_8_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_8_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_8_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_8_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_8_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_8_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_8_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_8_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_8_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_8_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1957 \
    name layer10_out_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_6_1_V \
    op interface \
    ports { layer10_out_6_1_V_address0 { O 6 vector } layer10_out_6_1_V_ce0 { O 1 bit } layer10_out_6_1_V_q0 { I 14 vector } layer10_out_6_1_V_address1 { O 6 vector } layer10_out_6_1_V_ce1 { O 1 bit } layer10_out_6_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1958 \
    name node_attr_1D_s_mat_9_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_9_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_9_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_9_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_9_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_9_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_9_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_9_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_9_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_9_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_9_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1959 \
    name layer10_out_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_7_1_V \
    op interface \
    ports { layer10_out_7_1_V_address0 { O 6 vector } layer10_out_7_1_V_ce0 { O 1 bit } layer10_out_7_1_V_q0 { I 14 vector } layer10_out_7_1_V_address1 { O 6 vector } layer10_out_7_1_V_ce1 { O 1 bit } layer10_out_7_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1960 \
    name node_attr_1D_s_mat_10_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_10_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_10_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_10_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_10_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_10_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_10_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_10_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_10_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_10_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_10_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1961 \
    name layer10_out_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_8_1_V \
    op interface \
    ports { layer10_out_8_1_V_address0 { O 6 vector } layer10_out_8_1_V_ce0 { O 1 bit } layer10_out_8_1_V_q0 { I 14 vector } layer10_out_8_1_V_address1 { O 6 vector } layer10_out_8_1_V_ce1 { O 1 bit } layer10_out_8_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1962 \
    name node_attr_1D_s_mat_11_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_11_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_11_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_11_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_11_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_11_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_11_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_11_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_11_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_11_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_11_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1963 \
    name layer10_out_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_9_1_V \
    op interface \
    ports { layer10_out_9_1_V_address0 { O 6 vector } layer10_out_9_1_V_ce0 { O 1 bit } layer10_out_9_1_V_q0 { I 14 vector } layer10_out_9_1_V_address1 { O 6 vector } layer10_out_9_1_V_ce1 { O 1 bit } layer10_out_9_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1964 \
    name node_attr_1D_s_mat_12_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_12_1_0_V \
    op interface \
    ports { node_attr_1D_s_mat_12_1_0_V_address0 { O 6 vector } node_attr_1D_s_mat_12_1_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_12_1_0_V_we0 { O 1 bit } node_attr_1D_s_mat_12_1_0_V_d0 { O 14 vector } node_attr_1D_s_mat_12_1_0_V_address1 { O 6 vector } node_attr_1D_s_mat_12_1_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_12_1_0_V_we1 { O 1 bit } node_attr_1D_s_mat_12_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_12_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1965 \
    name node_attr_1D_r_mat_0_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_0_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_0_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_0_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_0_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_0_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_0_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_0_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_0_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_0_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_0_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1966 \
    name node_attr_1D_r_mat_1_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_1_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_1_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_1_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_1_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_1_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_1_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_1_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_1_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_1_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_1_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1967 \
    name node_attr_1D_r_mat_2_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_2_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_2_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_2_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_2_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_2_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_2_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_2_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_2_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_2_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_2_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1968 \
    name node_attr_1D_r_mat_3_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_3_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_3_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_3_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_3_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_3_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_3_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_3_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_3_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_3_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_3_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1969 \
    name node_attr_1D_r_mat_4_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_4_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_4_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_4_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_4_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_4_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_4_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_4_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_4_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_4_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_4_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1970 \
    name node_attr_1D_r_mat_5_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_5_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_5_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_5_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_5_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_5_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_5_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_5_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_5_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_5_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_5_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1971 \
    name node_attr_1D_r_mat_6_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_6_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_6_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_6_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_6_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_6_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_6_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_6_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_6_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_6_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_6_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1972 \
    name node_attr_1D_r_mat_7_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_7_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_7_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_7_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_7_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_7_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_7_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_7_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_7_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_7_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_7_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1973 \
    name node_attr_1D_r_mat_8_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_8_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_8_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_8_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_8_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_8_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_8_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_8_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_8_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_8_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_8_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1974 \
    name node_attr_1D_r_mat_9_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_9_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_9_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_9_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_9_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_9_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_9_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_9_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_9_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_9_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_9_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1975 \
    name node_attr_1D_r_mat_10_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_10_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_10_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_10_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_10_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_10_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_10_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_10_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_10_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_10_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_10_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1976 \
    name node_attr_1D_r_mat_11_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_11_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_11_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_11_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_11_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_11_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_11_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_11_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_11_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_11_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_11_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1977 \
    name layer10_out_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_10_1_V \
    op interface \
    ports { layer10_out_10_1_V_address0 { O 6 vector } layer10_out_10_1_V_ce0 { O 1 bit } layer10_out_10_1_V_q0 { I 14 vector } layer10_out_10_1_V_address1 { O 6 vector } layer10_out_10_1_V_ce1 { O 1 bit } layer10_out_10_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1978 \
    name node_attr_1D_r_mat_12_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_12_1_0_V \
    op interface \
    ports { node_attr_1D_r_mat_12_1_0_V_address0 { O 6 vector } node_attr_1D_r_mat_12_1_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_12_1_0_V_we0 { O 1 bit } node_attr_1D_r_mat_12_1_0_V_d0 { O 14 vector } node_attr_1D_r_mat_12_1_0_V_address1 { O 6 vector } node_attr_1D_r_mat_12_1_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_12_1_0_V_we1 { O 1 bit } node_attr_1D_r_mat_12_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_12_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1979 \
    name layer10_out_0_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_0_2_V \
    op interface \
    ports { layer10_out_0_2_V_address0 { O 6 vector } layer10_out_0_2_V_ce0 { O 1 bit } layer10_out_0_2_V_q0 { I 14 vector } layer10_out_0_2_V_address1 { O 6 vector } layer10_out_0_2_V_ce1 { O 1 bit } layer10_out_0_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_0_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1980 \
    name node_attr_1D_s_mat_0_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_0_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_0_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_0_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_0_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_0_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_0_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_0_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_0_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_0_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_0_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1981 \
    name layer10_out_1_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_1_2_V \
    op interface \
    ports { layer10_out_1_2_V_address0 { O 6 vector } layer10_out_1_2_V_ce0 { O 1 bit } layer10_out_1_2_V_q0 { I 14 vector } layer10_out_1_2_V_address1 { O 6 vector } layer10_out_1_2_V_ce1 { O 1 bit } layer10_out_1_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_1_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1982 \
    name node_attr_1D_s_mat_1_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_1_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_1_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_1_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_1_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_1_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_1_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_1_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_1_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_1_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_1_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1983 \
    name layer10_out_2_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_2_2_V \
    op interface \
    ports { layer10_out_2_2_V_address0 { O 6 vector } layer10_out_2_2_V_ce0 { O 1 bit } layer10_out_2_2_V_q0 { I 14 vector } layer10_out_2_2_V_address1 { O 6 vector } layer10_out_2_2_V_ce1 { O 1 bit } layer10_out_2_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_2_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1984 \
    name node_attr_1D_s_mat_2_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_2_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_2_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_2_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_2_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_2_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_2_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_2_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_2_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_2_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_2_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1985 \
    name node_attr_1D_s_mat_3_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_3_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_3_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_3_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_3_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_3_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_3_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_3_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_3_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_3_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_3_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1986 \
    name node_attr_1D_s_mat_4_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_4_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_4_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_4_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_4_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_4_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_4_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_4_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_4_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_4_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_4_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1987 \
    name node_attr_1D_s_mat_5_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_5_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_5_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_5_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_5_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_5_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_5_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_5_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_5_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_5_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_5_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1988 \
    name layer10_out_3_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_3_2_V \
    op interface \
    ports { layer10_out_3_2_V_address0 { O 6 vector } layer10_out_3_2_V_ce0 { O 1 bit } layer10_out_3_2_V_q0 { I 14 vector } layer10_out_3_2_V_address1 { O 6 vector } layer10_out_3_2_V_ce1 { O 1 bit } layer10_out_3_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_3_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1989 \
    name node_attr_1D_s_mat_6_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_6_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_6_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_6_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_6_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_6_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_6_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_6_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_6_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_6_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_6_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1990 \
    name layer10_out_4_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_4_2_V \
    op interface \
    ports { layer10_out_4_2_V_address0 { O 6 vector } layer10_out_4_2_V_ce0 { O 1 bit } layer10_out_4_2_V_q0 { I 14 vector } layer10_out_4_2_V_address1 { O 6 vector } layer10_out_4_2_V_ce1 { O 1 bit } layer10_out_4_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_4_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1991 \
    name node_attr_1D_s_mat_7_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_7_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_7_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_7_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_7_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_7_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_7_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_7_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_7_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_7_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_7_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1992 \
    name layer10_out_5_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_5_2_V \
    op interface \
    ports { layer10_out_5_2_V_address0 { O 6 vector } layer10_out_5_2_V_ce0 { O 1 bit } layer10_out_5_2_V_q0 { I 14 vector } layer10_out_5_2_V_address1 { O 6 vector } layer10_out_5_2_V_ce1 { O 1 bit } layer10_out_5_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_5_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1993 \
    name node_attr_1D_s_mat_8_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_8_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_8_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_8_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_8_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_8_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_8_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_8_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_8_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_8_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_8_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1994 \
    name layer10_out_6_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_6_2_V \
    op interface \
    ports { layer10_out_6_2_V_address0 { O 6 vector } layer10_out_6_2_V_ce0 { O 1 bit } layer10_out_6_2_V_q0 { I 14 vector } layer10_out_6_2_V_address1 { O 6 vector } layer10_out_6_2_V_ce1 { O 1 bit } layer10_out_6_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_6_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1995 \
    name node_attr_1D_s_mat_9_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_9_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_9_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_9_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_9_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_9_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_9_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_9_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_9_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_9_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_9_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1996 \
    name layer10_out_7_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_7_2_V \
    op interface \
    ports { layer10_out_7_2_V_address0 { O 6 vector } layer10_out_7_2_V_ce0 { O 1 bit } layer10_out_7_2_V_q0 { I 14 vector } layer10_out_7_2_V_address1 { O 6 vector } layer10_out_7_2_V_ce1 { O 1 bit } layer10_out_7_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_7_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1997 \
    name node_attr_1D_s_mat_10_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_10_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_10_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_10_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_10_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_10_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_10_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_10_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_10_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_10_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_10_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1998 \
    name layer10_out_8_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_8_2_V \
    op interface \
    ports { layer10_out_8_2_V_address0 { O 6 vector } layer10_out_8_2_V_ce0 { O 1 bit } layer10_out_8_2_V_q0 { I 14 vector } layer10_out_8_2_V_address1 { O 6 vector } layer10_out_8_2_V_ce1 { O 1 bit } layer10_out_8_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_8_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1999 \
    name node_attr_1D_s_mat_11_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_11_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_11_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_11_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_11_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_11_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_11_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_11_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_11_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_11_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_11_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2000 \
    name layer10_out_9_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_9_2_V \
    op interface \
    ports { layer10_out_9_2_V_address0 { O 6 vector } layer10_out_9_2_V_ce0 { O 1 bit } layer10_out_9_2_V_q0 { I 14 vector } layer10_out_9_2_V_address1 { O 6 vector } layer10_out_9_2_V_ce1 { O 1 bit } layer10_out_9_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_9_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2001 \
    name node_attr_1D_s_mat_12_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_s_mat_12_2_0_V \
    op interface \
    ports { node_attr_1D_s_mat_12_2_0_V_address0 { O 6 vector } node_attr_1D_s_mat_12_2_0_V_ce0 { O 1 bit } node_attr_1D_s_mat_12_2_0_V_we0 { O 1 bit } node_attr_1D_s_mat_12_2_0_V_d0 { O 14 vector } node_attr_1D_s_mat_12_2_0_V_address1 { O 6 vector } node_attr_1D_s_mat_12_2_0_V_ce1 { O 1 bit } node_attr_1D_s_mat_12_2_0_V_we1 { O 1 bit } node_attr_1D_s_mat_12_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_s_mat_12_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2002 \
    name node_attr_1D_r_mat_0_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_0_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_0_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_0_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_0_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_0_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_0_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_0_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_0_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_0_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_0_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2003 \
    name node_attr_1D_r_mat_1_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_1_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_1_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_1_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_1_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_1_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_1_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_1_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_1_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_1_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_1_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2004 \
    name node_attr_1D_r_mat_2_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_2_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_2_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_2_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_2_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_2_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_2_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_2_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_2_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_2_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_2_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2005 \
    name node_attr_1D_r_mat_3_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_3_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_3_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_3_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_3_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_3_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_3_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_3_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_3_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_3_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_3_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2006 \
    name node_attr_1D_r_mat_4_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_4_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_4_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_4_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_4_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_4_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_4_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_4_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_4_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_4_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_4_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2007 \
    name node_attr_1D_r_mat_5_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_5_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_5_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_5_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_5_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_5_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_5_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_5_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_5_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_5_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_5_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2008 \
    name node_attr_1D_r_mat_6_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_6_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_6_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_6_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_6_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_6_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_6_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_6_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_6_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_6_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_6_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2009 \
    name node_attr_1D_r_mat_7_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_7_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_7_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_7_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_7_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_7_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_7_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_7_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_7_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_7_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_7_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2010 \
    name node_attr_1D_r_mat_8_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_8_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_8_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_8_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_8_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_8_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_8_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_8_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_8_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_8_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_8_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2011 \
    name node_attr_1D_r_mat_9_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_9_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_9_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_9_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_9_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_9_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_9_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_9_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_9_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_9_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_9_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2012 \
    name node_attr_1D_r_mat_10_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_10_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_10_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_10_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_10_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_10_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_10_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_10_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_10_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_10_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_10_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2013 \
    name node_attr_1D_r_mat_11_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_11_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_11_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_11_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_11_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_11_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_11_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_11_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_11_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_11_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_11_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2014 \
    name layer10_out_10_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer10_out_10_2_V \
    op interface \
    ports { layer10_out_10_2_V_address0 { O 6 vector } layer10_out_10_2_V_ce0 { O 1 bit } layer10_out_10_2_V_q0 { I 14 vector } layer10_out_10_2_V_address1 { O 6 vector } layer10_out_10_2_V_ce1 { O 1 bit } layer10_out_10_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_10_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2015 \
    name node_attr_1D_r_mat_12_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename node_attr_1D_r_mat_12_2_0_V \
    op interface \
    ports { node_attr_1D_r_mat_12_2_0_V_address0 { O 6 vector } node_attr_1D_r_mat_12_2_0_V_ce0 { O 1 bit } node_attr_1D_r_mat_12_2_0_V_we0 { O 1 bit } node_attr_1D_r_mat_12_2_0_V_d0 { O 14 vector } node_attr_1D_r_mat_12_2_0_V_address1 { O 6 vector } node_attr_1D_r_mat_12_2_0_V_ce1 { O 1 bit } node_attr_1D_r_mat_12_2_0_V_we1 { O 1 bit } node_attr_1D_r_mat_12_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_1D_r_mat_12_2_0_V'"
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


