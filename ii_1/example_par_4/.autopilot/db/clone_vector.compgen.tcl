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
    id 182 \
    name IN_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_0_0_V \
    op interface \
    ports { IN_0_0_V_address0 { O 7 vector } IN_0_0_V_ce0 { O 1 bit } IN_0_0_V_q0 { I 14 vector } IN_0_0_V_address1 { O 7 vector } IN_0_0_V_ce1 { O 1 bit } IN_0_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 183 \
    name IN_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_0_1_V \
    op interface \
    ports { IN_0_1_V_address0 { O 7 vector } IN_0_1_V_ce0 { O 1 bit } IN_0_1_V_q0 { I 14 vector } IN_0_1_V_address1 { O 7 vector } IN_0_1_V_ce1 { O 1 bit } IN_0_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 184 \
    name IN_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_1_0_V \
    op interface \
    ports { IN_1_0_V_address0 { O 7 vector } IN_1_0_V_ce0 { O 1 bit } IN_1_0_V_q0 { I 14 vector } IN_1_0_V_address1 { O 7 vector } IN_1_0_V_ce1 { O 1 bit } IN_1_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 185 \
    name IN_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_1_1_V \
    op interface \
    ports { IN_1_1_V_address0 { O 7 vector } IN_1_1_V_ce0 { O 1 bit } IN_1_1_V_q0 { I 14 vector } IN_1_1_V_address1 { O 7 vector } IN_1_1_V_ce1 { O 1 bit } IN_1_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 186 \
    name IN_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_2_0_V \
    op interface \
    ports { IN_2_0_V_address0 { O 7 vector } IN_2_0_V_ce0 { O 1 bit } IN_2_0_V_q0 { I 14 vector } IN_2_0_V_address1 { O 7 vector } IN_2_0_V_ce1 { O 1 bit } IN_2_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 187 \
    name IN_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_2_1_V \
    op interface \
    ports { IN_2_1_V_address0 { O 7 vector } IN_2_1_V_ce0 { O 1 bit } IN_2_1_V_q0 { I 14 vector } IN_2_1_V_address1 { O 7 vector } IN_2_1_V_ce1 { O 1 bit } IN_2_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 188 \
    name IN_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_3_0_V \
    op interface \
    ports { IN_3_0_V_address0 { O 7 vector } IN_3_0_V_ce0 { O 1 bit } IN_3_0_V_q0 { I 14 vector } IN_3_0_V_address1 { O 7 vector } IN_3_0_V_ce1 { O 1 bit } IN_3_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 189 \
    name IN_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_3_1_V \
    op interface \
    ports { IN_3_1_V_address0 { O 7 vector } IN_3_1_V_ce0 { O 1 bit } IN_3_1_V_q0 { I 14 vector } IN_3_1_V_address1 { O 7 vector } IN_3_1_V_ce1 { O 1 bit } IN_3_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 190 \
    name IN_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_4_0_V \
    op interface \
    ports { IN_4_0_V_address0 { O 7 vector } IN_4_0_V_ce0 { O 1 bit } IN_4_0_V_q0 { I 14 vector } IN_4_0_V_address1 { O 7 vector } IN_4_0_V_ce1 { O 1 bit } IN_4_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 191 \
    name IN_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_4_1_V \
    op interface \
    ports { IN_4_1_V_address0 { O 7 vector } IN_4_1_V_ce0 { O 1 bit } IN_4_1_V_q0 { I 14 vector } IN_4_1_V_address1 { O 7 vector } IN_4_1_V_ce1 { O 1 bit } IN_4_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 192 \
    name IN_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_5_0_V \
    op interface \
    ports { IN_5_0_V_address0 { O 7 vector } IN_5_0_V_ce0 { O 1 bit } IN_5_0_V_q0 { I 14 vector } IN_5_0_V_address1 { O 7 vector } IN_5_0_V_ce1 { O 1 bit } IN_5_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 193 \
    name IN_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_5_1_V \
    op interface \
    ports { IN_5_1_V_address0 { O 7 vector } IN_5_1_V_ce0 { O 1 bit } IN_5_1_V_q0 { I 14 vector } IN_5_1_V_address1 { O 7 vector } IN_5_1_V_ce1 { O 1 bit } IN_5_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 194 \
    name IN_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_6_0_V \
    op interface \
    ports { IN_6_0_V_address0 { O 7 vector } IN_6_0_V_ce0 { O 1 bit } IN_6_0_V_q0 { I 14 vector } IN_6_0_V_address1 { O 7 vector } IN_6_0_V_ce1 { O 1 bit } IN_6_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 195 \
    name IN_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_6_1_V \
    op interface \
    ports { IN_6_1_V_address0 { O 7 vector } IN_6_1_V_ce0 { O 1 bit } IN_6_1_V_q0 { I 14 vector } IN_6_1_V_address1 { O 7 vector } IN_6_1_V_ce1 { O 1 bit } IN_6_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 196 \
    name IN_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_7_0_V \
    op interface \
    ports { IN_7_0_V_address0 { O 7 vector } IN_7_0_V_ce0 { O 1 bit } IN_7_0_V_q0 { I 14 vector } IN_7_0_V_address1 { O 7 vector } IN_7_0_V_ce1 { O 1 bit } IN_7_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 197 \
    name IN_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_7_1_V \
    op interface \
    ports { IN_7_1_V_address0 { O 7 vector } IN_7_1_V_ce0 { O 1 bit } IN_7_1_V_q0 { I 14 vector } IN_7_1_V_address1 { O 7 vector } IN_7_1_V_ce1 { O 1 bit } IN_7_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 198 \
    name IN_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_8_0_V \
    op interface \
    ports { IN_8_0_V_address0 { O 7 vector } IN_8_0_V_ce0 { O 1 bit } IN_8_0_V_q0 { I 14 vector } IN_8_0_V_address1 { O 7 vector } IN_8_0_V_ce1 { O 1 bit } IN_8_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 199 \
    name IN_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_8_1_V \
    op interface \
    ports { IN_8_1_V_address0 { O 7 vector } IN_8_1_V_ce0 { O 1 bit } IN_8_1_V_q0 { I 14 vector } IN_8_1_V_address1 { O 7 vector } IN_8_1_V_ce1 { O 1 bit } IN_8_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 200 \
    name IN_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_9_0_V \
    op interface \
    ports { IN_9_0_V_address0 { O 7 vector } IN_9_0_V_ce0 { O 1 bit } IN_9_0_V_q0 { I 14 vector } IN_9_0_V_address1 { O 7 vector } IN_9_0_V_ce1 { O 1 bit } IN_9_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 201 \
    name IN_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_9_1_V \
    op interface \
    ports { IN_9_1_V_address0 { O 7 vector } IN_9_1_V_ce0 { O 1 bit } IN_9_1_V_q0 { I 14 vector } IN_9_1_V_address1 { O 7 vector } IN_9_1_V_ce1 { O 1 bit } IN_9_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 202 \
    name IN_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_10_0_V \
    op interface \
    ports { IN_10_0_V_address0 { O 7 vector } IN_10_0_V_ce0 { O 1 bit } IN_10_0_V_q0 { I 14 vector } IN_10_0_V_address1 { O 7 vector } IN_10_0_V_ce1 { O 1 bit } IN_10_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 203 \
    name IN_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_10_1_V \
    op interface \
    ports { IN_10_1_V_address0 { O 7 vector } IN_10_1_V_ce0 { O 1 bit } IN_10_1_V_q0 { I 14 vector } IN_10_1_V_address1 { O 7 vector } IN_10_1_V_ce1 { O 1 bit } IN_10_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 204 \
    name IN_11_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_11_0_V \
    op interface \
    ports { IN_11_0_V_address0 { O 7 vector } IN_11_0_V_ce0 { O 1 bit } IN_11_0_V_q0 { I 14 vector } IN_11_0_V_address1 { O 7 vector } IN_11_0_V_ce1 { O 1 bit } IN_11_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_11_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 205 \
    name IN_11_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_11_1_V \
    op interface \
    ports { IN_11_1_V_address0 { O 7 vector } IN_11_1_V_ce0 { O 1 bit } IN_11_1_V_q0 { I 14 vector } IN_11_1_V_address1 { O 7 vector } IN_11_1_V_ce1 { O 1 bit } IN_11_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_11_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 206 \
    name IN_12_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_12_0_V \
    op interface \
    ports { IN_12_0_V_address0 { O 7 vector } IN_12_0_V_ce0 { O 1 bit } IN_12_0_V_q0 { I 14 vector } IN_12_0_V_address1 { O 7 vector } IN_12_0_V_ce1 { O 1 bit } IN_12_0_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_12_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 207 \
    name IN_12_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IN_12_1_V \
    op interface \
    ports { IN_12_1_V_address0 { O 7 vector } IN_12_1_V_ce0 { O 1 bit } IN_12_1_V_q0 { I 14 vector } IN_12_1_V_address1 { O 7 vector } IN_12_1_V_ce1 { O 1 bit } IN_12_1_V_q1 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IN_12_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 208 \
    name OUT1_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_0_1_V \
    op interface \
    ports { OUT1_0_1_V_address0 { O 6 vector } OUT1_0_1_V_ce0 { O 1 bit } OUT1_0_1_V_we0 { O 1 bit } OUT1_0_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 209 \
    name OUT1_0_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_0_3_V \
    op interface \
    ports { OUT1_0_3_V_address0 { O 6 vector } OUT1_0_3_V_ce0 { O 1 bit } OUT1_0_3_V_we0 { O 1 bit } OUT1_0_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_0_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 210 \
    name OUT1_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_1_1_V \
    op interface \
    ports { OUT1_1_1_V_address0 { O 6 vector } OUT1_1_1_V_ce0 { O 1 bit } OUT1_1_1_V_we0 { O 1 bit } OUT1_1_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 211 \
    name OUT1_1_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_1_3_V \
    op interface \
    ports { OUT1_1_3_V_address0 { O 6 vector } OUT1_1_3_V_ce0 { O 1 bit } OUT1_1_3_V_we0 { O 1 bit } OUT1_1_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_1_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 212 \
    name OUT1_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_2_1_V \
    op interface \
    ports { OUT1_2_1_V_address0 { O 6 vector } OUT1_2_1_V_ce0 { O 1 bit } OUT1_2_1_V_we0 { O 1 bit } OUT1_2_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 213 \
    name OUT1_2_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_2_3_V \
    op interface \
    ports { OUT1_2_3_V_address0 { O 6 vector } OUT1_2_3_V_ce0 { O 1 bit } OUT1_2_3_V_we0 { O 1 bit } OUT1_2_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_2_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 214 \
    name OUT1_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_3_1_V \
    op interface \
    ports { OUT1_3_1_V_address0 { O 6 vector } OUT1_3_1_V_ce0 { O 1 bit } OUT1_3_1_V_we0 { O 1 bit } OUT1_3_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 215 \
    name OUT1_3_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_3_3_V \
    op interface \
    ports { OUT1_3_3_V_address0 { O 6 vector } OUT1_3_3_V_ce0 { O 1 bit } OUT1_3_3_V_we0 { O 1 bit } OUT1_3_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_3_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 216 \
    name OUT1_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_4_1_V \
    op interface \
    ports { OUT1_4_1_V_address0 { O 6 vector } OUT1_4_1_V_ce0 { O 1 bit } OUT1_4_1_V_we0 { O 1 bit } OUT1_4_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 217 \
    name OUT1_4_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_4_3_V \
    op interface \
    ports { OUT1_4_3_V_address0 { O 6 vector } OUT1_4_3_V_ce0 { O 1 bit } OUT1_4_3_V_we0 { O 1 bit } OUT1_4_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_4_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 218 \
    name OUT1_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_5_1_V \
    op interface \
    ports { OUT1_5_1_V_address0 { O 6 vector } OUT1_5_1_V_ce0 { O 1 bit } OUT1_5_1_V_we0 { O 1 bit } OUT1_5_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 219 \
    name OUT1_5_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_5_3_V \
    op interface \
    ports { OUT1_5_3_V_address0 { O 6 vector } OUT1_5_3_V_ce0 { O 1 bit } OUT1_5_3_V_we0 { O 1 bit } OUT1_5_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_5_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 220 \
    name OUT1_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_6_1_V \
    op interface \
    ports { OUT1_6_1_V_address0 { O 6 vector } OUT1_6_1_V_ce0 { O 1 bit } OUT1_6_1_V_we0 { O 1 bit } OUT1_6_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 221 \
    name OUT1_6_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_6_3_V \
    op interface \
    ports { OUT1_6_3_V_address0 { O 6 vector } OUT1_6_3_V_ce0 { O 1 bit } OUT1_6_3_V_we0 { O 1 bit } OUT1_6_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_6_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 222 \
    name OUT1_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_7_1_V \
    op interface \
    ports { OUT1_7_1_V_address0 { O 6 vector } OUT1_7_1_V_ce0 { O 1 bit } OUT1_7_1_V_we0 { O 1 bit } OUT1_7_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 223 \
    name OUT1_7_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_7_3_V \
    op interface \
    ports { OUT1_7_3_V_address0 { O 6 vector } OUT1_7_3_V_ce0 { O 1 bit } OUT1_7_3_V_we0 { O 1 bit } OUT1_7_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_7_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 224 \
    name OUT1_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_8_1_V \
    op interface \
    ports { OUT1_8_1_V_address0 { O 6 vector } OUT1_8_1_V_ce0 { O 1 bit } OUT1_8_1_V_we0 { O 1 bit } OUT1_8_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 225 \
    name OUT1_8_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_8_3_V \
    op interface \
    ports { OUT1_8_3_V_address0 { O 6 vector } OUT1_8_3_V_ce0 { O 1 bit } OUT1_8_3_V_we0 { O 1 bit } OUT1_8_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_8_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 226 \
    name OUT1_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_9_1_V \
    op interface \
    ports { OUT1_9_1_V_address0 { O 6 vector } OUT1_9_1_V_ce0 { O 1 bit } OUT1_9_1_V_we0 { O 1 bit } OUT1_9_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 227 \
    name OUT1_9_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_9_3_V \
    op interface \
    ports { OUT1_9_3_V_address0 { O 6 vector } OUT1_9_3_V_ce0 { O 1 bit } OUT1_9_3_V_we0 { O 1 bit } OUT1_9_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_9_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 228 \
    name OUT1_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_10_1_V \
    op interface \
    ports { OUT1_10_1_V_address0 { O 6 vector } OUT1_10_1_V_ce0 { O 1 bit } OUT1_10_1_V_we0 { O 1 bit } OUT1_10_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 229 \
    name OUT1_10_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_10_3_V \
    op interface \
    ports { OUT1_10_3_V_address0 { O 6 vector } OUT1_10_3_V_ce0 { O 1 bit } OUT1_10_3_V_we0 { O 1 bit } OUT1_10_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_10_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 230 \
    name OUT1_11_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_11_1_V \
    op interface \
    ports { OUT1_11_1_V_address0 { O 6 vector } OUT1_11_1_V_ce0 { O 1 bit } OUT1_11_1_V_we0 { O 1 bit } OUT1_11_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_11_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 231 \
    name OUT1_11_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_11_3_V \
    op interface \
    ports { OUT1_11_3_V_address0 { O 6 vector } OUT1_11_3_V_ce0 { O 1 bit } OUT1_11_3_V_we0 { O 1 bit } OUT1_11_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_11_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 232 \
    name OUT1_12_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_12_1_V \
    op interface \
    ports { OUT1_12_1_V_address0 { O 6 vector } OUT1_12_1_V_ce0 { O 1 bit } OUT1_12_1_V_we0 { O 1 bit } OUT1_12_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_12_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 233 \
    name OUT1_12_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT1_12_3_V \
    op interface \
    ports { OUT1_12_3_V_address0 { O 6 vector } OUT1_12_3_V_ce0 { O 1 bit } OUT1_12_3_V_we0 { O 1 bit } OUT1_12_3_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT1_12_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 234 \
    name OUT2_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_0_0_V \
    op interface \
    ports { OUT2_0_0_V_address0 { O 7 vector } OUT2_0_0_V_ce0 { O 1 bit } OUT2_0_0_V_we0 { O 1 bit } OUT2_0_0_V_d0 { O 14 vector } OUT2_0_0_V_address1 { O 7 vector } OUT2_0_0_V_ce1 { O 1 bit } OUT2_0_0_V_we1 { O 1 bit } OUT2_0_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 235 \
    name OUT2_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_0_1_V \
    op interface \
    ports { OUT2_0_1_V_address0 { O 7 vector } OUT2_0_1_V_ce0 { O 1 bit } OUT2_0_1_V_we0 { O 1 bit } OUT2_0_1_V_d0 { O 14 vector } OUT2_0_1_V_address1 { O 7 vector } OUT2_0_1_V_ce1 { O 1 bit } OUT2_0_1_V_we1 { O 1 bit } OUT2_0_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 236 \
    name OUT2_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_1_0_V \
    op interface \
    ports { OUT2_1_0_V_address0 { O 7 vector } OUT2_1_0_V_ce0 { O 1 bit } OUT2_1_0_V_we0 { O 1 bit } OUT2_1_0_V_d0 { O 14 vector } OUT2_1_0_V_address1 { O 7 vector } OUT2_1_0_V_ce1 { O 1 bit } OUT2_1_0_V_we1 { O 1 bit } OUT2_1_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 237 \
    name OUT2_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_1_1_V \
    op interface \
    ports { OUT2_1_1_V_address0 { O 7 vector } OUT2_1_1_V_ce0 { O 1 bit } OUT2_1_1_V_we0 { O 1 bit } OUT2_1_1_V_d0 { O 14 vector } OUT2_1_1_V_address1 { O 7 vector } OUT2_1_1_V_ce1 { O 1 bit } OUT2_1_1_V_we1 { O 1 bit } OUT2_1_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 238 \
    name OUT2_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_2_0_V \
    op interface \
    ports { OUT2_2_0_V_address0 { O 7 vector } OUT2_2_0_V_ce0 { O 1 bit } OUT2_2_0_V_we0 { O 1 bit } OUT2_2_0_V_d0 { O 14 vector } OUT2_2_0_V_address1 { O 7 vector } OUT2_2_0_V_ce1 { O 1 bit } OUT2_2_0_V_we1 { O 1 bit } OUT2_2_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 239 \
    name OUT2_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_2_1_V \
    op interface \
    ports { OUT2_2_1_V_address0 { O 7 vector } OUT2_2_1_V_ce0 { O 1 bit } OUT2_2_1_V_we0 { O 1 bit } OUT2_2_1_V_d0 { O 14 vector } OUT2_2_1_V_address1 { O 7 vector } OUT2_2_1_V_ce1 { O 1 bit } OUT2_2_1_V_we1 { O 1 bit } OUT2_2_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 240 \
    name OUT2_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_3_0_V \
    op interface \
    ports { OUT2_3_0_V_address0 { O 7 vector } OUT2_3_0_V_ce0 { O 1 bit } OUT2_3_0_V_we0 { O 1 bit } OUT2_3_0_V_d0 { O 14 vector } OUT2_3_0_V_address1 { O 7 vector } OUT2_3_0_V_ce1 { O 1 bit } OUT2_3_0_V_we1 { O 1 bit } OUT2_3_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 241 \
    name OUT2_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_3_1_V \
    op interface \
    ports { OUT2_3_1_V_address0 { O 7 vector } OUT2_3_1_V_ce0 { O 1 bit } OUT2_3_1_V_we0 { O 1 bit } OUT2_3_1_V_d0 { O 14 vector } OUT2_3_1_V_address1 { O 7 vector } OUT2_3_1_V_ce1 { O 1 bit } OUT2_3_1_V_we1 { O 1 bit } OUT2_3_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 242 \
    name OUT2_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_4_0_V \
    op interface \
    ports { OUT2_4_0_V_address0 { O 7 vector } OUT2_4_0_V_ce0 { O 1 bit } OUT2_4_0_V_we0 { O 1 bit } OUT2_4_0_V_d0 { O 14 vector } OUT2_4_0_V_address1 { O 7 vector } OUT2_4_0_V_ce1 { O 1 bit } OUT2_4_0_V_we1 { O 1 bit } OUT2_4_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 243 \
    name OUT2_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_4_1_V \
    op interface \
    ports { OUT2_4_1_V_address0 { O 7 vector } OUT2_4_1_V_ce0 { O 1 bit } OUT2_4_1_V_we0 { O 1 bit } OUT2_4_1_V_d0 { O 14 vector } OUT2_4_1_V_address1 { O 7 vector } OUT2_4_1_V_ce1 { O 1 bit } OUT2_4_1_V_we1 { O 1 bit } OUT2_4_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 244 \
    name OUT2_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_5_0_V \
    op interface \
    ports { OUT2_5_0_V_address0 { O 7 vector } OUT2_5_0_V_ce0 { O 1 bit } OUT2_5_0_V_we0 { O 1 bit } OUT2_5_0_V_d0 { O 14 vector } OUT2_5_0_V_address1 { O 7 vector } OUT2_5_0_V_ce1 { O 1 bit } OUT2_5_0_V_we1 { O 1 bit } OUT2_5_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 245 \
    name OUT2_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_5_1_V \
    op interface \
    ports { OUT2_5_1_V_address0 { O 7 vector } OUT2_5_1_V_ce0 { O 1 bit } OUT2_5_1_V_we0 { O 1 bit } OUT2_5_1_V_d0 { O 14 vector } OUT2_5_1_V_address1 { O 7 vector } OUT2_5_1_V_ce1 { O 1 bit } OUT2_5_1_V_we1 { O 1 bit } OUT2_5_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 246 \
    name OUT2_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_6_0_V \
    op interface \
    ports { OUT2_6_0_V_address0 { O 7 vector } OUT2_6_0_V_ce0 { O 1 bit } OUT2_6_0_V_we0 { O 1 bit } OUT2_6_0_V_d0 { O 14 vector } OUT2_6_0_V_address1 { O 7 vector } OUT2_6_0_V_ce1 { O 1 bit } OUT2_6_0_V_we1 { O 1 bit } OUT2_6_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 247 \
    name OUT2_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_6_1_V \
    op interface \
    ports { OUT2_6_1_V_address0 { O 7 vector } OUT2_6_1_V_ce0 { O 1 bit } OUT2_6_1_V_we0 { O 1 bit } OUT2_6_1_V_d0 { O 14 vector } OUT2_6_1_V_address1 { O 7 vector } OUT2_6_1_V_ce1 { O 1 bit } OUT2_6_1_V_we1 { O 1 bit } OUT2_6_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 248 \
    name OUT2_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_7_0_V \
    op interface \
    ports { OUT2_7_0_V_address0 { O 7 vector } OUT2_7_0_V_ce0 { O 1 bit } OUT2_7_0_V_we0 { O 1 bit } OUT2_7_0_V_d0 { O 14 vector } OUT2_7_0_V_address1 { O 7 vector } OUT2_7_0_V_ce1 { O 1 bit } OUT2_7_0_V_we1 { O 1 bit } OUT2_7_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 249 \
    name OUT2_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_7_1_V \
    op interface \
    ports { OUT2_7_1_V_address0 { O 7 vector } OUT2_7_1_V_ce0 { O 1 bit } OUT2_7_1_V_we0 { O 1 bit } OUT2_7_1_V_d0 { O 14 vector } OUT2_7_1_V_address1 { O 7 vector } OUT2_7_1_V_ce1 { O 1 bit } OUT2_7_1_V_we1 { O 1 bit } OUT2_7_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 250 \
    name OUT2_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_8_0_V \
    op interface \
    ports { OUT2_8_0_V_address0 { O 7 vector } OUT2_8_0_V_ce0 { O 1 bit } OUT2_8_0_V_we0 { O 1 bit } OUT2_8_0_V_d0 { O 14 vector } OUT2_8_0_V_address1 { O 7 vector } OUT2_8_0_V_ce1 { O 1 bit } OUT2_8_0_V_we1 { O 1 bit } OUT2_8_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 251 \
    name OUT2_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_8_1_V \
    op interface \
    ports { OUT2_8_1_V_address0 { O 7 vector } OUT2_8_1_V_ce0 { O 1 bit } OUT2_8_1_V_we0 { O 1 bit } OUT2_8_1_V_d0 { O 14 vector } OUT2_8_1_V_address1 { O 7 vector } OUT2_8_1_V_ce1 { O 1 bit } OUT2_8_1_V_we1 { O 1 bit } OUT2_8_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 252 \
    name OUT2_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_9_0_V \
    op interface \
    ports { OUT2_9_0_V_address0 { O 7 vector } OUT2_9_0_V_ce0 { O 1 bit } OUT2_9_0_V_we0 { O 1 bit } OUT2_9_0_V_d0 { O 14 vector } OUT2_9_0_V_address1 { O 7 vector } OUT2_9_0_V_ce1 { O 1 bit } OUT2_9_0_V_we1 { O 1 bit } OUT2_9_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 253 \
    name OUT2_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_9_1_V \
    op interface \
    ports { OUT2_9_1_V_address0 { O 7 vector } OUT2_9_1_V_ce0 { O 1 bit } OUT2_9_1_V_we0 { O 1 bit } OUT2_9_1_V_d0 { O 14 vector } OUT2_9_1_V_address1 { O 7 vector } OUT2_9_1_V_ce1 { O 1 bit } OUT2_9_1_V_we1 { O 1 bit } OUT2_9_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 254 \
    name OUT2_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_10_0_V \
    op interface \
    ports { OUT2_10_0_V_address0 { O 7 vector } OUT2_10_0_V_ce0 { O 1 bit } OUT2_10_0_V_we0 { O 1 bit } OUT2_10_0_V_d0 { O 14 vector } OUT2_10_0_V_address1 { O 7 vector } OUT2_10_0_V_ce1 { O 1 bit } OUT2_10_0_V_we1 { O 1 bit } OUT2_10_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 255 \
    name OUT2_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_10_1_V \
    op interface \
    ports { OUT2_10_1_V_address0 { O 7 vector } OUT2_10_1_V_ce0 { O 1 bit } OUT2_10_1_V_we0 { O 1 bit } OUT2_10_1_V_d0 { O 14 vector } OUT2_10_1_V_address1 { O 7 vector } OUT2_10_1_V_ce1 { O 1 bit } OUT2_10_1_V_we1 { O 1 bit } OUT2_10_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 256 \
    name OUT2_11_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_11_0_V \
    op interface \
    ports { OUT2_11_0_V_address0 { O 7 vector } OUT2_11_0_V_ce0 { O 1 bit } OUT2_11_0_V_we0 { O 1 bit } OUT2_11_0_V_d0 { O 14 vector } OUT2_11_0_V_address1 { O 7 vector } OUT2_11_0_V_ce1 { O 1 bit } OUT2_11_0_V_we1 { O 1 bit } OUT2_11_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_11_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 257 \
    name OUT2_11_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_11_1_V \
    op interface \
    ports { OUT2_11_1_V_address0 { O 7 vector } OUT2_11_1_V_ce0 { O 1 bit } OUT2_11_1_V_we0 { O 1 bit } OUT2_11_1_V_d0 { O 14 vector } OUT2_11_1_V_address1 { O 7 vector } OUT2_11_1_V_ce1 { O 1 bit } OUT2_11_1_V_we1 { O 1 bit } OUT2_11_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_11_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 258 \
    name OUT2_12_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_12_0_V \
    op interface \
    ports { OUT2_12_0_V_address0 { O 7 vector } OUT2_12_0_V_ce0 { O 1 bit } OUT2_12_0_V_we0 { O 1 bit } OUT2_12_0_V_d0 { O 14 vector } OUT2_12_0_V_address1 { O 7 vector } OUT2_12_0_V_ce1 { O 1 bit } OUT2_12_0_V_we1 { O 1 bit } OUT2_12_0_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_12_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 259 \
    name OUT2_12_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename OUT2_12_1_V \
    op interface \
    ports { OUT2_12_1_V_address0 { O 7 vector } OUT2_12_1_V_ce0 { O 1 bit } OUT2_12_1_V_we0 { O 1 bit } OUT2_12_1_V_d0 { O 14 vector } OUT2_12_1_V_address1 { O 7 vector } OUT2_12_1_V_ce1 { O 1 bit } OUT2_12_1_V_we1 { O 1 bit } OUT2_12_1_V_d1 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OUT2_12_1_V'"
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


