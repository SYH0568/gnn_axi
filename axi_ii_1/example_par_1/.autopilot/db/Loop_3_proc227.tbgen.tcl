set moduleName Loop_3_proc227
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {Loop_3_proc227}
set C_modelType { void 0 }
set C_modelArgList {
	{ edge_index_mat_s_0_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_0_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_1_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_0_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_2_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_1_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_3_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_1_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_4_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_2_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_5_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_2_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_6_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_3_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_7_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_3_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_8_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_4_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_9_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_4_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_10_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_5_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_11_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_5_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_12_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_6_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_13_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_6_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_14_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_7_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_15_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_7_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_16_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_8_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_17_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_8_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_18_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_9_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_19_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_9_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_20_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_10_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_21_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_10_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_22_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_11_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_23_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_11_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_24_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_12_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_25_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_12_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "edge_index_mat_s_0_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_0_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_1_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_0_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_2_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_1_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_3_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_1_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_4_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_2_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_5_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_2_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_6_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_3_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_7_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_3_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_8_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_4_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_9_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_4_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_10_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_5_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_11_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_5_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_12_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_6_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_13_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_6_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_14_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_7_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_15_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_7_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_16_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_8_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_17_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_8_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_18_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_9_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_19_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_9_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_20_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_10_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_21_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_10_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_22_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_11_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_23_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_11_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_24_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_12_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_25_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_12_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 189
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ edge_index_mat_s_0_V_V_dout sc_in sc_lv 14 signal 0 } 
	{ edge_index_mat_s_0_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ edge_index_mat_s_0_V_V_read sc_out sc_logic 1 signal 0 } 
	{ edge_index_0_0_V_address0 sc_out sc_lv 7 signal 1 } 
	{ edge_index_0_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ edge_index_0_0_V_we0 sc_out sc_logic 1 signal 1 } 
	{ edge_index_0_0_V_d0 sc_out sc_lv 14 signal 1 } 
	{ edge_index_mat_s_1_V_V_dout sc_in sc_lv 14 signal 2 } 
	{ edge_index_mat_s_1_V_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ edge_index_mat_s_1_V_V_read sc_out sc_logic 1 signal 2 } 
	{ edge_index_0_1_V_address0 sc_out sc_lv 7 signal 3 } 
	{ edge_index_0_1_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ edge_index_0_1_V_we0 sc_out sc_logic 1 signal 3 } 
	{ edge_index_0_1_V_d0 sc_out sc_lv 14 signal 3 } 
	{ edge_index_mat_s_2_V_V_dout sc_in sc_lv 14 signal 4 } 
	{ edge_index_mat_s_2_V_V_empty_n sc_in sc_logic 1 signal 4 } 
	{ edge_index_mat_s_2_V_V_read sc_out sc_logic 1 signal 4 } 
	{ edge_index_1_0_V_address0 sc_out sc_lv 7 signal 5 } 
	{ edge_index_1_0_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ edge_index_1_0_V_we0 sc_out sc_logic 1 signal 5 } 
	{ edge_index_1_0_V_d0 sc_out sc_lv 14 signal 5 } 
	{ edge_index_mat_s_3_V_V_dout sc_in sc_lv 14 signal 6 } 
	{ edge_index_mat_s_3_V_V_empty_n sc_in sc_logic 1 signal 6 } 
	{ edge_index_mat_s_3_V_V_read sc_out sc_logic 1 signal 6 } 
	{ edge_index_1_1_V_address0 sc_out sc_lv 7 signal 7 } 
	{ edge_index_1_1_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ edge_index_1_1_V_we0 sc_out sc_logic 1 signal 7 } 
	{ edge_index_1_1_V_d0 sc_out sc_lv 14 signal 7 } 
	{ edge_index_mat_s_4_V_V_dout sc_in sc_lv 14 signal 8 } 
	{ edge_index_mat_s_4_V_V_empty_n sc_in sc_logic 1 signal 8 } 
	{ edge_index_mat_s_4_V_V_read sc_out sc_logic 1 signal 8 } 
	{ edge_index_2_0_V_address0 sc_out sc_lv 7 signal 9 } 
	{ edge_index_2_0_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ edge_index_2_0_V_we0 sc_out sc_logic 1 signal 9 } 
	{ edge_index_2_0_V_d0 sc_out sc_lv 14 signal 9 } 
	{ edge_index_mat_s_5_V_V_dout sc_in sc_lv 14 signal 10 } 
	{ edge_index_mat_s_5_V_V_empty_n sc_in sc_logic 1 signal 10 } 
	{ edge_index_mat_s_5_V_V_read sc_out sc_logic 1 signal 10 } 
	{ edge_index_2_1_V_address0 sc_out sc_lv 7 signal 11 } 
	{ edge_index_2_1_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ edge_index_2_1_V_we0 sc_out sc_logic 1 signal 11 } 
	{ edge_index_2_1_V_d0 sc_out sc_lv 14 signal 11 } 
	{ edge_index_mat_s_6_V_V_dout sc_in sc_lv 14 signal 12 } 
	{ edge_index_mat_s_6_V_V_empty_n sc_in sc_logic 1 signal 12 } 
	{ edge_index_mat_s_6_V_V_read sc_out sc_logic 1 signal 12 } 
	{ edge_index_3_0_V_address0 sc_out sc_lv 7 signal 13 } 
	{ edge_index_3_0_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ edge_index_3_0_V_we0 sc_out sc_logic 1 signal 13 } 
	{ edge_index_3_0_V_d0 sc_out sc_lv 14 signal 13 } 
	{ edge_index_mat_s_7_V_V_dout sc_in sc_lv 14 signal 14 } 
	{ edge_index_mat_s_7_V_V_empty_n sc_in sc_logic 1 signal 14 } 
	{ edge_index_mat_s_7_V_V_read sc_out sc_logic 1 signal 14 } 
	{ edge_index_3_1_V_address0 sc_out sc_lv 7 signal 15 } 
	{ edge_index_3_1_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ edge_index_3_1_V_we0 sc_out sc_logic 1 signal 15 } 
	{ edge_index_3_1_V_d0 sc_out sc_lv 14 signal 15 } 
	{ edge_index_mat_s_8_V_V_dout sc_in sc_lv 14 signal 16 } 
	{ edge_index_mat_s_8_V_V_empty_n sc_in sc_logic 1 signal 16 } 
	{ edge_index_mat_s_8_V_V_read sc_out sc_logic 1 signal 16 } 
	{ edge_index_4_0_V_address0 sc_out sc_lv 7 signal 17 } 
	{ edge_index_4_0_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ edge_index_4_0_V_we0 sc_out sc_logic 1 signal 17 } 
	{ edge_index_4_0_V_d0 sc_out sc_lv 14 signal 17 } 
	{ edge_index_mat_s_9_V_V_dout sc_in sc_lv 14 signal 18 } 
	{ edge_index_mat_s_9_V_V_empty_n sc_in sc_logic 1 signal 18 } 
	{ edge_index_mat_s_9_V_V_read sc_out sc_logic 1 signal 18 } 
	{ edge_index_4_1_V_address0 sc_out sc_lv 7 signal 19 } 
	{ edge_index_4_1_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ edge_index_4_1_V_we0 sc_out sc_logic 1 signal 19 } 
	{ edge_index_4_1_V_d0 sc_out sc_lv 14 signal 19 } 
	{ edge_index_mat_s_10_V_V_dout sc_in sc_lv 14 signal 20 } 
	{ edge_index_mat_s_10_V_V_empty_n sc_in sc_logic 1 signal 20 } 
	{ edge_index_mat_s_10_V_V_read sc_out sc_logic 1 signal 20 } 
	{ edge_index_5_0_V_address0 sc_out sc_lv 7 signal 21 } 
	{ edge_index_5_0_V_ce0 sc_out sc_logic 1 signal 21 } 
	{ edge_index_5_0_V_we0 sc_out sc_logic 1 signal 21 } 
	{ edge_index_5_0_V_d0 sc_out sc_lv 14 signal 21 } 
	{ edge_index_mat_s_11_V_V_dout sc_in sc_lv 14 signal 22 } 
	{ edge_index_mat_s_11_V_V_empty_n sc_in sc_logic 1 signal 22 } 
	{ edge_index_mat_s_11_V_V_read sc_out sc_logic 1 signal 22 } 
	{ edge_index_5_1_V_address0 sc_out sc_lv 7 signal 23 } 
	{ edge_index_5_1_V_ce0 sc_out sc_logic 1 signal 23 } 
	{ edge_index_5_1_V_we0 sc_out sc_logic 1 signal 23 } 
	{ edge_index_5_1_V_d0 sc_out sc_lv 14 signal 23 } 
	{ edge_index_mat_s_12_V_V_dout sc_in sc_lv 14 signal 24 } 
	{ edge_index_mat_s_12_V_V_empty_n sc_in sc_logic 1 signal 24 } 
	{ edge_index_mat_s_12_V_V_read sc_out sc_logic 1 signal 24 } 
	{ edge_index_6_0_V_address0 sc_out sc_lv 7 signal 25 } 
	{ edge_index_6_0_V_ce0 sc_out sc_logic 1 signal 25 } 
	{ edge_index_6_0_V_we0 sc_out sc_logic 1 signal 25 } 
	{ edge_index_6_0_V_d0 sc_out sc_lv 14 signal 25 } 
	{ edge_index_mat_s_13_V_V_dout sc_in sc_lv 14 signal 26 } 
	{ edge_index_mat_s_13_V_V_empty_n sc_in sc_logic 1 signal 26 } 
	{ edge_index_mat_s_13_V_V_read sc_out sc_logic 1 signal 26 } 
	{ edge_index_6_1_V_address0 sc_out sc_lv 7 signal 27 } 
	{ edge_index_6_1_V_ce0 sc_out sc_logic 1 signal 27 } 
	{ edge_index_6_1_V_we0 sc_out sc_logic 1 signal 27 } 
	{ edge_index_6_1_V_d0 sc_out sc_lv 14 signal 27 } 
	{ edge_index_mat_s_14_V_V_dout sc_in sc_lv 14 signal 28 } 
	{ edge_index_mat_s_14_V_V_empty_n sc_in sc_logic 1 signal 28 } 
	{ edge_index_mat_s_14_V_V_read sc_out sc_logic 1 signal 28 } 
	{ edge_index_7_0_V_address0 sc_out sc_lv 7 signal 29 } 
	{ edge_index_7_0_V_ce0 sc_out sc_logic 1 signal 29 } 
	{ edge_index_7_0_V_we0 sc_out sc_logic 1 signal 29 } 
	{ edge_index_7_0_V_d0 sc_out sc_lv 14 signal 29 } 
	{ edge_index_mat_s_15_V_V_dout sc_in sc_lv 14 signal 30 } 
	{ edge_index_mat_s_15_V_V_empty_n sc_in sc_logic 1 signal 30 } 
	{ edge_index_mat_s_15_V_V_read sc_out sc_logic 1 signal 30 } 
	{ edge_index_7_1_V_address0 sc_out sc_lv 7 signal 31 } 
	{ edge_index_7_1_V_ce0 sc_out sc_logic 1 signal 31 } 
	{ edge_index_7_1_V_we0 sc_out sc_logic 1 signal 31 } 
	{ edge_index_7_1_V_d0 sc_out sc_lv 14 signal 31 } 
	{ edge_index_mat_s_16_V_V_dout sc_in sc_lv 14 signal 32 } 
	{ edge_index_mat_s_16_V_V_empty_n sc_in sc_logic 1 signal 32 } 
	{ edge_index_mat_s_16_V_V_read sc_out sc_logic 1 signal 32 } 
	{ edge_index_8_0_V_address0 sc_out sc_lv 7 signal 33 } 
	{ edge_index_8_0_V_ce0 sc_out sc_logic 1 signal 33 } 
	{ edge_index_8_0_V_we0 sc_out sc_logic 1 signal 33 } 
	{ edge_index_8_0_V_d0 sc_out sc_lv 14 signal 33 } 
	{ edge_index_mat_s_17_V_V_dout sc_in sc_lv 14 signal 34 } 
	{ edge_index_mat_s_17_V_V_empty_n sc_in sc_logic 1 signal 34 } 
	{ edge_index_mat_s_17_V_V_read sc_out sc_logic 1 signal 34 } 
	{ edge_index_8_1_V_address0 sc_out sc_lv 7 signal 35 } 
	{ edge_index_8_1_V_ce0 sc_out sc_logic 1 signal 35 } 
	{ edge_index_8_1_V_we0 sc_out sc_logic 1 signal 35 } 
	{ edge_index_8_1_V_d0 sc_out sc_lv 14 signal 35 } 
	{ edge_index_mat_s_18_V_V_dout sc_in sc_lv 14 signal 36 } 
	{ edge_index_mat_s_18_V_V_empty_n sc_in sc_logic 1 signal 36 } 
	{ edge_index_mat_s_18_V_V_read sc_out sc_logic 1 signal 36 } 
	{ edge_index_9_0_V_address0 sc_out sc_lv 7 signal 37 } 
	{ edge_index_9_0_V_ce0 sc_out sc_logic 1 signal 37 } 
	{ edge_index_9_0_V_we0 sc_out sc_logic 1 signal 37 } 
	{ edge_index_9_0_V_d0 sc_out sc_lv 14 signal 37 } 
	{ edge_index_mat_s_19_V_V_dout sc_in sc_lv 14 signal 38 } 
	{ edge_index_mat_s_19_V_V_empty_n sc_in sc_logic 1 signal 38 } 
	{ edge_index_mat_s_19_V_V_read sc_out sc_logic 1 signal 38 } 
	{ edge_index_9_1_V_address0 sc_out sc_lv 7 signal 39 } 
	{ edge_index_9_1_V_ce0 sc_out sc_logic 1 signal 39 } 
	{ edge_index_9_1_V_we0 sc_out sc_logic 1 signal 39 } 
	{ edge_index_9_1_V_d0 sc_out sc_lv 14 signal 39 } 
	{ edge_index_mat_s_20_V_V_dout sc_in sc_lv 14 signal 40 } 
	{ edge_index_mat_s_20_V_V_empty_n sc_in sc_logic 1 signal 40 } 
	{ edge_index_mat_s_20_V_V_read sc_out sc_logic 1 signal 40 } 
	{ edge_index_10_0_V_address0 sc_out sc_lv 7 signal 41 } 
	{ edge_index_10_0_V_ce0 sc_out sc_logic 1 signal 41 } 
	{ edge_index_10_0_V_we0 sc_out sc_logic 1 signal 41 } 
	{ edge_index_10_0_V_d0 sc_out sc_lv 14 signal 41 } 
	{ edge_index_mat_s_21_V_V_dout sc_in sc_lv 14 signal 42 } 
	{ edge_index_mat_s_21_V_V_empty_n sc_in sc_logic 1 signal 42 } 
	{ edge_index_mat_s_21_V_V_read sc_out sc_logic 1 signal 42 } 
	{ edge_index_10_1_V_address0 sc_out sc_lv 7 signal 43 } 
	{ edge_index_10_1_V_ce0 sc_out sc_logic 1 signal 43 } 
	{ edge_index_10_1_V_we0 sc_out sc_logic 1 signal 43 } 
	{ edge_index_10_1_V_d0 sc_out sc_lv 14 signal 43 } 
	{ edge_index_mat_s_22_V_V_dout sc_in sc_lv 14 signal 44 } 
	{ edge_index_mat_s_22_V_V_empty_n sc_in sc_logic 1 signal 44 } 
	{ edge_index_mat_s_22_V_V_read sc_out sc_logic 1 signal 44 } 
	{ edge_index_11_0_V_address0 sc_out sc_lv 7 signal 45 } 
	{ edge_index_11_0_V_ce0 sc_out sc_logic 1 signal 45 } 
	{ edge_index_11_0_V_we0 sc_out sc_logic 1 signal 45 } 
	{ edge_index_11_0_V_d0 sc_out sc_lv 14 signal 45 } 
	{ edge_index_mat_s_23_V_V_dout sc_in sc_lv 14 signal 46 } 
	{ edge_index_mat_s_23_V_V_empty_n sc_in sc_logic 1 signal 46 } 
	{ edge_index_mat_s_23_V_V_read sc_out sc_logic 1 signal 46 } 
	{ edge_index_11_1_V_address0 sc_out sc_lv 7 signal 47 } 
	{ edge_index_11_1_V_ce0 sc_out sc_logic 1 signal 47 } 
	{ edge_index_11_1_V_we0 sc_out sc_logic 1 signal 47 } 
	{ edge_index_11_1_V_d0 sc_out sc_lv 14 signal 47 } 
	{ edge_index_mat_s_24_V_V_dout sc_in sc_lv 14 signal 48 } 
	{ edge_index_mat_s_24_V_V_empty_n sc_in sc_logic 1 signal 48 } 
	{ edge_index_mat_s_24_V_V_read sc_out sc_logic 1 signal 48 } 
	{ edge_index_12_0_V_address0 sc_out sc_lv 7 signal 49 } 
	{ edge_index_12_0_V_ce0 sc_out sc_logic 1 signal 49 } 
	{ edge_index_12_0_V_we0 sc_out sc_logic 1 signal 49 } 
	{ edge_index_12_0_V_d0 sc_out sc_lv 14 signal 49 } 
	{ edge_index_mat_s_25_V_V_dout sc_in sc_lv 14 signal 50 } 
	{ edge_index_mat_s_25_V_V_empty_n sc_in sc_logic 1 signal 50 } 
	{ edge_index_mat_s_25_V_V_read sc_out sc_logic 1 signal 50 } 
	{ edge_index_12_1_V_address0 sc_out sc_lv 7 signal 51 } 
	{ edge_index_12_1_V_ce0 sc_out sc_logic 1 signal 51 } 
	{ edge_index_12_1_V_we0 sc_out sc_logic 1 signal 51 } 
	{ edge_index_12_1_V_d0 sc_out sc_lv 14 signal 51 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "edge_index_mat_s_0_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_0_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_0_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_0_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_0_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_0_V_V", "role": "read" }} , 
 	{ "name": "edge_index_0_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_0_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_0_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_0_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_0_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_0_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_0_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_0_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_1_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_1_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_1_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_1_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_1_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_1_V_V", "role": "read" }} , 
 	{ "name": "edge_index_0_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_0_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_0_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_0_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_0_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_0_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_0_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_0_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_2_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_2_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_2_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_2_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_2_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_2_V_V", "role": "read" }} , 
 	{ "name": "edge_index_1_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_1_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_1_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_1_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_1_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_1_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_1_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_1_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_3_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_3_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_3_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_3_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_3_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_3_V_V", "role": "read" }} , 
 	{ "name": "edge_index_1_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_1_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_1_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_1_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_1_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_1_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_1_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_1_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_4_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_4_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_4_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_4_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_4_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_4_V_V", "role": "read" }} , 
 	{ "name": "edge_index_2_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_2_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_2_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_2_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_2_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_2_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_2_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_2_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_5_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_5_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_5_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_5_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_5_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_5_V_V", "role": "read" }} , 
 	{ "name": "edge_index_2_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_2_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_2_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_2_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_2_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_2_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_2_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_2_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_6_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_6_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_6_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_6_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_6_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_6_V_V", "role": "read" }} , 
 	{ "name": "edge_index_3_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_3_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_3_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_3_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_3_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_3_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_3_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_3_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_7_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_7_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_7_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_7_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_7_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_7_V_V", "role": "read" }} , 
 	{ "name": "edge_index_3_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_3_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_3_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_3_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_3_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_3_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_3_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_3_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_8_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_8_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_8_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_8_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_8_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_8_V_V", "role": "read" }} , 
 	{ "name": "edge_index_4_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_4_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_4_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_4_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_4_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_4_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_4_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_4_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_9_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_9_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_9_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_9_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_9_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_9_V_V", "role": "read" }} , 
 	{ "name": "edge_index_4_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_4_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_4_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_4_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_4_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_4_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_4_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_4_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_10_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_10_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_10_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_10_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_10_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_10_V_V", "role": "read" }} , 
 	{ "name": "edge_index_5_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_5_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_5_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_5_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_5_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_5_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_5_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_5_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_11_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_11_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_11_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_11_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_11_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_11_V_V", "role": "read" }} , 
 	{ "name": "edge_index_5_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_5_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_5_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_5_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_5_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_5_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_5_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_5_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_12_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_12_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_12_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_12_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_12_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_12_V_V", "role": "read" }} , 
 	{ "name": "edge_index_6_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_6_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_6_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_6_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_6_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_6_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_6_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_6_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_13_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_13_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_13_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_13_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_13_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_13_V_V", "role": "read" }} , 
 	{ "name": "edge_index_6_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_6_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_6_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_6_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_6_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_6_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_6_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_6_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_14_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_14_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_14_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_14_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_14_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_14_V_V", "role": "read" }} , 
 	{ "name": "edge_index_7_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_7_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_7_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_7_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_7_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_7_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_7_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_7_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_15_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_15_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_15_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_15_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_15_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_15_V_V", "role": "read" }} , 
 	{ "name": "edge_index_7_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_7_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_7_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_7_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_7_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_7_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_7_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_7_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_16_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_16_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_16_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_16_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_16_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_16_V_V", "role": "read" }} , 
 	{ "name": "edge_index_8_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_8_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_8_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_8_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_8_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_8_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_8_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_8_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_17_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_17_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_17_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_17_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_17_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_17_V_V", "role": "read" }} , 
 	{ "name": "edge_index_8_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_8_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_8_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_8_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_8_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_8_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_8_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_8_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_18_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_18_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_18_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_18_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_18_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_18_V_V", "role": "read" }} , 
 	{ "name": "edge_index_9_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_9_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_9_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_9_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_9_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_9_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_9_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_9_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_19_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_19_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_19_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_19_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_19_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_19_V_V", "role": "read" }} , 
 	{ "name": "edge_index_9_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_9_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_9_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_9_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_9_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_9_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_9_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_9_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_20_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_20_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_20_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_20_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_20_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_20_V_V", "role": "read" }} , 
 	{ "name": "edge_index_10_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_10_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_10_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_10_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_10_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_10_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_10_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_10_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_21_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_21_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_21_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_21_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_21_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_21_V_V", "role": "read" }} , 
 	{ "name": "edge_index_10_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_10_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_10_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_10_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_10_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_10_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_10_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_10_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_22_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_22_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_22_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_22_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_22_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_22_V_V", "role": "read" }} , 
 	{ "name": "edge_index_11_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_11_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_11_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_11_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_11_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_11_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_11_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_11_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_23_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_23_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_23_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_23_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_23_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_23_V_V", "role": "read" }} , 
 	{ "name": "edge_index_11_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_11_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_11_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_11_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_11_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_11_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_11_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_11_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_24_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_24_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_24_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_24_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_24_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_24_V_V", "role": "read" }} , 
 	{ "name": "edge_index_12_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_12_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_12_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_12_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_12_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_12_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_12_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_12_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_25_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_25_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_25_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_25_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_25_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_25_V_V", "role": "read" }} , 
 	{ "name": "edge_index_12_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_12_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_12_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_12_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_12_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_12_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_12_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_12_1_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "Loop_3_proc227",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "122", "EstimateLatencyMax" : "122",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "edge_index_mat_s_0_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_0_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_0_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_1_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_0_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_2_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_1_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_3_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_3_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_1_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_4_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_4_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_2_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_5_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_5_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_2_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_6_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_6_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_3_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_7_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_7_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_3_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_8_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_8_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_4_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_9_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_9_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_4_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_10_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_10_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_5_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_11_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_11_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_5_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_12_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_12_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_6_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_13_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_13_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_6_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_14_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_14_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_7_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_15_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_15_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_7_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_16_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_16_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_8_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_17_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_17_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_8_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_18_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_18_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_9_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_19_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_19_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_9_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_20_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_20_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_10_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_21_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_21_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_10_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_22_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_22_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_11_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_23_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_23_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_11_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_24_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_24_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_12_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_25_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_25_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_12_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"}]}]}


set ArgLastReadFirstWriteLatency {
	Loop_3_proc227 {
		edge_index_mat_s_0_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_0_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_1_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_0_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_2_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_1_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_3_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_1_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_4_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_2_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_5_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_2_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_6_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_3_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_7_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_3_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_8_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_4_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_9_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_4_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_10_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_5_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_11_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_5_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_12_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_6_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_13_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_6_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_14_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_7_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_15_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_7_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_16_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_8_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_17_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_8_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_18_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_9_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_19_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_9_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_20_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_10_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_21_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_10_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_22_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_11_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_23_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_11_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_24_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_12_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_25_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_12_1_V {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "122", "Max" : "122"}
	, {"Name" : "Interval", "Min" : "122", "Max" : "122"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	edge_index_mat_s_0_V_V { ap_fifo {  { edge_index_mat_s_0_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_0_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_0_V_V_read fifo_update 1 1 } } }
	edge_index_0_0_V { ap_memory {  { edge_index_0_0_V_address0 mem_address 1 7 }  { edge_index_0_0_V_ce0 mem_ce 1 1 }  { edge_index_0_0_V_we0 mem_we 1 1 }  { edge_index_0_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_1_V_V { ap_fifo {  { edge_index_mat_s_1_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_1_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_1_V_V_read fifo_update 1 1 } } }
	edge_index_0_1_V { ap_memory {  { edge_index_0_1_V_address0 mem_address 1 7 }  { edge_index_0_1_V_ce0 mem_ce 1 1 }  { edge_index_0_1_V_we0 mem_we 1 1 }  { edge_index_0_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_2_V_V { ap_fifo {  { edge_index_mat_s_2_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_2_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_2_V_V_read fifo_update 1 1 } } }
	edge_index_1_0_V { ap_memory {  { edge_index_1_0_V_address0 mem_address 1 7 }  { edge_index_1_0_V_ce0 mem_ce 1 1 }  { edge_index_1_0_V_we0 mem_we 1 1 }  { edge_index_1_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_3_V_V { ap_fifo {  { edge_index_mat_s_3_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_3_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_3_V_V_read fifo_update 1 1 } } }
	edge_index_1_1_V { ap_memory {  { edge_index_1_1_V_address0 mem_address 1 7 }  { edge_index_1_1_V_ce0 mem_ce 1 1 }  { edge_index_1_1_V_we0 mem_we 1 1 }  { edge_index_1_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_4_V_V { ap_fifo {  { edge_index_mat_s_4_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_4_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_4_V_V_read fifo_update 1 1 } } }
	edge_index_2_0_V { ap_memory {  { edge_index_2_0_V_address0 mem_address 1 7 }  { edge_index_2_0_V_ce0 mem_ce 1 1 }  { edge_index_2_0_V_we0 mem_we 1 1 }  { edge_index_2_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_5_V_V { ap_fifo {  { edge_index_mat_s_5_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_5_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_5_V_V_read fifo_update 1 1 } } }
	edge_index_2_1_V { ap_memory {  { edge_index_2_1_V_address0 mem_address 1 7 }  { edge_index_2_1_V_ce0 mem_ce 1 1 }  { edge_index_2_1_V_we0 mem_we 1 1 }  { edge_index_2_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_6_V_V { ap_fifo {  { edge_index_mat_s_6_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_6_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_6_V_V_read fifo_update 1 1 } } }
	edge_index_3_0_V { ap_memory {  { edge_index_3_0_V_address0 mem_address 1 7 }  { edge_index_3_0_V_ce0 mem_ce 1 1 }  { edge_index_3_0_V_we0 mem_we 1 1 }  { edge_index_3_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_7_V_V { ap_fifo {  { edge_index_mat_s_7_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_7_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_7_V_V_read fifo_update 1 1 } } }
	edge_index_3_1_V { ap_memory {  { edge_index_3_1_V_address0 mem_address 1 7 }  { edge_index_3_1_V_ce0 mem_ce 1 1 }  { edge_index_3_1_V_we0 mem_we 1 1 }  { edge_index_3_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_8_V_V { ap_fifo {  { edge_index_mat_s_8_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_8_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_8_V_V_read fifo_update 1 1 } } }
	edge_index_4_0_V { ap_memory {  { edge_index_4_0_V_address0 mem_address 1 7 }  { edge_index_4_0_V_ce0 mem_ce 1 1 }  { edge_index_4_0_V_we0 mem_we 1 1 }  { edge_index_4_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_9_V_V { ap_fifo {  { edge_index_mat_s_9_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_9_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_9_V_V_read fifo_update 1 1 } } }
	edge_index_4_1_V { ap_memory {  { edge_index_4_1_V_address0 mem_address 1 7 }  { edge_index_4_1_V_ce0 mem_ce 1 1 }  { edge_index_4_1_V_we0 mem_we 1 1 }  { edge_index_4_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_10_V_V { ap_fifo {  { edge_index_mat_s_10_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_10_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_10_V_V_read fifo_update 1 1 } } }
	edge_index_5_0_V { ap_memory {  { edge_index_5_0_V_address0 mem_address 1 7 }  { edge_index_5_0_V_ce0 mem_ce 1 1 }  { edge_index_5_0_V_we0 mem_we 1 1 }  { edge_index_5_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_11_V_V { ap_fifo {  { edge_index_mat_s_11_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_11_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_11_V_V_read fifo_update 1 1 } } }
	edge_index_5_1_V { ap_memory {  { edge_index_5_1_V_address0 mem_address 1 7 }  { edge_index_5_1_V_ce0 mem_ce 1 1 }  { edge_index_5_1_V_we0 mem_we 1 1 }  { edge_index_5_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_12_V_V { ap_fifo {  { edge_index_mat_s_12_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_12_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_12_V_V_read fifo_update 1 1 } } }
	edge_index_6_0_V { ap_memory {  { edge_index_6_0_V_address0 mem_address 1 7 }  { edge_index_6_0_V_ce0 mem_ce 1 1 }  { edge_index_6_0_V_we0 mem_we 1 1 }  { edge_index_6_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_13_V_V { ap_fifo {  { edge_index_mat_s_13_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_13_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_13_V_V_read fifo_update 1 1 } } }
	edge_index_6_1_V { ap_memory {  { edge_index_6_1_V_address0 mem_address 1 7 }  { edge_index_6_1_V_ce0 mem_ce 1 1 }  { edge_index_6_1_V_we0 mem_we 1 1 }  { edge_index_6_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_14_V_V { ap_fifo {  { edge_index_mat_s_14_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_14_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_14_V_V_read fifo_update 1 1 } } }
	edge_index_7_0_V { ap_memory {  { edge_index_7_0_V_address0 mem_address 1 7 }  { edge_index_7_0_V_ce0 mem_ce 1 1 }  { edge_index_7_0_V_we0 mem_we 1 1 }  { edge_index_7_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_15_V_V { ap_fifo {  { edge_index_mat_s_15_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_15_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_15_V_V_read fifo_update 1 1 } } }
	edge_index_7_1_V { ap_memory {  { edge_index_7_1_V_address0 mem_address 1 7 }  { edge_index_7_1_V_ce0 mem_ce 1 1 }  { edge_index_7_1_V_we0 mem_we 1 1 }  { edge_index_7_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_16_V_V { ap_fifo {  { edge_index_mat_s_16_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_16_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_16_V_V_read fifo_update 1 1 } } }
	edge_index_8_0_V { ap_memory {  { edge_index_8_0_V_address0 mem_address 1 7 }  { edge_index_8_0_V_ce0 mem_ce 1 1 }  { edge_index_8_0_V_we0 mem_we 1 1 }  { edge_index_8_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_17_V_V { ap_fifo {  { edge_index_mat_s_17_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_17_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_17_V_V_read fifo_update 1 1 } } }
	edge_index_8_1_V { ap_memory {  { edge_index_8_1_V_address0 mem_address 1 7 }  { edge_index_8_1_V_ce0 mem_ce 1 1 }  { edge_index_8_1_V_we0 mem_we 1 1 }  { edge_index_8_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_18_V_V { ap_fifo {  { edge_index_mat_s_18_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_18_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_18_V_V_read fifo_update 1 1 } } }
	edge_index_9_0_V { ap_memory {  { edge_index_9_0_V_address0 mem_address 1 7 }  { edge_index_9_0_V_ce0 mem_ce 1 1 }  { edge_index_9_0_V_we0 mem_we 1 1 }  { edge_index_9_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_19_V_V { ap_fifo {  { edge_index_mat_s_19_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_19_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_19_V_V_read fifo_update 1 1 } } }
	edge_index_9_1_V { ap_memory {  { edge_index_9_1_V_address0 mem_address 1 7 }  { edge_index_9_1_V_ce0 mem_ce 1 1 }  { edge_index_9_1_V_we0 mem_we 1 1 }  { edge_index_9_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_20_V_V { ap_fifo {  { edge_index_mat_s_20_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_20_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_20_V_V_read fifo_update 1 1 } } }
	edge_index_10_0_V { ap_memory {  { edge_index_10_0_V_address0 mem_address 1 7 }  { edge_index_10_0_V_ce0 mem_ce 1 1 }  { edge_index_10_0_V_we0 mem_we 1 1 }  { edge_index_10_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_21_V_V { ap_fifo {  { edge_index_mat_s_21_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_21_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_21_V_V_read fifo_update 1 1 } } }
	edge_index_10_1_V { ap_memory {  { edge_index_10_1_V_address0 mem_address 1 7 }  { edge_index_10_1_V_ce0 mem_ce 1 1 }  { edge_index_10_1_V_we0 mem_we 1 1 }  { edge_index_10_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_22_V_V { ap_fifo {  { edge_index_mat_s_22_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_22_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_22_V_V_read fifo_update 1 1 } } }
	edge_index_11_0_V { ap_memory {  { edge_index_11_0_V_address0 mem_address 1 7 }  { edge_index_11_0_V_ce0 mem_ce 1 1 }  { edge_index_11_0_V_we0 mem_we 1 1 }  { edge_index_11_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_23_V_V { ap_fifo {  { edge_index_mat_s_23_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_23_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_23_V_V_read fifo_update 1 1 } } }
	edge_index_11_1_V { ap_memory {  { edge_index_11_1_V_address0 mem_address 1 7 }  { edge_index_11_1_V_ce0 mem_ce 1 1 }  { edge_index_11_1_V_we0 mem_we 1 1 }  { edge_index_11_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_24_V_V { ap_fifo {  { edge_index_mat_s_24_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_24_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_24_V_V_read fifo_update 1 1 } } }
	edge_index_12_0_V { ap_memory {  { edge_index_12_0_V_address0 mem_address 1 7 }  { edge_index_12_0_V_ce0 mem_ce 1 1 }  { edge_index_12_0_V_we0 mem_we 1 1 }  { edge_index_12_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_25_V_V { ap_fifo {  { edge_index_mat_s_25_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_25_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_25_V_V_read fifo_update 1 1 } } }
	edge_index_12_1_V { ap_memory {  { edge_index_12_1_V_address0 mem_address 1 7 }  { edge_index_12_1_V_ce0 mem_ce 1 1 }  { edge_index_12_1_V_we0 mem_we 1 1 }  { edge_index_12_1_V_d0 mem_din 1 14 } } }
}
set moduleName Loop_3_proc227
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {Loop_3_proc227}
set C_modelType { void 0 }
set C_modelArgList {
	{ edge_index_mat_s_0_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_0_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_1_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_0_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_2_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_1_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_3_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_1_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_4_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_2_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_5_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_2_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_6_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_3_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_7_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_3_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_8_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_4_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_9_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_4_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_10_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_5_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_11_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_5_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_12_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_6_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_13_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_6_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_14_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_7_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_15_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_7_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_16_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_8_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_17_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_8_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_18_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_9_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_19_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_9_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_20_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_10_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_21_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_10_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_22_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_11_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_23_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_11_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_24_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_12_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_25_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_12_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "edge_index_mat_s_0_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_0_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_1_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_0_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_2_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_1_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_3_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_1_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_4_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_2_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_5_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_2_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_6_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_3_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_7_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_3_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_8_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_4_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_9_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_4_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_10_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_5_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_11_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_5_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_12_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_6_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_13_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_6_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_14_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_7_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_15_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_7_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_16_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_8_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_17_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_8_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_18_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_9_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_19_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_9_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_20_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_10_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_21_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_10_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_22_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_11_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_23_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_11_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_24_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_12_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_25_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_12_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 189
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ edge_index_mat_s_0_V_V_dout sc_in sc_lv 14 signal 0 } 
	{ edge_index_mat_s_0_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ edge_index_mat_s_0_V_V_read sc_out sc_logic 1 signal 0 } 
	{ edge_index_0_0_V_address0 sc_out sc_lv 7 signal 1 } 
	{ edge_index_0_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ edge_index_0_0_V_we0 sc_out sc_logic 1 signal 1 } 
	{ edge_index_0_0_V_d0 sc_out sc_lv 14 signal 1 } 
	{ edge_index_mat_s_1_V_V_dout sc_in sc_lv 14 signal 2 } 
	{ edge_index_mat_s_1_V_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ edge_index_mat_s_1_V_V_read sc_out sc_logic 1 signal 2 } 
	{ edge_index_0_1_V_address0 sc_out sc_lv 7 signal 3 } 
	{ edge_index_0_1_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ edge_index_0_1_V_we0 sc_out sc_logic 1 signal 3 } 
	{ edge_index_0_1_V_d0 sc_out sc_lv 14 signal 3 } 
	{ edge_index_mat_s_2_V_V_dout sc_in sc_lv 14 signal 4 } 
	{ edge_index_mat_s_2_V_V_empty_n sc_in sc_logic 1 signal 4 } 
	{ edge_index_mat_s_2_V_V_read sc_out sc_logic 1 signal 4 } 
	{ edge_index_1_0_V_address0 sc_out sc_lv 7 signal 5 } 
	{ edge_index_1_0_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ edge_index_1_0_V_we0 sc_out sc_logic 1 signal 5 } 
	{ edge_index_1_0_V_d0 sc_out sc_lv 14 signal 5 } 
	{ edge_index_mat_s_3_V_V_dout sc_in sc_lv 14 signal 6 } 
	{ edge_index_mat_s_3_V_V_empty_n sc_in sc_logic 1 signal 6 } 
	{ edge_index_mat_s_3_V_V_read sc_out sc_logic 1 signal 6 } 
	{ edge_index_1_1_V_address0 sc_out sc_lv 7 signal 7 } 
	{ edge_index_1_1_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ edge_index_1_1_V_we0 sc_out sc_logic 1 signal 7 } 
	{ edge_index_1_1_V_d0 sc_out sc_lv 14 signal 7 } 
	{ edge_index_mat_s_4_V_V_dout sc_in sc_lv 14 signal 8 } 
	{ edge_index_mat_s_4_V_V_empty_n sc_in sc_logic 1 signal 8 } 
	{ edge_index_mat_s_4_V_V_read sc_out sc_logic 1 signal 8 } 
	{ edge_index_2_0_V_address0 sc_out sc_lv 7 signal 9 } 
	{ edge_index_2_0_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ edge_index_2_0_V_we0 sc_out sc_logic 1 signal 9 } 
	{ edge_index_2_0_V_d0 sc_out sc_lv 14 signal 9 } 
	{ edge_index_mat_s_5_V_V_dout sc_in sc_lv 14 signal 10 } 
	{ edge_index_mat_s_5_V_V_empty_n sc_in sc_logic 1 signal 10 } 
	{ edge_index_mat_s_5_V_V_read sc_out sc_logic 1 signal 10 } 
	{ edge_index_2_1_V_address0 sc_out sc_lv 7 signal 11 } 
	{ edge_index_2_1_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ edge_index_2_1_V_we0 sc_out sc_logic 1 signal 11 } 
	{ edge_index_2_1_V_d0 sc_out sc_lv 14 signal 11 } 
	{ edge_index_mat_s_6_V_V_dout sc_in sc_lv 14 signal 12 } 
	{ edge_index_mat_s_6_V_V_empty_n sc_in sc_logic 1 signal 12 } 
	{ edge_index_mat_s_6_V_V_read sc_out sc_logic 1 signal 12 } 
	{ edge_index_3_0_V_address0 sc_out sc_lv 7 signal 13 } 
	{ edge_index_3_0_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ edge_index_3_0_V_we0 sc_out sc_logic 1 signal 13 } 
	{ edge_index_3_0_V_d0 sc_out sc_lv 14 signal 13 } 
	{ edge_index_mat_s_7_V_V_dout sc_in sc_lv 14 signal 14 } 
	{ edge_index_mat_s_7_V_V_empty_n sc_in sc_logic 1 signal 14 } 
	{ edge_index_mat_s_7_V_V_read sc_out sc_logic 1 signal 14 } 
	{ edge_index_3_1_V_address0 sc_out sc_lv 7 signal 15 } 
	{ edge_index_3_1_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ edge_index_3_1_V_we0 sc_out sc_logic 1 signal 15 } 
	{ edge_index_3_1_V_d0 sc_out sc_lv 14 signal 15 } 
	{ edge_index_mat_s_8_V_V_dout sc_in sc_lv 14 signal 16 } 
	{ edge_index_mat_s_8_V_V_empty_n sc_in sc_logic 1 signal 16 } 
	{ edge_index_mat_s_8_V_V_read sc_out sc_logic 1 signal 16 } 
	{ edge_index_4_0_V_address0 sc_out sc_lv 7 signal 17 } 
	{ edge_index_4_0_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ edge_index_4_0_V_we0 sc_out sc_logic 1 signal 17 } 
	{ edge_index_4_0_V_d0 sc_out sc_lv 14 signal 17 } 
	{ edge_index_mat_s_9_V_V_dout sc_in sc_lv 14 signal 18 } 
	{ edge_index_mat_s_9_V_V_empty_n sc_in sc_logic 1 signal 18 } 
	{ edge_index_mat_s_9_V_V_read sc_out sc_logic 1 signal 18 } 
	{ edge_index_4_1_V_address0 sc_out sc_lv 7 signal 19 } 
	{ edge_index_4_1_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ edge_index_4_1_V_we0 sc_out sc_logic 1 signal 19 } 
	{ edge_index_4_1_V_d0 sc_out sc_lv 14 signal 19 } 
	{ edge_index_mat_s_10_V_V_dout sc_in sc_lv 14 signal 20 } 
	{ edge_index_mat_s_10_V_V_empty_n sc_in sc_logic 1 signal 20 } 
	{ edge_index_mat_s_10_V_V_read sc_out sc_logic 1 signal 20 } 
	{ edge_index_5_0_V_address0 sc_out sc_lv 7 signal 21 } 
	{ edge_index_5_0_V_ce0 sc_out sc_logic 1 signal 21 } 
	{ edge_index_5_0_V_we0 sc_out sc_logic 1 signal 21 } 
	{ edge_index_5_0_V_d0 sc_out sc_lv 14 signal 21 } 
	{ edge_index_mat_s_11_V_V_dout sc_in sc_lv 14 signal 22 } 
	{ edge_index_mat_s_11_V_V_empty_n sc_in sc_logic 1 signal 22 } 
	{ edge_index_mat_s_11_V_V_read sc_out sc_logic 1 signal 22 } 
	{ edge_index_5_1_V_address0 sc_out sc_lv 7 signal 23 } 
	{ edge_index_5_1_V_ce0 sc_out sc_logic 1 signal 23 } 
	{ edge_index_5_1_V_we0 sc_out sc_logic 1 signal 23 } 
	{ edge_index_5_1_V_d0 sc_out sc_lv 14 signal 23 } 
	{ edge_index_mat_s_12_V_V_dout sc_in sc_lv 14 signal 24 } 
	{ edge_index_mat_s_12_V_V_empty_n sc_in sc_logic 1 signal 24 } 
	{ edge_index_mat_s_12_V_V_read sc_out sc_logic 1 signal 24 } 
	{ edge_index_6_0_V_address0 sc_out sc_lv 7 signal 25 } 
	{ edge_index_6_0_V_ce0 sc_out sc_logic 1 signal 25 } 
	{ edge_index_6_0_V_we0 sc_out sc_logic 1 signal 25 } 
	{ edge_index_6_0_V_d0 sc_out sc_lv 14 signal 25 } 
	{ edge_index_mat_s_13_V_V_dout sc_in sc_lv 14 signal 26 } 
	{ edge_index_mat_s_13_V_V_empty_n sc_in sc_logic 1 signal 26 } 
	{ edge_index_mat_s_13_V_V_read sc_out sc_logic 1 signal 26 } 
	{ edge_index_6_1_V_address0 sc_out sc_lv 7 signal 27 } 
	{ edge_index_6_1_V_ce0 sc_out sc_logic 1 signal 27 } 
	{ edge_index_6_1_V_we0 sc_out sc_logic 1 signal 27 } 
	{ edge_index_6_1_V_d0 sc_out sc_lv 14 signal 27 } 
	{ edge_index_mat_s_14_V_V_dout sc_in sc_lv 14 signal 28 } 
	{ edge_index_mat_s_14_V_V_empty_n sc_in sc_logic 1 signal 28 } 
	{ edge_index_mat_s_14_V_V_read sc_out sc_logic 1 signal 28 } 
	{ edge_index_7_0_V_address0 sc_out sc_lv 7 signal 29 } 
	{ edge_index_7_0_V_ce0 sc_out sc_logic 1 signal 29 } 
	{ edge_index_7_0_V_we0 sc_out sc_logic 1 signal 29 } 
	{ edge_index_7_0_V_d0 sc_out sc_lv 14 signal 29 } 
	{ edge_index_mat_s_15_V_V_dout sc_in sc_lv 14 signal 30 } 
	{ edge_index_mat_s_15_V_V_empty_n sc_in sc_logic 1 signal 30 } 
	{ edge_index_mat_s_15_V_V_read sc_out sc_logic 1 signal 30 } 
	{ edge_index_7_1_V_address0 sc_out sc_lv 7 signal 31 } 
	{ edge_index_7_1_V_ce0 sc_out sc_logic 1 signal 31 } 
	{ edge_index_7_1_V_we0 sc_out sc_logic 1 signal 31 } 
	{ edge_index_7_1_V_d0 sc_out sc_lv 14 signal 31 } 
	{ edge_index_mat_s_16_V_V_dout sc_in sc_lv 14 signal 32 } 
	{ edge_index_mat_s_16_V_V_empty_n sc_in sc_logic 1 signal 32 } 
	{ edge_index_mat_s_16_V_V_read sc_out sc_logic 1 signal 32 } 
	{ edge_index_8_0_V_address0 sc_out sc_lv 7 signal 33 } 
	{ edge_index_8_0_V_ce0 sc_out sc_logic 1 signal 33 } 
	{ edge_index_8_0_V_we0 sc_out sc_logic 1 signal 33 } 
	{ edge_index_8_0_V_d0 sc_out sc_lv 14 signal 33 } 
	{ edge_index_mat_s_17_V_V_dout sc_in sc_lv 14 signal 34 } 
	{ edge_index_mat_s_17_V_V_empty_n sc_in sc_logic 1 signal 34 } 
	{ edge_index_mat_s_17_V_V_read sc_out sc_logic 1 signal 34 } 
	{ edge_index_8_1_V_address0 sc_out sc_lv 7 signal 35 } 
	{ edge_index_8_1_V_ce0 sc_out sc_logic 1 signal 35 } 
	{ edge_index_8_1_V_we0 sc_out sc_logic 1 signal 35 } 
	{ edge_index_8_1_V_d0 sc_out sc_lv 14 signal 35 } 
	{ edge_index_mat_s_18_V_V_dout sc_in sc_lv 14 signal 36 } 
	{ edge_index_mat_s_18_V_V_empty_n sc_in sc_logic 1 signal 36 } 
	{ edge_index_mat_s_18_V_V_read sc_out sc_logic 1 signal 36 } 
	{ edge_index_9_0_V_address0 sc_out sc_lv 7 signal 37 } 
	{ edge_index_9_0_V_ce0 sc_out sc_logic 1 signal 37 } 
	{ edge_index_9_0_V_we0 sc_out sc_logic 1 signal 37 } 
	{ edge_index_9_0_V_d0 sc_out sc_lv 14 signal 37 } 
	{ edge_index_mat_s_19_V_V_dout sc_in sc_lv 14 signal 38 } 
	{ edge_index_mat_s_19_V_V_empty_n sc_in sc_logic 1 signal 38 } 
	{ edge_index_mat_s_19_V_V_read sc_out sc_logic 1 signal 38 } 
	{ edge_index_9_1_V_address0 sc_out sc_lv 7 signal 39 } 
	{ edge_index_9_1_V_ce0 sc_out sc_logic 1 signal 39 } 
	{ edge_index_9_1_V_we0 sc_out sc_logic 1 signal 39 } 
	{ edge_index_9_1_V_d0 sc_out sc_lv 14 signal 39 } 
	{ edge_index_mat_s_20_V_V_dout sc_in sc_lv 14 signal 40 } 
	{ edge_index_mat_s_20_V_V_empty_n sc_in sc_logic 1 signal 40 } 
	{ edge_index_mat_s_20_V_V_read sc_out sc_logic 1 signal 40 } 
	{ edge_index_10_0_V_address0 sc_out sc_lv 7 signal 41 } 
	{ edge_index_10_0_V_ce0 sc_out sc_logic 1 signal 41 } 
	{ edge_index_10_0_V_we0 sc_out sc_logic 1 signal 41 } 
	{ edge_index_10_0_V_d0 sc_out sc_lv 14 signal 41 } 
	{ edge_index_mat_s_21_V_V_dout sc_in sc_lv 14 signal 42 } 
	{ edge_index_mat_s_21_V_V_empty_n sc_in sc_logic 1 signal 42 } 
	{ edge_index_mat_s_21_V_V_read sc_out sc_logic 1 signal 42 } 
	{ edge_index_10_1_V_address0 sc_out sc_lv 7 signal 43 } 
	{ edge_index_10_1_V_ce0 sc_out sc_logic 1 signal 43 } 
	{ edge_index_10_1_V_we0 sc_out sc_logic 1 signal 43 } 
	{ edge_index_10_1_V_d0 sc_out sc_lv 14 signal 43 } 
	{ edge_index_mat_s_22_V_V_dout sc_in sc_lv 14 signal 44 } 
	{ edge_index_mat_s_22_V_V_empty_n sc_in sc_logic 1 signal 44 } 
	{ edge_index_mat_s_22_V_V_read sc_out sc_logic 1 signal 44 } 
	{ edge_index_11_0_V_address0 sc_out sc_lv 7 signal 45 } 
	{ edge_index_11_0_V_ce0 sc_out sc_logic 1 signal 45 } 
	{ edge_index_11_0_V_we0 sc_out sc_logic 1 signal 45 } 
	{ edge_index_11_0_V_d0 sc_out sc_lv 14 signal 45 } 
	{ edge_index_mat_s_23_V_V_dout sc_in sc_lv 14 signal 46 } 
	{ edge_index_mat_s_23_V_V_empty_n sc_in sc_logic 1 signal 46 } 
	{ edge_index_mat_s_23_V_V_read sc_out sc_logic 1 signal 46 } 
	{ edge_index_11_1_V_address0 sc_out sc_lv 7 signal 47 } 
	{ edge_index_11_1_V_ce0 sc_out sc_logic 1 signal 47 } 
	{ edge_index_11_1_V_we0 sc_out sc_logic 1 signal 47 } 
	{ edge_index_11_1_V_d0 sc_out sc_lv 14 signal 47 } 
	{ edge_index_mat_s_24_V_V_dout sc_in sc_lv 14 signal 48 } 
	{ edge_index_mat_s_24_V_V_empty_n sc_in sc_logic 1 signal 48 } 
	{ edge_index_mat_s_24_V_V_read sc_out sc_logic 1 signal 48 } 
	{ edge_index_12_0_V_address0 sc_out sc_lv 7 signal 49 } 
	{ edge_index_12_0_V_ce0 sc_out sc_logic 1 signal 49 } 
	{ edge_index_12_0_V_we0 sc_out sc_logic 1 signal 49 } 
	{ edge_index_12_0_V_d0 sc_out sc_lv 14 signal 49 } 
	{ edge_index_mat_s_25_V_V_dout sc_in sc_lv 14 signal 50 } 
	{ edge_index_mat_s_25_V_V_empty_n sc_in sc_logic 1 signal 50 } 
	{ edge_index_mat_s_25_V_V_read sc_out sc_logic 1 signal 50 } 
	{ edge_index_12_1_V_address0 sc_out sc_lv 7 signal 51 } 
	{ edge_index_12_1_V_ce0 sc_out sc_logic 1 signal 51 } 
	{ edge_index_12_1_V_we0 sc_out sc_logic 1 signal 51 } 
	{ edge_index_12_1_V_d0 sc_out sc_lv 14 signal 51 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "edge_index_mat_s_0_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_0_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_0_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_0_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_0_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_0_V_V", "role": "read" }} , 
 	{ "name": "edge_index_0_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_0_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_0_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_0_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_0_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_0_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_0_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_0_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_1_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_1_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_1_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_1_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_1_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_1_V_V", "role": "read" }} , 
 	{ "name": "edge_index_0_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_0_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_0_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_0_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_0_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_0_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_0_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_0_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_2_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_2_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_2_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_2_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_2_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_2_V_V", "role": "read" }} , 
 	{ "name": "edge_index_1_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_1_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_1_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_1_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_1_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_1_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_1_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_1_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_3_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_3_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_3_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_3_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_3_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_3_V_V", "role": "read" }} , 
 	{ "name": "edge_index_1_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_1_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_1_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_1_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_1_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_1_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_1_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_1_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_4_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_4_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_4_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_4_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_4_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_4_V_V", "role": "read" }} , 
 	{ "name": "edge_index_2_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_2_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_2_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_2_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_2_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_2_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_2_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_2_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_5_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_5_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_5_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_5_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_5_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_5_V_V", "role": "read" }} , 
 	{ "name": "edge_index_2_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_2_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_2_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_2_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_2_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_2_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_2_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_2_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_6_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_6_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_6_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_6_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_6_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_6_V_V", "role": "read" }} , 
 	{ "name": "edge_index_3_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_3_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_3_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_3_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_3_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_3_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_3_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_3_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_7_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_7_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_7_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_7_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_7_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_7_V_V", "role": "read" }} , 
 	{ "name": "edge_index_3_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_3_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_3_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_3_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_3_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_3_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_3_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_3_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_8_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_8_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_8_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_8_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_8_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_8_V_V", "role": "read" }} , 
 	{ "name": "edge_index_4_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_4_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_4_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_4_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_4_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_4_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_4_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_4_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_9_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_9_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_9_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_9_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_9_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_9_V_V", "role": "read" }} , 
 	{ "name": "edge_index_4_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_4_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_4_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_4_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_4_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_4_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_4_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_4_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_10_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_10_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_10_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_10_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_10_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_10_V_V", "role": "read" }} , 
 	{ "name": "edge_index_5_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_5_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_5_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_5_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_5_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_5_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_5_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_5_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_11_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_11_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_11_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_11_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_11_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_11_V_V", "role": "read" }} , 
 	{ "name": "edge_index_5_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_5_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_5_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_5_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_5_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_5_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_5_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_5_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_12_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_12_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_12_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_12_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_12_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_12_V_V", "role": "read" }} , 
 	{ "name": "edge_index_6_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_6_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_6_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_6_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_6_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_6_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_6_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_6_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_13_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_13_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_13_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_13_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_13_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_13_V_V", "role": "read" }} , 
 	{ "name": "edge_index_6_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_6_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_6_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_6_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_6_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_6_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_6_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_6_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_14_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_14_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_14_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_14_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_14_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_14_V_V", "role": "read" }} , 
 	{ "name": "edge_index_7_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_7_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_7_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_7_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_7_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_7_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_7_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_7_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_15_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_15_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_15_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_15_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_15_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_15_V_V", "role": "read" }} , 
 	{ "name": "edge_index_7_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_7_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_7_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_7_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_7_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_7_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_7_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_7_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_16_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_16_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_16_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_16_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_16_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_16_V_V", "role": "read" }} , 
 	{ "name": "edge_index_8_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_8_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_8_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_8_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_8_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_8_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_8_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_8_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_17_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_17_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_17_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_17_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_17_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_17_V_V", "role": "read" }} , 
 	{ "name": "edge_index_8_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_8_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_8_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_8_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_8_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_8_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_8_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_8_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_18_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_18_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_18_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_18_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_18_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_18_V_V", "role": "read" }} , 
 	{ "name": "edge_index_9_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_9_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_9_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_9_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_9_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_9_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_9_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_9_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_19_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_19_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_19_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_19_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_19_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_19_V_V", "role": "read" }} , 
 	{ "name": "edge_index_9_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_9_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_9_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_9_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_9_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_9_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_9_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_9_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_20_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_20_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_20_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_20_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_20_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_20_V_V", "role": "read" }} , 
 	{ "name": "edge_index_10_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_10_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_10_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_10_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_10_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_10_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_10_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_10_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_21_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_21_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_21_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_21_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_21_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_21_V_V", "role": "read" }} , 
 	{ "name": "edge_index_10_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_10_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_10_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_10_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_10_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_10_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_10_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_10_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_22_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_22_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_22_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_22_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_22_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_22_V_V", "role": "read" }} , 
 	{ "name": "edge_index_11_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_11_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_11_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_11_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_11_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_11_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_11_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_11_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_23_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_23_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_23_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_23_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_23_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_23_V_V", "role": "read" }} , 
 	{ "name": "edge_index_11_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_11_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_11_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_11_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_11_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_11_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_11_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_11_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_24_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_24_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_24_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_24_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_24_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_24_V_V", "role": "read" }} , 
 	{ "name": "edge_index_12_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_12_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_12_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_12_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_12_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_12_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_12_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_12_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_25_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_25_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_25_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_25_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_25_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_25_V_V", "role": "read" }} , 
 	{ "name": "edge_index_12_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_12_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_12_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_12_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_12_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_12_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_12_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_12_1_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "Loop_3_proc227",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "122", "EstimateLatencyMax" : "122",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "edge_index_mat_s_0_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_0_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_0_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_1_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_0_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_2_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_1_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_3_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_3_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_1_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_4_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_4_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_2_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_5_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_5_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_2_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_6_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_6_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_3_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_7_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_7_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_3_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_8_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_8_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_4_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_9_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_9_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_4_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_10_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_10_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_5_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_11_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_11_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_5_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_12_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_12_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_6_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_13_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_13_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_6_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_14_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_14_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_7_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_15_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_15_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_7_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_16_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_16_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_8_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_17_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_17_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_8_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_18_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_18_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_9_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_19_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_19_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_9_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_20_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_20_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_10_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_21_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_21_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_10_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_22_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_22_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_11_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_23_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_23_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_11_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_24_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_24_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_12_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_25_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_25_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_12_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"}]}]}


set ArgLastReadFirstWriteLatency {
	Loop_3_proc227 {
		edge_index_mat_s_0_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_0_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_1_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_0_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_2_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_1_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_3_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_1_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_4_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_2_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_5_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_2_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_6_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_3_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_7_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_3_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_8_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_4_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_9_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_4_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_10_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_5_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_11_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_5_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_12_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_6_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_13_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_6_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_14_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_7_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_15_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_7_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_16_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_8_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_17_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_8_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_18_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_9_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_19_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_9_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_20_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_10_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_21_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_10_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_22_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_11_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_23_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_11_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_24_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_12_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_25_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_12_1_V {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "122", "Max" : "122"}
	, {"Name" : "Interval", "Min" : "122", "Max" : "122"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	edge_index_mat_s_0_V_V { ap_fifo {  { edge_index_mat_s_0_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_0_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_0_V_V_read fifo_update 1 1 } } }
	edge_index_0_0_V { ap_memory {  { edge_index_0_0_V_address0 mem_address 1 7 }  { edge_index_0_0_V_ce0 mem_ce 1 1 }  { edge_index_0_0_V_we0 mem_we 1 1 }  { edge_index_0_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_1_V_V { ap_fifo {  { edge_index_mat_s_1_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_1_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_1_V_V_read fifo_update 1 1 } } }
	edge_index_0_1_V { ap_memory {  { edge_index_0_1_V_address0 mem_address 1 7 }  { edge_index_0_1_V_ce0 mem_ce 1 1 }  { edge_index_0_1_V_we0 mem_we 1 1 }  { edge_index_0_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_2_V_V { ap_fifo {  { edge_index_mat_s_2_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_2_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_2_V_V_read fifo_update 1 1 } } }
	edge_index_1_0_V { ap_memory {  { edge_index_1_0_V_address0 mem_address 1 7 }  { edge_index_1_0_V_ce0 mem_ce 1 1 }  { edge_index_1_0_V_we0 mem_we 1 1 }  { edge_index_1_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_3_V_V { ap_fifo {  { edge_index_mat_s_3_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_3_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_3_V_V_read fifo_update 1 1 } } }
	edge_index_1_1_V { ap_memory {  { edge_index_1_1_V_address0 mem_address 1 7 }  { edge_index_1_1_V_ce0 mem_ce 1 1 }  { edge_index_1_1_V_we0 mem_we 1 1 }  { edge_index_1_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_4_V_V { ap_fifo {  { edge_index_mat_s_4_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_4_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_4_V_V_read fifo_update 1 1 } } }
	edge_index_2_0_V { ap_memory {  { edge_index_2_0_V_address0 mem_address 1 7 }  { edge_index_2_0_V_ce0 mem_ce 1 1 }  { edge_index_2_0_V_we0 mem_we 1 1 }  { edge_index_2_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_5_V_V { ap_fifo {  { edge_index_mat_s_5_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_5_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_5_V_V_read fifo_update 1 1 } } }
	edge_index_2_1_V { ap_memory {  { edge_index_2_1_V_address0 mem_address 1 7 }  { edge_index_2_1_V_ce0 mem_ce 1 1 }  { edge_index_2_1_V_we0 mem_we 1 1 }  { edge_index_2_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_6_V_V { ap_fifo {  { edge_index_mat_s_6_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_6_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_6_V_V_read fifo_update 1 1 } } }
	edge_index_3_0_V { ap_memory {  { edge_index_3_0_V_address0 mem_address 1 7 }  { edge_index_3_0_V_ce0 mem_ce 1 1 }  { edge_index_3_0_V_we0 mem_we 1 1 }  { edge_index_3_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_7_V_V { ap_fifo {  { edge_index_mat_s_7_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_7_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_7_V_V_read fifo_update 1 1 } } }
	edge_index_3_1_V { ap_memory {  { edge_index_3_1_V_address0 mem_address 1 7 }  { edge_index_3_1_V_ce0 mem_ce 1 1 }  { edge_index_3_1_V_we0 mem_we 1 1 }  { edge_index_3_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_8_V_V { ap_fifo {  { edge_index_mat_s_8_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_8_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_8_V_V_read fifo_update 1 1 } } }
	edge_index_4_0_V { ap_memory {  { edge_index_4_0_V_address0 mem_address 1 7 }  { edge_index_4_0_V_ce0 mem_ce 1 1 }  { edge_index_4_0_V_we0 mem_we 1 1 }  { edge_index_4_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_9_V_V { ap_fifo {  { edge_index_mat_s_9_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_9_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_9_V_V_read fifo_update 1 1 } } }
	edge_index_4_1_V { ap_memory {  { edge_index_4_1_V_address0 mem_address 1 7 }  { edge_index_4_1_V_ce0 mem_ce 1 1 }  { edge_index_4_1_V_we0 mem_we 1 1 }  { edge_index_4_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_10_V_V { ap_fifo {  { edge_index_mat_s_10_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_10_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_10_V_V_read fifo_update 1 1 } } }
	edge_index_5_0_V { ap_memory {  { edge_index_5_0_V_address0 mem_address 1 7 }  { edge_index_5_0_V_ce0 mem_ce 1 1 }  { edge_index_5_0_V_we0 mem_we 1 1 }  { edge_index_5_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_11_V_V { ap_fifo {  { edge_index_mat_s_11_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_11_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_11_V_V_read fifo_update 1 1 } } }
	edge_index_5_1_V { ap_memory {  { edge_index_5_1_V_address0 mem_address 1 7 }  { edge_index_5_1_V_ce0 mem_ce 1 1 }  { edge_index_5_1_V_we0 mem_we 1 1 }  { edge_index_5_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_12_V_V { ap_fifo {  { edge_index_mat_s_12_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_12_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_12_V_V_read fifo_update 1 1 } } }
	edge_index_6_0_V { ap_memory {  { edge_index_6_0_V_address0 mem_address 1 7 }  { edge_index_6_0_V_ce0 mem_ce 1 1 }  { edge_index_6_0_V_we0 mem_we 1 1 }  { edge_index_6_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_13_V_V { ap_fifo {  { edge_index_mat_s_13_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_13_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_13_V_V_read fifo_update 1 1 } } }
	edge_index_6_1_V { ap_memory {  { edge_index_6_1_V_address0 mem_address 1 7 }  { edge_index_6_1_V_ce0 mem_ce 1 1 }  { edge_index_6_1_V_we0 mem_we 1 1 }  { edge_index_6_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_14_V_V { ap_fifo {  { edge_index_mat_s_14_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_14_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_14_V_V_read fifo_update 1 1 } } }
	edge_index_7_0_V { ap_memory {  { edge_index_7_0_V_address0 mem_address 1 7 }  { edge_index_7_0_V_ce0 mem_ce 1 1 }  { edge_index_7_0_V_we0 mem_we 1 1 }  { edge_index_7_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_15_V_V { ap_fifo {  { edge_index_mat_s_15_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_15_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_15_V_V_read fifo_update 1 1 } } }
	edge_index_7_1_V { ap_memory {  { edge_index_7_1_V_address0 mem_address 1 7 }  { edge_index_7_1_V_ce0 mem_ce 1 1 }  { edge_index_7_1_V_we0 mem_we 1 1 }  { edge_index_7_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_16_V_V { ap_fifo {  { edge_index_mat_s_16_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_16_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_16_V_V_read fifo_update 1 1 } } }
	edge_index_8_0_V { ap_memory {  { edge_index_8_0_V_address0 mem_address 1 7 }  { edge_index_8_0_V_ce0 mem_ce 1 1 }  { edge_index_8_0_V_we0 mem_we 1 1 }  { edge_index_8_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_17_V_V { ap_fifo {  { edge_index_mat_s_17_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_17_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_17_V_V_read fifo_update 1 1 } } }
	edge_index_8_1_V { ap_memory {  { edge_index_8_1_V_address0 mem_address 1 7 }  { edge_index_8_1_V_ce0 mem_ce 1 1 }  { edge_index_8_1_V_we0 mem_we 1 1 }  { edge_index_8_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_18_V_V { ap_fifo {  { edge_index_mat_s_18_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_18_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_18_V_V_read fifo_update 1 1 } } }
	edge_index_9_0_V { ap_memory {  { edge_index_9_0_V_address0 mem_address 1 7 }  { edge_index_9_0_V_ce0 mem_ce 1 1 }  { edge_index_9_0_V_we0 mem_we 1 1 }  { edge_index_9_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_19_V_V { ap_fifo {  { edge_index_mat_s_19_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_19_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_19_V_V_read fifo_update 1 1 } } }
	edge_index_9_1_V { ap_memory {  { edge_index_9_1_V_address0 mem_address 1 7 }  { edge_index_9_1_V_ce0 mem_ce 1 1 }  { edge_index_9_1_V_we0 mem_we 1 1 }  { edge_index_9_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_20_V_V { ap_fifo {  { edge_index_mat_s_20_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_20_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_20_V_V_read fifo_update 1 1 } } }
	edge_index_10_0_V { ap_memory {  { edge_index_10_0_V_address0 mem_address 1 7 }  { edge_index_10_0_V_ce0 mem_ce 1 1 }  { edge_index_10_0_V_we0 mem_we 1 1 }  { edge_index_10_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_21_V_V { ap_fifo {  { edge_index_mat_s_21_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_21_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_21_V_V_read fifo_update 1 1 } } }
	edge_index_10_1_V { ap_memory {  { edge_index_10_1_V_address0 mem_address 1 7 }  { edge_index_10_1_V_ce0 mem_ce 1 1 }  { edge_index_10_1_V_we0 mem_we 1 1 }  { edge_index_10_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_22_V_V { ap_fifo {  { edge_index_mat_s_22_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_22_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_22_V_V_read fifo_update 1 1 } } }
	edge_index_11_0_V { ap_memory {  { edge_index_11_0_V_address0 mem_address 1 7 }  { edge_index_11_0_V_ce0 mem_ce 1 1 }  { edge_index_11_0_V_we0 mem_we 1 1 }  { edge_index_11_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_23_V_V { ap_fifo {  { edge_index_mat_s_23_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_23_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_23_V_V_read fifo_update 1 1 } } }
	edge_index_11_1_V { ap_memory {  { edge_index_11_1_V_address0 mem_address 1 7 }  { edge_index_11_1_V_ce0 mem_ce 1 1 }  { edge_index_11_1_V_we0 mem_we 1 1 }  { edge_index_11_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_24_V_V { ap_fifo {  { edge_index_mat_s_24_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_24_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_24_V_V_read fifo_update 1 1 } } }
	edge_index_12_0_V { ap_memory {  { edge_index_12_0_V_address0 mem_address 1 7 }  { edge_index_12_0_V_ce0 mem_ce 1 1 }  { edge_index_12_0_V_we0 mem_we 1 1 }  { edge_index_12_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_25_V_V { ap_fifo {  { edge_index_mat_s_25_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_25_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_25_V_V_read fifo_update 1 1 } } }
	edge_index_12_1_V { ap_memory {  { edge_index_12_1_V_address0 mem_address 1 7 }  { edge_index_12_1_V_ce0 mem_ce 1 1 }  { edge_index_12_1_V_we0 mem_we 1 1 }  { edge_index_12_1_V_d0 mem_din 1 14 } } }
}
set moduleName Loop_3_proc227
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {Loop_3_proc227}
set C_modelType { void 0 }
set C_modelArgList {
	{ edge_index_mat_s_0_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_0_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_1_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_0_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_2_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_1_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_3_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_1_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_4_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_2_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_5_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_2_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_6_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_3_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_7_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_3_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_8_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_4_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_9_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_4_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_10_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_5_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_11_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_5_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_12_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_6_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_13_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_6_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_14_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_7_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_15_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_7_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_16_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_8_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_17_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_8_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_18_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_9_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_19_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_9_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_20_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_10_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_21_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_10_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_22_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_11_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_23_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_11_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_24_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_12_0_V int 14 regular {array 120 { 0 3 } 0 1 }  }
	{ edge_index_mat_s_25_V_V int 14 regular {fifo 0 volatile }  }
	{ edge_index_12_1_V int 14 regular {array 120 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "edge_index_mat_s_0_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_0_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_1_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_0_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_2_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_1_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_3_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_1_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_4_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_2_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_5_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_2_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_6_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_3_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_7_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_3_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_8_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_4_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_9_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_4_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_10_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_5_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_11_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_5_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_12_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_6_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_13_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_6_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_14_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_7_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_15_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_7_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_16_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_8_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_17_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_8_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_18_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_9_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_19_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_9_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_20_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_10_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_21_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_10_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_22_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_11_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_23_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_11_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_24_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_12_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "edge_index_mat_s_25_V_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "edge_index_12_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 189
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ edge_index_mat_s_0_V_V_dout sc_in sc_lv 14 signal 0 } 
	{ edge_index_mat_s_0_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ edge_index_mat_s_0_V_V_read sc_out sc_logic 1 signal 0 } 
	{ edge_index_0_0_V_address0 sc_out sc_lv 7 signal 1 } 
	{ edge_index_0_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ edge_index_0_0_V_we0 sc_out sc_logic 1 signal 1 } 
	{ edge_index_0_0_V_d0 sc_out sc_lv 14 signal 1 } 
	{ edge_index_mat_s_1_V_V_dout sc_in sc_lv 14 signal 2 } 
	{ edge_index_mat_s_1_V_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ edge_index_mat_s_1_V_V_read sc_out sc_logic 1 signal 2 } 
	{ edge_index_0_1_V_address0 sc_out sc_lv 7 signal 3 } 
	{ edge_index_0_1_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ edge_index_0_1_V_we0 sc_out sc_logic 1 signal 3 } 
	{ edge_index_0_1_V_d0 sc_out sc_lv 14 signal 3 } 
	{ edge_index_mat_s_2_V_V_dout sc_in sc_lv 14 signal 4 } 
	{ edge_index_mat_s_2_V_V_empty_n sc_in sc_logic 1 signal 4 } 
	{ edge_index_mat_s_2_V_V_read sc_out sc_logic 1 signal 4 } 
	{ edge_index_1_0_V_address0 sc_out sc_lv 7 signal 5 } 
	{ edge_index_1_0_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ edge_index_1_0_V_we0 sc_out sc_logic 1 signal 5 } 
	{ edge_index_1_0_V_d0 sc_out sc_lv 14 signal 5 } 
	{ edge_index_mat_s_3_V_V_dout sc_in sc_lv 14 signal 6 } 
	{ edge_index_mat_s_3_V_V_empty_n sc_in sc_logic 1 signal 6 } 
	{ edge_index_mat_s_3_V_V_read sc_out sc_logic 1 signal 6 } 
	{ edge_index_1_1_V_address0 sc_out sc_lv 7 signal 7 } 
	{ edge_index_1_1_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ edge_index_1_1_V_we0 sc_out sc_logic 1 signal 7 } 
	{ edge_index_1_1_V_d0 sc_out sc_lv 14 signal 7 } 
	{ edge_index_mat_s_4_V_V_dout sc_in sc_lv 14 signal 8 } 
	{ edge_index_mat_s_4_V_V_empty_n sc_in sc_logic 1 signal 8 } 
	{ edge_index_mat_s_4_V_V_read sc_out sc_logic 1 signal 8 } 
	{ edge_index_2_0_V_address0 sc_out sc_lv 7 signal 9 } 
	{ edge_index_2_0_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ edge_index_2_0_V_we0 sc_out sc_logic 1 signal 9 } 
	{ edge_index_2_0_V_d0 sc_out sc_lv 14 signal 9 } 
	{ edge_index_mat_s_5_V_V_dout sc_in sc_lv 14 signal 10 } 
	{ edge_index_mat_s_5_V_V_empty_n sc_in sc_logic 1 signal 10 } 
	{ edge_index_mat_s_5_V_V_read sc_out sc_logic 1 signal 10 } 
	{ edge_index_2_1_V_address0 sc_out sc_lv 7 signal 11 } 
	{ edge_index_2_1_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ edge_index_2_1_V_we0 sc_out sc_logic 1 signal 11 } 
	{ edge_index_2_1_V_d0 sc_out sc_lv 14 signal 11 } 
	{ edge_index_mat_s_6_V_V_dout sc_in sc_lv 14 signal 12 } 
	{ edge_index_mat_s_6_V_V_empty_n sc_in sc_logic 1 signal 12 } 
	{ edge_index_mat_s_6_V_V_read sc_out sc_logic 1 signal 12 } 
	{ edge_index_3_0_V_address0 sc_out sc_lv 7 signal 13 } 
	{ edge_index_3_0_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ edge_index_3_0_V_we0 sc_out sc_logic 1 signal 13 } 
	{ edge_index_3_0_V_d0 sc_out sc_lv 14 signal 13 } 
	{ edge_index_mat_s_7_V_V_dout sc_in sc_lv 14 signal 14 } 
	{ edge_index_mat_s_7_V_V_empty_n sc_in sc_logic 1 signal 14 } 
	{ edge_index_mat_s_7_V_V_read sc_out sc_logic 1 signal 14 } 
	{ edge_index_3_1_V_address0 sc_out sc_lv 7 signal 15 } 
	{ edge_index_3_1_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ edge_index_3_1_V_we0 sc_out sc_logic 1 signal 15 } 
	{ edge_index_3_1_V_d0 sc_out sc_lv 14 signal 15 } 
	{ edge_index_mat_s_8_V_V_dout sc_in sc_lv 14 signal 16 } 
	{ edge_index_mat_s_8_V_V_empty_n sc_in sc_logic 1 signal 16 } 
	{ edge_index_mat_s_8_V_V_read sc_out sc_logic 1 signal 16 } 
	{ edge_index_4_0_V_address0 sc_out sc_lv 7 signal 17 } 
	{ edge_index_4_0_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ edge_index_4_0_V_we0 sc_out sc_logic 1 signal 17 } 
	{ edge_index_4_0_V_d0 sc_out sc_lv 14 signal 17 } 
	{ edge_index_mat_s_9_V_V_dout sc_in sc_lv 14 signal 18 } 
	{ edge_index_mat_s_9_V_V_empty_n sc_in sc_logic 1 signal 18 } 
	{ edge_index_mat_s_9_V_V_read sc_out sc_logic 1 signal 18 } 
	{ edge_index_4_1_V_address0 sc_out sc_lv 7 signal 19 } 
	{ edge_index_4_1_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ edge_index_4_1_V_we0 sc_out sc_logic 1 signal 19 } 
	{ edge_index_4_1_V_d0 sc_out sc_lv 14 signal 19 } 
	{ edge_index_mat_s_10_V_V_dout sc_in sc_lv 14 signal 20 } 
	{ edge_index_mat_s_10_V_V_empty_n sc_in sc_logic 1 signal 20 } 
	{ edge_index_mat_s_10_V_V_read sc_out sc_logic 1 signal 20 } 
	{ edge_index_5_0_V_address0 sc_out sc_lv 7 signal 21 } 
	{ edge_index_5_0_V_ce0 sc_out sc_logic 1 signal 21 } 
	{ edge_index_5_0_V_we0 sc_out sc_logic 1 signal 21 } 
	{ edge_index_5_0_V_d0 sc_out sc_lv 14 signal 21 } 
	{ edge_index_mat_s_11_V_V_dout sc_in sc_lv 14 signal 22 } 
	{ edge_index_mat_s_11_V_V_empty_n sc_in sc_logic 1 signal 22 } 
	{ edge_index_mat_s_11_V_V_read sc_out sc_logic 1 signal 22 } 
	{ edge_index_5_1_V_address0 sc_out sc_lv 7 signal 23 } 
	{ edge_index_5_1_V_ce0 sc_out sc_logic 1 signal 23 } 
	{ edge_index_5_1_V_we0 sc_out sc_logic 1 signal 23 } 
	{ edge_index_5_1_V_d0 sc_out sc_lv 14 signal 23 } 
	{ edge_index_mat_s_12_V_V_dout sc_in sc_lv 14 signal 24 } 
	{ edge_index_mat_s_12_V_V_empty_n sc_in sc_logic 1 signal 24 } 
	{ edge_index_mat_s_12_V_V_read sc_out sc_logic 1 signal 24 } 
	{ edge_index_6_0_V_address0 sc_out sc_lv 7 signal 25 } 
	{ edge_index_6_0_V_ce0 sc_out sc_logic 1 signal 25 } 
	{ edge_index_6_0_V_we0 sc_out sc_logic 1 signal 25 } 
	{ edge_index_6_0_V_d0 sc_out sc_lv 14 signal 25 } 
	{ edge_index_mat_s_13_V_V_dout sc_in sc_lv 14 signal 26 } 
	{ edge_index_mat_s_13_V_V_empty_n sc_in sc_logic 1 signal 26 } 
	{ edge_index_mat_s_13_V_V_read sc_out sc_logic 1 signal 26 } 
	{ edge_index_6_1_V_address0 sc_out sc_lv 7 signal 27 } 
	{ edge_index_6_1_V_ce0 sc_out sc_logic 1 signal 27 } 
	{ edge_index_6_1_V_we0 sc_out sc_logic 1 signal 27 } 
	{ edge_index_6_1_V_d0 sc_out sc_lv 14 signal 27 } 
	{ edge_index_mat_s_14_V_V_dout sc_in sc_lv 14 signal 28 } 
	{ edge_index_mat_s_14_V_V_empty_n sc_in sc_logic 1 signal 28 } 
	{ edge_index_mat_s_14_V_V_read sc_out sc_logic 1 signal 28 } 
	{ edge_index_7_0_V_address0 sc_out sc_lv 7 signal 29 } 
	{ edge_index_7_0_V_ce0 sc_out sc_logic 1 signal 29 } 
	{ edge_index_7_0_V_we0 sc_out sc_logic 1 signal 29 } 
	{ edge_index_7_0_V_d0 sc_out sc_lv 14 signal 29 } 
	{ edge_index_mat_s_15_V_V_dout sc_in sc_lv 14 signal 30 } 
	{ edge_index_mat_s_15_V_V_empty_n sc_in sc_logic 1 signal 30 } 
	{ edge_index_mat_s_15_V_V_read sc_out sc_logic 1 signal 30 } 
	{ edge_index_7_1_V_address0 sc_out sc_lv 7 signal 31 } 
	{ edge_index_7_1_V_ce0 sc_out sc_logic 1 signal 31 } 
	{ edge_index_7_1_V_we0 sc_out sc_logic 1 signal 31 } 
	{ edge_index_7_1_V_d0 sc_out sc_lv 14 signal 31 } 
	{ edge_index_mat_s_16_V_V_dout sc_in sc_lv 14 signal 32 } 
	{ edge_index_mat_s_16_V_V_empty_n sc_in sc_logic 1 signal 32 } 
	{ edge_index_mat_s_16_V_V_read sc_out sc_logic 1 signal 32 } 
	{ edge_index_8_0_V_address0 sc_out sc_lv 7 signal 33 } 
	{ edge_index_8_0_V_ce0 sc_out sc_logic 1 signal 33 } 
	{ edge_index_8_0_V_we0 sc_out sc_logic 1 signal 33 } 
	{ edge_index_8_0_V_d0 sc_out sc_lv 14 signal 33 } 
	{ edge_index_mat_s_17_V_V_dout sc_in sc_lv 14 signal 34 } 
	{ edge_index_mat_s_17_V_V_empty_n sc_in sc_logic 1 signal 34 } 
	{ edge_index_mat_s_17_V_V_read sc_out sc_logic 1 signal 34 } 
	{ edge_index_8_1_V_address0 sc_out sc_lv 7 signal 35 } 
	{ edge_index_8_1_V_ce0 sc_out sc_logic 1 signal 35 } 
	{ edge_index_8_1_V_we0 sc_out sc_logic 1 signal 35 } 
	{ edge_index_8_1_V_d0 sc_out sc_lv 14 signal 35 } 
	{ edge_index_mat_s_18_V_V_dout sc_in sc_lv 14 signal 36 } 
	{ edge_index_mat_s_18_V_V_empty_n sc_in sc_logic 1 signal 36 } 
	{ edge_index_mat_s_18_V_V_read sc_out sc_logic 1 signal 36 } 
	{ edge_index_9_0_V_address0 sc_out sc_lv 7 signal 37 } 
	{ edge_index_9_0_V_ce0 sc_out sc_logic 1 signal 37 } 
	{ edge_index_9_0_V_we0 sc_out sc_logic 1 signal 37 } 
	{ edge_index_9_0_V_d0 sc_out sc_lv 14 signal 37 } 
	{ edge_index_mat_s_19_V_V_dout sc_in sc_lv 14 signal 38 } 
	{ edge_index_mat_s_19_V_V_empty_n sc_in sc_logic 1 signal 38 } 
	{ edge_index_mat_s_19_V_V_read sc_out sc_logic 1 signal 38 } 
	{ edge_index_9_1_V_address0 sc_out sc_lv 7 signal 39 } 
	{ edge_index_9_1_V_ce0 sc_out sc_logic 1 signal 39 } 
	{ edge_index_9_1_V_we0 sc_out sc_logic 1 signal 39 } 
	{ edge_index_9_1_V_d0 sc_out sc_lv 14 signal 39 } 
	{ edge_index_mat_s_20_V_V_dout sc_in sc_lv 14 signal 40 } 
	{ edge_index_mat_s_20_V_V_empty_n sc_in sc_logic 1 signal 40 } 
	{ edge_index_mat_s_20_V_V_read sc_out sc_logic 1 signal 40 } 
	{ edge_index_10_0_V_address0 sc_out sc_lv 7 signal 41 } 
	{ edge_index_10_0_V_ce0 sc_out sc_logic 1 signal 41 } 
	{ edge_index_10_0_V_we0 sc_out sc_logic 1 signal 41 } 
	{ edge_index_10_0_V_d0 sc_out sc_lv 14 signal 41 } 
	{ edge_index_mat_s_21_V_V_dout sc_in sc_lv 14 signal 42 } 
	{ edge_index_mat_s_21_V_V_empty_n sc_in sc_logic 1 signal 42 } 
	{ edge_index_mat_s_21_V_V_read sc_out sc_logic 1 signal 42 } 
	{ edge_index_10_1_V_address0 sc_out sc_lv 7 signal 43 } 
	{ edge_index_10_1_V_ce0 sc_out sc_logic 1 signal 43 } 
	{ edge_index_10_1_V_we0 sc_out sc_logic 1 signal 43 } 
	{ edge_index_10_1_V_d0 sc_out sc_lv 14 signal 43 } 
	{ edge_index_mat_s_22_V_V_dout sc_in sc_lv 14 signal 44 } 
	{ edge_index_mat_s_22_V_V_empty_n sc_in sc_logic 1 signal 44 } 
	{ edge_index_mat_s_22_V_V_read sc_out sc_logic 1 signal 44 } 
	{ edge_index_11_0_V_address0 sc_out sc_lv 7 signal 45 } 
	{ edge_index_11_0_V_ce0 sc_out sc_logic 1 signal 45 } 
	{ edge_index_11_0_V_we0 sc_out sc_logic 1 signal 45 } 
	{ edge_index_11_0_V_d0 sc_out sc_lv 14 signal 45 } 
	{ edge_index_mat_s_23_V_V_dout sc_in sc_lv 14 signal 46 } 
	{ edge_index_mat_s_23_V_V_empty_n sc_in sc_logic 1 signal 46 } 
	{ edge_index_mat_s_23_V_V_read sc_out sc_logic 1 signal 46 } 
	{ edge_index_11_1_V_address0 sc_out sc_lv 7 signal 47 } 
	{ edge_index_11_1_V_ce0 sc_out sc_logic 1 signal 47 } 
	{ edge_index_11_1_V_we0 sc_out sc_logic 1 signal 47 } 
	{ edge_index_11_1_V_d0 sc_out sc_lv 14 signal 47 } 
	{ edge_index_mat_s_24_V_V_dout sc_in sc_lv 14 signal 48 } 
	{ edge_index_mat_s_24_V_V_empty_n sc_in sc_logic 1 signal 48 } 
	{ edge_index_mat_s_24_V_V_read sc_out sc_logic 1 signal 48 } 
	{ edge_index_12_0_V_address0 sc_out sc_lv 7 signal 49 } 
	{ edge_index_12_0_V_ce0 sc_out sc_logic 1 signal 49 } 
	{ edge_index_12_0_V_we0 sc_out sc_logic 1 signal 49 } 
	{ edge_index_12_0_V_d0 sc_out sc_lv 14 signal 49 } 
	{ edge_index_mat_s_25_V_V_dout sc_in sc_lv 14 signal 50 } 
	{ edge_index_mat_s_25_V_V_empty_n sc_in sc_logic 1 signal 50 } 
	{ edge_index_mat_s_25_V_V_read sc_out sc_logic 1 signal 50 } 
	{ edge_index_12_1_V_address0 sc_out sc_lv 7 signal 51 } 
	{ edge_index_12_1_V_ce0 sc_out sc_logic 1 signal 51 } 
	{ edge_index_12_1_V_we0 sc_out sc_logic 1 signal 51 } 
	{ edge_index_12_1_V_d0 sc_out sc_lv 14 signal 51 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "edge_index_mat_s_0_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_0_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_0_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_0_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_0_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_0_V_V", "role": "read" }} , 
 	{ "name": "edge_index_0_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_0_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_0_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_0_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_0_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_0_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_0_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_0_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_1_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_1_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_1_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_1_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_1_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_1_V_V", "role": "read" }} , 
 	{ "name": "edge_index_0_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_0_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_0_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_0_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_0_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_0_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_0_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_0_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_2_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_2_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_2_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_2_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_2_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_2_V_V", "role": "read" }} , 
 	{ "name": "edge_index_1_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_1_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_1_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_1_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_1_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_1_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_1_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_1_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_3_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_3_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_3_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_3_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_3_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_3_V_V", "role": "read" }} , 
 	{ "name": "edge_index_1_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_1_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_1_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_1_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_1_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_1_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_1_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_1_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_4_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_4_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_4_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_4_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_4_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_4_V_V", "role": "read" }} , 
 	{ "name": "edge_index_2_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_2_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_2_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_2_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_2_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_2_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_2_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_2_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_5_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_5_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_5_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_5_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_5_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_5_V_V", "role": "read" }} , 
 	{ "name": "edge_index_2_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_2_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_2_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_2_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_2_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_2_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_2_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_2_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_6_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_6_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_6_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_6_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_6_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_6_V_V", "role": "read" }} , 
 	{ "name": "edge_index_3_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_3_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_3_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_3_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_3_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_3_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_3_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_3_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_7_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_7_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_7_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_7_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_7_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_7_V_V", "role": "read" }} , 
 	{ "name": "edge_index_3_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_3_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_3_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_3_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_3_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_3_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_3_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_3_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_8_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_8_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_8_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_8_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_8_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_8_V_V", "role": "read" }} , 
 	{ "name": "edge_index_4_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_4_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_4_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_4_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_4_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_4_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_4_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_4_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_9_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_9_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_9_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_9_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_9_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_9_V_V", "role": "read" }} , 
 	{ "name": "edge_index_4_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_4_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_4_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_4_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_4_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_4_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_4_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_4_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_10_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_10_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_10_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_10_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_10_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_10_V_V", "role": "read" }} , 
 	{ "name": "edge_index_5_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_5_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_5_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_5_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_5_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_5_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_5_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_5_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_11_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_11_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_11_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_11_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_11_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_11_V_V", "role": "read" }} , 
 	{ "name": "edge_index_5_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_5_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_5_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_5_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_5_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_5_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_5_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_5_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_12_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_12_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_12_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_12_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_12_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_12_V_V", "role": "read" }} , 
 	{ "name": "edge_index_6_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_6_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_6_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_6_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_6_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_6_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_6_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_6_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_13_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_13_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_13_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_13_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_13_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_13_V_V", "role": "read" }} , 
 	{ "name": "edge_index_6_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_6_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_6_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_6_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_6_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_6_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_6_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_6_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_14_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_14_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_14_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_14_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_14_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_14_V_V", "role": "read" }} , 
 	{ "name": "edge_index_7_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_7_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_7_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_7_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_7_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_7_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_7_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_7_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_15_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_15_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_15_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_15_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_15_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_15_V_V", "role": "read" }} , 
 	{ "name": "edge_index_7_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_7_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_7_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_7_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_7_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_7_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_7_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_7_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_16_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_16_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_16_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_16_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_16_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_16_V_V", "role": "read" }} , 
 	{ "name": "edge_index_8_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_8_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_8_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_8_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_8_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_8_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_8_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_8_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_17_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_17_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_17_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_17_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_17_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_17_V_V", "role": "read" }} , 
 	{ "name": "edge_index_8_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_8_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_8_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_8_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_8_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_8_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_8_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_8_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_18_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_18_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_18_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_18_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_18_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_18_V_V", "role": "read" }} , 
 	{ "name": "edge_index_9_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_9_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_9_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_9_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_9_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_9_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_9_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_9_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_19_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_19_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_19_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_19_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_19_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_19_V_V", "role": "read" }} , 
 	{ "name": "edge_index_9_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_9_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_9_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_9_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_9_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_9_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_9_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_9_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_20_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_20_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_20_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_20_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_20_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_20_V_V", "role": "read" }} , 
 	{ "name": "edge_index_10_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_10_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_10_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_10_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_10_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_10_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_10_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_10_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_21_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_21_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_21_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_21_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_21_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_21_V_V", "role": "read" }} , 
 	{ "name": "edge_index_10_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_10_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_10_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_10_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_10_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_10_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_10_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_10_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_22_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_22_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_22_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_22_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_22_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_22_V_V", "role": "read" }} , 
 	{ "name": "edge_index_11_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_11_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_11_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_11_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_11_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_11_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_11_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_11_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_23_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_23_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_23_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_23_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_23_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_23_V_V", "role": "read" }} , 
 	{ "name": "edge_index_11_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_11_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_11_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_11_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_11_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_11_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_11_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_11_1_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_24_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_24_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_24_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_24_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_24_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_24_V_V", "role": "read" }} , 
 	{ "name": "edge_index_12_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_12_0_V", "role": "address0" }} , 
 	{ "name": "edge_index_12_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_12_0_V", "role": "ce0" }} , 
 	{ "name": "edge_index_12_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_12_0_V", "role": "we0" }} , 
 	{ "name": "edge_index_12_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_12_0_V", "role": "d0" }} , 
 	{ "name": "edge_index_mat_s_25_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_mat_s_25_V_V", "role": "dout" }} , 
 	{ "name": "edge_index_mat_s_25_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_25_V_V", "role": "empty_n" }} , 
 	{ "name": "edge_index_mat_s_25_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_mat_s_25_V_V", "role": "read" }} , 
 	{ "name": "edge_index_12_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "edge_index_12_1_V", "role": "address0" }} , 
 	{ "name": "edge_index_12_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_12_1_V", "role": "ce0" }} , 
 	{ "name": "edge_index_12_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "edge_index_12_1_V", "role": "we0" }} , 
 	{ "name": "edge_index_12_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "edge_index_12_1_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "Loop_3_proc227",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "122", "EstimateLatencyMax" : "122",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "edge_index_mat_s_0_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_0_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_0_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_1_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_0_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_2_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_1_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_3_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_3_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_1_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_4_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_4_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_2_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_5_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_5_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_2_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_6_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_6_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_3_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_7_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_7_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_3_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_8_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_8_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_4_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_9_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_9_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_4_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_10_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_10_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_5_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_11_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_11_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_5_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_12_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_12_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_6_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_13_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_13_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_6_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_14_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_14_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_7_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_15_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_15_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_7_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_16_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_16_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_8_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_17_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_17_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_8_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_18_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_18_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_9_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_19_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_19_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_9_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_20_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_20_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_10_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_21_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_21_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_10_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_22_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_22_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_11_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_23_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_23_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_11_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_24_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_24_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_12_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "edge_index_mat_s_25_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "edge_index_mat_s_25_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "edge_index_12_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"}]}]}


set ArgLastReadFirstWriteLatency {
	Loop_3_proc227 {
		edge_index_mat_s_0_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_0_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_1_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_0_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_2_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_1_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_3_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_1_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_4_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_2_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_5_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_2_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_6_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_3_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_7_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_3_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_8_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_4_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_9_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_4_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_10_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_5_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_11_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_5_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_12_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_6_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_13_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_6_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_14_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_7_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_15_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_7_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_16_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_8_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_17_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_8_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_18_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_9_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_19_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_9_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_20_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_10_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_21_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_10_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_22_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_11_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_23_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_11_1_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_24_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_12_0_V {Type O LastRead -1 FirstWrite 2}
		edge_index_mat_s_25_V_V {Type I LastRead 2 FirstWrite -1}
		edge_index_12_1_V {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "122", "Max" : "122"}
	, {"Name" : "Interval", "Min" : "122", "Max" : "122"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	edge_index_mat_s_0_V_V { ap_fifo {  { edge_index_mat_s_0_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_0_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_0_V_V_read fifo_update 1 1 } } }
	edge_index_0_0_V { ap_memory {  { edge_index_0_0_V_address0 mem_address 1 7 }  { edge_index_0_0_V_ce0 mem_ce 1 1 }  { edge_index_0_0_V_we0 mem_we 1 1 }  { edge_index_0_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_1_V_V { ap_fifo {  { edge_index_mat_s_1_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_1_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_1_V_V_read fifo_update 1 1 } } }
	edge_index_0_1_V { ap_memory {  { edge_index_0_1_V_address0 mem_address 1 7 }  { edge_index_0_1_V_ce0 mem_ce 1 1 }  { edge_index_0_1_V_we0 mem_we 1 1 }  { edge_index_0_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_2_V_V { ap_fifo {  { edge_index_mat_s_2_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_2_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_2_V_V_read fifo_update 1 1 } } }
	edge_index_1_0_V { ap_memory {  { edge_index_1_0_V_address0 mem_address 1 7 }  { edge_index_1_0_V_ce0 mem_ce 1 1 }  { edge_index_1_0_V_we0 mem_we 1 1 }  { edge_index_1_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_3_V_V { ap_fifo {  { edge_index_mat_s_3_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_3_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_3_V_V_read fifo_update 1 1 } } }
	edge_index_1_1_V { ap_memory {  { edge_index_1_1_V_address0 mem_address 1 7 }  { edge_index_1_1_V_ce0 mem_ce 1 1 }  { edge_index_1_1_V_we0 mem_we 1 1 }  { edge_index_1_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_4_V_V { ap_fifo {  { edge_index_mat_s_4_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_4_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_4_V_V_read fifo_update 1 1 } } }
	edge_index_2_0_V { ap_memory {  { edge_index_2_0_V_address0 mem_address 1 7 }  { edge_index_2_0_V_ce0 mem_ce 1 1 }  { edge_index_2_0_V_we0 mem_we 1 1 }  { edge_index_2_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_5_V_V { ap_fifo {  { edge_index_mat_s_5_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_5_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_5_V_V_read fifo_update 1 1 } } }
	edge_index_2_1_V { ap_memory {  { edge_index_2_1_V_address0 mem_address 1 7 }  { edge_index_2_1_V_ce0 mem_ce 1 1 }  { edge_index_2_1_V_we0 mem_we 1 1 }  { edge_index_2_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_6_V_V { ap_fifo {  { edge_index_mat_s_6_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_6_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_6_V_V_read fifo_update 1 1 } } }
	edge_index_3_0_V { ap_memory {  { edge_index_3_0_V_address0 mem_address 1 7 }  { edge_index_3_0_V_ce0 mem_ce 1 1 }  { edge_index_3_0_V_we0 mem_we 1 1 }  { edge_index_3_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_7_V_V { ap_fifo {  { edge_index_mat_s_7_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_7_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_7_V_V_read fifo_update 1 1 } } }
	edge_index_3_1_V { ap_memory {  { edge_index_3_1_V_address0 mem_address 1 7 }  { edge_index_3_1_V_ce0 mem_ce 1 1 }  { edge_index_3_1_V_we0 mem_we 1 1 }  { edge_index_3_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_8_V_V { ap_fifo {  { edge_index_mat_s_8_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_8_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_8_V_V_read fifo_update 1 1 } } }
	edge_index_4_0_V { ap_memory {  { edge_index_4_0_V_address0 mem_address 1 7 }  { edge_index_4_0_V_ce0 mem_ce 1 1 }  { edge_index_4_0_V_we0 mem_we 1 1 }  { edge_index_4_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_9_V_V { ap_fifo {  { edge_index_mat_s_9_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_9_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_9_V_V_read fifo_update 1 1 } } }
	edge_index_4_1_V { ap_memory {  { edge_index_4_1_V_address0 mem_address 1 7 }  { edge_index_4_1_V_ce0 mem_ce 1 1 }  { edge_index_4_1_V_we0 mem_we 1 1 }  { edge_index_4_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_10_V_V { ap_fifo {  { edge_index_mat_s_10_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_10_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_10_V_V_read fifo_update 1 1 } } }
	edge_index_5_0_V { ap_memory {  { edge_index_5_0_V_address0 mem_address 1 7 }  { edge_index_5_0_V_ce0 mem_ce 1 1 }  { edge_index_5_0_V_we0 mem_we 1 1 }  { edge_index_5_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_11_V_V { ap_fifo {  { edge_index_mat_s_11_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_11_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_11_V_V_read fifo_update 1 1 } } }
	edge_index_5_1_V { ap_memory {  { edge_index_5_1_V_address0 mem_address 1 7 }  { edge_index_5_1_V_ce0 mem_ce 1 1 }  { edge_index_5_1_V_we0 mem_we 1 1 }  { edge_index_5_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_12_V_V { ap_fifo {  { edge_index_mat_s_12_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_12_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_12_V_V_read fifo_update 1 1 } } }
	edge_index_6_0_V { ap_memory {  { edge_index_6_0_V_address0 mem_address 1 7 }  { edge_index_6_0_V_ce0 mem_ce 1 1 }  { edge_index_6_0_V_we0 mem_we 1 1 }  { edge_index_6_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_13_V_V { ap_fifo {  { edge_index_mat_s_13_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_13_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_13_V_V_read fifo_update 1 1 } } }
	edge_index_6_1_V { ap_memory {  { edge_index_6_1_V_address0 mem_address 1 7 }  { edge_index_6_1_V_ce0 mem_ce 1 1 }  { edge_index_6_1_V_we0 mem_we 1 1 }  { edge_index_6_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_14_V_V { ap_fifo {  { edge_index_mat_s_14_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_14_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_14_V_V_read fifo_update 1 1 } } }
	edge_index_7_0_V { ap_memory {  { edge_index_7_0_V_address0 mem_address 1 7 }  { edge_index_7_0_V_ce0 mem_ce 1 1 }  { edge_index_7_0_V_we0 mem_we 1 1 }  { edge_index_7_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_15_V_V { ap_fifo {  { edge_index_mat_s_15_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_15_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_15_V_V_read fifo_update 1 1 } } }
	edge_index_7_1_V { ap_memory {  { edge_index_7_1_V_address0 mem_address 1 7 }  { edge_index_7_1_V_ce0 mem_ce 1 1 }  { edge_index_7_1_V_we0 mem_we 1 1 }  { edge_index_7_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_16_V_V { ap_fifo {  { edge_index_mat_s_16_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_16_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_16_V_V_read fifo_update 1 1 } } }
	edge_index_8_0_V { ap_memory {  { edge_index_8_0_V_address0 mem_address 1 7 }  { edge_index_8_0_V_ce0 mem_ce 1 1 }  { edge_index_8_0_V_we0 mem_we 1 1 }  { edge_index_8_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_17_V_V { ap_fifo {  { edge_index_mat_s_17_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_17_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_17_V_V_read fifo_update 1 1 } } }
	edge_index_8_1_V { ap_memory {  { edge_index_8_1_V_address0 mem_address 1 7 }  { edge_index_8_1_V_ce0 mem_ce 1 1 }  { edge_index_8_1_V_we0 mem_we 1 1 }  { edge_index_8_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_18_V_V { ap_fifo {  { edge_index_mat_s_18_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_18_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_18_V_V_read fifo_update 1 1 } } }
	edge_index_9_0_V { ap_memory {  { edge_index_9_0_V_address0 mem_address 1 7 }  { edge_index_9_0_V_ce0 mem_ce 1 1 }  { edge_index_9_0_V_we0 mem_we 1 1 }  { edge_index_9_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_19_V_V { ap_fifo {  { edge_index_mat_s_19_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_19_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_19_V_V_read fifo_update 1 1 } } }
	edge_index_9_1_V { ap_memory {  { edge_index_9_1_V_address0 mem_address 1 7 }  { edge_index_9_1_V_ce0 mem_ce 1 1 }  { edge_index_9_1_V_we0 mem_we 1 1 }  { edge_index_9_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_20_V_V { ap_fifo {  { edge_index_mat_s_20_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_20_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_20_V_V_read fifo_update 1 1 } } }
	edge_index_10_0_V { ap_memory {  { edge_index_10_0_V_address0 mem_address 1 7 }  { edge_index_10_0_V_ce0 mem_ce 1 1 }  { edge_index_10_0_V_we0 mem_we 1 1 }  { edge_index_10_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_21_V_V { ap_fifo {  { edge_index_mat_s_21_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_21_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_21_V_V_read fifo_update 1 1 } } }
	edge_index_10_1_V { ap_memory {  { edge_index_10_1_V_address0 mem_address 1 7 }  { edge_index_10_1_V_ce0 mem_ce 1 1 }  { edge_index_10_1_V_we0 mem_we 1 1 }  { edge_index_10_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_22_V_V { ap_fifo {  { edge_index_mat_s_22_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_22_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_22_V_V_read fifo_update 1 1 } } }
	edge_index_11_0_V { ap_memory {  { edge_index_11_0_V_address0 mem_address 1 7 }  { edge_index_11_0_V_ce0 mem_ce 1 1 }  { edge_index_11_0_V_we0 mem_we 1 1 }  { edge_index_11_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_23_V_V { ap_fifo {  { edge_index_mat_s_23_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_23_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_23_V_V_read fifo_update 1 1 } } }
	edge_index_11_1_V { ap_memory {  { edge_index_11_1_V_address0 mem_address 1 7 }  { edge_index_11_1_V_ce0 mem_ce 1 1 }  { edge_index_11_1_V_we0 mem_we 1 1 }  { edge_index_11_1_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_24_V_V { ap_fifo {  { edge_index_mat_s_24_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_24_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_24_V_V_read fifo_update 1 1 } } }
	edge_index_12_0_V { ap_memory {  { edge_index_12_0_V_address0 mem_address 1 7 }  { edge_index_12_0_V_ce0 mem_ce 1 1 }  { edge_index_12_0_V_we0 mem_we 1 1 }  { edge_index_12_0_V_d0 mem_din 1 14 } } }
	edge_index_mat_s_25_V_V { ap_fifo {  { edge_index_mat_s_25_V_V_dout fifo_data 0 14 }  { edge_index_mat_s_25_V_V_empty_n fifo_status 0 1 }  { edge_index_mat_s_25_V_V_read fifo_update 1 1 } } }
	edge_index_12_1_V { ap_memory {  { edge_index_12_1_V_address0 mem_address 1 7 }  { edge_index_12_1_V_ce0 mem_ce 1 1 }  { edge_index_12_1_V_we0 mem_we 1 1 }  { edge_index_12_1_V_d0 mem_din 1 14 } } }
}
