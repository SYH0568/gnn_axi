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
    name IN_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_0_0_V \
    op interface \
    ports { IN_0_0_V_address0 { O 6 vector } IN_0_0_V_ce0 { O 1 bit } IN_0_0_V_q0 { I 14 vector } IN_0_0_V_address1 { O 6 vector } IN_0_0_V_ce1 { O 1 bit } IN_0_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 6 \
    name IN_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_0_1_V \
    op interface \
    ports { IN_0_1_V_address0 { O 6 vector } IN_0_1_V_ce0 { O 1 bit } IN_0_1_V_q0 { I 14 vector } IN_0_1_V_address1 { O 6 vector } IN_0_1_V_ce1 { O 1 bit } IN_0_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 7 \
    name IN_0_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_0_2_V \
    op interface \
    ports { IN_0_2_V_address0 { O 6 vector } IN_0_2_V_ce0 { O 1 bit } IN_0_2_V_q0 { I 14 vector } IN_0_2_V_address1 { O 6 vector } IN_0_2_V_ce1 { O 1 bit } IN_0_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_0_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 8 \
    name IN_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_1_0_V \
    op interface \
    ports { IN_1_0_V_address0 { O 6 vector } IN_1_0_V_ce0 { O 1 bit } IN_1_0_V_q0 { I 14 vector } IN_1_0_V_address1 { O 6 vector } IN_1_0_V_ce1 { O 1 bit } IN_1_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 9 \
    name IN_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_1_1_V \
    op interface \
    ports { IN_1_1_V_address0 { O 6 vector } IN_1_1_V_ce0 { O 1 bit } IN_1_1_V_q0 { I 14 vector } IN_1_1_V_address1 { O 6 vector } IN_1_1_V_ce1 { O 1 bit } IN_1_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 10 \
    name IN_1_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_1_2_V \
    op interface \
    ports { IN_1_2_V_address0 { O 6 vector } IN_1_2_V_ce0 { O 1 bit } IN_1_2_V_q0 { I 14 vector } IN_1_2_V_address1 { O 6 vector } IN_1_2_V_ce1 { O 1 bit } IN_1_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_1_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 11 \
    name IN_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_2_0_V \
    op interface \
    ports { IN_2_0_V_address0 { O 6 vector } IN_2_0_V_ce0 { O 1 bit } IN_2_0_V_q0 { I 14 vector } IN_2_0_V_address1 { O 6 vector } IN_2_0_V_ce1 { O 1 bit } IN_2_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 12 \
    name IN_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_2_1_V \
    op interface \
    ports { IN_2_1_V_address0 { O 6 vector } IN_2_1_V_ce0 { O 1 bit } IN_2_1_V_q0 { I 14 vector } IN_2_1_V_address1 { O 6 vector } IN_2_1_V_ce1 { O 1 bit } IN_2_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 13 \
    name IN_2_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_2_2_V \
    op interface \
    ports { IN_2_2_V_address0 { O 6 vector } IN_2_2_V_ce0 { O 1 bit } IN_2_2_V_q0 { I 14 vector } IN_2_2_V_address1 { O 6 vector } IN_2_2_V_ce1 { O 1 bit } IN_2_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_2_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 14 \
    name IN_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_3_0_V \
    op interface \
    ports { IN_3_0_V_address0 { O 6 vector } IN_3_0_V_ce0 { O 1 bit } IN_3_0_V_q0 { I 14 vector } IN_3_0_V_address1 { O 6 vector } IN_3_0_V_ce1 { O 1 bit } IN_3_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 15 \
    name IN_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_3_1_V \
    op interface \
    ports { IN_3_1_V_address0 { O 6 vector } IN_3_1_V_ce0 { O 1 bit } IN_3_1_V_q0 { I 14 vector } IN_3_1_V_address1 { O 6 vector } IN_3_1_V_ce1 { O 1 bit } IN_3_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 16 \
    name IN_3_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_3_2_V \
    op interface \
    ports { IN_3_2_V_address0 { O 6 vector } IN_3_2_V_ce0 { O 1 bit } IN_3_2_V_q0 { I 14 vector } IN_3_2_V_address1 { O 6 vector } IN_3_2_V_ce1 { O 1 bit } IN_3_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_3_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 17 \
    name IN_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_4_0_V \
    op interface \
    ports { IN_4_0_V_address0 { O 6 vector } IN_4_0_V_ce0 { O 1 bit } IN_4_0_V_q0 { I 14 vector } IN_4_0_V_address1 { O 6 vector } IN_4_0_V_ce1 { O 1 bit } IN_4_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 18 \
    name IN_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_4_1_V \
    op interface \
    ports { IN_4_1_V_address0 { O 6 vector } IN_4_1_V_ce0 { O 1 bit } IN_4_1_V_q0 { I 14 vector } IN_4_1_V_address1 { O 6 vector } IN_4_1_V_ce1 { O 1 bit } IN_4_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 19 \
    name IN_4_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_4_2_V \
    op interface \
    ports { IN_4_2_V_address0 { O 6 vector } IN_4_2_V_ce0 { O 1 bit } IN_4_2_V_q0 { I 14 vector } IN_4_2_V_address1 { O 6 vector } IN_4_2_V_ce1 { O 1 bit } IN_4_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_4_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 20 \
    name IN_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_5_0_V \
    op interface \
    ports { IN_5_0_V_address0 { O 6 vector } IN_5_0_V_ce0 { O 1 bit } IN_5_0_V_q0 { I 14 vector } IN_5_0_V_address1 { O 6 vector } IN_5_0_V_ce1 { O 1 bit } IN_5_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 21 \
    name IN_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_5_1_V \
    op interface \
    ports { IN_5_1_V_address0 { O 6 vector } IN_5_1_V_ce0 { O 1 bit } IN_5_1_V_q0 { I 14 vector } IN_5_1_V_address1 { O 6 vector } IN_5_1_V_ce1 { O 1 bit } IN_5_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 22 \
    name IN_5_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_5_2_V \
    op interface \
    ports { IN_5_2_V_address0 { O 6 vector } IN_5_2_V_ce0 { O 1 bit } IN_5_2_V_q0 { I 14 vector } IN_5_2_V_address1 { O 6 vector } IN_5_2_V_ce1 { O 1 bit } IN_5_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_5_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 23 \
    name IN_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_6_0_V \
    op interface \
    ports { IN_6_0_V_address0 { O 6 vector } IN_6_0_V_ce0 { O 1 bit } IN_6_0_V_q0 { I 14 vector } IN_6_0_V_address1 { O 6 vector } IN_6_0_V_ce1 { O 1 bit } IN_6_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 24 \
    name IN_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_6_1_V \
    op interface \
    ports { IN_6_1_V_address0 { O 6 vector } IN_6_1_V_ce0 { O 1 bit } IN_6_1_V_q0 { I 14 vector } IN_6_1_V_address1 { O 6 vector } IN_6_1_V_ce1 { O 1 bit } IN_6_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 25 \
    name IN_6_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_6_2_V \
    op interface \
    ports { IN_6_2_V_address0 { O 6 vector } IN_6_2_V_ce0 { O 1 bit } IN_6_2_V_q0 { I 14 vector } IN_6_2_V_address1 { O 6 vector } IN_6_2_V_ce1 { O 1 bit } IN_6_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_6_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 26 \
    name IN_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_7_0_V \
    op interface \
    ports { IN_7_0_V_address0 { O 6 vector } IN_7_0_V_ce0 { O 1 bit } IN_7_0_V_q0 { I 14 vector } IN_7_0_V_address1 { O 6 vector } IN_7_0_V_ce1 { O 1 bit } IN_7_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 27 \
    name IN_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_7_1_V \
    op interface \
    ports { IN_7_1_V_address0 { O 6 vector } IN_7_1_V_ce0 { O 1 bit } IN_7_1_V_q0 { I 14 vector } IN_7_1_V_address1 { O 6 vector } IN_7_1_V_ce1 { O 1 bit } IN_7_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name IN_7_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_7_2_V \
    op interface \
    ports { IN_7_2_V_address0 { O 6 vector } IN_7_2_V_ce0 { O 1 bit } IN_7_2_V_q0 { I 14 vector } IN_7_2_V_address1 { O 6 vector } IN_7_2_V_ce1 { O 1 bit } IN_7_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_7_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 29 \
    name IN_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_8_0_V \
    op interface \
    ports { IN_8_0_V_address0 { O 6 vector } IN_8_0_V_ce0 { O 1 bit } IN_8_0_V_q0 { I 14 vector } IN_8_0_V_address1 { O 6 vector } IN_8_0_V_ce1 { O 1 bit } IN_8_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 30 \
    name IN_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_8_1_V \
    op interface \
    ports { IN_8_1_V_address0 { O 6 vector } IN_8_1_V_ce0 { O 1 bit } IN_8_1_V_q0 { I 14 vector } IN_8_1_V_address1 { O 6 vector } IN_8_1_V_ce1 { O 1 bit } IN_8_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name IN_8_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_8_2_V \
    op interface \
    ports { IN_8_2_V_address0 { O 6 vector } IN_8_2_V_ce0 { O 1 bit } IN_8_2_V_q0 { I 14 vector } IN_8_2_V_address1 { O 6 vector } IN_8_2_V_ce1 { O 1 bit } IN_8_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_8_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name IN_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_9_0_V \
    op interface \
    ports { IN_9_0_V_address0 { O 6 vector } IN_9_0_V_ce0 { O 1 bit } IN_9_0_V_q0 { I 14 vector } IN_9_0_V_address1 { O 6 vector } IN_9_0_V_ce1 { O 1 bit } IN_9_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name IN_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_9_1_V \
    op interface \
    ports { IN_9_1_V_address0 { O 6 vector } IN_9_1_V_ce0 { O 1 bit } IN_9_1_V_q0 { I 14 vector } IN_9_1_V_address1 { O 6 vector } IN_9_1_V_ce1 { O 1 bit } IN_9_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name IN_9_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_9_2_V \
    op interface \
    ports { IN_9_2_V_address0 { O 6 vector } IN_9_2_V_ce0 { O 1 bit } IN_9_2_V_q0 { I 14 vector } IN_9_2_V_address1 { O 6 vector } IN_9_2_V_ce1 { O 1 bit } IN_9_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_9_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name IN_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_10_0_V \
    op interface \
    ports { IN_10_0_V_address0 { O 6 vector } IN_10_0_V_ce0 { O 1 bit } IN_10_0_V_q0 { I 14 vector } IN_10_0_V_address1 { O 6 vector } IN_10_0_V_ce1 { O 1 bit } IN_10_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name IN_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_10_1_V \
    op interface \
    ports { IN_10_1_V_address0 { O 6 vector } IN_10_1_V_ce0 { O 1 bit } IN_10_1_V_q0 { I 14 vector } IN_10_1_V_address1 { O 6 vector } IN_10_1_V_ce1 { O 1 bit } IN_10_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name IN_10_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_10_2_V \
    op interface \
    ports { IN_10_2_V_address0 { O 6 vector } IN_10_2_V_ce0 { O 1 bit } IN_10_2_V_q0 { I 14 vector } IN_10_2_V_address1 { O 6 vector } IN_10_2_V_ce1 { O 1 bit } IN_10_2_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_10_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 38 \
    name OUT1_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_0_0_V \
    op interface \
    ports { OUT1_0_0_V_address0 { O 6 vector } OUT1_0_0_V_ce0 { O 1 bit } OUT1_0_0_V_we0 { O 1 bit } OUT1_0_0_V_d0 { O 14 vector } OUT1_0_0_V_address1 { O 6 vector } OUT1_0_0_V_ce1 { O 1 bit } OUT1_0_0_V_we1 { O 1 bit } OUT1_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name OUT1_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_0_1_V \
    op interface \
    ports { OUT1_0_1_V_address0 { O 6 vector } OUT1_0_1_V_ce0 { O 1 bit } OUT1_0_1_V_we0 { O 1 bit } OUT1_0_1_V_d0 { O 14 vector } OUT1_0_1_V_address1 { O 6 vector } OUT1_0_1_V_ce1 { O 1 bit } OUT1_0_1_V_we1 { O 1 bit } OUT1_0_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 40 \
    name OUT1_0_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_0_2_V \
    op interface \
    ports { OUT1_0_2_V_address0 { O 6 vector } OUT1_0_2_V_ce0 { O 1 bit } OUT1_0_2_V_we0 { O 1 bit } OUT1_0_2_V_d0 { O 14 vector } OUT1_0_2_V_address1 { O 6 vector } OUT1_0_2_V_ce1 { O 1 bit } OUT1_0_2_V_we1 { O 1 bit } OUT1_0_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_0_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 41 \
    name OUT1_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_1_0_V \
    op interface \
    ports { OUT1_1_0_V_address0 { O 6 vector } OUT1_1_0_V_ce0 { O 1 bit } OUT1_1_0_V_we0 { O 1 bit } OUT1_1_0_V_d0 { O 14 vector } OUT1_1_0_V_address1 { O 6 vector } OUT1_1_0_V_ce1 { O 1 bit } OUT1_1_0_V_we1 { O 1 bit } OUT1_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 42 \
    name OUT1_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_1_1_V \
    op interface \
    ports { OUT1_1_1_V_address0 { O 6 vector } OUT1_1_1_V_ce0 { O 1 bit } OUT1_1_1_V_we0 { O 1 bit } OUT1_1_1_V_d0 { O 14 vector } OUT1_1_1_V_address1 { O 6 vector } OUT1_1_1_V_ce1 { O 1 bit } OUT1_1_1_V_we1 { O 1 bit } OUT1_1_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 43 \
    name OUT1_1_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_1_2_V \
    op interface \
    ports { OUT1_1_2_V_address0 { O 6 vector } OUT1_1_2_V_ce0 { O 1 bit } OUT1_1_2_V_we0 { O 1 bit } OUT1_1_2_V_d0 { O 14 vector } OUT1_1_2_V_address1 { O 6 vector } OUT1_1_2_V_ce1 { O 1 bit } OUT1_1_2_V_we1 { O 1 bit } OUT1_1_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_1_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 44 \
    name OUT1_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_2_0_V \
    op interface \
    ports { OUT1_2_0_V_address0 { O 6 vector } OUT1_2_0_V_ce0 { O 1 bit } OUT1_2_0_V_we0 { O 1 bit } OUT1_2_0_V_d0 { O 14 vector } OUT1_2_0_V_address1 { O 6 vector } OUT1_2_0_V_ce1 { O 1 bit } OUT1_2_0_V_we1 { O 1 bit } OUT1_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 45 \
    name OUT1_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_2_1_V \
    op interface \
    ports { OUT1_2_1_V_address0 { O 6 vector } OUT1_2_1_V_ce0 { O 1 bit } OUT1_2_1_V_we0 { O 1 bit } OUT1_2_1_V_d0 { O 14 vector } OUT1_2_1_V_address1 { O 6 vector } OUT1_2_1_V_ce1 { O 1 bit } OUT1_2_1_V_we1 { O 1 bit } OUT1_2_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 46 \
    name OUT1_2_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_2_2_V \
    op interface \
    ports { OUT1_2_2_V_address0 { O 6 vector } OUT1_2_2_V_ce0 { O 1 bit } OUT1_2_2_V_we0 { O 1 bit } OUT1_2_2_V_d0 { O 14 vector } OUT1_2_2_V_address1 { O 6 vector } OUT1_2_2_V_ce1 { O 1 bit } OUT1_2_2_V_we1 { O 1 bit } OUT1_2_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_2_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 47 \
    name OUT1_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_3_0_V \
    op interface \
    ports { OUT1_3_0_V_address0 { O 6 vector } OUT1_3_0_V_ce0 { O 1 bit } OUT1_3_0_V_we0 { O 1 bit } OUT1_3_0_V_d0 { O 14 vector } OUT1_3_0_V_address1 { O 6 vector } OUT1_3_0_V_ce1 { O 1 bit } OUT1_3_0_V_we1 { O 1 bit } OUT1_3_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 48 \
    name OUT1_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_3_1_V \
    op interface \
    ports { OUT1_3_1_V_address0 { O 6 vector } OUT1_3_1_V_ce0 { O 1 bit } OUT1_3_1_V_we0 { O 1 bit } OUT1_3_1_V_d0 { O 14 vector } OUT1_3_1_V_address1 { O 6 vector } OUT1_3_1_V_ce1 { O 1 bit } OUT1_3_1_V_we1 { O 1 bit } OUT1_3_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 49 \
    name OUT1_3_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_3_2_V \
    op interface \
    ports { OUT1_3_2_V_address0 { O 6 vector } OUT1_3_2_V_ce0 { O 1 bit } OUT1_3_2_V_we0 { O 1 bit } OUT1_3_2_V_d0 { O 14 vector } OUT1_3_2_V_address1 { O 6 vector } OUT1_3_2_V_ce1 { O 1 bit } OUT1_3_2_V_we1 { O 1 bit } OUT1_3_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_3_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 50 \
    name OUT1_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_4_0_V \
    op interface \
    ports { OUT1_4_0_V_address0 { O 6 vector } OUT1_4_0_V_ce0 { O 1 bit } OUT1_4_0_V_we0 { O 1 bit } OUT1_4_0_V_d0 { O 14 vector } OUT1_4_0_V_address1 { O 6 vector } OUT1_4_0_V_ce1 { O 1 bit } OUT1_4_0_V_we1 { O 1 bit } OUT1_4_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 51 \
    name OUT1_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_4_1_V \
    op interface \
    ports { OUT1_4_1_V_address0 { O 6 vector } OUT1_4_1_V_ce0 { O 1 bit } OUT1_4_1_V_we0 { O 1 bit } OUT1_4_1_V_d0 { O 14 vector } OUT1_4_1_V_address1 { O 6 vector } OUT1_4_1_V_ce1 { O 1 bit } OUT1_4_1_V_we1 { O 1 bit } OUT1_4_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 52 \
    name OUT1_4_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_4_2_V \
    op interface \
    ports { OUT1_4_2_V_address0 { O 6 vector } OUT1_4_2_V_ce0 { O 1 bit } OUT1_4_2_V_we0 { O 1 bit } OUT1_4_2_V_d0 { O 14 vector } OUT1_4_2_V_address1 { O 6 vector } OUT1_4_2_V_ce1 { O 1 bit } OUT1_4_2_V_we1 { O 1 bit } OUT1_4_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_4_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 53 \
    name OUT1_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_5_0_V \
    op interface \
    ports { OUT1_5_0_V_address0 { O 6 vector } OUT1_5_0_V_ce0 { O 1 bit } OUT1_5_0_V_we0 { O 1 bit } OUT1_5_0_V_d0 { O 14 vector } OUT1_5_0_V_address1 { O 6 vector } OUT1_5_0_V_ce1 { O 1 bit } OUT1_5_0_V_we1 { O 1 bit } OUT1_5_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 54 \
    name OUT1_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_5_1_V \
    op interface \
    ports { OUT1_5_1_V_address0 { O 6 vector } OUT1_5_1_V_ce0 { O 1 bit } OUT1_5_1_V_we0 { O 1 bit } OUT1_5_1_V_d0 { O 14 vector } OUT1_5_1_V_address1 { O 6 vector } OUT1_5_1_V_ce1 { O 1 bit } OUT1_5_1_V_we1 { O 1 bit } OUT1_5_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 55 \
    name OUT1_5_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_5_2_V \
    op interface \
    ports { OUT1_5_2_V_address0 { O 6 vector } OUT1_5_2_V_ce0 { O 1 bit } OUT1_5_2_V_we0 { O 1 bit } OUT1_5_2_V_d0 { O 14 vector } OUT1_5_2_V_address1 { O 6 vector } OUT1_5_2_V_ce1 { O 1 bit } OUT1_5_2_V_we1 { O 1 bit } OUT1_5_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_5_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 56 \
    name OUT1_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_6_0_V \
    op interface \
    ports { OUT1_6_0_V_address0 { O 6 vector } OUT1_6_0_V_ce0 { O 1 bit } OUT1_6_0_V_we0 { O 1 bit } OUT1_6_0_V_d0 { O 14 vector } OUT1_6_0_V_address1 { O 6 vector } OUT1_6_0_V_ce1 { O 1 bit } OUT1_6_0_V_we1 { O 1 bit } OUT1_6_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 57 \
    name OUT1_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_6_1_V \
    op interface \
    ports { OUT1_6_1_V_address0 { O 6 vector } OUT1_6_1_V_ce0 { O 1 bit } OUT1_6_1_V_we0 { O 1 bit } OUT1_6_1_V_d0 { O 14 vector } OUT1_6_1_V_address1 { O 6 vector } OUT1_6_1_V_ce1 { O 1 bit } OUT1_6_1_V_we1 { O 1 bit } OUT1_6_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 58 \
    name OUT1_6_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_6_2_V \
    op interface \
    ports { OUT1_6_2_V_address0 { O 6 vector } OUT1_6_2_V_ce0 { O 1 bit } OUT1_6_2_V_we0 { O 1 bit } OUT1_6_2_V_d0 { O 14 vector } OUT1_6_2_V_address1 { O 6 vector } OUT1_6_2_V_ce1 { O 1 bit } OUT1_6_2_V_we1 { O 1 bit } OUT1_6_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_6_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 59 \
    name OUT1_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_7_0_V \
    op interface \
    ports { OUT1_7_0_V_address0 { O 6 vector } OUT1_7_0_V_ce0 { O 1 bit } OUT1_7_0_V_we0 { O 1 bit } OUT1_7_0_V_d0 { O 14 vector } OUT1_7_0_V_address1 { O 6 vector } OUT1_7_0_V_ce1 { O 1 bit } OUT1_7_0_V_we1 { O 1 bit } OUT1_7_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 60 \
    name OUT1_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_7_1_V \
    op interface \
    ports { OUT1_7_1_V_address0 { O 6 vector } OUT1_7_1_V_ce0 { O 1 bit } OUT1_7_1_V_we0 { O 1 bit } OUT1_7_1_V_d0 { O 14 vector } OUT1_7_1_V_address1 { O 6 vector } OUT1_7_1_V_ce1 { O 1 bit } OUT1_7_1_V_we1 { O 1 bit } OUT1_7_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 61 \
    name OUT1_7_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_7_2_V \
    op interface \
    ports { OUT1_7_2_V_address0 { O 6 vector } OUT1_7_2_V_ce0 { O 1 bit } OUT1_7_2_V_we0 { O 1 bit } OUT1_7_2_V_d0 { O 14 vector } OUT1_7_2_V_address1 { O 6 vector } OUT1_7_2_V_ce1 { O 1 bit } OUT1_7_2_V_we1 { O 1 bit } OUT1_7_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_7_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 62 \
    name OUT1_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_8_0_V \
    op interface \
    ports { OUT1_8_0_V_address0 { O 6 vector } OUT1_8_0_V_ce0 { O 1 bit } OUT1_8_0_V_we0 { O 1 bit } OUT1_8_0_V_d0 { O 14 vector } OUT1_8_0_V_address1 { O 6 vector } OUT1_8_0_V_ce1 { O 1 bit } OUT1_8_0_V_we1 { O 1 bit } OUT1_8_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 63 \
    name OUT1_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_8_1_V \
    op interface \
    ports { OUT1_8_1_V_address0 { O 6 vector } OUT1_8_1_V_ce0 { O 1 bit } OUT1_8_1_V_we0 { O 1 bit } OUT1_8_1_V_d0 { O 14 vector } OUT1_8_1_V_address1 { O 6 vector } OUT1_8_1_V_ce1 { O 1 bit } OUT1_8_1_V_we1 { O 1 bit } OUT1_8_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 64 \
    name OUT1_8_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_8_2_V \
    op interface \
    ports { OUT1_8_2_V_address0 { O 6 vector } OUT1_8_2_V_ce0 { O 1 bit } OUT1_8_2_V_we0 { O 1 bit } OUT1_8_2_V_d0 { O 14 vector } OUT1_8_2_V_address1 { O 6 vector } OUT1_8_2_V_ce1 { O 1 bit } OUT1_8_2_V_we1 { O 1 bit } OUT1_8_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_8_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 65 \
    name OUT1_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_9_0_V \
    op interface \
    ports { OUT1_9_0_V_address0 { O 6 vector } OUT1_9_0_V_ce0 { O 1 bit } OUT1_9_0_V_we0 { O 1 bit } OUT1_9_0_V_d0 { O 14 vector } OUT1_9_0_V_address1 { O 6 vector } OUT1_9_0_V_ce1 { O 1 bit } OUT1_9_0_V_we1 { O 1 bit } OUT1_9_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 66 \
    name OUT1_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_9_1_V \
    op interface \
    ports { OUT1_9_1_V_address0 { O 6 vector } OUT1_9_1_V_ce0 { O 1 bit } OUT1_9_1_V_we0 { O 1 bit } OUT1_9_1_V_d0 { O 14 vector } OUT1_9_1_V_address1 { O 6 vector } OUT1_9_1_V_ce1 { O 1 bit } OUT1_9_1_V_we1 { O 1 bit } OUT1_9_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 67 \
    name OUT1_9_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_9_2_V \
    op interface \
    ports { OUT1_9_2_V_address0 { O 6 vector } OUT1_9_2_V_ce0 { O 1 bit } OUT1_9_2_V_we0 { O 1 bit } OUT1_9_2_V_d0 { O 14 vector } OUT1_9_2_V_address1 { O 6 vector } OUT1_9_2_V_ce1 { O 1 bit } OUT1_9_2_V_we1 { O 1 bit } OUT1_9_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_9_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 68 \
    name OUT1_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_10_0_V \
    op interface \
    ports { OUT1_10_0_V_address0 { O 6 vector } OUT1_10_0_V_ce0 { O 1 bit } OUT1_10_0_V_we0 { O 1 bit } OUT1_10_0_V_d0 { O 14 vector } OUT1_10_0_V_address1 { O 6 vector } OUT1_10_0_V_ce1 { O 1 bit } OUT1_10_0_V_we1 { O 1 bit } OUT1_10_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 69 \
    name OUT1_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_10_1_V \
    op interface \
    ports { OUT1_10_1_V_address0 { O 6 vector } OUT1_10_1_V_ce0 { O 1 bit } OUT1_10_1_V_we0 { O 1 bit } OUT1_10_1_V_d0 { O 14 vector } OUT1_10_1_V_address1 { O 6 vector } OUT1_10_1_V_ce1 { O 1 bit } OUT1_10_1_V_we1 { O 1 bit } OUT1_10_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 70 \
    name OUT1_10_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_10_2_V \
    op interface \
    ports { OUT1_10_2_V_address0 { O 6 vector } OUT1_10_2_V_ce0 { O 1 bit } OUT1_10_2_V_we0 { O 1 bit } OUT1_10_2_V_d0 { O 14 vector } OUT1_10_2_V_address1 { O 6 vector } OUT1_10_2_V_ce1 { O 1 bit } OUT1_10_2_V_we1 { O 1 bit } OUT1_10_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_10_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 71 \
    name OUT2_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_0_0_V \
    op interface \
    ports { OUT2_0_0_V_address0 { O 6 vector } OUT2_0_0_V_ce0 { O 1 bit } OUT2_0_0_V_we0 { O 1 bit } OUT2_0_0_V_d0 { O 14 vector } OUT2_0_0_V_address1 { O 6 vector } OUT2_0_0_V_ce1 { O 1 bit } OUT2_0_0_V_we1 { O 1 bit } OUT2_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 72 \
    name OUT2_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_0_1_V \
    op interface \
    ports { OUT2_0_1_V_address0 { O 6 vector } OUT2_0_1_V_ce0 { O 1 bit } OUT2_0_1_V_we0 { O 1 bit } OUT2_0_1_V_d0 { O 14 vector } OUT2_0_1_V_address1 { O 6 vector } OUT2_0_1_V_ce1 { O 1 bit } OUT2_0_1_V_we1 { O 1 bit } OUT2_0_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 73 \
    name OUT2_0_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_0_2_V \
    op interface \
    ports { OUT2_0_2_V_address0 { O 6 vector } OUT2_0_2_V_ce0 { O 1 bit } OUT2_0_2_V_we0 { O 1 bit } OUT2_0_2_V_d0 { O 14 vector } OUT2_0_2_V_address1 { O 6 vector } OUT2_0_2_V_ce1 { O 1 bit } OUT2_0_2_V_we1 { O 1 bit } OUT2_0_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_0_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 74 \
    name OUT2_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_1_0_V \
    op interface \
    ports { OUT2_1_0_V_address0 { O 6 vector } OUT2_1_0_V_ce0 { O 1 bit } OUT2_1_0_V_we0 { O 1 bit } OUT2_1_0_V_d0 { O 14 vector } OUT2_1_0_V_address1 { O 6 vector } OUT2_1_0_V_ce1 { O 1 bit } OUT2_1_0_V_we1 { O 1 bit } OUT2_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 75 \
    name OUT2_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_1_1_V \
    op interface \
    ports { OUT2_1_1_V_address0 { O 6 vector } OUT2_1_1_V_ce0 { O 1 bit } OUT2_1_1_V_we0 { O 1 bit } OUT2_1_1_V_d0 { O 14 vector } OUT2_1_1_V_address1 { O 6 vector } OUT2_1_1_V_ce1 { O 1 bit } OUT2_1_1_V_we1 { O 1 bit } OUT2_1_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 76 \
    name OUT2_1_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_1_2_V \
    op interface \
    ports { OUT2_1_2_V_address0 { O 6 vector } OUT2_1_2_V_ce0 { O 1 bit } OUT2_1_2_V_we0 { O 1 bit } OUT2_1_2_V_d0 { O 14 vector } OUT2_1_2_V_address1 { O 6 vector } OUT2_1_2_V_ce1 { O 1 bit } OUT2_1_2_V_we1 { O 1 bit } OUT2_1_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_1_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 77 \
    name OUT2_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_2_0_V \
    op interface \
    ports { OUT2_2_0_V_address0 { O 6 vector } OUT2_2_0_V_ce0 { O 1 bit } OUT2_2_0_V_we0 { O 1 bit } OUT2_2_0_V_d0 { O 14 vector } OUT2_2_0_V_address1 { O 6 vector } OUT2_2_0_V_ce1 { O 1 bit } OUT2_2_0_V_we1 { O 1 bit } OUT2_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 78 \
    name OUT2_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_2_1_V \
    op interface \
    ports { OUT2_2_1_V_address0 { O 6 vector } OUT2_2_1_V_ce0 { O 1 bit } OUT2_2_1_V_we0 { O 1 bit } OUT2_2_1_V_d0 { O 14 vector } OUT2_2_1_V_address1 { O 6 vector } OUT2_2_1_V_ce1 { O 1 bit } OUT2_2_1_V_we1 { O 1 bit } OUT2_2_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 79 \
    name OUT2_2_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_2_2_V \
    op interface \
    ports { OUT2_2_2_V_address0 { O 6 vector } OUT2_2_2_V_ce0 { O 1 bit } OUT2_2_2_V_we0 { O 1 bit } OUT2_2_2_V_d0 { O 14 vector } OUT2_2_2_V_address1 { O 6 vector } OUT2_2_2_V_ce1 { O 1 bit } OUT2_2_2_V_we1 { O 1 bit } OUT2_2_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_2_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 80 \
    name OUT2_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_3_0_V \
    op interface \
    ports { OUT2_3_0_V_address0 { O 6 vector } OUT2_3_0_V_ce0 { O 1 bit } OUT2_3_0_V_we0 { O 1 bit } OUT2_3_0_V_d0 { O 14 vector } OUT2_3_0_V_address1 { O 6 vector } OUT2_3_0_V_ce1 { O 1 bit } OUT2_3_0_V_we1 { O 1 bit } OUT2_3_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 81 \
    name OUT2_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_3_1_V \
    op interface \
    ports { OUT2_3_1_V_address0 { O 6 vector } OUT2_3_1_V_ce0 { O 1 bit } OUT2_3_1_V_we0 { O 1 bit } OUT2_3_1_V_d0 { O 14 vector } OUT2_3_1_V_address1 { O 6 vector } OUT2_3_1_V_ce1 { O 1 bit } OUT2_3_1_V_we1 { O 1 bit } OUT2_3_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 82 \
    name OUT2_3_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_3_2_V \
    op interface \
    ports { OUT2_3_2_V_address0 { O 6 vector } OUT2_3_2_V_ce0 { O 1 bit } OUT2_3_2_V_we0 { O 1 bit } OUT2_3_2_V_d0 { O 14 vector } OUT2_3_2_V_address1 { O 6 vector } OUT2_3_2_V_ce1 { O 1 bit } OUT2_3_2_V_we1 { O 1 bit } OUT2_3_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_3_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 83 \
    name OUT2_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_4_0_V \
    op interface \
    ports { OUT2_4_0_V_address0 { O 6 vector } OUT2_4_0_V_ce0 { O 1 bit } OUT2_4_0_V_we0 { O 1 bit } OUT2_4_0_V_d0 { O 14 vector } OUT2_4_0_V_address1 { O 6 vector } OUT2_4_0_V_ce1 { O 1 bit } OUT2_4_0_V_we1 { O 1 bit } OUT2_4_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 84 \
    name OUT2_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_4_1_V \
    op interface \
    ports { OUT2_4_1_V_address0 { O 6 vector } OUT2_4_1_V_ce0 { O 1 bit } OUT2_4_1_V_we0 { O 1 bit } OUT2_4_1_V_d0 { O 14 vector } OUT2_4_1_V_address1 { O 6 vector } OUT2_4_1_V_ce1 { O 1 bit } OUT2_4_1_V_we1 { O 1 bit } OUT2_4_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 85 \
    name OUT2_4_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_4_2_V \
    op interface \
    ports { OUT2_4_2_V_address0 { O 6 vector } OUT2_4_2_V_ce0 { O 1 bit } OUT2_4_2_V_we0 { O 1 bit } OUT2_4_2_V_d0 { O 14 vector } OUT2_4_2_V_address1 { O 6 vector } OUT2_4_2_V_ce1 { O 1 bit } OUT2_4_2_V_we1 { O 1 bit } OUT2_4_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_4_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 86 \
    name OUT2_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_5_0_V \
    op interface \
    ports { OUT2_5_0_V_address0 { O 6 vector } OUT2_5_0_V_ce0 { O 1 bit } OUT2_5_0_V_we0 { O 1 bit } OUT2_5_0_V_d0 { O 14 vector } OUT2_5_0_V_address1 { O 6 vector } OUT2_5_0_V_ce1 { O 1 bit } OUT2_5_0_V_we1 { O 1 bit } OUT2_5_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 87 \
    name OUT2_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_5_1_V \
    op interface \
    ports { OUT2_5_1_V_address0 { O 6 vector } OUT2_5_1_V_ce0 { O 1 bit } OUT2_5_1_V_we0 { O 1 bit } OUT2_5_1_V_d0 { O 14 vector } OUT2_5_1_V_address1 { O 6 vector } OUT2_5_1_V_ce1 { O 1 bit } OUT2_5_1_V_we1 { O 1 bit } OUT2_5_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 88 \
    name OUT2_5_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_5_2_V \
    op interface \
    ports { OUT2_5_2_V_address0 { O 6 vector } OUT2_5_2_V_ce0 { O 1 bit } OUT2_5_2_V_we0 { O 1 bit } OUT2_5_2_V_d0 { O 14 vector } OUT2_5_2_V_address1 { O 6 vector } OUT2_5_2_V_ce1 { O 1 bit } OUT2_5_2_V_we1 { O 1 bit } OUT2_5_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_5_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 89 \
    name OUT2_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_6_0_V \
    op interface \
    ports { OUT2_6_0_V_address0 { O 6 vector } OUT2_6_0_V_ce0 { O 1 bit } OUT2_6_0_V_we0 { O 1 bit } OUT2_6_0_V_d0 { O 14 vector } OUT2_6_0_V_address1 { O 6 vector } OUT2_6_0_V_ce1 { O 1 bit } OUT2_6_0_V_we1 { O 1 bit } OUT2_6_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 90 \
    name OUT2_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_6_1_V \
    op interface \
    ports { OUT2_6_1_V_address0 { O 6 vector } OUT2_6_1_V_ce0 { O 1 bit } OUT2_6_1_V_we0 { O 1 bit } OUT2_6_1_V_d0 { O 14 vector } OUT2_6_1_V_address1 { O 6 vector } OUT2_6_1_V_ce1 { O 1 bit } OUT2_6_1_V_we1 { O 1 bit } OUT2_6_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 91 \
    name OUT2_6_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_6_2_V \
    op interface \
    ports { OUT2_6_2_V_address0 { O 6 vector } OUT2_6_2_V_ce0 { O 1 bit } OUT2_6_2_V_we0 { O 1 bit } OUT2_6_2_V_d0 { O 14 vector } OUT2_6_2_V_address1 { O 6 vector } OUT2_6_2_V_ce1 { O 1 bit } OUT2_6_2_V_we1 { O 1 bit } OUT2_6_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_6_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 92 \
    name OUT2_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_7_0_V \
    op interface \
    ports { OUT2_7_0_V_address0 { O 6 vector } OUT2_7_0_V_ce0 { O 1 bit } OUT2_7_0_V_we0 { O 1 bit } OUT2_7_0_V_d0 { O 14 vector } OUT2_7_0_V_address1 { O 6 vector } OUT2_7_0_V_ce1 { O 1 bit } OUT2_7_0_V_we1 { O 1 bit } OUT2_7_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 93 \
    name OUT2_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_7_1_V \
    op interface \
    ports { OUT2_7_1_V_address0 { O 6 vector } OUT2_7_1_V_ce0 { O 1 bit } OUT2_7_1_V_we0 { O 1 bit } OUT2_7_1_V_d0 { O 14 vector } OUT2_7_1_V_address1 { O 6 vector } OUT2_7_1_V_ce1 { O 1 bit } OUT2_7_1_V_we1 { O 1 bit } OUT2_7_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 94 \
    name OUT2_7_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_7_2_V \
    op interface \
    ports { OUT2_7_2_V_address0 { O 6 vector } OUT2_7_2_V_ce0 { O 1 bit } OUT2_7_2_V_we0 { O 1 bit } OUT2_7_2_V_d0 { O 14 vector } OUT2_7_2_V_address1 { O 6 vector } OUT2_7_2_V_ce1 { O 1 bit } OUT2_7_2_V_we1 { O 1 bit } OUT2_7_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_7_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 95 \
    name OUT2_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_8_0_V \
    op interface \
    ports { OUT2_8_0_V_address0 { O 6 vector } OUT2_8_0_V_ce0 { O 1 bit } OUT2_8_0_V_we0 { O 1 bit } OUT2_8_0_V_d0 { O 14 vector } OUT2_8_0_V_address1 { O 6 vector } OUT2_8_0_V_ce1 { O 1 bit } OUT2_8_0_V_we1 { O 1 bit } OUT2_8_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 96 \
    name OUT2_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_8_1_V \
    op interface \
    ports { OUT2_8_1_V_address0 { O 6 vector } OUT2_8_1_V_ce0 { O 1 bit } OUT2_8_1_V_we0 { O 1 bit } OUT2_8_1_V_d0 { O 14 vector } OUT2_8_1_V_address1 { O 6 vector } OUT2_8_1_V_ce1 { O 1 bit } OUT2_8_1_V_we1 { O 1 bit } OUT2_8_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 97 \
    name OUT2_8_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_8_2_V \
    op interface \
    ports { OUT2_8_2_V_address0 { O 6 vector } OUT2_8_2_V_ce0 { O 1 bit } OUT2_8_2_V_we0 { O 1 bit } OUT2_8_2_V_d0 { O 14 vector } OUT2_8_2_V_address1 { O 6 vector } OUT2_8_2_V_ce1 { O 1 bit } OUT2_8_2_V_we1 { O 1 bit } OUT2_8_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_8_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 98 \
    name OUT2_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_9_0_V \
    op interface \
    ports { OUT2_9_0_V_address0 { O 6 vector } OUT2_9_0_V_ce0 { O 1 bit } OUT2_9_0_V_we0 { O 1 bit } OUT2_9_0_V_d0 { O 14 vector } OUT2_9_0_V_address1 { O 6 vector } OUT2_9_0_V_ce1 { O 1 bit } OUT2_9_0_V_we1 { O 1 bit } OUT2_9_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 99 \
    name OUT2_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_9_1_V \
    op interface \
    ports { OUT2_9_1_V_address0 { O 6 vector } OUT2_9_1_V_ce0 { O 1 bit } OUT2_9_1_V_we0 { O 1 bit } OUT2_9_1_V_d0 { O 14 vector } OUT2_9_1_V_address1 { O 6 vector } OUT2_9_1_V_ce1 { O 1 bit } OUT2_9_1_V_we1 { O 1 bit } OUT2_9_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 100 \
    name OUT2_9_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_9_2_V \
    op interface \
    ports { OUT2_9_2_V_address0 { O 6 vector } OUT2_9_2_V_ce0 { O 1 bit } OUT2_9_2_V_we0 { O 1 bit } OUT2_9_2_V_d0 { O 14 vector } OUT2_9_2_V_address1 { O 6 vector } OUT2_9_2_V_ce1 { O 1 bit } OUT2_9_2_V_we1 { O 1 bit } OUT2_9_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_9_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 101 \
    name OUT2_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_10_0_V \
    op interface \
    ports { OUT2_10_0_V_address0 { O 6 vector } OUT2_10_0_V_ce0 { O 1 bit } OUT2_10_0_V_we0 { O 1 bit } OUT2_10_0_V_d0 { O 14 vector } OUT2_10_0_V_address1 { O 6 vector } OUT2_10_0_V_ce1 { O 1 bit } OUT2_10_0_V_we1 { O 1 bit } OUT2_10_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 102 \
    name OUT2_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_10_1_V \
    op interface \
    ports { OUT2_10_1_V_address0 { O 6 vector } OUT2_10_1_V_ce0 { O 1 bit } OUT2_10_1_V_we0 { O 1 bit } OUT2_10_1_V_d0 { O 14 vector } OUT2_10_1_V_address1 { O 6 vector } OUT2_10_1_V_ce1 { O 1 bit } OUT2_10_1_V_we1 { O 1 bit } OUT2_10_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 103 \
    name OUT2_10_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_10_2_V \
    op interface \
    ports { OUT2_10_2_V_address0 { O 6 vector } OUT2_10_2_V_ce0 { O 1 bit } OUT2_10_2_V_we0 { O 1 bit } OUT2_10_2_V_d0 { O 14 vector } OUT2_10_2_V_address1 { O 6 vector } OUT2_10_2_V_ce1 { O 1 bit } OUT2_10_2_V_we1 { O 1 bit } OUT2_10_2_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_10_2_V'"
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


