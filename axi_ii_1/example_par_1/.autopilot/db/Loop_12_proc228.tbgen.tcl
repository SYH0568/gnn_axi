set moduleName Loop_12_proc228
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
set C_modelName {Loop_12_proc228}
set C_modelType { void 0 }
set C_modelArgList {
	{ layer11_out_0 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_0_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_0_V_V Data } }  }
	{ layer11_out_1 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_1_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_1_V_V Data } }  }
	{ layer11_out_2 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_2_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_2_V_V Data } }  }
	{ layer11_out_3 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_3_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_3_V_V Data } }  }
	{ layer11_out_4 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_4_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_4_V_V Data } }  }
	{ layer11_out_5 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_5_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_5_V_V Data } }  }
	{ layer11_out_6 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_6_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_6_V_V Data } }  }
	{ layer11_out_7 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_7_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_7_V_V Data } }  }
	{ layer11_out_8 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_8_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_8_V_V Data } }  }
	{ layer11_out_9 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_9_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_9_V_V Data } }  }
	{ layer11_out_10 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_10_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_10_V_V Data } }  }
	{ layer11_out_11 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_11_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_11_V_V Data } }  }
	{ layer11_out_12 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_12_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_12_V_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "layer11_out_0", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_0_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_1", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_1_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_2", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_2_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_3", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_3_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_4", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_4_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_5", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_5_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_6", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_6_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_7", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_7_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_8", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_8_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_9", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_9_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_10", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_10_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_11", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_11_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_12", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_12_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 85
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ layer11_out_0_address0 sc_out sc_lv 7 signal 0 } 
	{ layer11_out_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ layer11_out_0_q0 sc_in sc_lv 7 signal 0 } 
	{ layer11_out_s_0_V_V_TDATA sc_out sc_lv 16 signal 1 } 
	{ layer11_out_s_0_V_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ layer11_out_s_0_V_V_TREADY sc_in sc_logic 1 outacc 1 } 
	{ layer11_out_1_address0 sc_out sc_lv 7 signal 2 } 
	{ layer11_out_1_ce0 sc_out sc_logic 1 signal 2 } 
	{ layer11_out_1_q0 sc_in sc_lv 7 signal 2 } 
	{ layer11_out_s_1_V_V_TDATA sc_out sc_lv 16 signal 3 } 
	{ layer11_out_s_1_V_V_TVALID sc_out sc_logic 1 outvld 3 } 
	{ layer11_out_s_1_V_V_TREADY sc_in sc_logic 1 outacc 3 } 
	{ layer11_out_2_address0 sc_out sc_lv 7 signal 4 } 
	{ layer11_out_2_ce0 sc_out sc_logic 1 signal 4 } 
	{ layer11_out_2_q0 sc_in sc_lv 7 signal 4 } 
	{ layer11_out_s_2_V_V_TDATA sc_out sc_lv 16 signal 5 } 
	{ layer11_out_s_2_V_V_TVALID sc_out sc_logic 1 outvld 5 } 
	{ layer11_out_s_2_V_V_TREADY sc_in sc_logic 1 outacc 5 } 
	{ layer11_out_3_address0 sc_out sc_lv 7 signal 6 } 
	{ layer11_out_3_ce0 sc_out sc_logic 1 signal 6 } 
	{ layer11_out_3_q0 sc_in sc_lv 7 signal 6 } 
	{ layer11_out_s_3_V_V_TDATA sc_out sc_lv 16 signal 7 } 
	{ layer11_out_s_3_V_V_TVALID sc_out sc_logic 1 outvld 7 } 
	{ layer11_out_s_3_V_V_TREADY sc_in sc_logic 1 outacc 7 } 
	{ layer11_out_4_address0 sc_out sc_lv 7 signal 8 } 
	{ layer11_out_4_ce0 sc_out sc_logic 1 signal 8 } 
	{ layer11_out_4_q0 sc_in sc_lv 7 signal 8 } 
	{ layer11_out_s_4_V_V_TDATA sc_out sc_lv 16 signal 9 } 
	{ layer11_out_s_4_V_V_TVALID sc_out sc_logic 1 outvld 9 } 
	{ layer11_out_s_4_V_V_TREADY sc_in sc_logic 1 outacc 9 } 
	{ layer11_out_5_address0 sc_out sc_lv 7 signal 10 } 
	{ layer11_out_5_ce0 sc_out sc_logic 1 signal 10 } 
	{ layer11_out_5_q0 sc_in sc_lv 7 signal 10 } 
	{ layer11_out_s_5_V_V_TDATA sc_out sc_lv 16 signal 11 } 
	{ layer11_out_s_5_V_V_TVALID sc_out sc_logic 1 outvld 11 } 
	{ layer11_out_s_5_V_V_TREADY sc_in sc_logic 1 outacc 11 } 
	{ layer11_out_6_address0 sc_out sc_lv 7 signal 12 } 
	{ layer11_out_6_ce0 sc_out sc_logic 1 signal 12 } 
	{ layer11_out_6_q0 sc_in sc_lv 7 signal 12 } 
	{ layer11_out_s_6_V_V_TDATA sc_out sc_lv 16 signal 13 } 
	{ layer11_out_s_6_V_V_TVALID sc_out sc_logic 1 outvld 13 } 
	{ layer11_out_s_6_V_V_TREADY sc_in sc_logic 1 outacc 13 } 
	{ layer11_out_7_address0 sc_out sc_lv 7 signal 14 } 
	{ layer11_out_7_ce0 sc_out sc_logic 1 signal 14 } 
	{ layer11_out_7_q0 sc_in sc_lv 7 signal 14 } 
	{ layer11_out_s_7_V_V_TDATA sc_out sc_lv 16 signal 15 } 
	{ layer11_out_s_7_V_V_TVALID sc_out sc_logic 1 outvld 15 } 
	{ layer11_out_s_7_V_V_TREADY sc_in sc_logic 1 outacc 15 } 
	{ layer11_out_8_address0 sc_out sc_lv 7 signal 16 } 
	{ layer11_out_8_ce0 sc_out sc_logic 1 signal 16 } 
	{ layer11_out_8_q0 sc_in sc_lv 7 signal 16 } 
	{ layer11_out_s_8_V_V_TDATA sc_out sc_lv 16 signal 17 } 
	{ layer11_out_s_8_V_V_TVALID sc_out sc_logic 1 outvld 17 } 
	{ layer11_out_s_8_V_V_TREADY sc_in sc_logic 1 outacc 17 } 
	{ layer11_out_9_address0 sc_out sc_lv 7 signal 18 } 
	{ layer11_out_9_ce0 sc_out sc_logic 1 signal 18 } 
	{ layer11_out_9_q0 sc_in sc_lv 7 signal 18 } 
	{ layer11_out_s_9_V_V_TDATA sc_out sc_lv 16 signal 19 } 
	{ layer11_out_s_9_V_V_TVALID sc_out sc_logic 1 outvld 19 } 
	{ layer11_out_s_9_V_V_TREADY sc_in sc_logic 1 outacc 19 } 
	{ layer11_out_10_address0 sc_out sc_lv 7 signal 20 } 
	{ layer11_out_10_ce0 sc_out sc_logic 1 signal 20 } 
	{ layer11_out_10_q0 sc_in sc_lv 7 signal 20 } 
	{ layer11_out_s_10_V_V_TDATA sc_out sc_lv 16 signal 21 } 
	{ layer11_out_s_10_V_V_TVALID sc_out sc_logic 1 outvld 21 } 
	{ layer11_out_s_10_V_V_TREADY sc_in sc_logic 1 outacc 21 } 
	{ layer11_out_11_address0 sc_out sc_lv 7 signal 22 } 
	{ layer11_out_11_ce0 sc_out sc_logic 1 signal 22 } 
	{ layer11_out_11_q0 sc_in sc_lv 7 signal 22 } 
	{ layer11_out_s_11_V_V_TDATA sc_out sc_lv 16 signal 23 } 
	{ layer11_out_s_11_V_V_TVALID sc_out sc_logic 1 outvld 23 } 
	{ layer11_out_s_11_V_V_TREADY sc_in sc_logic 1 outacc 23 } 
	{ layer11_out_12_address0 sc_out sc_lv 7 signal 24 } 
	{ layer11_out_12_ce0 sc_out sc_logic 1 signal 24 } 
	{ layer11_out_12_q0 sc_in sc_lv 7 signal 24 } 
	{ layer11_out_s_12_V_V_TDATA sc_out sc_lv 16 signal 25 } 
	{ layer11_out_s_12_V_V_TVALID sc_out sc_logic 1 outvld 25 } 
	{ layer11_out_s_12_V_V_TREADY sc_in sc_logic 1 outacc 25 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "layer11_out_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_0", "role": "address0" }} , 
 	{ "name": "layer11_out_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_0", "role": "ce0" }} , 
 	{ "name": "layer11_out_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_0", "role": "q0" }} , 
 	{ "name": "layer11_out_s_0_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_0_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_0_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_0_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_0_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_0_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_1", "role": "address0" }} , 
 	{ "name": "layer11_out_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_1", "role": "ce0" }} , 
 	{ "name": "layer11_out_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_1", "role": "q0" }} , 
 	{ "name": "layer11_out_s_1_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_1_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_1_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_1_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_1_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_1_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_2", "role": "address0" }} , 
 	{ "name": "layer11_out_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_2", "role": "ce0" }} , 
 	{ "name": "layer11_out_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_2", "role": "q0" }} , 
 	{ "name": "layer11_out_s_2_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_2_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_2_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_2_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_2_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_2_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_3", "role": "address0" }} , 
 	{ "name": "layer11_out_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_3", "role": "ce0" }} , 
 	{ "name": "layer11_out_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_3", "role": "q0" }} , 
 	{ "name": "layer11_out_s_3_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_3_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_3_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_3_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_3_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_3_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_4", "role": "address0" }} , 
 	{ "name": "layer11_out_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_4", "role": "ce0" }} , 
 	{ "name": "layer11_out_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_4", "role": "q0" }} , 
 	{ "name": "layer11_out_s_4_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_4_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_4_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_4_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_4_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_4_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_5", "role": "address0" }} , 
 	{ "name": "layer11_out_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_5", "role": "ce0" }} , 
 	{ "name": "layer11_out_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_5", "role": "q0" }} , 
 	{ "name": "layer11_out_s_5_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_5_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_5_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_5_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_5_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_5_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_6", "role": "address0" }} , 
 	{ "name": "layer11_out_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_6", "role": "ce0" }} , 
 	{ "name": "layer11_out_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_6", "role": "q0" }} , 
 	{ "name": "layer11_out_s_6_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_6_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_6_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_6_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_6_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_6_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_7", "role": "address0" }} , 
 	{ "name": "layer11_out_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_7", "role": "ce0" }} , 
 	{ "name": "layer11_out_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_7", "role": "q0" }} , 
 	{ "name": "layer11_out_s_7_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_7_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_7_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_7_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_7_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_7_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_8", "role": "address0" }} , 
 	{ "name": "layer11_out_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_8", "role": "ce0" }} , 
 	{ "name": "layer11_out_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_8", "role": "q0" }} , 
 	{ "name": "layer11_out_s_8_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_8_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_8_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_8_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_8_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_8_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_9", "role": "address0" }} , 
 	{ "name": "layer11_out_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_9", "role": "ce0" }} , 
 	{ "name": "layer11_out_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_9", "role": "q0" }} , 
 	{ "name": "layer11_out_s_9_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_9_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_9_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_9_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_9_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_9_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_10", "role": "address0" }} , 
 	{ "name": "layer11_out_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_10", "role": "ce0" }} , 
 	{ "name": "layer11_out_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_10", "role": "q0" }} , 
 	{ "name": "layer11_out_s_10_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_10_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_10_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_10_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_10_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_10_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_11", "role": "address0" }} , 
 	{ "name": "layer11_out_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_11", "role": "ce0" }} , 
 	{ "name": "layer11_out_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_11", "role": "q0" }} , 
 	{ "name": "layer11_out_s_11_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_11_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_11_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_11_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_11_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_11_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_12", "role": "address0" }} , 
 	{ "name": "layer11_out_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_12", "role": "ce0" }} , 
 	{ "name": "layer11_out_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_12", "role": "q0" }} , 
 	{ "name": "layer11_out_s_12_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_12_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_12_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_12_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_12_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_12_V_V", "role": "TREADY" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13"],
		"CDFG" : "Loop_12_proc228",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "123", "EstimateLatencyMax" : "123",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "layer11_out_0", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_0_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_0_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_1", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_1_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_1_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_2", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_2_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_2_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_3", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_3_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_3_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_4", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_4_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_4_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_5", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_5_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_5_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_6", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_6_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_6_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_7", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_7_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_7_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_8", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_8_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_8_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_9", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_9_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_9_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_10", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_10_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_10_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_11", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_11_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_11_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_12", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_12_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_12_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_0_V_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_1_V_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_2_V_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_3_V_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_4_V_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_5_V_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_6_V_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_7_V_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_8_V_V_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_9_V_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_10_V_V_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_11_V_V_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_12_V_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	Loop_12_proc228 {
		layer11_out_0 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_0_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_1 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_1_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_2 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_2_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_3 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_3_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_4 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_4_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_5 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_5_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_6 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_6_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_7 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_7_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_8 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_8_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_9 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_9_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_10 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_10_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_11 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_11_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_12 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_12_V_V {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "123", "Max" : "123"}
	, {"Name" : "Interval", "Min" : "123", "Max" : "123"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	layer11_out_0 { ap_memory {  { layer11_out_0_address0 mem_address 1 7 }  { layer11_out_0_ce0 mem_ce 1 1 }  { layer11_out_0_q0 mem_dout 0 7 } } }
	layer11_out_s_0_V_V { axis {  { layer11_out_s_0_V_V_TDATA out_data 1 16 }  { layer11_out_s_0_V_V_TVALID out_vld 1 1 }  { layer11_out_s_0_V_V_TREADY out_acc 0 1 } } }
	layer11_out_1 { ap_memory {  { layer11_out_1_address0 mem_address 1 7 }  { layer11_out_1_ce0 mem_ce 1 1 }  { layer11_out_1_q0 mem_dout 0 7 } } }
	layer11_out_s_1_V_V { axis {  { layer11_out_s_1_V_V_TDATA out_data 1 16 }  { layer11_out_s_1_V_V_TVALID out_vld 1 1 }  { layer11_out_s_1_V_V_TREADY out_acc 0 1 } } }
	layer11_out_2 { ap_memory {  { layer11_out_2_address0 mem_address 1 7 }  { layer11_out_2_ce0 mem_ce 1 1 }  { layer11_out_2_q0 mem_dout 0 7 } } }
	layer11_out_s_2_V_V { axis {  { layer11_out_s_2_V_V_TDATA out_data 1 16 }  { layer11_out_s_2_V_V_TVALID out_vld 1 1 }  { layer11_out_s_2_V_V_TREADY out_acc 0 1 } } }
	layer11_out_3 { ap_memory {  { layer11_out_3_address0 mem_address 1 7 }  { layer11_out_3_ce0 mem_ce 1 1 }  { layer11_out_3_q0 mem_dout 0 7 } } }
	layer11_out_s_3_V_V { axis {  { layer11_out_s_3_V_V_TDATA out_data 1 16 }  { layer11_out_s_3_V_V_TVALID out_vld 1 1 }  { layer11_out_s_3_V_V_TREADY out_acc 0 1 } } }
	layer11_out_4 { ap_memory {  { layer11_out_4_address0 mem_address 1 7 }  { layer11_out_4_ce0 mem_ce 1 1 }  { layer11_out_4_q0 mem_dout 0 7 } } }
	layer11_out_s_4_V_V { axis {  { layer11_out_s_4_V_V_TDATA out_data 1 16 }  { layer11_out_s_4_V_V_TVALID out_vld 1 1 }  { layer11_out_s_4_V_V_TREADY out_acc 0 1 } } }
	layer11_out_5 { ap_memory {  { layer11_out_5_address0 mem_address 1 7 }  { layer11_out_5_ce0 mem_ce 1 1 }  { layer11_out_5_q0 mem_dout 0 7 } } }
	layer11_out_s_5_V_V { axis {  { layer11_out_s_5_V_V_TDATA out_data 1 16 }  { layer11_out_s_5_V_V_TVALID out_vld 1 1 }  { layer11_out_s_5_V_V_TREADY out_acc 0 1 } } }
	layer11_out_6 { ap_memory {  { layer11_out_6_address0 mem_address 1 7 }  { layer11_out_6_ce0 mem_ce 1 1 }  { layer11_out_6_q0 mem_dout 0 7 } } }
	layer11_out_s_6_V_V { axis {  { layer11_out_s_6_V_V_TDATA out_data 1 16 }  { layer11_out_s_6_V_V_TVALID out_vld 1 1 }  { layer11_out_s_6_V_V_TREADY out_acc 0 1 } } }
	layer11_out_7 { ap_memory {  { layer11_out_7_address0 mem_address 1 7 }  { layer11_out_7_ce0 mem_ce 1 1 }  { layer11_out_7_q0 mem_dout 0 7 } } }
	layer11_out_s_7_V_V { axis {  { layer11_out_s_7_V_V_TDATA out_data 1 16 }  { layer11_out_s_7_V_V_TVALID out_vld 1 1 }  { layer11_out_s_7_V_V_TREADY out_acc 0 1 } } }
	layer11_out_8 { ap_memory {  { layer11_out_8_address0 mem_address 1 7 }  { layer11_out_8_ce0 mem_ce 1 1 }  { layer11_out_8_q0 mem_dout 0 7 } } }
	layer11_out_s_8_V_V { axis {  { layer11_out_s_8_V_V_TDATA out_data 1 16 }  { layer11_out_s_8_V_V_TVALID out_vld 1 1 }  { layer11_out_s_8_V_V_TREADY out_acc 0 1 } } }
	layer11_out_9 { ap_memory {  { layer11_out_9_address0 mem_address 1 7 }  { layer11_out_9_ce0 mem_ce 1 1 }  { layer11_out_9_q0 mem_dout 0 7 } } }
	layer11_out_s_9_V_V { axis {  { layer11_out_s_9_V_V_TDATA out_data 1 16 }  { layer11_out_s_9_V_V_TVALID out_vld 1 1 }  { layer11_out_s_9_V_V_TREADY out_acc 0 1 } } }
	layer11_out_10 { ap_memory {  { layer11_out_10_address0 mem_address 1 7 }  { layer11_out_10_ce0 mem_ce 1 1 }  { layer11_out_10_q0 mem_dout 0 7 } } }
	layer11_out_s_10_V_V { axis {  { layer11_out_s_10_V_V_TDATA out_data 1 16 }  { layer11_out_s_10_V_V_TVALID out_vld 1 1 }  { layer11_out_s_10_V_V_TREADY out_acc 0 1 } } }
	layer11_out_11 { ap_memory {  { layer11_out_11_address0 mem_address 1 7 }  { layer11_out_11_ce0 mem_ce 1 1 }  { layer11_out_11_q0 mem_dout 0 7 } } }
	layer11_out_s_11_V_V { axis {  { layer11_out_s_11_V_V_TDATA out_data 1 16 }  { layer11_out_s_11_V_V_TVALID out_vld 1 1 }  { layer11_out_s_11_V_V_TREADY out_acc 0 1 } } }
	layer11_out_12 { ap_memory {  { layer11_out_12_address0 mem_address 1 7 }  { layer11_out_12_ce0 mem_ce 1 1 }  { layer11_out_12_q0 mem_dout 0 7 } } }
	layer11_out_s_12_V_V { axis {  { layer11_out_s_12_V_V_TDATA out_data 1 16 }  { layer11_out_s_12_V_V_TVALID out_vld 1 1 }  { layer11_out_s_12_V_V_TREADY out_acc 0 1 } } }
}
set moduleName Loop_12_proc228
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
set C_modelName {Loop_12_proc228}
set C_modelType { void 0 }
set C_modelArgList {
	{ layer11_out_0 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_0_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_0_V_V Data } }  }
	{ layer11_out_1 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_1_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_1_V_V Data } }  }
	{ layer11_out_2 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_2_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_2_V_V Data } }  }
	{ layer11_out_3 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_3_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_3_V_V Data } }  }
	{ layer11_out_4 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_4_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_4_V_V Data } }  }
	{ layer11_out_5 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_5_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_5_V_V Data } }  }
	{ layer11_out_6 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_6_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_6_V_V Data } }  }
	{ layer11_out_7 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_7_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_7_V_V Data } }  }
	{ layer11_out_8 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_8_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_8_V_V Data } }  }
	{ layer11_out_9 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_9_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_9_V_V Data } }  }
	{ layer11_out_10 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_10_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_10_V_V Data } }  }
	{ layer11_out_11 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_11_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_11_V_V Data } }  }
	{ layer11_out_12 int 7 regular {array 120 { 1 3 } 1 1 }  }
	{ layer11_out_s_12_V_V int 16 regular {axi_s 1 volatile  { layer11_out_s_12_V_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "layer11_out_0", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_0_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_1", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_1_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_2", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_2_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_3", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_3_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_4", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_4_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_5", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_5_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_6", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_6_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_7", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_7_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_8", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_8_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_9", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_9_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_10", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_10_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_11", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_11_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "layer11_out_12", "interface" : "memory", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "layer11_out_s_12_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 85
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ layer11_out_0_address0 sc_out sc_lv 7 signal 0 } 
	{ layer11_out_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ layer11_out_0_q0 sc_in sc_lv 7 signal 0 } 
	{ layer11_out_s_0_V_V_TDATA sc_out sc_lv 16 signal 1 } 
	{ layer11_out_s_0_V_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ layer11_out_s_0_V_V_TREADY sc_in sc_logic 1 outacc 1 } 
	{ layer11_out_1_address0 sc_out sc_lv 7 signal 2 } 
	{ layer11_out_1_ce0 sc_out sc_logic 1 signal 2 } 
	{ layer11_out_1_q0 sc_in sc_lv 7 signal 2 } 
	{ layer11_out_s_1_V_V_TDATA sc_out sc_lv 16 signal 3 } 
	{ layer11_out_s_1_V_V_TVALID sc_out sc_logic 1 outvld 3 } 
	{ layer11_out_s_1_V_V_TREADY sc_in sc_logic 1 outacc 3 } 
	{ layer11_out_2_address0 sc_out sc_lv 7 signal 4 } 
	{ layer11_out_2_ce0 sc_out sc_logic 1 signal 4 } 
	{ layer11_out_2_q0 sc_in sc_lv 7 signal 4 } 
	{ layer11_out_s_2_V_V_TDATA sc_out sc_lv 16 signal 5 } 
	{ layer11_out_s_2_V_V_TVALID sc_out sc_logic 1 outvld 5 } 
	{ layer11_out_s_2_V_V_TREADY sc_in sc_logic 1 outacc 5 } 
	{ layer11_out_3_address0 sc_out sc_lv 7 signal 6 } 
	{ layer11_out_3_ce0 sc_out sc_logic 1 signal 6 } 
	{ layer11_out_3_q0 sc_in sc_lv 7 signal 6 } 
	{ layer11_out_s_3_V_V_TDATA sc_out sc_lv 16 signal 7 } 
	{ layer11_out_s_3_V_V_TVALID sc_out sc_logic 1 outvld 7 } 
	{ layer11_out_s_3_V_V_TREADY sc_in sc_logic 1 outacc 7 } 
	{ layer11_out_4_address0 sc_out sc_lv 7 signal 8 } 
	{ layer11_out_4_ce0 sc_out sc_logic 1 signal 8 } 
	{ layer11_out_4_q0 sc_in sc_lv 7 signal 8 } 
	{ layer11_out_s_4_V_V_TDATA sc_out sc_lv 16 signal 9 } 
	{ layer11_out_s_4_V_V_TVALID sc_out sc_logic 1 outvld 9 } 
	{ layer11_out_s_4_V_V_TREADY sc_in sc_logic 1 outacc 9 } 
	{ layer11_out_5_address0 sc_out sc_lv 7 signal 10 } 
	{ layer11_out_5_ce0 sc_out sc_logic 1 signal 10 } 
	{ layer11_out_5_q0 sc_in sc_lv 7 signal 10 } 
	{ layer11_out_s_5_V_V_TDATA sc_out sc_lv 16 signal 11 } 
	{ layer11_out_s_5_V_V_TVALID sc_out sc_logic 1 outvld 11 } 
	{ layer11_out_s_5_V_V_TREADY sc_in sc_logic 1 outacc 11 } 
	{ layer11_out_6_address0 sc_out sc_lv 7 signal 12 } 
	{ layer11_out_6_ce0 sc_out sc_logic 1 signal 12 } 
	{ layer11_out_6_q0 sc_in sc_lv 7 signal 12 } 
	{ layer11_out_s_6_V_V_TDATA sc_out sc_lv 16 signal 13 } 
	{ layer11_out_s_6_V_V_TVALID sc_out sc_logic 1 outvld 13 } 
	{ layer11_out_s_6_V_V_TREADY sc_in sc_logic 1 outacc 13 } 
	{ layer11_out_7_address0 sc_out sc_lv 7 signal 14 } 
	{ layer11_out_7_ce0 sc_out sc_logic 1 signal 14 } 
	{ layer11_out_7_q0 sc_in sc_lv 7 signal 14 } 
	{ layer11_out_s_7_V_V_TDATA sc_out sc_lv 16 signal 15 } 
	{ layer11_out_s_7_V_V_TVALID sc_out sc_logic 1 outvld 15 } 
	{ layer11_out_s_7_V_V_TREADY sc_in sc_logic 1 outacc 15 } 
	{ layer11_out_8_address0 sc_out sc_lv 7 signal 16 } 
	{ layer11_out_8_ce0 sc_out sc_logic 1 signal 16 } 
	{ layer11_out_8_q0 sc_in sc_lv 7 signal 16 } 
	{ layer11_out_s_8_V_V_TDATA sc_out sc_lv 16 signal 17 } 
	{ layer11_out_s_8_V_V_TVALID sc_out sc_logic 1 outvld 17 } 
	{ layer11_out_s_8_V_V_TREADY sc_in sc_logic 1 outacc 17 } 
	{ layer11_out_9_address0 sc_out sc_lv 7 signal 18 } 
	{ layer11_out_9_ce0 sc_out sc_logic 1 signal 18 } 
	{ layer11_out_9_q0 sc_in sc_lv 7 signal 18 } 
	{ layer11_out_s_9_V_V_TDATA sc_out sc_lv 16 signal 19 } 
	{ layer11_out_s_9_V_V_TVALID sc_out sc_logic 1 outvld 19 } 
	{ layer11_out_s_9_V_V_TREADY sc_in sc_logic 1 outacc 19 } 
	{ layer11_out_10_address0 sc_out sc_lv 7 signal 20 } 
	{ layer11_out_10_ce0 sc_out sc_logic 1 signal 20 } 
	{ layer11_out_10_q0 sc_in sc_lv 7 signal 20 } 
	{ layer11_out_s_10_V_V_TDATA sc_out sc_lv 16 signal 21 } 
	{ layer11_out_s_10_V_V_TVALID sc_out sc_logic 1 outvld 21 } 
	{ layer11_out_s_10_V_V_TREADY sc_in sc_logic 1 outacc 21 } 
	{ layer11_out_11_address0 sc_out sc_lv 7 signal 22 } 
	{ layer11_out_11_ce0 sc_out sc_logic 1 signal 22 } 
	{ layer11_out_11_q0 sc_in sc_lv 7 signal 22 } 
	{ layer11_out_s_11_V_V_TDATA sc_out sc_lv 16 signal 23 } 
	{ layer11_out_s_11_V_V_TVALID sc_out sc_logic 1 outvld 23 } 
	{ layer11_out_s_11_V_V_TREADY sc_in sc_logic 1 outacc 23 } 
	{ layer11_out_12_address0 sc_out sc_lv 7 signal 24 } 
	{ layer11_out_12_ce0 sc_out sc_logic 1 signal 24 } 
	{ layer11_out_12_q0 sc_in sc_lv 7 signal 24 } 
	{ layer11_out_s_12_V_V_TDATA sc_out sc_lv 16 signal 25 } 
	{ layer11_out_s_12_V_V_TVALID sc_out sc_logic 1 outvld 25 } 
	{ layer11_out_s_12_V_V_TREADY sc_in sc_logic 1 outacc 25 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "layer11_out_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_0", "role": "address0" }} , 
 	{ "name": "layer11_out_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_0", "role": "ce0" }} , 
 	{ "name": "layer11_out_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_0", "role": "q0" }} , 
 	{ "name": "layer11_out_s_0_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_0_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_0_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_0_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_0_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_0_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_1", "role": "address0" }} , 
 	{ "name": "layer11_out_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_1", "role": "ce0" }} , 
 	{ "name": "layer11_out_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_1", "role": "q0" }} , 
 	{ "name": "layer11_out_s_1_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_1_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_1_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_1_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_1_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_1_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_2", "role": "address0" }} , 
 	{ "name": "layer11_out_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_2", "role": "ce0" }} , 
 	{ "name": "layer11_out_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_2", "role": "q0" }} , 
 	{ "name": "layer11_out_s_2_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_2_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_2_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_2_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_2_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_2_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_3", "role": "address0" }} , 
 	{ "name": "layer11_out_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_3", "role": "ce0" }} , 
 	{ "name": "layer11_out_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_3", "role": "q0" }} , 
 	{ "name": "layer11_out_s_3_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_3_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_3_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_3_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_3_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_3_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_4", "role": "address0" }} , 
 	{ "name": "layer11_out_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_4", "role": "ce0" }} , 
 	{ "name": "layer11_out_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_4", "role": "q0" }} , 
 	{ "name": "layer11_out_s_4_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_4_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_4_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_4_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_4_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_4_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_5", "role": "address0" }} , 
 	{ "name": "layer11_out_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_5", "role": "ce0" }} , 
 	{ "name": "layer11_out_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_5", "role": "q0" }} , 
 	{ "name": "layer11_out_s_5_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_5_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_5_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_5_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_5_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_5_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_6", "role": "address0" }} , 
 	{ "name": "layer11_out_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_6", "role": "ce0" }} , 
 	{ "name": "layer11_out_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_6", "role": "q0" }} , 
 	{ "name": "layer11_out_s_6_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_6_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_6_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_6_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_6_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_6_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_7", "role": "address0" }} , 
 	{ "name": "layer11_out_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_7", "role": "ce0" }} , 
 	{ "name": "layer11_out_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_7", "role": "q0" }} , 
 	{ "name": "layer11_out_s_7_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_7_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_7_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_7_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_7_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_7_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_8", "role": "address0" }} , 
 	{ "name": "layer11_out_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_8", "role": "ce0" }} , 
 	{ "name": "layer11_out_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_8", "role": "q0" }} , 
 	{ "name": "layer11_out_s_8_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_8_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_8_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_8_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_8_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_8_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_9", "role": "address0" }} , 
 	{ "name": "layer11_out_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_9", "role": "ce0" }} , 
 	{ "name": "layer11_out_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_9", "role": "q0" }} , 
 	{ "name": "layer11_out_s_9_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_9_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_9_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_9_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_9_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_9_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_10", "role": "address0" }} , 
 	{ "name": "layer11_out_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_10", "role": "ce0" }} , 
 	{ "name": "layer11_out_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_10", "role": "q0" }} , 
 	{ "name": "layer11_out_s_10_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_10_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_10_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_10_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_10_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_10_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_11", "role": "address0" }} , 
 	{ "name": "layer11_out_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_11", "role": "ce0" }} , 
 	{ "name": "layer11_out_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_11", "role": "q0" }} , 
 	{ "name": "layer11_out_s_11_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_11_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_11_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_11_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_11_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_11_V_V", "role": "TREADY" }} , 
 	{ "name": "layer11_out_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_12", "role": "address0" }} , 
 	{ "name": "layer11_out_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "layer11_out_12", "role": "ce0" }} , 
 	{ "name": "layer11_out_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "layer11_out_12", "role": "q0" }} , 
 	{ "name": "layer11_out_s_12_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer11_out_s_12_V_V", "role": "TDATA" }} , 
 	{ "name": "layer11_out_s_12_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer11_out_s_12_V_V", "role": "TVALID" }} , 
 	{ "name": "layer11_out_s_12_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer11_out_s_12_V_V", "role": "TREADY" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13"],
		"CDFG" : "Loop_12_proc228",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "123", "EstimateLatencyMax" : "123",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "layer11_out_0", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_0_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_0_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_1", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_1_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_1_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_2", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_2_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_2_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_3", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_3_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_3_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_4", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_4_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_4_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_5", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_5_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_5_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_6", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_6_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_6_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_7", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_7_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_7_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_8", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_8_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_8_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_9", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_9_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_9_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_10", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_10_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_10_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_11", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_11_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_11_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer11_out_12", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "layer11_out_s_12_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "layer11_out_s_12_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_0_V_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_1_V_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_2_V_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_3_V_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_4_V_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_5_V_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_6_V_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_7_V_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_8_V_V_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_9_V_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_10_V_V_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_11_V_V_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_layer11_out_s_12_V_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	Loop_12_proc228 {
		layer11_out_0 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_0_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_1 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_1_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_2 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_2_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_3 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_3_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_4 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_4_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_5 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_5_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_6 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_6_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_7 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_7_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_8 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_8_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_9 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_9_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_10 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_10_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_11 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_11_V_V {Type O LastRead -1 FirstWrite 2}
		layer11_out_12 {Type I LastRead 1 FirstWrite -1}
		layer11_out_s_12_V_V {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "123", "Max" : "123"}
	, {"Name" : "Interval", "Min" : "123", "Max" : "123"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	layer11_out_0 { ap_memory {  { layer11_out_0_address0 mem_address 1 7 }  { layer11_out_0_ce0 mem_ce 1 1 }  { layer11_out_0_q0 mem_dout 0 7 } } }
	layer11_out_s_0_V_V { axis {  { layer11_out_s_0_V_V_TDATA out_data 1 16 }  { layer11_out_s_0_V_V_TVALID out_vld 1 1 }  { layer11_out_s_0_V_V_TREADY out_acc 0 1 } } }
	layer11_out_1 { ap_memory {  { layer11_out_1_address0 mem_address 1 7 }  { layer11_out_1_ce0 mem_ce 1 1 }  { layer11_out_1_q0 mem_dout 0 7 } } }
	layer11_out_s_1_V_V { axis {  { layer11_out_s_1_V_V_TDATA out_data 1 16 }  { layer11_out_s_1_V_V_TVALID out_vld 1 1 }  { layer11_out_s_1_V_V_TREADY out_acc 0 1 } } }
	layer11_out_2 { ap_memory {  { layer11_out_2_address0 mem_address 1 7 }  { layer11_out_2_ce0 mem_ce 1 1 }  { layer11_out_2_q0 mem_dout 0 7 } } }
	layer11_out_s_2_V_V { axis {  { layer11_out_s_2_V_V_TDATA out_data 1 16 }  { layer11_out_s_2_V_V_TVALID out_vld 1 1 }  { layer11_out_s_2_V_V_TREADY out_acc 0 1 } } }
	layer11_out_3 { ap_memory {  { layer11_out_3_address0 mem_address 1 7 }  { layer11_out_3_ce0 mem_ce 1 1 }  { layer11_out_3_q0 mem_dout 0 7 } } }
	layer11_out_s_3_V_V { axis {  { layer11_out_s_3_V_V_TDATA out_data 1 16 }  { layer11_out_s_3_V_V_TVALID out_vld 1 1 }  { layer11_out_s_3_V_V_TREADY out_acc 0 1 } } }
	layer11_out_4 { ap_memory {  { layer11_out_4_address0 mem_address 1 7 }  { layer11_out_4_ce0 mem_ce 1 1 }  { layer11_out_4_q0 mem_dout 0 7 } } }
	layer11_out_s_4_V_V { axis {  { layer11_out_s_4_V_V_TDATA out_data 1 16 }  { layer11_out_s_4_V_V_TVALID out_vld 1 1 }  { layer11_out_s_4_V_V_TREADY out_acc 0 1 } } }
	layer11_out_5 { ap_memory {  { layer11_out_5_address0 mem_address 1 7 }  { layer11_out_5_ce0 mem_ce 1 1 }  { layer11_out_5_q0 mem_dout 0 7 } } }
	layer11_out_s_5_V_V { axis {  { layer11_out_s_5_V_V_TDATA out_data 1 16 }  { layer11_out_s_5_V_V_TVALID out_vld 1 1 }  { layer11_out_s_5_V_V_TREADY out_acc 0 1 } } }
	layer11_out_6 { ap_memory {  { layer11_out_6_address0 mem_address 1 7 }  { layer11_out_6_ce0 mem_ce 1 1 }  { layer11_out_6_q0 mem_dout 0 7 } } }
	layer11_out_s_6_V_V { axis {  { layer11_out_s_6_V_V_TDATA out_data 1 16 }  { layer11_out_s_6_V_V_TVALID out_vld 1 1 }  { layer11_out_s_6_V_V_TREADY out_acc 0 1 } } }
	layer11_out_7 { ap_memory {  { layer11_out_7_address0 mem_address 1 7 }  { layer11_out_7_ce0 mem_ce 1 1 }  { layer11_out_7_q0 mem_dout 0 7 } } }
	layer11_out_s_7_V_V { axis {  { layer11_out_s_7_V_V_TDATA out_data 1 16 }  { layer11_out_s_7_V_V_TVALID out_vld 1 1 }  { layer11_out_s_7_V_V_TREADY out_acc 0 1 } } }
	layer11_out_8 { ap_memory {  { layer11_out_8_address0 mem_address 1 7 }  { layer11_out_8_ce0 mem_ce 1 1 }  { layer11_out_8_q0 mem_dout 0 7 } } }
	layer11_out_s_8_V_V { axis {  { layer11_out_s_8_V_V_TDATA out_data 1 16 }  { layer11_out_s_8_V_V_TVALID out_vld 1 1 }  { layer11_out_s_8_V_V_TREADY out_acc 0 1 } } }
	layer11_out_9 { ap_memory {  { layer11_out_9_address0 mem_address 1 7 }  { layer11_out_9_ce0 mem_ce 1 1 }  { layer11_out_9_q0 mem_dout 0 7 } } }
	layer11_out_s_9_V_V { axis {  { layer11_out_s_9_V_V_TDATA out_data 1 16 }  { layer11_out_s_9_V_V_TVALID out_vld 1 1 }  { layer11_out_s_9_V_V_TREADY out_acc 0 1 } } }
	layer11_out_10 { ap_memory {  { layer11_out_10_address0 mem_address 1 7 }  { layer11_out_10_ce0 mem_ce 1 1 }  { layer11_out_10_q0 mem_dout 0 7 } } }
	layer11_out_s_10_V_V { axis {  { layer11_out_s_10_V_V_TDATA out_data 1 16 }  { layer11_out_s_10_V_V_TVALID out_vld 1 1 }  { layer11_out_s_10_V_V_TREADY out_acc 0 1 } } }
	layer11_out_11 { ap_memory {  { layer11_out_11_address0 mem_address 1 7 }  { layer11_out_11_ce0 mem_ce 1 1 }  { layer11_out_11_q0 mem_dout 0 7 } } }
	layer11_out_s_11_V_V { axis {  { layer11_out_s_11_V_V_TDATA out_data 1 16 }  { layer11_out_s_11_V_V_TVALID out_vld 1 1 }  { layer11_out_s_11_V_V_TREADY out_acc 0 1 } } }
	layer11_out_12 { ap_memory {  { layer11_out_12_address0 mem_address 1 7 }  { layer11_out_12_ce0 mem_ce 1 1 }  { layer11_out_12_q0 mem_dout 0 7 } } }
	layer11_out_s_12_V_V { axis {  { layer11_out_s_12_V_V_TDATA out_data 1 16 }  { layer11_out_s_12_V_V_TVALID out_vld 1 1 }  { layer11_out_s_12_V_V_TREADY out_acc 0 1 } } }
}
