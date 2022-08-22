# ==============================================================
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# ==============================================================
proc sc_sim_check {ret err logfile} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set errfile "err.log"
    if {[file exists $errfile] && [file size $errfile] != 0} {
        set fl [open $errfile r]
        while {[gets $fl line] >= 0} {
            if {[string first "AESL_mErrNo = " $line] == 0} {
                set mismatch_num [string range $line [string length "AESL_mErrNo = "] end]
                if {$mismatch_num != 0} {
                    ::AP::printMsg ERR COSIM 403 COSIM_403_986 ${mismatch_num}
                    break
                }
            }
        }
    }
    if {$ret || $err != ""} {
        if { [lindex $::errorCode 0] eq "CHILDSTATUS"} {
            set status [lindex $::errorCode 2]
            if {$status != ""} {
                ::AP::printMsg ERR COSIM 404 COSIM_404_987 $status
            } else {
                ::AP::printMsg ERR COSIM 405 COSIM_405_988
            }
        } else {
            ::AP::printMsg ERR COSIM 405 COSIM_405_989
        }
    }
    if {[file exists $logfile]} {
        set cmdret [catch {eval exec "grep \"Error:\" $logfile"} err]
        file delete -force $logfile
        if {$cmdret == 0} {
            ::AP::printMsg ERR COSIM 405 COSIM_405_990
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
}

proc rtl_sim_check {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set errfile "err.log"
    if {[file exists $errfile] && [file size $errfile] != 0} {
        set fl [open $errfile r]
        set unmatch_num 0
        while {[gets $fl line] >= 0} {
            if {[string first "unmatched" $line] != -1} {
                set unmatch_num [expr $unmatch_num + 1]
            }
        }
        if {$unmatch_num != 0} {
            ::AP::printMsg ERR COSIM 406 COSIM_406_991 ${unmatch_num}
        }
    }
    if {[file exists ".aesl_error"]} {
        set errfl [open ".aesl_error" r]
        gets $errfl line
        if {$line != 0} {
            ::AP::printMsg ERR COSIM 407 COSIM_407_992 $line
        }
    }
    if {[file exists ".exit.err"]} {
        ::AP::printMsg ERR COSIM 405 COSIM_405_993
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
}

proc check_tvin_file {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set rtlfilelist {
         "c.example.autotvin_node_attr_0_0_V.dat"
         "c.example.autotvin_node_attr_0_1_V.dat"
         "c.example.autotvin_node_attr_0_2_V.dat"
         "c.example.autotvin_node_attr_1_0_V.dat"
         "c.example.autotvin_node_attr_1_1_V.dat"
         "c.example.autotvin_node_attr_1_2_V.dat"
         "c.example.autotvin_node_attr_2_0_V.dat"
         "c.example.autotvin_node_attr_2_1_V.dat"
         "c.example.autotvin_node_attr_2_2_V.dat"
         "c.example.autotvin_node_attr_3_0_V.dat"
         "c.example.autotvin_node_attr_3_1_V.dat"
         "c.example.autotvin_node_attr_3_2_V.dat"
         "c.example.autotvin_node_attr_4_0_V.dat"
         "c.example.autotvin_node_attr_4_1_V.dat"
         "c.example.autotvin_node_attr_4_2_V.dat"
         "c.example.autotvin_node_attr_5_0_V.dat"
         "c.example.autotvin_node_attr_5_1_V.dat"
         "c.example.autotvin_node_attr_5_2_V.dat"
         "c.example.autotvin_node_attr_6_0_V.dat"
         "c.example.autotvin_node_attr_6_1_V.dat"
         "c.example.autotvin_node_attr_6_2_V.dat"
         "c.example.autotvin_node_attr_7_0_V.dat"
         "c.example.autotvin_node_attr_7_1_V.dat"
         "c.example.autotvin_node_attr_7_2_V.dat"
         "c.example.autotvin_node_attr_8_0_V.dat"
         "c.example.autotvin_node_attr_8_1_V.dat"
         "c.example.autotvin_node_attr_8_2_V.dat"
         "c.example.autotvin_node_attr_9_0_V.dat"
         "c.example.autotvin_node_attr_9_1_V.dat"
         "c.example.autotvin_node_attr_9_2_V.dat"
         "c.example.autotvin_node_attr_10_0_V.dat"
         "c.example.autotvin_node_attr_10_1_V.dat"
         "c.example.autotvin_node_attr_10_2_V.dat"
         "c.example.autotvin_edge_attr_0_0_V.dat"
         "c.example.autotvin_edge_attr_0_1_V.dat"
         "c.example.autotvin_edge_attr_0_2_V.dat"
         "c.example.autotvin_edge_attr_0_3_V.dat"
         "c.example.autotvin_edge_attr_1_0_V.dat"
         "c.example.autotvin_edge_attr_1_1_V.dat"
         "c.example.autotvin_edge_attr_1_2_V.dat"
         "c.example.autotvin_edge_attr_1_3_V.dat"
         "c.example.autotvin_edge_attr_2_0_V.dat"
         "c.example.autotvin_edge_attr_2_1_V.dat"
         "c.example.autotvin_edge_attr_2_2_V.dat"
         "c.example.autotvin_edge_attr_2_3_V.dat"
         "c.example.autotvin_edge_attr_3_0_V.dat"
         "c.example.autotvin_edge_attr_3_1_V.dat"
         "c.example.autotvin_edge_attr_3_2_V.dat"
         "c.example.autotvin_edge_attr_3_3_V.dat"
         "c.example.autotvin_edge_attr_4_0_V.dat"
         "c.example.autotvin_edge_attr_4_1_V.dat"
         "c.example.autotvin_edge_attr_4_2_V.dat"
         "c.example.autotvin_edge_attr_4_3_V.dat"
         "c.example.autotvin_edge_attr_5_0_V.dat"
         "c.example.autotvin_edge_attr_5_1_V.dat"
         "c.example.autotvin_edge_attr_5_2_V.dat"
         "c.example.autotvin_edge_attr_5_3_V.dat"
         "c.example.autotvin_edge_attr_6_0_V.dat"
         "c.example.autotvin_edge_attr_6_1_V.dat"
         "c.example.autotvin_edge_attr_6_2_V.dat"
         "c.example.autotvin_edge_attr_6_3_V.dat"
         "c.example.autotvin_edge_attr_7_0_V.dat"
         "c.example.autotvin_edge_attr_7_1_V.dat"
         "c.example.autotvin_edge_attr_7_2_V.dat"
         "c.example.autotvin_edge_attr_7_3_V.dat"
         "c.example.autotvin_edge_attr_8_0_V.dat"
         "c.example.autotvin_edge_attr_8_1_V.dat"
         "c.example.autotvin_edge_attr_8_2_V.dat"
         "c.example.autotvin_edge_attr_8_3_V.dat"
         "c.example.autotvin_edge_attr_9_0_V.dat"
         "c.example.autotvin_edge_attr_9_1_V.dat"
         "c.example.autotvin_edge_attr_9_2_V.dat"
         "c.example.autotvin_edge_attr_9_3_V.dat"
         "c.example.autotvin_edge_attr_10_0_V.dat"
         "c.example.autotvin_edge_attr_10_1_V.dat"
         "c.example.autotvin_edge_attr_10_2_V.dat"
         "c.example.autotvin_edge_attr_10_3_V.dat"
         "c.example.autotvin_edge_attr_11_0_V.dat"
         "c.example.autotvin_edge_attr_11_1_V.dat"
         "c.example.autotvin_edge_attr_11_2_V.dat"
         "c.example.autotvin_edge_attr_11_3_V.dat"
         "c.example.autotvin_edge_attr_12_0_V.dat"
         "c.example.autotvin_edge_attr_12_1_V.dat"
         "c.example.autotvin_edge_attr_12_2_V.dat"
         "c.example.autotvin_edge_attr_12_3_V.dat"
         "c.example.autotvin_edge_index_0_0_V.dat"
         "c.example.autotvin_edge_index_0_1_V.dat"
         "c.example.autotvin_edge_index_1_0_V.dat"
         "c.example.autotvin_edge_index_1_1_V.dat"
         "c.example.autotvin_edge_index_2_0_V.dat"
         "c.example.autotvin_edge_index_2_1_V.dat"
         "c.example.autotvin_edge_index_3_0_V.dat"
         "c.example.autotvin_edge_index_3_1_V.dat"
         "c.example.autotvin_edge_index_4_0_V.dat"
         "c.example.autotvin_edge_index_4_1_V.dat"
         "c.example.autotvin_edge_index_5_0_V.dat"
         "c.example.autotvin_edge_index_5_1_V.dat"
         "c.example.autotvin_edge_index_6_0_V.dat"
         "c.example.autotvin_edge_index_6_1_V.dat"
         "c.example.autotvin_edge_index_7_0_V.dat"
         "c.example.autotvin_edge_index_7_1_V.dat"
         "c.example.autotvin_edge_index_8_0_V.dat"
         "c.example.autotvin_edge_index_8_1_V.dat"
         "c.example.autotvin_edge_index_9_0_V.dat"
         "c.example.autotvin_edge_index_9_1_V.dat"
         "c.example.autotvin_edge_index_10_0_V.dat"
         "c.example.autotvin_edge_index_10_1_V.dat"
         "c.example.autotvin_edge_index_11_0_V.dat"
         "c.example.autotvin_edge_index_11_1_V.dat"
         "c.example.autotvin_edge_index_12_0_V.dat"
         "c.example.autotvin_edge_index_12_1_V.dat"
         "c.example.autotvin_layer11_out_0_V.dat"
         "c.example.autotvin_layer11_out_1_V.dat"
         "c.example.autotvin_layer11_out_2_V.dat"
         "c.example.autotvin_layer11_out_3_V.dat"
         "c.example.autotvin_layer11_out_4_V.dat"
         "c.example.autotvin_layer11_out_5_V.dat"
         "c.example.autotvin_layer11_out_6_V.dat"
         "c.example.autotvin_layer11_out_7_V.dat"
         "c.example.autotvin_layer11_out_8_V.dat"
         "c.example.autotvin_layer11_out_9_V.dat"
         "c.example.autotvin_layer11_out_10_V.dat"
         "c.example.autotvin_layer11_out_11_V.dat"
         "c.example.autotvin_layer11_out_12_V.dat"
         "c.example.autotvout_layer11_out_0_V.dat"
         "c.example.autotvout_layer11_out_1_V.dat"
         "c.example.autotvout_layer11_out_2_V.dat"
         "c.example.autotvout_layer11_out_3_V.dat"
         "c.example.autotvout_layer11_out_4_V.dat"
         "c.example.autotvout_layer11_out_5_V.dat"
         "c.example.autotvout_layer11_out_6_V.dat"
         "c.example.autotvout_layer11_out_7_V.dat"
         "c.example.autotvout_layer11_out_8_V.dat"
         "c.example.autotvout_layer11_out_9_V.dat"
         "c.example.autotvout_layer11_out_10_V.dat"
         "c.example.autotvout_layer11_out_11_V.dat"
         "c.example.autotvout_layer11_out_12_V.dat"
         "c.example.autotvout_const_size_in_1.dat"
         "c.example.autotvout_const_size_in_2.dat"
         "c.example.autotvout_const_size_in_3.dat"
         "c.example.autotvout_const_size_out_1.dat"
    }
    foreach rtlfile $rtlfilelist {
        if {[file isfile $rtlfile]} {
        } else {
            ::AP::printMsg ERR COSIM 320 COSIM_320_994
            return 1
        }
        set ret [catch {eval exec "grep /runtime $rtlfile"} err]
        if { $ret } {
            ::AP::printMsg ERR COSIM 320 COSIM_320_995
            return 1
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
    return 0
}

proc check_tvout_file {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set rtlfilelist {
         "rtl.example.autotvout_layer11_out_0_V.dat"
         "rtl.example.autotvout_layer11_out_1_V.dat"
         "rtl.example.autotvout_layer11_out_2_V.dat"
         "rtl.example.autotvout_layer11_out_3_V.dat"
         "rtl.example.autotvout_layer11_out_4_V.dat"
         "rtl.example.autotvout_layer11_out_5_V.dat"
         "rtl.example.autotvout_layer11_out_6_V.dat"
         "rtl.example.autotvout_layer11_out_7_V.dat"
         "rtl.example.autotvout_layer11_out_8_V.dat"
         "rtl.example.autotvout_layer11_out_9_V.dat"
         "rtl.example.autotvout_layer11_out_10_V.dat"
         "rtl.example.autotvout_layer11_out_11_V.dat"
         "rtl.example.autotvout_layer11_out_12_V.dat"
         "rtl.example.autotvout_const_size_in_1.dat"
         "rtl.example.autotvout_const_size_in_2.dat"
         "rtl.example.autotvout_const_size_in_3.dat"
         "rtl.example.autotvout_const_size_out_1.dat"
    }
    foreach rtlfile $rtlfilelist {
        if {[file isfile $rtlfile]} {
        } else {
            ::AP::printMsg ERR COSIM 303 COSIM_303_996
            return 1
        }
        set ret [catch {eval exec "grep /runtime $rtlfile"} err]
        if { $ret } {
            ::AP::printMsg ERR COSIM 303 COSIM_303_997
            return 1
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
    return 0
}
