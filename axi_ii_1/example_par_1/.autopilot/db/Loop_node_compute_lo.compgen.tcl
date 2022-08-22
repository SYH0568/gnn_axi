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
    id 1799 \
    name node_attr_cpy2_V_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_0_0 \
    op interface \
    ports { node_attr_cpy2_V_0_0_address0 { O 6 vector } node_attr_cpy2_V_0_0_ce0 { O 1 bit } node_attr_cpy2_V_0_0_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1800 \
    name node_attr_cpy2_V_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_0_1 \
    op interface \
    ports { node_attr_cpy2_V_0_1_address0 { O 6 vector } node_attr_cpy2_V_0_1_ce0 { O 1 bit } node_attr_cpy2_V_0_1_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1801 \
    name node_attr_cpy2_V_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_0_2 \
    op interface \
    ports { node_attr_cpy2_V_0_2_address0 { O 6 vector } node_attr_cpy2_V_0_2_ce0 { O 1 bit } node_attr_cpy2_V_0_2_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1802 \
    name layer10_out_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_0_0_V \
    op interface \
    ports { layer10_out_0_0_V_address0 { O 6 vector } layer10_out_0_0_V_ce0 { O 1 bit } layer10_out_0_0_V_we0 { O 1 bit } layer10_out_0_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1803 \
    name layer10_out_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_0_1_V \
    op interface \
    ports { layer10_out_0_1_V_address0 { O 6 vector } layer10_out_0_1_V_ce0 { O 1 bit } layer10_out_0_1_V_we0 { O 1 bit } layer10_out_0_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1804 \
    name layer10_out_0_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_0_2_V \
    op interface \
    ports { layer10_out_0_2_V_address0 { O 6 vector } layer10_out_0_2_V_ce0 { O 1 bit } layer10_out_0_2_V_we0 { O 1 bit } layer10_out_0_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_0_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1805 \
    name node_attr_cpy2_V_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_1_0 \
    op interface \
    ports { node_attr_cpy2_V_1_0_address0 { O 6 vector } node_attr_cpy2_V_1_0_ce0 { O 1 bit } node_attr_cpy2_V_1_0_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1806 \
    name node_attr_cpy2_V_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_1_1 \
    op interface \
    ports { node_attr_cpy2_V_1_1_address0 { O 6 vector } node_attr_cpy2_V_1_1_ce0 { O 1 bit } node_attr_cpy2_V_1_1_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1807 \
    name node_attr_cpy2_V_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_1_2 \
    op interface \
    ports { node_attr_cpy2_V_1_2_address0 { O 6 vector } node_attr_cpy2_V_1_2_ce0 { O 1 bit } node_attr_cpy2_V_1_2_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1808 \
    name layer9_out_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_1_0_V \
    op interface \
    ports { layer9_out_1_0_V_address0 { O 6 vector } layer9_out_1_0_V_ce0 { O 1 bit } layer9_out_1_0_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1809 \
    name layer9_out_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_1_1_V \
    op interface \
    ports { layer9_out_1_1_V_address0 { O 6 vector } layer9_out_1_1_V_ce0 { O 1 bit } layer9_out_1_1_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1810 \
    name layer9_out_1_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_1_2_V \
    op interface \
    ports { layer9_out_1_2_V_address0 { O 6 vector } layer9_out_1_2_V_ce0 { O 1 bit } layer9_out_1_2_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_1_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1811 \
    name layer9_out_1_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_1_3_V \
    op interface \
    ports { layer9_out_1_3_V_address0 { O 6 vector } layer9_out_1_3_V_ce0 { O 1 bit } layer9_out_1_3_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_1_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1812 \
    name layer10_out_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_1_0_V \
    op interface \
    ports { layer10_out_1_0_V_address0 { O 6 vector } layer10_out_1_0_V_ce0 { O 1 bit } layer10_out_1_0_V_we0 { O 1 bit } layer10_out_1_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1813 \
    name layer10_out_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_1_1_V \
    op interface \
    ports { layer10_out_1_1_V_address0 { O 6 vector } layer10_out_1_1_V_ce0 { O 1 bit } layer10_out_1_1_V_we0 { O 1 bit } layer10_out_1_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1814 \
    name layer10_out_1_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_1_2_V \
    op interface \
    ports { layer10_out_1_2_V_address0 { O 6 vector } layer10_out_1_2_V_ce0 { O 1 bit } layer10_out_1_2_V_we0 { O 1 bit } layer10_out_1_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_1_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1815 \
    name node_attr_cpy2_V_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_2_0 \
    op interface \
    ports { node_attr_cpy2_V_2_0_address0 { O 6 vector } node_attr_cpy2_V_2_0_ce0 { O 1 bit } node_attr_cpy2_V_2_0_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1816 \
    name node_attr_cpy2_V_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_2_1 \
    op interface \
    ports { node_attr_cpy2_V_2_1_address0 { O 6 vector } node_attr_cpy2_V_2_1_ce0 { O 1 bit } node_attr_cpy2_V_2_1_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1817 \
    name node_attr_cpy2_V_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_2_2 \
    op interface \
    ports { node_attr_cpy2_V_2_2_address0 { O 6 vector } node_attr_cpy2_V_2_2_ce0 { O 1 bit } node_attr_cpy2_V_2_2_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1818 \
    name layer9_out_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_2_0_V \
    op interface \
    ports { layer9_out_2_0_V_address0 { O 6 vector } layer9_out_2_0_V_ce0 { O 1 bit } layer9_out_2_0_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1819 \
    name layer9_out_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_2_1_V \
    op interface \
    ports { layer9_out_2_1_V_address0 { O 6 vector } layer9_out_2_1_V_ce0 { O 1 bit } layer9_out_2_1_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1820 \
    name layer9_out_2_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_2_2_V \
    op interface \
    ports { layer9_out_2_2_V_address0 { O 6 vector } layer9_out_2_2_V_ce0 { O 1 bit } layer9_out_2_2_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_2_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1821 \
    name layer9_out_2_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_2_3_V \
    op interface \
    ports { layer9_out_2_3_V_address0 { O 6 vector } layer9_out_2_3_V_ce0 { O 1 bit } layer9_out_2_3_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_2_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1822 \
    name layer10_out_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_2_0_V \
    op interface \
    ports { layer10_out_2_0_V_address0 { O 6 vector } layer10_out_2_0_V_ce0 { O 1 bit } layer10_out_2_0_V_we0 { O 1 bit } layer10_out_2_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1823 \
    name layer10_out_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_2_1_V \
    op interface \
    ports { layer10_out_2_1_V_address0 { O 6 vector } layer10_out_2_1_V_ce0 { O 1 bit } layer10_out_2_1_V_we0 { O 1 bit } layer10_out_2_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1824 \
    name layer10_out_2_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_2_2_V \
    op interface \
    ports { layer10_out_2_2_V_address0 { O 6 vector } layer10_out_2_2_V_ce0 { O 1 bit } layer10_out_2_2_V_we0 { O 1 bit } layer10_out_2_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_2_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1825 \
    name node_attr_cpy2_V_3_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_3_0 \
    op interface \
    ports { node_attr_cpy2_V_3_0_address0 { O 6 vector } node_attr_cpy2_V_3_0_ce0 { O 1 bit } node_attr_cpy2_V_3_0_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_3_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1826 \
    name node_attr_cpy2_V_3_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_3_1 \
    op interface \
    ports { node_attr_cpy2_V_3_1_address0 { O 6 vector } node_attr_cpy2_V_3_1_ce0 { O 1 bit } node_attr_cpy2_V_3_1_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_3_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1827 \
    name node_attr_cpy2_V_3_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_3_2 \
    op interface \
    ports { node_attr_cpy2_V_3_2_address0 { O 6 vector } node_attr_cpy2_V_3_2_ce0 { O 1 bit } node_attr_cpy2_V_3_2_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_3_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1828 \
    name layer9_out_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_3_0_V \
    op interface \
    ports { layer9_out_3_0_V_address0 { O 6 vector } layer9_out_3_0_V_ce0 { O 1 bit } layer9_out_3_0_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1829 \
    name layer9_out_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_3_1_V \
    op interface \
    ports { layer9_out_3_1_V_address0 { O 6 vector } layer9_out_3_1_V_ce0 { O 1 bit } layer9_out_3_1_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1830 \
    name layer9_out_3_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_3_2_V \
    op interface \
    ports { layer9_out_3_2_V_address0 { O 6 vector } layer9_out_3_2_V_ce0 { O 1 bit } layer9_out_3_2_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_3_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1831 \
    name layer9_out_3_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_3_3_V \
    op interface \
    ports { layer9_out_3_3_V_address0 { O 6 vector } layer9_out_3_3_V_ce0 { O 1 bit } layer9_out_3_3_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_3_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1832 \
    name layer10_out_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_3_0_V \
    op interface \
    ports { layer10_out_3_0_V_address0 { O 6 vector } layer10_out_3_0_V_ce0 { O 1 bit } layer10_out_3_0_V_we0 { O 1 bit } layer10_out_3_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1833 \
    name layer10_out_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_3_1_V \
    op interface \
    ports { layer10_out_3_1_V_address0 { O 6 vector } layer10_out_3_1_V_ce0 { O 1 bit } layer10_out_3_1_V_we0 { O 1 bit } layer10_out_3_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1834 \
    name layer10_out_3_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_3_2_V \
    op interface \
    ports { layer10_out_3_2_V_address0 { O 6 vector } layer10_out_3_2_V_ce0 { O 1 bit } layer10_out_3_2_V_we0 { O 1 bit } layer10_out_3_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_3_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1835 \
    name node_attr_cpy2_V_4_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_4_0 \
    op interface \
    ports { node_attr_cpy2_V_4_0_address0 { O 6 vector } node_attr_cpy2_V_4_0_ce0 { O 1 bit } node_attr_cpy2_V_4_0_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_4_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1836 \
    name node_attr_cpy2_V_4_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_4_1 \
    op interface \
    ports { node_attr_cpy2_V_4_1_address0 { O 6 vector } node_attr_cpy2_V_4_1_ce0 { O 1 bit } node_attr_cpy2_V_4_1_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_4_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1837 \
    name node_attr_cpy2_V_4_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_4_2 \
    op interface \
    ports { node_attr_cpy2_V_4_2_address0 { O 6 vector } node_attr_cpy2_V_4_2_ce0 { O 1 bit } node_attr_cpy2_V_4_2_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_4_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1838 \
    name layer9_out_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_4_0_V \
    op interface \
    ports { layer9_out_4_0_V_address0 { O 6 vector } layer9_out_4_0_V_ce0 { O 1 bit } layer9_out_4_0_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1839 \
    name layer9_out_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_4_1_V \
    op interface \
    ports { layer9_out_4_1_V_address0 { O 6 vector } layer9_out_4_1_V_ce0 { O 1 bit } layer9_out_4_1_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1840 \
    name layer9_out_4_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_4_2_V \
    op interface \
    ports { layer9_out_4_2_V_address0 { O 6 vector } layer9_out_4_2_V_ce0 { O 1 bit } layer9_out_4_2_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_4_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1841 \
    name layer9_out_4_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_4_3_V \
    op interface \
    ports { layer9_out_4_3_V_address0 { O 6 vector } layer9_out_4_3_V_ce0 { O 1 bit } layer9_out_4_3_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_4_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1842 \
    name layer10_out_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_4_0_V \
    op interface \
    ports { layer10_out_4_0_V_address0 { O 6 vector } layer10_out_4_0_V_ce0 { O 1 bit } layer10_out_4_0_V_we0 { O 1 bit } layer10_out_4_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1843 \
    name layer10_out_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_4_1_V \
    op interface \
    ports { layer10_out_4_1_V_address0 { O 6 vector } layer10_out_4_1_V_ce0 { O 1 bit } layer10_out_4_1_V_we0 { O 1 bit } layer10_out_4_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1844 \
    name layer10_out_4_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_4_2_V \
    op interface \
    ports { layer10_out_4_2_V_address0 { O 6 vector } layer10_out_4_2_V_ce0 { O 1 bit } layer10_out_4_2_V_we0 { O 1 bit } layer10_out_4_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_4_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1845 \
    name node_attr_cpy2_V_5_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_5_0 \
    op interface \
    ports { node_attr_cpy2_V_5_0_address0 { O 6 vector } node_attr_cpy2_V_5_0_ce0 { O 1 bit } node_attr_cpy2_V_5_0_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_5_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1846 \
    name node_attr_cpy2_V_5_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_5_1 \
    op interface \
    ports { node_attr_cpy2_V_5_1_address0 { O 6 vector } node_attr_cpy2_V_5_1_ce0 { O 1 bit } node_attr_cpy2_V_5_1_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_5_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1847 \
    name node_attr_cpy2_V_5_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_5_2 \
    op interface \
    ports { node_attr_cpy2_V_5_2_address0 { O 6 vector } node_attr_cpy2_V_5_2_ce0 { O 1 bit } node_attr_cpy2_V_5_2_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_5_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1848 \
    name layer9_out_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_5_0_V \
    op interface \
    ports { layer9_out_5_0_V_address0 { O 6 vector } layer9_out_5_0_V_ce0 { O 1 bit } layer9_out_5_0_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1849 \
    name layer9_out_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_5_1_V \
    op interface \
    ports { layer9_out_5_1_V_address0 { O 6 vector } layer9_out_5_1_V_ce0 { O 1 bit } layer9_out_5_1_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1850 \
    name layer9_out_5_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_5_2_V \
    op interface \
    ports { layer9_out_5_2_V_address0 { O 6 vector } layer9_out_5_2_V_ce0 { O 1 bit } layer9_out_5_2_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_5_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1851 \
    name layer9_out_5_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_5_3_V \
    op interface \
    ports { layer9_out_5_3_V_address0 { O 6 vector } layer9_out_5_3_V_ce0 { O 1 bit } layer9_out_5_3_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_5_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1852 \
    name layer10_out_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_5_0_V \
    op interface \
    ports { layer10_out_5_0_V_address0 { O 6 vector } layer10_out_5_0_V_ce0 { O 1 bit } layer10_out_5_0_V_we0 { O 1 bit } layer10_out_5_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1853 \
    name layer10_out_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_5_1_V \
    op interface \
    ports { layer10_out_5_1_V_address0 { O 6 vector } layer10_out_5_1_V_ce0 { O 1 bit } layer10_out_5_1_V_we0 { O 1 bit } layer10_out_5_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1854 \
    name layer10_out_5_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_5_2_V \
    op interface \
    ports { layer10_out_5_2_V_address0 { O 6 vector } layer10_out_5_2_V_ce0 { O 1 bit } layer10_out_5_2_V_we0 { O 1 bit } layer10_out_5_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_5_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1855 \
    name node_attr_cpy2_V_6_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_6_0 \
    op interface \
    ports { node_attr_cpy2_V_6_0_address0 { O 6 vector } node_attr_cpy2_V_6_0_ce0 { O 1 bit } node_attr_cpy2_V_6_0_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_6_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1856 \
    name node_attr_cpy2_V_6_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_6_1 \
    op interface \
    ports { node_attr_cpy2_V_6_1_address0 { O 6 vector } node_attr_cpy2_V_6_1_ce0 { O 1 bit } node_attr_cpy2_V_6_1_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_6_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1857 \
    name node_attr_cpy2_V_6_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_6_2 \
    op interface \
    ports { node_attr_cpy2_V_6_2_address0 { O 6 vector } node_attr_cpy2_V_6_2_ce0 { O 1 bit } node_attr_cpy2_V_6_2_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_6_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1858 \
    name layer9_out_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_6_0_V \
    op interface \
    ports { layer9_out_6_0_V_address0 { O 6 vector } layer9_out_6_0_V_ce0 { O 1 bit } layer9_out_6_0_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1859 \
    name layer9_out_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_6_1_V \
    op interface \
    ports { layer9_out_6_1_V_address0 { O 6 vector } layer9_out_6_1_V_ce0 { O 1 bit } layer9_out_6_1_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1860 \
    name layer9_out_6_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_6_2_V \
    op interface \
    ports { layer9_out_6_2_V_address0 { O 6 vector } layer9_out_6_2_V_ce0 { O 1 bit } layer9_out_6_2_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_6_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1861 \
    name layer9_out_6_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_6_3_V \
    op interface \
    ports { layer9_out_6_3_V_address0 { O 6 vector } layer9_out_6_3_V_ce0 { O 1 bit } layer9_out_6_3_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_6_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1862 \
    name layer10_out_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_6_0_V \
    op interface \
    ports { layer10_out_6_0_V_address0 { O 6 vector } layer10_out_6_0_V_ce0 { O 1 bit } layer10_out_6_0_V_we0 { O 1 bit } layer10_out_6_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1863 \
    name layer10_out_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_6_1_V \
    op interface \
    ports { layer10_out_6_1_V_address0 { O 6 vector } layer10_out_6_1_V_ce0 { O 1 bit } layer10_out_6_1_V_we0 { O 1 bit } layer10_out_6_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1864 \
    name layer10_out_6_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_6_2_V \
    op interface \
    ports { layer10_out_6_2_V_address0 { O 6 vector } layer10_out_6_2_V_ce0 { O 1 bit } layer10_out_6_2_V_we0 { O 1 bit } layer10_out_6_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_6_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1865 \
    name node_attr_cpy2_V_7_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_7_0 \
    op interface \
    ports { node_attr_cpy2_V_7_0_address0 { O 6 vector } node_attr_cpy2_V_7_0_ce0 { O 1 bit } node_attr_cpy2_V_7_0_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_7_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1866 \
    name node_attr_cpy2_V_7_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_7_1 \
    op interface \
    ports { node_attr_cpy2_V_7_1_address0 { O 6 vector } node_attr_cpy2_V_7_1_ce0 { O 1 bit } node_attr_cpy2_V_7_1_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_7_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1867 \
    name node_attr_cpy2_V_7_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_7_2 \
    op interface \
    ports { node_attr_cpy2_V_7_2_address0 { O 6 vector } node_attr_cpy2_V_7_2_ce0 { O 1 bit } node_attr_cpy2_V_7_2_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_7_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1868 \
    name layer9_out_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_7_0_V \
    op interface \
    ports { layer9_out_7_0_V_address0 { O 6 vector } layer9_out_7_0_V_ce0 { O 1 bit } layer9_out_7_0_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1869 \
    name layer9_out_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_7_1_V \
    op interface \
    ports { layer9_out_7_1_V_address0 { O 6 vector } layer9_out_7_1_V_ce0 { O 1 bit } layer9_out_7_1_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1870 \
    name layer9_out_7_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_7_2_V \
    op interface \
    ports { layer9_out_7_2_V_address0 { O 6 vector } layer9_out_7_2_V_ce0 { O 1 bit } layer9_out_7_2_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_7_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1871 \
    name layer9_out_7_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_7_3_V \
    op interface \
    ports { layer9_out_7_3_V_address0 { O 6 vector } layer9_out_7_3_V_ce0 { O 1 bit } layer9_out_7_3_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_7_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1872 \
    name layer10_out_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_7_0_V \
    op interface \
    ports { layer10_out_7_0_V_address0 { O 6 vector } layer10_out_7_0_V_ce0 { O 1 bit } layer10_out_7_0_V_we0 { O 1 bit } layer10_out_7_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1873 \
    name layer10_out_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_7_1_V \
    op interface \
    ports { layer10_out_7_1_V_address0 { O 6 vector } layer10_out_7_1_V_ce0 { O 1 bit } layer10_out_7_1_V_we0 { O 1 bit } layer10_out_7_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1874 \
    name layer10_out_7_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_7_2_V \
    op interface \
    ports { layer10_out_7_2_V_address0 { O 6 vector } layer10_out_7_2_V_ce0 { O 1 bit } layer10_out_7_2_V_we0 { O 1 bit } layer10_out_7_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_7_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1875 \
    name node_attr_cpy2_V_8_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_8_0 \
    op interface \
    ports { node_attr_cpy2_V_8_0_address0 { O 6 vector } node_attr_cpy2_V_8_0_ce0 { O 1 bit } node_attr_cpy2_V_8_0_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_8_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1876 \
    name node_attr_cpy2_V_8_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_8_1 \
    op interface \
    ports { node_attr_cpy2_V_8_1_address0 { O 6 vector } node_attr_cpy2_V_8_1_ce0 { O 1 bit } node_attr_cpy2_V_8_1_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_8_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1877 \
    name node_attr_cpy2_V_8_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_8_2 \
    op interface \
    ports { node_attr_cpy2_V_8_2_address0 { O 6 vector } node_attr_cpy2_V_8_2_ce0 { O 1 bit } node_attr_cpy2_V_8_2_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_8_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1878 \
    name layer9_out_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_8_0_V \
    op interface \
    ports { layer9_out_8_0_V_address0 { O 6 vector } layer9_out_8_0_V_ce0 { O 1 bit } layer9_out_8_0_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1879 \
    name layer9_out_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_8_1_V \
    op interface \
    ports { layer9_out_8_1_V_address0 { O 6 vector } layer9_out_8_1_V_ce0 { O 1 bit } layer9_out_8_1_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1880 \
    name layer9_out_8_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_8_2_V \
    op interface \
    ports { layer9_out_8_2_V_address0 { O 6 vector } layer9_out_8_2_V_ce0 { O 1 bit } layer9_out_8_2_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_8_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1881 \
    name layer9_out_8_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_8_3_V \
    op interface \
    ports { layer9_out_8_3_V_address0 { O 6 vector } layer9_out_8_3_V_ce0 { O 1 bit } layer9_out_8_3_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_8_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1882 \
    name layer10_out_8_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_8_0_V \
    op interface \
    ports { layer10_out_8_0_V_address0 { O 6 vector } layer10_out_8_0_V_ce0 { O 1 bit } layer10_out_8_0_V_we0 { O 1 bit } layer10_out_8_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_8_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1883 \
    name layer10_out_8_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_8_1_V \
    op interface \
    ports { layer10_out_8_1_V_address0 { O 6 vector } layer10_out_8_1_V_ce0 { O 1 bit } layer10_out_8_1_V_we0 { O 1 bit } layer10_out_8_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_8_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1884 \
    name layer10_out_8_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_8_2_V \
    op interface \
    ports { layer10_out_8_2_V_address0 { O 6 vector } layer10_out_8_2_V_ce0 { O 1 bit } layer10_out_8_2_V_we0 { O 1 bit } layer10_out_8_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_8_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1885 \
    name node_attr_cpy2_V_9_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_9_0 \
    op interface \
    ports { node_attr_cpy2_V_9_0_address0 { O 6 vector } node_attr_cpy2_V_9_0_ce0 { O 1 bit } node_attr_cpy2_V_9_0_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_9_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1886 \
    name node_attr_cpy2_V_9_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_9_1 \
    op interface \
    ports { node_attr_cpy2_V_9_1_address0 { O 6 vector } node_attr_cpy2_V_9_1_ce0 { O 1 bit } node_attr_cpy2_V_9_1_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_9_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1887 \
    name node_attr_cpy2_V_9_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_9_2 \
    op interface \
    ports { node_attr_cpy2_V_9_2_address0 { O 6 vector } node_attr_cpy2_V_9_2_ce0 { O 1 bit } node_attr_cpy2_V_9_2_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_9_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1888 \
    name layer9_out_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_9_0_V \
    op interface \
    ports { layer9_out_9_0_V_address0 { O 6 vector } layer9_out_9_0_V_ce0 { O 1 bit } layer9_out_9_0_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1889 \
    name layer9_out_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_9_1_V \
    op interface \
    ports { layer9_out_9_1_V_address0 { O 6 vector } layer9_out_9_1_V_ce0 { O 1 bit } layer9_out_9_1_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1890 \
    name layer9_out_9_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_9_2_V \
    op interface \
    ports { layer9_out_9_2_V_address0 { O 6 vector } layer9_out_9_2_V_ce0 { O 1 bit } layer9_out_9_2_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_9_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1891 \
    name layer9_out_9_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_9_3_V \
    op interface \
    ports { layer9_out_9_3_V_address0 { O 6 vector } layer9_out_9_3_V_ce0 { O 1 bit } layer9_out_9_3_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_9_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1892 \
    name layer10_out_9_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_9_0_V \
    op interface \
    ports { layer10_out_9_0_V_address0 { O 6 vector } layer10_out_9_0_V_ce0 { O 1 bit } layer10_out_9_0_V_we0 { O 1 bit } layer10_out_9_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_9_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1893 \
    name layer10_out_9_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_9_1_V \
    op interface \
    ports { layer10_out_9_1_V_address0 { O 6 vector } layer10_out_9_1_V_ce0 { O 1 bit } layer10_out_9_1_V_we0 { O 1 bit } layer10_out_9_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_9_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1894 \
    name layer10_out_9_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_9_2_V \
    op interface \
    ports { layer10_out_9_2_V_address0 { O 6 vector } layer10_out_9_2_V_ce0 { O 1 bit } layer10_out_9_2_V_we0 { O 1 bit } layer10_out_9_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_9_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1895 \
    name node_attr_cpy2_V_10_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_10_0 \
    op interface \
    ports { node_attr_cpy2_V_10_0_address0 { O 6 vector } node_attr_cpy2_V_10_0_ce0 { O 1 bit } node_attr_cpy2_V_10_0_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_10_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1896 \
    name node_attr_cpy2_V_10_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_10_1 \
    op interface \
    ports { node_attr_cpy2_V_10_1_address0 { O 6 vector } node_attr_cpy2_V_10_1_ce0 { O 1 bit } node_attr_cpy2_V_10_1_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_10_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1897 \
    name node_attr_cpy2_V_10_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename node_attr_cpy2_V_10_2 \
    op interface \
    ports { node_attr_cpy2_V_10_2_address0 { O 6 vector } node_attr_cpy2_V_10_2_ce0 { O 1 bit } node_attr_cpy2_V_10_2_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'node_attr_cpy2_V_10_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1898 \
    name layer9_out_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_10_0_V \
    op interface \
    ports { layer9_out_10_0_V_address0 { O 6 vector } layer9_out_10_0_V_ce0 { O 1 bit } layer9_out_10_0_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1899 \
    name layer9_out_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_10_1_V \
    op interface \
    ports { layer9_out_10_1_V_address0 { O 6 vector } layer9_out_10_1_V_ce0 { O 1 bit } layer9_out_10_1_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1900 \
    name layer9_out_10_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_10_2_V \
    op interface \
    ports { layer9_out_10_2_V_address0 { O 6 vector } layer9_out_10_2_V_ce0 { O 1 bit } layer9_out_10_2_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_10_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1901 \
    name layer9_out_10_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename layer9_out_10_3_V \
    op interface \
    ports { layer9_out_10_3_V_address0 { O 6 vector } layer9_out_10_3_V_ce0 { O 1 bit } layer9_out_10_3_V_q0 { I 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer9_out_10_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1902 \
    name layer10_out_10_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_10_0_V \
    op interface \
    ports { layer10_out_10_0_V_address0 { O 6 vector } layer10_out_10_0_V_ce0 { O 1 bit } layer10_out_10_0_V_we0 { O 1 bit } layer10_out_10_0_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_10_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1903 \
    name layer10_out_10_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_10_1_V \
    op interface \
    ports { layer10_out_10_1_V_address0 { O 6 vector } layer10_out_10_1_V_ce0 { O 1 bit } layer10_out_10_1_V_we0 { O 1 bit } layer10_out_10_1_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_10_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1904 \
    name layer10_out_10_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename layer10_out_10_2_V \
    op interface \
    ports { layer10_out_10_2_V_address0 { O 6 vector } layer10_out_10_2_V_ce0 { O 1 bit } layer10_out_10_2_V_we0 { O 1 bit } layer10_out_10_2_V_d0 { O 14 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'layer10_out_10_2_V'"
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


