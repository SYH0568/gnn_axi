// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "node_attr_0_0_V"
#define AUTOTB_TVIN_node_attr_0_0_V  "../tv/cdatafile/c.example.autotvin_node_attr_0_0_V.dat"
// wrapc file define: "node_attr_0_1_V"
#define AUTOTB_TVIN_node_attr_0_1_V  "../tv/cdatafile/c.example.autotvin_node_attr_0_1_V.dat"
// wrapc file define: "node_attr_0_2_V"
#define AUTOTB_TVIN_node_attr_0_2_V  "../tv/cdatafile/c.example.autotvin_node_attr_0_2_V.dat"
// wrapc file define: "node_attr_1_0_V"
#define AUTOTB_TVIN_node_attr_1_0_V  "../tv/cdatafile/c.example.autotvin_node_attr_1_0_V.dat"
// wrapc file define: "node_attr_1_1_V"
#define AUTOTB_TVIN_node_attr_1_1_V  "../tv/cdatafile/c.example.autotvin_node_attr_1_1_V.dat"
// wrapc file define: "node_attr_1_2_V"
#define AUTOTB_TVIN_node_attr_1_2_V  "../tv/cdatafile/c.example.autotvin_node_attr_1_2_V.dat"
// wrapc file define: "node_attr_2_0_V"
#define AUTOTB_TVIN_node_attr_2_0_V  "../tv/cdatafile/c.example.autotvin_node_attr_2_0_V.dat"
// wrapc file define: "node_attr_2_1_V"
#define AUTOTB_TVIN_node_attr_2_1_V  "../tv/cdatafile/c.example.autotvin_node_attr_2_1_V.dat"
// wrapc file define: "node_attr_2_2_V"
#define AUTOTB_TVIN_node_attr_2_2_V  "../tv/cdatafile/c.example.autotvin_node_attr_2_2_V.dat"
// wrapc file define: "node_attr_3_0_V"
#define AUTOTB_TVIN_node_attr_3_0_V  "../tv/cdatafile/c.example.autotvin_node_attr_3_0_V.dat"
// wrapc file define: "node_attr_3_1_V"
#define AUTOTB_TVIN_node_attr_3_1_V  "../tv/cdatafile/c.example.autotvin_node_attr_3_1_V.dat"
// wrapc file define: "node_attr_3_2_V"
#define AUTOTB_TVIN_node_attr_3_2_V  "../tv/cdatafile/c.example.autotvin_node_attr_3_2_V.dat"
// wrapc file define: "node_attr_4_0_V"
#define AUTOTB_TVIN_node_attr_4_0_V  "../tv/cdatafile/c.example.autotvin_node_attr_4_0_V.dat"
// wrapc file define: "node_attr_4_1_V"
#define AUTOTB_TVIN_node_attr_4_1_V  "../tv/cdatafile/c.example.autotvin_node_attr_4_1_V.dat"
// wrapc file define: "node_attr_4_2_V"
#define AUTOTB_TVIN_node_attr_4_2_V  "../tv/cdatafile/c.example.autotvin_node_attr_4_2_V.dat"
// wrapc file define: "node_attr_5_0_V"
#define AUTOTB_TVIN_node_attr_5_0_V  "../tv/cdatafile/c.example.autotvin_node_attr_5_0_V.dat"
// wrapc file define: "node_attr_5_1_V"
#define AUTOTB_TVIN_node_attr_5_1_V  "../tv/cdatafile/c.example.autotvin_node_attr_5_1_V.dat"
// wrapc file define: "node_attr_5_2_V"
#define AUTOTB_TVIN_node_attr_5_2_V  "../tv/cdatafile/c.example.autotvin_node_attr_5_2_V.dat"
// wrapc file define: "node_attr_6_0_V"
#define AUTOTB_TVIN_node_attr_6_0_V  "../tv/cdatafile/c.example.autotvin_node_attr_6_0_V.dat"
// wrapc file define: "node_attr_6_1_V"
#define AUTOTB_TVIN_node_attr_6_1_V  "../tv/cdatafile/c.example.autotvin_node_attr_6_1_V.dat"
// wrapc file define: "node_attr_6_2_V"
#define AUTOTB_TVIN_node_attr_6_2_V  "../tv/cdatafile/c.example.autotvin_node_attr_6_2_V.dat"
// wrapc file define: "node_attr_7_0_V"
#define AUTOTB_TVIN_node_attr_7_0_V  "../tv/cdatafile/c.example.autotvin_node_attr_7_0_V.dat"
// wrapc file define: "node_attr_7_1_V"
#define AUTOTB_TVIN_node_attr_7_1_V  "../tv/cdatafile/c.example.autotvin_node_attr_7_1_V.dat"
// wrapc file define: "node_attr_7_2_V"
#define AUTOTB_TVIN_node_attr_7_2_V  "../tv/cdatafile/c.example.autotvin_node_attr_7_2_V.dat"
// wrapc file define: "node_attr_8_0_V"
#define AUTOTB_TVIN_node_attr_8_0_V  "../tv/cdatafile/c.example.autotvin_node_attr_8_0_V.dat"
// wrapc file define: "node_attr_8_1_V"
#define AUTOTB_TVIN_node_attr_8_1_V  "../tv/cdatafile/c.example.autotvin_node_attr_8_1_V.dat"
// wrapc file define: "node_attr_8_2_V"
#define AUTOTB_TVIN_node_attr_8_2_V  "../tv/cdatafile/c.example.autotvin_node_attr_8_2_V.dat"
// wrapc file define: "node_attr_9_0_V"
#define AUTOTB_TVIN_node_attr_9_0_V  "../tv/cdatafile/c.example.autotvin_node_attr_9_0_V.dat"
// wrapc file define: "node_attr_9_1_V"
#define AUTOTB_TVIN_node_attr_9_1_V  "../tv/cdatafile/c.example.autotvin_node_attr_9_1_V.dat"
// wrapc file define: "node_attr_9_2_V"
#define AUTOTB_TVIN_node_attr_9_2_V  "../tv/cdatafile/c.example.autotvin_node_attr_9_2_V.dat"
// wrapc file define: "node_attr_10_0_V"
#define AUTOTB_TVIN_node_attr_10_0_V  "../tv/cdatafile/c.example.autotvin_node_attr_10_0_V.dat"
// wrapc file define: "node_attr_10_1_V"
#define AUTOTB_TVIN_node_attr_10_1_V  "../tv/cdatafile/c.example.autotvin_node_attr_10_1_V.dat"
// wrapc file define: "node_attr_10_2_V"
#define AUTOTB_TVIN_node_attr_10_2_V  "../tv/cdatafile/c.example.autotvin_node_attr_10_2_V.dat"
// wrapc file define: "edge_attr_0_0_V"
#define AUTOTB_TVIN_edge_attr_0_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_0_0_V.dat"
// wrapc file define: "edge_attr_0_1_V"
#define AUTOTB_TVIN_edge_attr_0_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_0_1_V.dat"
// wrapc file define: "edge_attr_0_2_V"
#define AUTOTB_TVIN_edge_attr_0_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_0_2_V.dat"
// wrapc file define: "edge_attr_0_3_V"
#define AUTOTB_TVIN_edge_attr_0_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_0_3_V.dat"
// wrapc file define: "edge_attr_1_0_V"
#define AUTOTB_TVIN_edge_attr_1_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_1_0_V.dat"
// wrapc file define: "edge_attr_1_1_V"
#define AUTOTB_TVIN_edge_attr_1_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_1_1_V.dat"
// wrapc file define: "edge_attr_1_2_V"
#define AUTOTB_TVIN_edge_attr_1_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_1_2_V.dat"
// wrapc file define: "edge_attr_1_3_V"
#define AUTOTB_TVIN_edge_attr_1_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_1_3_V.dat"
// wrapc file define: "edge_attr_2_0_V"
#define AUTOTB_TVIN_edge_attr_2_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_2_0_V.dat"
// wrapc file define: "edge_attr_2_1_V"
#define AUTOTB_TVIN_edge_attr_2_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_2_1_V.dat"
// wrapc file define: "edge_attr_2_2_V"
#define AUTOTB_TVIN_edge_attr_2_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_2_2_V.dat"
// wrapc file define: "edge_attr_2_3_V"
#define AUTOTB_TVIN_edge_attr_2_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_2_3_V.dat"
// wrapc file define: "edge_attr_3_0_V"
#define AUTOTB_TVIN_edge_attr_3_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_3_0_V.dat"
// wrapc file define: "edge_attr_3_1_V"
#define AUTOTB_TVIN_edge_attr_3_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_3_1_V.dat"
// wrapc file define: "edge_attr_3_2_V"
#define AUTOTB_TVIN_edge_attr_3_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_3_2_V.dat"
// wrapc file define: "edge_attr_3_3_V"
#define AUTOTB_TVIN_edge_attr_3_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_3_3_V.dat"
// wrapc file define: "edge_attr_4_0_V"
#define AUTOTB_TVIN_edge_attr_4_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_4_0_V.dat"
// wrapc file define: "edge_attr_4_1_V"
#define AUTOTB_TVIN_edge_attr_4_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_4_1_V.dat"
// wrapc file define: "edge_attr_4_2_V"
#define AUTOTB_TVIN_edge_attr_4_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_4_2_V.dat"
// wrapc file define: "edge_attr_4_3_V"
#define AUTOTB_TVIN_edge_attr_4_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_4_3_V.dat"
// wrapc file define: "edge_attr_5_0_V"
#define AUTOTB_TVIN_edge_attr_5_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_5_0_V.dat"
// wrapc file define: "edge_attr_5_1_V"
#define AUTOTB_TVIN_edge_attr_5_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_5_1_V.dat"
// wrapc file define: "edge_attr_5_2_V"
#define AUTOTB_TVIN_edge_attr_5_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_5_2_V.dat"
// wrapc file define: "edge_attr_5_3_V"
#define AUTOTB_TVIN_edge_attr_5_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_5_3_V.dat"
// wrapc file define: "edge_attr_6_0_V"
#define AUTOTB_TVIN_edge_attr_6_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_6_0_V.dat"
// wrapc file define: "edge_attr_6_1_V"
#define AUTOTB_TVIN_edge_attr_6_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_6_1_V.dat"
// wrapc file define: "edge_attr_6_2_V"
#define AUTOTB_TVIN_edge_attr_6_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_6_2_V.dat"
// wrapc file define: "edge_attr_6_3_V"
#define AUTOTB_TVIN_edge_attr_6_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_6_3_V.dat"
// wrapc file define: "edge_attr_7_0_V"
#define AUTOTB_TVIN_edge_attr_7_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_7_0_V.dat"
// wrapc file define: "edge_attr_7_1_V"
#define AUTOTB_TVIN_edge_attr_7_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_7_1_V.dat"
// wrapc file define: "edge_attr_7_2_V"
#define AUTOTB_TVIN_edge_attr_7_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_7_2_V.dat"
// wrapc file define: "edge_attr_7_3_V"
#define AUTOTB_TVIN_edge_attr_7_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_7_3_V.dat"
// wrapc file define: "edge_attr_8_0_V"
#define AUTOTB_TVIN_edge_attr_8_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_8_0_V.dat"
// wrapc file define: "edge_attr_8_1_V"
#define AUTOTB_TVIN_edge_attr_8_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_8_1_V.dat"
// wrapc file define: "edge_attr_8_2_V"
#define AUTOTB_TVIN_edge_attr_8_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_8_2_V.dat"
// wrapc file define: "edge_attr_8_3_V"
#define AUTOTB_TVIN_edge_attr_8_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_8_3_V.dat"
// wrapc file define: "edge_attr_9_0_V"
#define AUTOTB_TVIN_edge_attr_9_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_9_0_V.dat"
// wrapc file define: "edge_attr_9_1_V"
#define AUTOTB_TVIN_edge_attr_9_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_9_1_V.dat"
// wrapc file define: "edge_attr_9_2_V"
#define AUTOTB_TVIN_edge_attr_9_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_9_2_V.dat"
// wrapc file define: "edge_attr_9_3_V"
#define AUTOTB_TVIN_edge_attr_9_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_9_3_V.dat"
// wrapc file define: "edge_attr_10_0_V"
#define AUTOTB_TVIN_edge_attr_10_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_10_0_V.dat"
// wrapc file define: "edge_attr_10_1_V"
#define AUTOTB_TVIN_edge_attr_10_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_10_1_V.dat"
// wrapc file define: "edge_attr_10_2_V"
#define AUTOTB_TVIN_edge_attr_10_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_10_2_V.dat"
// wrapc file define: "edge_attr_10_3_V"
#define AUTOTB_TVIN_edge_attr_10_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_10_3_V.dat"
// wrapc file define: "edge_attr_11_0_V"
#define AUTOTB_TVIN_edge_attr_11_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_11_0_V.dat"
// wrapc file define: "edge_attr_11_1_V"
#define AUTOTB_TVIN_edge_attr_11_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_11_1_V.dat"
// wrapc file define: "edge_attr_11_2_V"
#define AUTOTB_TVIN_edge_attr_11_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_11_2_V.dat"
// wrapc file define: "edge_attr_11_3_V"
#define AUTOTB_TVIN_edge_attr_11_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_11_3_V.dat"
// wrapc file define: "edge_attr_12_0_V"
#define AUTOTB_TVIN_edge_attr_12_0_V  "../tv/cdatafile/c.example.autotvin_edge_attr_12_0_V.dat"
// wrapc file define: "edge_attr_12_1_V"
#define AUTOTB_TVIN_edge_attr_12_1_V  "../tv/cdatafile/c.example.autotvin_edge_attr_12_1_V.dat"
// wrapc file define: "edge_attr_12_2_V"
#define AUTOTB_TVIN_edge_attr_12_2_V  "../tv/cdatafile/c.example.autotvin_edge_attr_12_2_V.dat"
// wrapc file define: "edge_attr_12_3_V"
#define AUTOTB_TVIN_edge_attr_12_3_V  "../tv/cdatafile/c.example.autotvin_edge_attr_12_3_V.dat"
// wrapc file define: "edge_index_0_0_V"
#define AUTOTB_TVIN_edge_index_0_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_0_0_V.dat"
// wrapc file define: "edge_index_0_1_V"
#define AUTOTB_TVIN_edge_index_0_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_0_1_V.dat"
// wrapc file define: "edge_index_1_0_V"
#define AUTOTB_TVIN_edge_index_1_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_1_0_V.dat"
// wrapc file define: "edge_index_1_1_V"
#define AUTOTB_TVIN_edge_index_1_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_1_1_V.dat"
// wrapc file define: "edge_index_2_0_V"
#define AUTOTB_TVIN_edge_index_2_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_2_0_V.dat"
// wrapc file define: "edge_index_2_1_V"
#define AUTOTB_TVIN_edge_index_2_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_2_1_V.dat"
// wrapc file define: "edge_index_3_0_V"
#define AUTOTB_TVIN_edge_index_3_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_3_0_V.dat"
// wrapc file define: "edge_index_3_1_V"
#define AUTOTB_TVIN_edge_index_3_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_3_1_V.dat"
// wrapc file define: "edge_index_4_0_V"
#define AUTOTB_TVIN_edge_index_4_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_4_0_V.dat"
// wrapc file define: "edge_index_4_1_V"
#define AUTOTB_TVIN_edge_index_4_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_4_1_V.dat"
// wrapc file define: "edge_index_5_0_V"
#define AUTOTB_TVIN_edge_index_5_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_5_0_V.dat"
// wrapc file define: "edge_index_5_1_V"
#define AUTOTB_TVIN_edge_index_5_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_5_1_V.dat"
// wrapc file define: "edge_index_6_0_V"
#define AUTOTB_TVIN_edge_index_6_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_6_0_V.dat"
// wrapc file define: "edge_index_6_1_V"
#define AUTOTB_TVIN_edge_index_6_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_6_1_V.dat"
// wrapc file define: "edge_index_7_0_V"
#define AUTOTB_TVIN_edge_index_7_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_7_0_V.dat"
// wrapc file define: "edge_index_7_1_V"
#define AUTOTB_TVIN_edge_index_7_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_7_1_V.dat"
// wrapc file define: "edge_index_8_0_V"
#define AUTOTB_TVIN_edge_index_8_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_8_0_V.dat"
// wrapc file define: "edge_index_8_1_V"
#define AUTOTB_TVIN_edge_index_8_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_8_1_V.dat"
// wrapc file define: "edge_index_9_0_V"
#define AUTOTB_TVIN_edge_index_9_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_9_0_V.dat"
// wrapc file define: "edge_index_9_1_V"
#define AUTOTB_TVIN_edge_index_9_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_9_1_V.dat"
// wrapc file define: "edge_index_10_0_V"
#define AUTOTB_TVIN_edge_index_10_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_10_0_V.dat"
// wrapc file define: "edge_index_10_1_V"
#define AUTOTB_TVIN_edge_index_10_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_10_1_V.dat"
// wrapc file define: "edge_index_11_0_V"
#define AUTOTB_TVIN_edge_index_11_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_11_0_V.dat"
// wrapc file define: "edge_index_11_1_V"
#define AUTOTB_TVIN_edge_index_11_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_11_1_V.dat"
// wrapc file define: "edge_index_12_0_V"
#define AUTOTB_TVIN_edge_index_12_0_V  "../tv/cdatafile/c.example.autotvin_edge_index_12_0_V.dat"
// wrapc file define: "edge_index_12_1_V"
#define AUTOTB_TVIN_edge_index_12_1_V  "../tv/cdatafile/c.example.autotvin_edge_index_12_1_V.dat"
// wrapc file define: "layer11_out_0_V"
#define AUTOTB_TVOUT_layer11_out_0_V  "../tv/cdatafile/c.example.autotvout_layer11_out_0_V.dat"
#define AUTOTB_TVIN_layer11_out_0_V  "../tv/cdatafile/c.example.autotvin_layer11_out_0_V.dat"
// wrapc file define: "layer11_out_1_V"
#define AUTOTB_TVOUT_layer11_out_1_V  "../tv/cdatafile/c.example.autotvout_layer11_out_1_V.dat"
#define AUTOTB_TVIN_layer11_out_1_V  "../tv/cdatafile/c.example.autotvin_layer11_out_1_V.dat"
// wrapc file define: "layer11_out_2_V"
#define AUTOTB_TVOUT_layer11_out_2_V  "../tv/cdatafile/c.example.autotvout_layer11_out_2_V.dat"
#define AUTOTB_TVIN_layer11_out_2_V  "../tv/cdatafile/c.example.autotvin_layer11_out_2_V.dat"
// wrapc file define: "layer11_out_3_V"
#define AUTOTB_TVOUT_layer11_out_3_V  "../tv/cdatafile/c.example.autotvout_layer11_out_3_V.dat"
#define AUTOTB_TVIN_layer11_out_3_V  "../tv/cdatafile/c.example.autotvin_layer11_out_3_V.dat"
// wrapc file define: "layer11_out_4_V"
#define AUTOTB_TVOUT_layer11_out_4_V  "../tv/cdatafile/c.example.autotvout_layer11_out_4_V.dat"
#define AUTOTB_TVIN_layer11_out_4_V  "../tv/cdatafile/c.example.autotvin_layer11_out_4_V.dat"
// wrapc file define: "layer11_out_5_V"
#define AUTOTB_TVOUT_layer11_out_5_V  "../tv/cdatafile/c.example.autotvout_layer11_out_5_V.dat"
#define AUTOTB_TVIN_layer11_out_5_V  "../tv/cdatafile/c.example.autotvin_layer11_out_5_V.dat"
// wrapc file define: "layer11_out_6_V"
#define AUTOTB_TVOUT_layer11_out_6_V  "../tv/cdatafile/c.example.autotvout_layer11_out_6_V.dat"
#define AUTOTB_TVIN_layer11_out_6_V  "../tv/cdatafile/c.example.autotvin_layer11_out_6_V.dat"
// wrapc file define: "layer11_out_7_V"
#define AUTOTB_TVOUT_layer11_out_7_V  "../tv/cdatafile/c.example.autotvout_layer11_out_7_V.dat"
#define AUTOTB_TVIN_layer11_out_7_V  "../tv/cdatafile/c.example.autotvin_layer11_out_7_V.dat"
// wrapc file define: "layer11_out_8_V"
#define AUTOTB_TVOUT_layer11_out_8_V  "../tv/cdatafile/c.example.autotvout_layer11_out_8_V.dat"
#define AUTOTB_TVIN_layer11_out_8_V  "../tv/cdatafile/c.example.autotvin_layer11_out_8_V.dat"
// wrapc file define: "layer11_out_9_V"
#define AUTOTB_TVOUT_layer11_out_9_V  "../tv/cdatafile/c.example.autotvout_layer11_out_9_V.dat"
#define AUTOTB_TVIN_layer11_out_9_V  "../tv/cdatafile/c.example.autotvin_layer11_out_9_V.dat"
// wrapc file define: "layer11_out_10_V"
#define AUTOTB_TVOUT_layer11_out_10_V  "../tv/cdatafile/c.example.autotvout_layer11_out_10_V.dat"
#define AUTOTB_TVIN_layer11_out_10_V  "../tv/cdatafile/c.example.autotvin_layer11_out_10_V.dat"
// wrapc file define: "layer11_out_11_V"
#define AUTOTB_TVOUT_layer11_out_11_V  "../tv/cdatafile/c.example.autotvout_layer11_out_11_V.dat"
#define AUTOTB_TVIN_layer11_out_11_V  "../tv/cdatafile/c.example.autotvin_layer11_out_11_V.dat"
// wrapc file define: "layer11_out_12_V"
#define AUTOTB_TVOUT_layer11_out_12_V  "../tv/cdatafile/c.example.autotvout_layer11_out_12_V.dat"
#define AUTOTB_TVIN_layer11_out_12_V  "../tv/cdatafile/c.example.autotvin_layer11_out_12_V.dat"
// wrapc file define: "const_size_in_1"
#define AUTOTB_TVOUT_const_size_in_1  "../tv/cdatafile/c.example.autotvout_const_size_in_1.dat"
// wrapc file define: "const_size_in_2"
#define AUTOTB_TVOUT_const_size_in_2  "../tv/cdatafile/c.example.autotvout_const_size_in_2.dat"
// wrapc file define: "const_size_in_3"
#define AUTOTB_TVOUT_const_size_in_3  "../tv/cdatafile/c.example.autotvout_const_size_in_3.dat"
// wrapc file define: "const_size_out_1"
#define AUTOTB_TVOUT_const_size_out_1  "../tv/cdatafile/c.example.autotvout_const_size_out_1.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "layer11_out_0_V"
#define AUTOTB_TVOUT_PC_layer11_out_0_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_0_V.dat"
// tvout file define: "layer11_out_1_V"
#define AUTOTB_TVOUT_PC_layer11_out_1_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_1_V.dat"
// tvout file define: "layer11_out_2_V"
#define AUTOTB_TVOUT_PC_layer11_out_2_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_2_V.dat"
// tvout file define: "layer11_out_3_V"
#define AUTOTB_TVOUT_PC_layer11_out_3_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_3_V.dat"
// tvout file define: "layer11_out_4_V"
#define AUTOTB_TVOUT_PC_layer11_out_4_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_4_V.dat"
// tvout file define: "layer11_out_5_V"
#define AUTOTB_TVOUT_PC_layer11_out_5_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_5_V.dat"
// tvout file define: "layer11_out_6_V"
#define AUTOTB_TVOUT_PC_layer11_out_6_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_6_V.dat"
// tvout file define: "layer11_out_7_V"
#define AUTOTB_TVOUT_PC_layer11_out_7_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_7_V.dat"
// tvout file define: "layer11_out_8_V"
#define AUTOTB_TVOUT_PC_layer11_out_8_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_8_V.dat"
// tvout file define: "layer11_out_9_V"
#define AUTOTB_TVOUT_PC_layer11_out_9_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_9_V.dat"
// tvout file define: "layer11_out_10_V"
#define AUTOTB_TVOUT_PC_layer11_out_10_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_10_V.dat"
// tvout file define: "layer11_out_11_V"
#define AUTOTB_TVOUT_PC_layer11_out_11_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_11_V.dat"
// tvout file define: "layer11_out_12_V"
#define AUTOTB_TVOUT_PC_layer11_out_12_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_12_V.dat"
// tvout file define: "const_size_in_1"
#define AUTOTB_TVOUT_PC_const_size_in_1  "../tv/rtldatafile/rtl.example.autotvout_const_size_in_1.dat"
// tvout file define: "const_size_in_2"
#define AUTOTB_TVOUT_PC_const_size_in_2  "../tv/rtldatafile/rtl.example.autotvout_const_size_in_2.dat"
// tvout file define: "const_size_in_3"
#define AUTOTB_TVOUT_PC_const_size_in_3  "../tv/rtldatafile/rtl.example.autotvout_const_size_in_3.dat"
// tvout file define: "const_size_out_1"
#define AUTOTB_TVOUT_PC_const_size_out_1  "../tv/rtldatafile/rtl.example.autotvout_const_size_out_1.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			node_attr_0_0_V_depth = 0;
			node_attr_0_1_V_depth = 0;
			node_attr_0_2_V_depth = 0;
			node_attr_1_0_V_depth = 0;
			node_attr_1_1_V_depth = 0;
			node_attr_1_2_V_depth = 0;
			node_attr_2_0_V_depth = 0;
			node_attr_2_1_V_depth = 0;
			node_attr_2_2_V_depth = 0;
			node_attr_3_0_V_depth = 0;
			node_attr_3_1_V_depth = 0;
			node_attr_3_2_V_depth = 0;
			node_attr_4_0_V_depth = 0;
			node_attr_4_1_V_depth = 0;
			node_attr_4_2_V_depth = 0;
			node_attr_5_0_V_depth = 0;
			node_attr_5_1_V_depth = 0;
			node_attr_5_2_V_depth = 0;
			node_attr_6_0_V_depth = 0;
			node_attr_6_1_V_depth = 0;
			node_attr_6_2_V_depth = 0;
			node_attr_7_0_V_depth = 0;
			node_attr_7_1_V_depth = 0;
			node_attr_7_2_V_depth = 0;
			node_attr_8_0_V_depth = 0;
			node_attr_8_1_V_depth = 0;
			node_attr_8_2_V_depth = 0;
			node_attr_9_0_V_depth = 0;
			node_attr_9_1_V_depth = 0;
			node_attr_9_2_V_depth = 0;
			node_attr_10_0_V_depth = 0;
			node_attr_10_1_V_depth = 0;
			node_attr_10_2_V_depth = 0;
			edge_attr_0_0_V_depth = 0;
			edge_attr_0_1_V_depth = 0;
			edge_attr_0_2_V_depth = 0;
			edge_attr_0_3_V_depth = 0;
			edge_attr_1_0_V_depth = 0;
			edge_attr_1_1_V_depth = 0;
			edge_attr_1_2_V_depth = 0;
			edge_attr_1_3_V_depth = 0;
			edge_attr_2_0_V_depth = 0;
			edge_attr_2_1_V_depth = 0;
			edge_attr_2_2_V_depth = 0;
			edge_attr_2_3_V_depth = 0;
			edge_attr_3_0_V_depth = 0;
			edge_attr_3_1_V_depth = 0;
			edge_attr_3_2_V_depth = 0;
			edge_attr_3_3_V_depth = 0;
			edge_attr_4_0_V_depth = 0;
			edge_attr_4_1_V_depth = 0;
			edge_attr_4_2_V_depth = 0;
			edge_attr_4_3_V_depth = 0;
			edge_attr_5_0_V_depth = 0;
			edge_attr_5_1_V_depth = 0;
			edge_attr_5_2_V_depth = 0;
			edge_attr_5_3_V_depth = 0;
			edge_attr_6_0_V_depth = 0;
			edge_attr_6_1_V_depth = 0;
			edge_attr_6_2_V_depth = 0;
			edge_attr_6_3_V_depth = 0;
			edge_attr_7_0_V_depth = 0;
			edge_attr_7_1_V_depth = 0;
			edge_attr_7_2_V_depth = 0;
			edge_attr_7_3_V_depth = 0;
			edge_attr_8_0_V_depth = 0;
			edge_attr_8_1_V_depth = 0;
			edge_attr_8_2_V_depth = 0;
			edge_attr_8_3_V_depth = 0;
			edge_attr_9_0_V_depth = 0;
			edge_attr_9_1_V_depth = 0;
			edge_attr_9_2_V_depth = 0;
			edge_attr_9_3_V_depth = 0;
			edge_attr_10_0_V_depth = 0;
			edge_attr_10_1_V_depth = 0;
			edge_attr_10_2_V_depth = 0;
			edge_attr_10_3_V_depth = 0;
			edge_attr_11_0_V_depth = 0;
			edge_attr_11_1_V_depth = 0;
			edge_attr_11_2_V_depth = 0;
			edge_attr_11_3_V_depth = 0;
			edge_attr_12_0_V_depth = 0;
			edge_attr_12_1_V_depth = 0;
			edge_attr_12_2_V_depth = 0;
			edge_attr_12_3_V_depth = 0;
			edge_index_0_0_V_depth = 0;
			edge_index_0_1_V_depth = 0;
			edge_index_1_0_V_depth = 0;
			edge_index_1_1_V_depth = 0;
			edge_index_2_0_V_depth = 0;
			edge_index_2_1_V_depth = 0;
			edge_index_3_0_V_depth = 0;
			edge_index_3_1_V_depth = 0;
			edge_index_4_0_V_depth = 0;
			edge_index_4_1_V_depth = 0;
			edge_index_5_0_V_depth = 0;
			edge_index_5_1_V_depth = 0;
			edge_index_6_0_V_depth = 0;
			edge_index_6_1_V_depth = 0;
			edge_index_7_0_V_depth = 0;
			edge_index_7_1_V_depth = 0;
			edge_index_8_0_V_depth = 0;
			edge_index_8_1_V_depth = 0;
			edge_index_9_0_V_depth = 0;
			edge_index_9_1_V_depth = 0;
			edge_index_10_0_V_depth = 0;
			edge_index_10_1_V_depth = 0;
			edge_index_11_0_V_depth = 0;
			edge_index_11_1_V_depth = 0;
			edge_index_12_0_V_depth = 0;
			edge_index_12_1_V_depth = 0;
			layer11_out_0_V_depth = 0;
			layer11_out_1_V_depth = 0;
			layer11_out_2_V_depth = 0;
			layer11_out_3_V_depth = 0;
			layer11_out_4_V_depth = 0;
			layer11_out_5_V_depth = 0;
			layer11_out_6_V_depth = 0;
			layer11_out_7_V_depth = 0;
			layer11_out_8_V_depth = 0;
			layer11_out_9_V_depth = 0;
			layer11_out_10_V_depth = 0;
			layer11_out_11_V_depth = 0;
			layer11_out_12_V_depth = 0;
			const_size_in_1_depth = 0;
			const_size_in_2_depth = 0;
			const_size_in_3_depth = 0;
			const_size_out_1_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{node_attr_0_0_V " << node_attr_0_0_V_depth << "}\n";
			total_list << "{node_attr_0_1_V " << node_attr_0_1_V_depth << "}\n";
			total_list << "{node_attr_0_2_V " << node_attr_0_2_V_depth << "}\n";
			total_list << "{node_attr_1_0_V " << node_attr_1_0_V_depth << "}\n";
			total_list << "{node_attr_1_1_V " << node_attr_1_1_V_depth << "}\n";
			total_list << "{node_attr_1_2_V " << node_attr_1_2_V_depth << "}\n";
			total_list << "{node_attr_2_0_V " << node_attr_2_0_V_depth << "}\n";
			total_list << "{node_attr_2_1_V " << node_attr_2_1_V_depth << "}\n";
			total_list << "{node_attr_2_2_V " << node_attr_2_2_V_depth << "}\n";
			total_list << "{node_attr_3_0_V " << node_attr_3_0_V_depth << "}\n";
			total_list << "{node_attr_3_1_V " << node_attr_3_1_V_depth << "}\n";
			total_list << "{node_attr_3_2_V " << node_attr_3_2_V_depth << "}\n";
			total_list << "{node_attr_4_0_V " << node_attr_4_0_V_depth << "}\n";
			total_list << "{node_attr_4_1_V " << node_attr_4_1_V_depth << "}\n";
			total_list << "{node_attr_4_2_V " << node_attr_4_2_V_depth << "}\n";
			total_list << "{node_attr_5_0_V " << node_attr_5_0_V_depth << "}\n";
			total_list << "{node_attr_5_1_V " << node_attr_5_1_V_depth << "}\n";
			total_list << "{node_attr_5_2_V " << node_attr_5_2_V_depth << "}\n";
			total_list << "{node_attr_6_0_V " << node_attr_6_0_V_depth << "}\n";
			total_list << "{node_attr_6_1_V " << node_attr_6_1_V_depth << "}\n";
			total_list << "{node_attr_6_2_V " << node_attr_6_2_V_depth << "}\n";
			total_list << "{node_attr_7_0_V " << node_attr_7_0_V_depth << "}\n";
			total_list << "{node_attr_7_1_V " << node_attr_7_1_V_depth << "}\n";
			total_list << "{node_attr_7_2_V " << node_attr_7_2_V_depth << "}\n";
			total_list << "{node_attr_8_0_V " << node_attr_8_0_V_depth << "}\n";
			total_list << "{node_attr_8_1_V " << node_attr_8_1_V_depth << "}\n";
			total_list << "{node_attr_8_2_V " << node_attr_8_2_V_depth << "}\n";
			total_list << "{node_attr_9_0_V " << node_attr_9_0_V_depth << "}\n";
			total_list << "{node_attr_9_1_V " << node_attr_9_1_V_depth << "}\n";
			total_list << "{node_attr_9_2_V " << node_attr_9_2_V_depth << "}\n";
			total_list << "{node_attr_10_0_V " << node_attr_10_0_V_depth << "}\n";
			total_list << "{node_attr_10_1_V " << node_attr_10_1_V_depth << "}\n";
			total_list << "{node_attr_10_2_V " << node_attr_10_2_V_depth << "}\n";
			total_list << "{edge_attr_0_0_V " << edge_attr_0_0_V_depth << "}\n";
			total_list << "{edge_attr_0_1_V " << edge_attr_0_1_V_depth << "}\n";
			total_list << "{edge_attr_0_2_V " << edge_attr_0_2_V_depth << "}\n";
			total_list << "{edge_attr_0_3_V " << edge_attr_0_3_V_depth << "}\n";
			total_list << "{edge_attr_1_0_V " << edge_attr_1_0_V_depth << "}\n";
			total_list << "{edge_attr_1_1_V " << edge_attr_1_1_V_depth << "}\n";
			total_list << "{edge_attr_1_2_V " << edge_attr_1_2_V_depth << "}\n";
			total_list << "{edge_attr_1_3_V " << edge_attr_1_3_V_depth << "}\n";
			total_list << "{edge_attr_2_0_V " << edge_attr_2_0_V_depth << "}\n";
			total_list << "{edge_attr_2_1_V " << edge_attr_2_1_V_depth << "}\n";
			total_list << "{edge_attr_2_2_V " << edge_attr_2_2_V_depth << "}\n";
			total_list << "{edge_attr_2_3_V " << edge_attr_2_3_V_depth << "}\n";
			total_list << "{edge_attr_3_0_V " << edge_attr_3_0_V_depth << "}\n";
			total_list << "{edge_attr_3_1_V " << edge_attr_3_1_V_depth << "}\n";
			total_list << "{edge_attr_3_2_V " << edge_attr_3_2_V_depth << "}\n";
			total_list << "{edge_attr_3_3_V " << edge_attr_3_3_V_depth << "}\n";
			total_list << "{edge_attr_4_0_V " << edge_attr_4_0_V_depth << "}\n";
			total_list << "{edge_attr_4_1_V " << edge_attr_4_1_V_depth << "}\n";
			total_list << "{edge_attr_4_2_V " << edge_attr_4_2_V_depth << "}\n";
			total_list << "{edge_attr_4_3_V " << edge_attr_4_3_V_depth << "}\n";
			total_list << "{edge_attr_5_0_V " << edge_attr_5_0_V_depth << "}\n";
			total_list << "{edge_attr_5_1_V " << edge_attr_5_1_V_depth << "}\n";
			total_list << "{edge_attr_5_2_V " << edge_attr_5_2_V_depth << "}\n";
			total_list << "{edge_attr_5_3_V " << edge_attr_5_3_V_depth << "}\n";
			total_list << "{edge_attr_6_0_V " << edge_attr_6_0_V_depth << "}\n";
			total_list << "{edge_attr_6_1_V " << edge_attr_6_1_V_depth << "}\n";
			total_list << "{edge_attr_6_2_V " << edge_attr_6_2_V_depth << "}\n";
			total_list << "{edge_attr_6_3_V " << edge_attr_6_3_V_depth << "}\n";
			total_list << "{edge_attr_7_0_V " << edge_attr_7_0_V_depth << "}\n";
			total_list << "{edge_attr_7_1_V " << edge_attr_7_1_V_depth << "}\n";
			total_list << "{edge_attr_7_2_V " << edge_attr_7_2_V_depth << "}\n";
			total_list << "{edge_attr_7_3_V " << edge_attr_7_3_V_depth << "}\n";
			total_list << "{edge_attr_8_0_V " << edge_attr_8_0_V_depth << "}\n";
			total_list << "{edge_attr_8_1_V " << edge_attr_8_1_V_depth << "}\n";
			total_list << "{edge_attr_8_2_V " << edge_attr_8_2_V_depth << "}\n";
			total_list << "{edge_attr_8_3_V " << edge_attr_8_3_V_depth << "}\n";
			total_list << "{edge_attr_9_0_V " << edge_attr_9_0_V_depth << "}\n";
			total_list << "{edge_attr_9_1_V " << edge_attr_9_1_V_depth << "}\n";
			total_list << "{edge_attr_9_2_V " << edge_attr_9_2_V_depth << "}\n";
			total_list << "{edge_attr_9_3_V " << edge_attr_9_3_V_depth << "}\n";
			total_list << "{edge_attr_10_0_V " << edge_attr_10_0_V_depth << "}\n";
			total_list << "{edge_attr_10_1_V " << edge_attr_10_1_V_depth << "}\n";
			total_list << "{edge_attr_10_2_V " << edge_attr_10_2_V_depth << "}\n";
			total_list << "{edge_attr_10_3_V " << edge_attr_10_3_V_depth << "}\n";
			total_list << "{edge_attr_11_0_V " << edge_attr_11_0_V_depth << "}\n";
			total_list << "{edge_attr_11_1_V " << edge_attr_11_1_V_depth << "}\n";
			total_list << "{edge_attr_11_2_V " << edge_attr_11_2_V_depth << "}\n";
			total_list << "{edge_attr_11_3_V " << edge_attr_11_3_V_depth << "}\n";
			total_list << "{edge_attr_12_0_V " << edge_attr_12_0_V_depth << "}\n";
			total_list << "{edge_attr_12_1_V " << edge_attr_12_1_V_depth << "}\n";
			total_list << "{edge_attr_12_2_V " << edge_attr_12_2_V_depth << "}\n";
			total_list << "{edge_attr_12_3_V " << edge_attr_12_3_V_depth << "}\n";
			total_list << "{edge_index_0_0_V " << edge_index_0_0_V_depth << "}\n";
			total_list << "{edge_index_0_1_V " << edge_index_0_1_V_depth << "}\n";
			total_list << "{edge_index_1_0_V " << edge_index_1_0_V_depth << "}\n";
			total_list << "{edge_index_1_1_V " << edge_index_1_1_V_depth << "}\n";
			total_list << "{edge_index_2_0_V " << edge_index_2_0_V_depth << "}\n";
			total_list << "{edge_index_2_1_V " << edge_index_2_1_V_depth << "}\n";
			total_list << "{edge_index_3_0_V " << edge_index_3_0_V_depth << "}\n";
			total_list << "{edge_index_3_1_V " << edge_index_3_1_V_depth << "}\n";
			total_list << "{edge_index_4_0_V " << edge_index_4_0_V_depth << "}\n";
			total_list << "{edge_index_4_1_V " << edge_index_4_1_V_depth << "}\n";
			total_list << "{edge_index_5_0_V " << edge_index_5_0_V_depth << "}\n";
			total_list << "{edge_index_5_1_V " << edge_index_5_1_V_depth << "}\n";
			total_list << "{edge_index_6_0_V " << edge_index_6_0_V_depth << "}\n";
			total_list << "{edge_index_6_1_V " << edge_index_6_1_V_depth << "}\n";
			total_list << "{edge_index_7_0_V " << edge_index_7_0_V_depth << "}\n";
			total_list << "{edge_index_7_1_V " << edge_index_7_1_V_depth << "}\n";
			total_list << "{edge_index_8_0_V " << edge_index_8_0_V_depth << "}\n";
			total_list << "{edge_index_8_1_V " << edge_index_8_1_V_depth << "}\n";
			total_list << "{edge_index_9_0_V " << edge_index_9_0_V_depth << "}\n";
			total_list << "{edge_index_9_1_V " << edge_index_9_1_V_depth << "}\n";
			total_list << "{edge_index_10_0_V " << edge_index_10_0_V_depth << "}\n";
			total_list << "{edge_index_10_1_V " << edge_index_10_1_V_depth << "}\n";
			total_list << "{edge_index_11_0_V " << edge_index_11_0_V_depth << "}\n";
			total_list << "{edge_index_11_1_V " << edge_index_11_1_V_depth << "}\n";
			total_list << "{edge_index_12_0_V " << edge_index_12_0_V_depth << "}\n";
			total_list << "{edge_index_12_1_V " << edge_index_12_1_V_depth << "}\n";
			total_list << "{layer11_out_0_V " << layer11_out_0_V_depth << "}\n";
			total_list << "{layer11_out_1_V " << layer11_out_1_V_depth << "}\n";
			total_list << "{layer11_out_2_V " << layer11_out_2_V_depth << "}\n";
			total_list << "{layer11_out_3_V " << layer11_out_3_V_depth << "}\n";
			total_list << "{layer11_out_4_V " << layer11_out_4_V_depth << "}\n";
			total_list << "{layer11_out_5_V " << layer11_out_5_V_depth << "}\n";
			total_list << "{layer11_out_6_V " << layer11_out_6_V_depth << "}\n";
			total_list << "{layer11_out_7_V " << layer11_out_7_V_depth << "}\n";
			total_list << "{layer11_out_8_V " << layer11_out_8_V_depth << "}\n";
			total_list << "{layer11_out_9_V " << layer11_out_9_V_depth << "}\n";
			total_list << "{layer11_out_10_V " << layer11_out_10_V_depth << "}\n";
			total_list << "{layer11_out_11_V " << layer11_out_11_V_depth << "}\n";
			total_list << "{layer11_out_12_V " << layer11_out_12_V_depth << "}\n";
			total_list << "{const_size_in_1 " << const_size_in_1_depth << "}\n";
			total_list << "{const_size_in_2 " << const_size_in_2_depth << "}\n";
			total_list << "{const_size_in_3 " << const_size_in_3_depth << "}\n";
			total_list << "{const_size_out_1 " << const_size_out_1_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int node_attr_0_0_V_depth;
		int node_attr_0_1_V_depth;
		int node_attr_0_2_V_depth;
		int node_attr_1_0_V_depth;
		int node_attr_1_1_V_depth;
		int node_attr_1_2_V_depth;
		int node_attr_2_0_V_depth;
		int node_attr_2_1_V_depth;
		int node_attr_2_2_V_depth;
		int node_attr_3_0_V_depth;
		int node_attr_3_1_V_depth;
		int node_attr_3_2_V_depth;
		int node_attr_4_0_V_depth;
		int node_attr_4_1_V_depth;
		int node_attr_4_2_V_depth;
		int node_attr_5_0_V_depth;
		int node_attr_5_1_V_depth;
		int node_attr_5_2_V_depth;
		int node_attr_6_0_V_depth;
		int node_attr_6_1_V_depth;
		int node_attr_6_2_V_depth;
		int node_attr_7_0_V_depth;
		int node_attr_7_1_V_depth;
		int node_attr_7_2_V_depth;
		int node_attr_8_0_V_depth;
		int node_attr_8_1_V_depth;
		int node_attr_8_2_V_depth;
		int node_attr_9_0_V_depth;
		int node_attr_9_1_V_depth;
		int node_attr_9_2_V_depth;
		int node_attr_10_0_V_depth;
		int node_attr_10_1_V_depth;
		int node_attr_10_2_V_depth;
		int edge_attr_0_0_V_depth;
		int edge_attr_0_1_V_depth;
		int edge_attr_0_2_V_depth;
		int edge_attr_0_3_V_depth;
		int edge_attr_1_0_V_depth;
		int edge_attr_1_1_V_depth;
		int edge_attr_1_2_V_depth;
		int edge_attr_1_3_V_depth;
		int edge_attr_2_0_V_depth;
		int edge_attr_2_1_V_depth;
		int edge_attr_2_2_V_depth;
		int edge_attr_2_3_V_depth;
		int edge_attr_3_0_V_depth;
		int edge_attr_3_1_V_depth;
		int edge_attr_3_2_V_depth;
		int edge_attr_3_3_V_depth;
		int edge_attr_4_0_V_depth;
		int edge_attr_4_1_V_depth;
		int edge_attr_4_2_V_depth;
		int edge_attr_4_3_V_depth;
		int edge_attr_5_0_V_depth;
		int edge_attr_5_1_V_depth;
		int edge_attr_5_2_V_depth;
		int edge_attr_5_3_V_depth;
		int edge_attr_6_0_V_depth;
		int edge_attr_6_1_V_depth;
		int edge_attr_6_2_V_depth;
		int edge_attr_6_3_V_depth;
		int edge_attr_7_0_V_depth;
		int edge_attr_7_1_V_depth;
		int edge_attr_7_2_V_depth;
		int edge_attr_7_3_V_depth;
		int edge_attr_8_0_V_depth;
		int edge_attr_8_1_V_depth;
		int edge_attr_8_2_V_depth;
		int edge_attr_8_3_V_depth;
		int edge_attr_9_0_V_depth;
		int edge_attr_9_1_V_depth;
		int edge_attr_9_2_V_depth;
		int edge_attr_9_3_V_depth;
		int edge_attr_10_0_V_depth;
		int edge_attr_10_1_V_depth;
		int edge_attr_10_2_V_depth;
		int edge_attr_10_3_V_depth;
		int edge_attr_11_0_V_depth;
		int edge_attr_11_1_V_depth;
		int edge_attr_11_2_V_depth;
		int edge_attr_11_3_V_depth;
		int edge_attr_12_0_V_depth;
		int edge_attr_12_1_V_depth;
		int edge_attr_12_2_V_depth;
		int edge_attr_12_3_V_depth;
		int edge_index_0_0_V_depth;
		int edge_index_0_1_V_depth;
		int edge_index_1_0_V_depth;
		int edge_index_1_1_V_depth;
		int edge_index_2_0_V_depth;
		int edge_index_2_1_V_depth;
		int edge_index_3_0_V_depth;
		int edge_index_3_1_V_depth;
		int edge_index_4_0_V_depth;
		int edge_index_4_1_V_depth;
		int edge_index_5_0_V_depth;
		int edge_index_5_1_V_depth;
		int edge_index_6_0_V_depth;
		int edge_index_6_1_V_depth;
		int edge_index_7_0_V_depth;
		int edge_index_7_1_V_depth;
		int edge_index_8_0_V_depth;
		int edge_index_8_1_V_depth;
		int edge_index_9_0_V_depth;
		int edge_index_9_1_V_depth;
		int edge_index_10_0_V_depth;
		int edge_index_10_1_V_depth;
		int edge_index_11_0_V_depth;
		int edge_index_11_1_V_depth;
		int edge_index_12_0_V_depth;
		int edge_index_12_1_V_depth;
		int layer11_out_0_V_depth;
		int layer11_out_1_V_depth;
		int layer11_out_2_V_depth;
		int layer11_out_3_V_depth;
		int layer11_out_4_V_depth;
		int layer11_out_5_V_depth;
		int layer11_out_6_V_depth;
		int layer11_out_7_V_depth;
		int layer11_out_8_V_depth;
		int layer11_out_9_V_depth;
		int layer11_out_10_V_depth;
		int layer11_out_11_V_depth;
		int layer11_out_12_V_depth;
		int const_size_in_1_depth;
		int const_size_in_2_depth;
		int const_size_in_3_depth;
		int const_size_out_1_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void example (
ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> node_attr[11][180],
ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> edge_attr[13][480],
ap_uint<14> edge_index[13][240],
ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> layer11_out[13][120],
unsigned short (&const_size_in_1),
unsigned short (&const_size_in_2),
unsigned short (&const_size_in_3),
unsigned short (&const_size_out_1));

void AESL_WRAP_example (
ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> node_attr[11][180],
ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> edge_attr[13][480],
ap_uint<14> edge_index[13][240],
ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> layer11_out[13][120],
unsigned short (&const_size_in_1),
unsigned short (&const_size_in_2),
unsigned short (&const_size_in_3),
unsigned short (&const_size_out_1))
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "layer11_out_0_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_0_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_0_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_0_V, AESL_token); // data

			sc_bv<14> *layer11_out_0_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_0_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_0_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_0_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_0_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_0_0_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_0_0_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_0_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_0_0_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_0_0_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_0_V_pc_buffer;
		}

		// output port post check: "layer11_out_1_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_1_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_1_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_1_V, AESL_token); // data

			sc_bv<14> *layer11_out_1_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_1_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_1_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_1_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_1_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_1_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_1_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_1_1_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_1_1_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_1_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_1_1_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_1_1_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_1_V_pc_buffer;
		}

		// output port post check: "layer11_out_2_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_2_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_2_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_2_V, AESL_token); // data

			sc_bv<14> *layer11_out_2_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_2_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_2_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_2_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_2_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_2_2_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_2_2_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_2_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_2_2_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_2_2_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_2_V_pc_buffer;
		}

		// output port post check: "layer11_out_3_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_3_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_3_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_3_V, AESL_token); // data

			sc_bv<14> *layer11_out_3_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_3_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_3_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_3_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_3_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_3_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_3_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_3_3_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_3_3_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_3_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_3_3_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_3_3_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_3_V_pc_buffer;
		}

		// output port post check: "layer11_out_4_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_4_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_4_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_4_V, AESL_token); // data

			sc_bv<14> *layer11_out_4_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_4_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_4_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_4_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_4_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_4_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_4_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_4_4_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_4_4_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_4_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_4_4_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_4_4_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_4_V_pc_buffer;
		}

		// output port post check: "layer11_out_5_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_5_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_5_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_5_V, AESL_token); // data

			sc_bv<14> *layer11_out_5_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_5_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_5_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_5_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_5_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_5_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_5_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_5_5_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (5) => (5) @ (2)
							for (int i_0 = 5; i_0 <= 5; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_5_5_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_5_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (5) => (5) @ (2)
							for (int i_0 = 5; i_0 <= 5; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_5_5_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_5_5_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_5_V_pc_buffer;
		}

		// output port post check: "layer11_out_6_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_6_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_6_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_6_V, AESL_token); // data

			sc_bv<14> *layer11_out_6_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_6_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_6_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_6_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_6_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_6_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_6_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_6_6_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (6) => (6) @ (2)
							for (int i_0 = 6; i_0 <= 6; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_6_6_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_6_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (6) => (6) @ (2)
							for (int i_0 = 6; i_0 <= 6; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_6_6_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_6_6_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_6_V_pc_buffer;
		}

		// output port post check: "layer11_out_7_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_7_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_7_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_7_V, AESL_token); // data

			sc_bv<14> *layer11_out_7_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_7_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_7_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_7_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_7_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_7_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_7_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_7_7_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (7) => (7) @ (2)
							for (int i_0 = 7; i_0 <= 7; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_7_7_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_7_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (7) => (7) @ (2)
							for (int i_0 = 7; i_0 <= 7; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_7_7_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_7_7_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_7_V_pc_buffer;
		}

		// output port post check: "layer11_out_8_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_8_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_8_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_8_V, AESL_token); // data

			sc_bv<14> *layer11_out_8_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_8_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_8_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_8_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_8_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_8_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_8_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_8_8_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (8) => (8) @ (2)
							for (int i_0 = 8; i_0 <= 8; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_8_8_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_8_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (8) => (8) @ (2)
							for (int i_0 = 8; i_0 <= 8; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_8_8_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_8_8_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_8_V_pc_buffer;
		}

		// output port post check: "layer11_out_9_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_9_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_9_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_9_V, AESL_token); // data

			sc_bv<14> *layer11_out_9_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_9_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_9_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_9_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_9_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_9_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_9_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_9_9_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (9) => (9) @ (2)
							for (int i_0 = 9; i_0 <= 9; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_9_9_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_9_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (9) => (9) @ (2)
							for (int i_0 = 9; i_0 <= 9; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_9_9_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_9_9_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_9_V_pc_buffer;
		}

		// output port post check: "layer11_out_10_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_10_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_10_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_10_V, AESL_token); // data

			sc_bv<14> *layer11_out_10_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_10_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_10_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_10_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_10_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_10_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_10_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_10_10_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (10) => (10) @ (2)
							for (int i_0 = 10; i_0 <= 10; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_10_10_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_10_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (10) => (10) @ (2)
							for (int i_0 = 10; i_0 <= 10; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_10_10_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_10_10_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_10_V_pc_buffer;
		}

		// output port post check: "layer11_out_11_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_11_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_11_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_11_V, AESL_token); // data

			sc_bv<14> *layer11_out_11_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_11_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_11_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_11_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_11_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_11_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_11_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_11_11_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (11) => (11) @ (2)
							for (int i_0 = 11; i_0 <= 11; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_11_11_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_11_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (11) => (11) @ (2)
							for (int i_0 = 11; i_0 <= 11; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_11_11_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_11_11_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_11_V_pc_buffer;
		}

		// output port post check: "layer11_out_12_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_12_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_12_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_12_V, AESL_token); // data

			sc_bv<14> *layer11_out_12_V_pc_buffer = new sc_bv<14>[120];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_12_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_12_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer11_out_12_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_12_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_12_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_12_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out.V(13, 0)
						// {
							sc_lv<14>* layer11_out_V_lv0_12_12_2_lv1_0_119_1 = new sc_lv<14>[120];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (12) => (12) @ (2)
							for (int i_0 = 12; i_0 <= 12; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										layer11_out_V_lv0_12_12_2_lv1_0_119_1[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_12_V_pc_buffer[hls_map_index].range(13, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out.V(13, 0)
						{
							// carray: (12) => (12) @ (2)
							for (int i_0 = 12; i_0 <= 12; i_0 += 2)
							{
								// carray: (0) => (119) @ (1)
								for (int i_1 = 0; i_1 <= 119; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : layer11_out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : layer11_out[0][0]
									// output_left_conversion : (layer11_out[i_0][i_1]).range()
									// output_type_conversion : (layer11_out_V_lv0_12_12_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										(layer11_out[i_0][i_1]).range() = (layer11_out_V_lv0_12_12_2_lv1_0_119_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer11_out_12_V_pc_buffer;
		}

		// output port post check: "const_size_in_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // data

			sc_bv<16> *const_size_in_1_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					const_size_in_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_in_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_in_1
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_in_1(15, 0)
						// {
							sc_lv<16>* const_size_in_1_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_1_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_in_1_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_in_1
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_in_1
								// output_left_conversion : const_size_in_1
								// output_type_conversion : (const_size_in_1_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_1 = (const_size_in_1_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_in_1_pc_buffer;
		}

		// output port post check: "const_size_in_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_2, AESL_token); // data

			sc_bv<16> *const_size_in_2_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					const_size_in_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_in_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_in_2
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_in_2(15, 0)
						// {
							sc_lv<16>* const_size_in_2_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_2(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_in_2) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_2_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_in_2_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_2(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_in_2
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_in_2
								// output_left_conversion : const_size_in_2
								// output_type_conversion : (const_size_in_2_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_in_2) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_2 = (const_size_in_2_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_in_2_pc_buffer;
		}

		// output port post check: "const_size_in_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_3, AESL_token); // data

			sc_bv<16> *const_size_in_3_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					const_size_in_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_in_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_in_3
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_in_3(15, 0)
						// {
							sc_lv<16>* const_size_in_3_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_3(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_in_3) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_3_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_in_3_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_3(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_in_3
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_in_3
								// output_left_conversion : const_size_in_3
								// output_type_conversion : (const_size_in_3_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_in_3) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_3 = (const_size_in_3_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_in_3_pc_buffer;
		}

		// output port post check: "const_size_out_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // data

			sc_bv<16> *const_size_out_1_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_out_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_out_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					const_size_out_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_out_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_out_1
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_out_1(15, 0)
						// {
							sc_lv<16>* const_size_out_1_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_out_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_out_1_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_out_1_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_out_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_out_1
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_out_1
								// output_left_conversion : const_size_out_1
								// output_type_conversion : (const_size_out_1_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_out_1 = (const_size_out_1_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_out_1_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "node_attr_0_0_V"
		char* tvin_node_attr_0_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_0_0_V);

		// "node_attr_0_1_V"
		char* tvin_node_attr_0_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_0_1_V);

		// "node_attr_0_2_V"
		char* tvin_node_attr_0_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_0_2_V);

		// "node_attr_1_0_V"
		char* tvin_node_attr_1_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_1_0_V);

		// "node_attr_1_1_V"
		char* tvin_node_attr_1_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_1_1_V);

		// "node_attr_1_2_V"
		char* tvin_node_attr_1_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_1_2_V);

		// "node_attr_2_0_V"
		char* tvin_node_attr_2_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_2_0_V);

		// "node_attr_2_1_V"
		char* tvin_node_attr_2_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_2_1_V);

		// "node_attr_2_2_V"
		char* tvin_node_attr_2_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_2_2_V);

		// "node_attr_3_0_V"
		char* tvin_node_attr_3_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_3_0_V);

		// "node_attr_3_1_V"
		char* tvin_node_attr_3_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_3_1_V);

		// "node_attr_3_2_V"
		char* tvin_node_attr_3_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_3_2_V);

		// "node_attr_4_0_V"
		char* tvin_node_attr_4_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_4_0_V);

		// "node_attr_4_1_V"
		char* tvin_node_attr_4_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_4_1_V);

		// "node_attr_4_2_V"
		char* tvin_node_attr_4_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_4_2_V);

		// "node_attr_5_0_V"
		char* tvin_node_attr_5_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_5_0_V);

		// "node_attr_5_1_V"
		char* tvin_node_attr_5_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_5_1_V);

		// "node_attr_5_2_V"
		char* tvin_node_attr_5_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_5_2_V);

		// "node_attr_6_0_V"
		char* tvin_node_attr_6_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_6_0_V);

		// "node_attr_6_1_V"
		char* tvin_node_attr_6_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_6_1_V);

		// "node_attr_6_2_V"
		char* tvin_node_attr_6_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_6_2_V);

		// "node_attr_7_0_V"
		char* tvin_node_attr_7_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_7_0_V);

		// "node_attr_7_1_V"
		char* tvin_node_attr_7_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_7_1_V);

		// "node_attr_7_2_V"
		char* tvin_node_attr_7_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_7_2_V);

		// "node_attr_8_0_V"
		char* tvin_node_attr_8_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_8_0_V);

		// "node_attr_8_1_V"
		char* tvin_node_attr_8_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_8_1_V);

		// "node_attr_8_2_V"
		char* tvin_node_attr_8_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_8_2_V);

		// "node_attr_9_0_V"
		char* tvin_node_attr_9_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_9_0_V);

		// "node_attr_9_1_V"
		char* tvin_node_attr_9_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_9_1_V);

		// "node_attr_9_2_V"
		char* tvin_node_attr_9_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_9_2_V);

		// "node_attr_10_0_V"
		char* tvin_node_attr_10_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_10_0_V);

		// "node_attr_10_1_V"
		char* tvin_node_attr_10_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_10_1_V);

		// "node_attr_10_2_V"
		char* tvin_node_attr_10_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_10_2_V);

		// "edge_attr_0_0_V"
		char* tvin_edge_attr_0_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_0_0_V);

		// "edge_attr_0_1_V"
		char* tvin_edge_attr_0_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_0_1_V);

		// "edge_attr_0_2_V"
		char* tvin_edge_attr_0_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_0_2_V);

		// "edge_attr_0_3_V"
		char* tvin_edge_attr_0_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_0_3_V);

		// "edge_attr_1_0_V"
		char* tvin_edge_attr_1_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_1_0_V);

		// "edge_attr_1_1_V"
		char* tvin_edge_attr_1_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_1_1_V);

		// "edge_attr_1_2_V"
		char* tvin_edge_attr_1_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_1_2_V);

		// "edge_attr_1_3_V"
		char* tvin_edge_attr_1_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_1_3_V);

		// "edge_attr_2_0_V"
		char* tvin_edge_attr_2_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_2_0_V);

		// "edge_attr_2_1_V"
		char* tvin_edge_attr_2_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_2_1_V);

		// "edge_attr_2_2_V"
		char* tvin_edge_attr_2_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_2_2_V);

		// "edge_attr_2_3_V"
		char* tvin_edge_attr_2_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_2_3_V);

		// "edge_attr_3_0_V"
		char* tvin_edge_attr_3_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_3_0_V);

		// "edge_attr_3_1_V"
		char* tvin_edge_attr_3_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_3_1_V);

		// "edge_attr_3_2_V"
		char* tvin_edge_attr_3_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_3_2_V);

		// "edge_attr_3_3_V"
		char* tvin_edge_attr_3_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_3_3_V);

		// "edge_attr_4_0_V"
		char* tvin_edge_attr_4_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_4_0_V);

		// "edge_attr_4_1_V"
		char* tvin_edge_attr_4_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_4_1_V);

		// "edge_attr_4_2_V"
		char* tvin_edge_attr_4_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_4_2_V);

		// "edge_attr_4_3_V"
		char* tvin_edge_attr_4_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_4_3_V);

		// "edge_attr_5_0_V"
		char* tvin_edge_attr_5_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_5_0_V);

		// "edge_attr_5_1_V"
		char* tvin_edge_attr_5_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_5_1_V);

		// "edge_attr_5_2_V"
		char* tvin_edge_attr_5_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_5_2_V);

		// "edge_attr_5_3_V"
		char* tvin_edge_attr_5_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_5_3_V);

		// "edge_attr_6_0_V"
		char* tvin_edge_attr_6_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_6_0_V);

		// "edge_attr_6_1_V"
		char* tvin_edge_attr_6_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_6_1_V);

		// "edge_attr_6_2_V"
		char* tvin_edge_attr_6_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_6_2_V);

		// "edge_attr_6_3_V"
		char* tvin_edge_attr_6_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_6_3_V);

		// "edge_attr_7_0_V"
		char* tvin_edge_attr_7_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_7_0_V);

		// "edge_attr_7_1_V"
		char* tvin_edge_attr_7_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_7_1_V);

		// "edge_attr_7_2_V"
		char* tvin_edge_attr_7_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_7_2_V);

		// "edge_attr_7_3_V"
		char* tvin_edge_attr_7_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_7_3_V);

		// "edge_attr_8_0_V"
		char* tvin_edge_attr_8_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_8_0_V);

		// "edge_attr_8_1_V"
		char* tvin_edge_attr_8_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_8_1_V);

		// "edge_attr_8_2_V"
		char* tvin_edge_attr_8_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_8_2_V);

		// "edge_attr_8_3_V"
		char* tvin_edge_attr_8_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_8_3_V);

		// "edge_attr_9_0_V"
		char* tvin_edge_attr_9_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_9_0_V);

		// "edge_attr_9_1_V"
		char* tvin_edge_attr_9_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_9_1_V);

		// "edge_attr_9_2_V"
		char* tvin_edge_attr_9_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_9_2_V);

		// "edge_attr_9_3_V"
		char* tvin_edge_attr_9_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_9_3_V);

		// "edge_attr_10_0_V"
		char* tvin_edge_attr_10_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_10_0_V);

		// "edge_attr_10_1_V"
		char* tvin_edge_attr_10_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_10_1_V);

		// "edge_attr_10_2_V"
		char* tvin_edge_attr_10_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_10_2_V);

		// "edge_attr_10_3_V"
		char* tvin_edge_attr_10_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_10_3_V);

		// "edge_attr_11_0_V"
		char* tvin_edge_attr_11_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_11_0_V);

		// "edge_attr_11_1_V"
		char* tvin_edge_attr_11_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_11_1_V);

		// "edge_attr_11_2_V"
		char* tvin_edge_attr_11_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_11_2_V);

		// "edge_attr_11_3_V"
		char* tvin_edge_attr_11_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_11_3_V);

		// "edge_attr_12_0_V"
		char* tvin_edge_attr_12_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_12_0_V);

		// "edge_attr_12_1_V"
		char* tvin_edge_attr_12_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_12_1_V);

		// "edge_attr_12_2_V"
		char* tvin_edge_attr_12_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_12_2_V);

		// "edge_attr_12_3_V"
		char* tvin_edge_attr_12_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_12_3_V);

		// "edge_index_0_0_V"
		char* tvin_edge_index_0_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_0_0_V);

		// "edge_index_0_1_V"
		char* tvin_edge_index_0_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_0_1_V);

		// "edge_index_1_0_V"
		char* tvin_edge_index_1_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_1_0_V);

		// "edge_index_1_1_V"
		char* tvin_edge_index_1_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_1_1_V);

		// "edge_index_2_0_V"
		char* tvin_edge_index_2_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_2_0_V);

		// "edge_index_2_1_V"
		char* tvin_edge_index_2_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_2_1_V);

		// "edge_index_3_0_V"
		char* tvin_edge_index_3_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_3_0_V);

		// "edge_index_3_1_V"
		char* tvin_edge_index_3_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_3_1_V);

		// "edge_index_4_0_V"
		char* tvin_edge_index_4_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_4_0_V);

		// "edge_index_4_1_V"
		char* tvin_edge_index_4_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_4_1_V);

		// "edge_index_5_0_V"
		char* tvin_edge_index_5_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_5_0_V);

		// "edge_index_5_1_V"
		char* tvin_edge_index_5_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_5_1_V);

		// "edge_index_6_0_V"
		char* tvin_edge_index_6_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_6_0_V);

		// "edge_index_6_1_V"
		char* tvin_edge_index_6_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_6_1_V);

		// "edge_index_7_0_V"
		char* tvin_edge_index_7_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_7_0_V);

		// "edge_index_7_1_V"
		char* tvin_edge_index_7_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_7_1_V);

		// "edge_index_8_0_V"
		char* tvin_edge_index_8_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_8_0_V);

		// "edge_index_8_1_V"
		char* tvin_edge_index_8_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_8_1_V);

		// "edge_index_9_0_V"
		char* tvin_edge_index_9_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_9_0_V);

		// "edge_index_9_1_V"
		char* tvin_edge_index_9_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_9_1_V);

		// "edge_index_10_0_V"
		char* tvin_edge_index_10_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_10_0_V);

		// "edge_index_10_1_V"
		char* tvin_edge_index_10_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_10_1_V);

		// "edge_index_11_0_V"
		char* tvin_edge_index_11_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_11_0_V);

		// "edge_index_11_1_V"
		char* tvin_edge_index_11_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_11_1_V);

		// "edge_index_12_0_V"
		char* tvin_edge_index_12_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_12_0_V);

		// "edge_index_12_1_V"
		char* tvin_edge_index_12_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_12_1_V);

		// "layer11_out_0_V"
		char* tvin_layer11_out_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_0_V);
		char* tvout_layer11_out_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_0_V);

		// "layer11_out_1_V"
		char* tvin_layer11_out_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_1_V);
		char* tvout_layer11_out_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_1_V);

		// "layer11_out_2_V"
		char* tvin_layer11_out_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_2_V);
		char* tvout_layer11_out_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_2_V);

		// "layer11_out_3_V"
		char* tvin_layer11_out_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_3_V);
		char* tvout_layer11_out_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_3_V);

		// "layer11_out_4_V"
		char* tvin_layer11_out_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_4_V);
		char* tvout_layer11_out_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_4_V);

		// "layer11_out_5_V"
		char* tvin_layer11_out_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_5_V);
		char* tvout_layer11_out_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_5_V);

		// "layer11_out_6_V"
		char* tvin_layer11_out_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_6_V);
		char* tvout_layer11_out_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_6_V);

		// "layer11_out_7_V"
		char* tvin_layer11_out_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_7_V);
		char* tvout_layer11_out_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_7_V);

		// "layer11_out_8_V"
		char* tvin_layer11_out_8_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_8_V);
		char* tvout_layer11_out_8_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_8_V);

		// "layer11_out_9_V"
		char* tvin_layer11_out_9_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_9_V);
		char* tvout_layer11_out_9_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_9_V);

		// "layer11_out_10_V"
		char* tvin_layer11_out_10_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_10_V);
		char* tvout_layer11_out_10_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_10_V);

		// "layer11_out_11_V"
		char* tvin_layer11_out_11_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_11_V);
		char* tvout_layer11_out_11_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_11_V);

		// "layer11_out_12_V"
		char* tvin_layer11_out_12_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_12_V);
		char* tvout_layer11_out_12_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_12_V);

		// "const_size_in_1"
		char* tvout_const_size_in_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_in_1);

		// "const_size_in_2"
		char* tvout_const_size_in_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_in_2);

		// "const_size_in_3"
		char* tvout_const_size_in_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_in_3);

		// "const_size_out_1"
		char* tvout_const_size_out_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_out_1);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_node_attr_0_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_0_0_V, tvin_node_attr_0_0_V);

		sc_bv<14>* node_attr_0_0_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_0_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (177) @ (3)
						for (int i_1 = 0; i_1 <= 177; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_0_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_0_0_V, "%s\n", (node_attr_0_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_0_0_V, tvin_node_attr_0_0_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_0_0_V_depth);
		sprintf(tvin_node_attr_0_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_0_0_V, tvin_node_attr_0_0_V);

		// release memory allocation
		delete [] node_attr_0_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_0_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_0_1_V, tvin_node_attr_0_1_V);

		sc_bv<14>* node_attr_0_1_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_0_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (1) => (178) @ (3)
						for (int i_1 = 1; i_1 <= 178; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_0_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_0_1_V, "%s\n", (node_attr_0_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_0_1_V, tvin_node_attr_0_1_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_0_1_V_depth);
		sprintf(tvin_node_attr_0_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_0_1_V, tvin_node_attr_0_1_V);

		// release memory allocation
		delete [] node_attr_0_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_0_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_0_2_V, tvin_node_attr_0_2_V);

		sc_bv<14>* node_attr_0_2_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_0_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (2) => (179) @ (3)
						for (int i_1 = 2; i_1 <= 179; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_0_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_0_2_V, "%s\n", (node_attr_0_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_0_2_V, tvin_node_attr_0_2_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_0_2_V_depth);
		sprintf(tvin_node_attr_0_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_0_2_V, tvin_node_attr_0_2_V);

		// release memory allocation
		delete [] node_attr_0_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_1_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_1_0_V, tvin_node_attr_1_0_V);

		sc_bv<14>* node_attr_1_0_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_1_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (177) @ (3)
						for (int i_1 = 0; i_1 <= 177; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_1_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_1_0_V, "%s\n", (node_attr_1_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_1_0_V, tvin_node_attr_1_0_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_1_0_V_depth);
		sprintf(tvin_node_attr_1_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_1_0_V, tvin_node_attr_1_0_V);

		// release memory allocation
		delete [] node_attr_1_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_1_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_1_1_V, tvin_node_attr_1_1_V);

		sc_bv<14>* node_attr_1_1_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_1_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (1) => (178) @ (3)
						for (int i_1 = 1; i_1 <= 178; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_1_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_1_1_V, "%s\n", (node_attr_1_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_1_1_V, tvin_node_attr_1_1_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_1_1_V_depth);
		sprintf(tvin_node_attr_1_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_1_1_V, tvin_node_attr_1_1_V);

		// release memory allocation
		delete [] node_attr_1_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_1_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_1_2_V, tvin_node_attr_1_2_V);

		sc_bv<14>* node_attr_1_2_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_1_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (2) => (179) @ (3)
						for (int i_1 = 2; i_1 <= 179; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_1_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_1_2_V, "%s\n", (node_attr_1_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_1_2_V, tvin_node_attr_1_2_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_1_2_V_depth);
		sprintf(tvin_node_attr_1_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_1_2_V, tvin_node_attr_1_2_V);

		// release memory allocation
		delete [] node_attr_1_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_2_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_2_0_V, tvin_node_attr_2_0_V);

		sc_bv<14>* node_attr_2_0_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_2_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (177) @ (3)
						for (int i_1 = 0; i_1 <= 177; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_2_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_2_0_V, "%s\n", (node_attr_2_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_2_0_V, tvin_node_attr_2_0_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_2_0_V_depth);
		sprintf(tvin_node_attr_2_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_2_0_V, tvin_node_attr_2_0_V);

		// release memory allocation
		delete [] node_attr_2_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_2_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_2_1_V, tvin_node_attr_2_1_V);

		sc_bv<14>* node_attr_2_1_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_2_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (1) => (178) @ (3)
						for (int i_1 = 1; i_1 <= 178; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_2_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_2_1_V, "%s\n", (node_attr_2_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_2_1_V, tvin_node_attr_2_1_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_2_1_V_depth);
		sprintf(tvin_node_attr_2_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_2_1_V, tvin_node_attr_2_1_V);

		// release memory allocation
		delete [] node_attr_2_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_2_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_2_2_V, tvin_node_attr_2_2_V);

		sc_bv<14>* node_attr_2_2_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_2_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (2) => (179) @ (3)
						for (int i_1 = 2; i_1 <= 179; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_2_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_2_2_V, "%s\n", (node_attr_2_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_2_2_V, tvin_node_attr_2_2_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_2_2_V_depth);
		sprintf(tvin_node_attr_2_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_2_2_V, tvin_node_attr_2_2_V);

		// release memory allocation
		delete [] node_attr_2_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_3_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_3_0_V, tvin_node_attr_3_0_V);

		sc_bv<14>* node_attr_3_0_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_3_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (177) @ (3)
						for (int i_1 = 0; i_1 <= 177; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_3_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_3_0_V, "%s\n", (node_attr_3_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_3_0_V, tvin_node_attr_3_0_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_3_0_V_depth);
		sprintf(tvin_node_attr_3_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_3_0_V, tvin_node_attr_3_0_V);

		// release memory allocation
		delete [] node_attr_3_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_3_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_3_1_V, tvin_node_attr_3_1_V);

		sc_bv<14>* node_attr_3_1_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_3_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (1) => (178) @ (3)
						for (int i_1 = 1; i_1 <= 178; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_3_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_3_1_V, "%s\n", (node_attr_3_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_3_1_V, tvin_node_attr_3_1_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_3_1_V_depth);
		sprintf(tvin_node_attr_3_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_3_1_V, tvin_node_attr_3_1_V);

		// release memory allocation
		delete [] node_attr_3_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_3_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_3_2_V, tvin_node_attr_3_2_V);

		sc_bv<14>* node_attr_3_2_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_3_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (2) => (179) @ (3)
						for (int i_1 = 2; i_1 <= 179; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_3_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_3_2_V, "%s\n", (node_attr_3_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_3_2_V, tvin_node_attr_3_2_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_3_2_V_depth);
		sprintf(tvin_node_attr_3_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_3_2_V, tvin_node_attr_3_2_V);

		// release memory allocation
		delete [] node_attr_3_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_4_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_4_0_V, tvin_node_attr_4_0_V);

		sc_bv<14>* node_attr_4_0_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_4_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (0) => (177) @ (3)
						for (int i_1 = 0; i_1 <= 177; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_4_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_4_0_V, "%s\n", (node_attr_4_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_4_0_V, tvin_node_attr_4_0_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_4_0_V_depth);
		sprintf(tvin_node_attr_4_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_4_0_V, tvin_node_attr_4_0_V);

		// release memory allocation
		delete [] node_attr_4_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_4_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_4_1_V, tvin_node_attr_4_1_V);

		sc_bv<14>* node_attr_4_1_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_4_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (1) => (178) @ (3)
						for (int i_1 = 1; i_1 <= 178; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_4_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_4_1_V, "%s\n", (node_attr_4_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_4_1_V, tvin_node_attr_4_1_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_4_1_V_depth);
		sprintf(tvin_node_attr_4_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_4_1_V, tvin_node_attr_4_1_V);

		// release memory allocation
		delete [] node_attr_4_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_4_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_4_2_V, tvin_node_attr_4_2_V);

		sc_bv<14>* node_attr_4_2_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_4_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (2) => (179) @ (3)
						for (int i_1 = 2; i_1 <= 179; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_4_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_4_2_V, "%s\n", (node_attr_4_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_4_2_V, tvin_node_attr_4_2_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_4_2_V_depth);
		sprintf(tvin_node_attr_4_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_4_2_V, tvin_node_attr_4_2_V);

		// release memory allocation
		delete [] node_attr_4_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_5_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_5_0_V, tvin_node_attr_5_0_V);

		sc_bv<14>* node_attr_5_0_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_5_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (0) => (177) @ (3)
						for (int i_1 = 0; i_1 <= 177; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_5_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_5_0_V, "%s\n", (node_attr_5_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_5_0_V, tvin_node_attr_5_0_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_5_0_V_depth);
		sprintf(tvin_node_attr_5_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_5_0_V, tvin_node_attr_5_0_V);

		// release memory allocation
		delete [] node_attr_5_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_5_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_5_1_V, tvin_node_attr_5_1_V);

		sc_bv<14>* node_attr_5_1_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_5_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (1) => (178) @ (3)
						for (int i_1 = 1; i_1 <= 178; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_5_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_5_1_V, "%s\n", (node_attr_5_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_5_1_V, tvin_node_attr_5_1_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_5_1_V_depth);
		sprintf(tvin_node_attr_5_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_5_1_V, tvin_node_attr_5_1_V);

		// release memory allocation
		delete [] node_attr_5_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_5_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_5_2_V, tvin_node_attr_5_2_V);

		sc_bv<14>* node_attr_5_2_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_5_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (2) => (179) @ (3)
						for (int i_1 = 2; i_1 <= 179; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_5_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_5_2_V, "%s\n", (node_attr_5_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_5_2_V, tvin_node_attr_5_2_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_5_2_V_depth);
		sprintf(tvin_node_attr_5_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_5_2_V, tvin_node_attr_5_2_V);

		// release memory allocation
		delete [] node_attr_5_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_6_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_6_0_V, tvin_node_attr_6_0_V);

		sc_bv<14>* node_attr_6_0_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_6_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (0) => (177) @ (3)
						for (int i_1 = 0; i_1 <= 177; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_6_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_6_0_V, "%s\n", (node_attr_6_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_6_0_V, tvin_node_attr_6_0_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_6_0_V_depth);
		sprintf(tvin_node_attr_6_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_6_0_V, tvin_node_attr_6_0_V);

		// release memory allocation
		delete [] node_attr_6_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_6_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_6_1_V, tvin_node_attr_6_1_V);

		sc_bv<14>* node_attr_6_1_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_6_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (1) => (178) @ (3)
						for (int i_1 = 1; i_1 <= 178; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_6_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_6_1_V, "%s\n", (node_attr_6_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_6_1_V, tvin_node_attr_6_1_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_6_1_V_depth);
		sprintf(tvin_node_attr_6_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_6_1_V, tvin_node_attr_6_1_V);

		// release memory allocation
		delete [] node_attr_6_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_6_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_6_2_V, tvin_node_attr_6_2_V);

		sc_bv<14>* node_attr_6_2_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_6_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (2) => (179) @ (3)
						for (int i_1 = 2; i_1 <= 179; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_6_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_6_2_V, "%s\n", (node_attr_6_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_6_2_V, tvin_node_attr_6_2_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_6_2_V_depth);
		sprintf(tvin_node_attr_6_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_6_2_V, tvin_node_attr_6_2_V);

		// release memory allocation
		delete [] node_attr_6_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_7_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_7_0_V, tvin_node_attr_7_0_V);

		sc_bv<14>* node_attr_7_0_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_7_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (0) => (177) @ (3)
						for (int i_1 = 0; i_1 <= 177; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_7_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_7_0_V, "%s\n", (node_attr_7_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_7_0_V, tvin_node_attr_7_0_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_7_0_V_depth);
		sprintf(tvin_node_attr_7_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_7_0_V, tvin_node_attr_7_0_V);

		// release memory allocation
		delete [] node_attr_7_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_7_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_7_1_V, tvin_node_attr_7_1_V);

		sc_bv<14>* node_attr_7_1_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_7_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (1) => (178) @ (3)
						for (int i_1 = 1; i_1 <= 178; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_7_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_7_1_V, "%s\n", (node_attr_7_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_7_1_V, tvin_node_attr_7_1_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_7_1_V_depth);
		sprintf(tvin_node_attr_7_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_7_1_V, tvin_node_attr_7_1_V);

		// release memory allocation
		delete [] node_attr_7_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_7_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_7_2_V, tvin_node_attr_7_2_V);

		sc_bv<14>* node_attr_7_2_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_7_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (2) => (179) @ (3)
						for (int i_1 = 2; i_1 <= 179; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_7_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_7_2_V, "%s\n", (node_attr_7_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_7_2_V, tvin_node_attr_7_2_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_7_2_V_depth);
		sprintf(tvin_node_attr_7_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_7_2_V, tvin_node_attr_7_2_V);

		// release memory allocation
		delete [] node_attr_7_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_8_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_8_0_V, tvin_node_attr_8_0_V);

		sc_bv<14>* node_attr_8_0_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_8_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (0) => (177) @ (3)
						for (int i_1 = 0; i_1 <= 177; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_8_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_8_0_V, "%s\n", (node_attr_8_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_8_0_V, tvin_node_attr_8_0_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_8_0_V_depth);
		sprintf(tvin_node_attr_8_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_8_0_V, tvin_node_attr_8_0_V);

		// release memory allocation
		delete [] node_attr_8_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_8_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_8_1_V, tvin_node_attr_8_1_V);

		sc_bv<14>* node_attr_8_1_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_8_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (1) => (178) @ (3)
						for (int i_1 = 1; i_1 <= 178; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_8_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_8_1_V, "%s\n", (node_attr_8_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_8_1_V, tvin_node_attr_8_1_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_8_1_V_depth);
		sprintf(tvin_node_attr_8_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_8_1_V, tvin_node_attr_8_1_V);

		// release memory allocation
		delete [] node_attr_8_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_8_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_8_2_V, tvin_node_attr_8_2_V);

		sc_bv<14>* node_attr_8_2_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_8_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (2) => (179) @ (3)
						for (int i_1 = 2; i_1 <= 179; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_8_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_8_2_V, "%s\n", (node_attr_8_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_8_2_V, tvin_node_attr_8_2_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_8_2_V_depth);
		sprintf(tvin_node_attr_8_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_8_2_V, tvin_node_attr_8_2_V);

		// release memory allocation
		delete [] node_attr_8_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_9_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_9_0_V, tvin_node_attr_9_0_V);

		sc_bv<14>* node_attr_9_0_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_9_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (0) => (177) @ (3)
						for (int i_1 = 0; i_1 <= 177; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_9_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_9_0_V, "%s\n", (node_attr_9_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_9_0_V, tvin_node_attr_9_0_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_9_0_V_depth);
		sprintf(tvin_node_attr_9_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_9_0_V, tvin_node_attr_9_0_V);

		// release memory allocation
		delete [] node_attr_9_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_9_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_9_1_V, tvin_node_attr_9_1_V);

		sc_bv<14>* node_attr_9_1_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_9_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (1) => (178) @ (3)
						for (int i_1 = 1; i_1 <= 178; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_9_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_9_1_V, "%s\n", (node_attr_9_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_9_1_V, tvin_node_attr_9_1_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_9_1_V_depth);
		sprintf(tvin_node_attr_9_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_9_1_V, tvin_node_attr_9_1_V);

		// release memory allocation
		delete [] node_attr_9_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_9_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_9_2_V, tvin_node_attr_9_2_V);

		sc_bv<14>* node_attr_9_2_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_9_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (2) => (179) @ (3)
						for (int i_1 = 2; i_1 <= 179; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_9_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_9_2_V, "%s\n", (node_attr_9_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_9_2_V, tvin_node_attr_9_2_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_9_2_V_depth);
		sprintf(tvin_node_attr_9_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_9_2_V, tvin_node_attr_9_2_V);

		// release memory allocation
		delete [] node_attr_9_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_10_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_10_0_V, tvin_node_attr_10_0_V);

		sc_bv<14>* node_attr_10_0_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_10_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// carray: (0) => (177) @ (3)
						for (int i_1 = 0; i_1 <= 177; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_10_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_10_0_V, "%s\n", (node_attr_10_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_10_0_V, tvin_node_attr_10_0_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_10_0_V_depth);
		sprintf(tvin_node_attr_10_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_10_0_V, tvin_node_attr_10_0_V);

		// release memory allocation
		delete [] node_attr_10_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_10_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_10_1_V, tvin_node_attr_10_1_V);

		sc_bv<14>* node_attr_10_1_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_10_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// carray: (1) => (178) @ (3)
						for (int i_1 = 1; i_1 <= 178; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_10_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_10_1_V, "%s\n", (node_attr_10_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_10_1_V, tvin_node_attr_10_1_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_10_1_V_depth);
		sprintf(tvin_node_attr_10_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_10_1_V, tvin_node_attr_10_1_V);

		// release memory allocation
		delete [] node_attr_10_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_node_attr_10_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_10_2_V, tvin_node_attr_10_2_V);

		sc_bv<14>* node_attr_10_2_V_tvin_wrapc_buffer = new sc_bv<14>[60];

		// RTL Name: node_attr_10_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr.V(13, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// carray: (2) => (179) @ (3)
						for (int i_1 = 2; i_1 <= 179; i_1 += 3)
						{
							// sub                   : i_0 i_1
							// ori_name              : node_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : node_attr[0][0]
							// regulate_c_name       : node_attr_V
							// input_type_conversion : (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(node_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> node_attr_V_tmp_mem;
								node_attr_V_tmp_mem = (node_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								node_attr_10_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_node_attr_10_2_V, "%s\n", (node_attr_10_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_10_2_V, tvin_node_attr_10_2_V);
		}

		tcl_file.set_num(60, &tcl_file.node_attr_10_2_V_depth);
		sprintf(tvin_node_attr_10_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_10_2_V, tvin_node_attr_10_2_V);

		// release memory allocation
		delete [] node_attr_10_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_0_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_0_0_V, tvin_edge_attr_0_0_V);

		sc_bv<14>* edge_attr_0_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_0_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_0_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_0_0_V, "%s\n", (edge_attr_0_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_0_0_V, tvin_edge_attr_0_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_0_0_V_depth);
		sprintf(tvin_edge_attr_0_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_0_0_V, tvin_edge_attr_0_0_V);

		// release memory allocation
		delete [] edge_attr_0_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_0_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_0_1_V, tvin_edge_attr_0_1_V);

		sc_bv<14>* edge_attr_0_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_0_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_0_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_0_1_V, "%s\n", (edge_attr_0_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_0_1_V, tvin_edge_attr_0_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_0_1_V_depth);
		sprintf(tvin_edge_attr_0_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_0_1_V, tvin_edge_attr_0_1_V);

		// release memory allocation
		delete [] edge_attr_0_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_0_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_0_2_V, tvin_edge_attr_0_2_V);

		sc_bv<14>* edge_attr_0_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_0_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_0_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_0_2_V, "%s\n", (edge_attr_0_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_0_2_V, tvin_edge_attr_0_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_0_2_V_depth);
		sprintf(tvin_edge_attr_0_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_0_2_V, tvin_edge_attr_0_2_V);

		// release memory allocation
		delete [] edge_attr_0_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_0_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_0_3_V, tvin_edge_attr_0_3_V);

		sc_bv<14>* edge_attr_0_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_0_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_0_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_0_3_V, "%s\n", (edge_attr_0_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_0_3_V, tvin_edge_attr_0_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_0_3_V_depth);
		sprintf(tvin_edge_attr_0_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_0_3_V, tvin_edge_attr_0_3_V);

		// release memory allocation
		delete [] edge_attr_0_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_1_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_1_0_V, tvin_edge_attr_1_0_V);

		sc_bv<14>* edge_attr_1_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_1_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_1_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_1_0_V, "%s\n", (edge_attr_1_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_1_0_V, tvin_edge_attr_1_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_1_0_V_depth);
		sprintf(tvin_edge_attr_1_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_1_0_V, tvin_edge_attr_1_0_V);

		// release memory allocation
		delete [] edge_attr_1_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_1_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_1_1_V, tvin_edge_attr_1_1_V);

		sc_bv<14>* edge_attr_1_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_1_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_1_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_1_1_V, "%s\n", (edge_attr_1_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_1_1_V, tvin_edge_attr_1_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_1_1_V_depth);
		sprintf(tvin_edge_attr_1_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_1_1_V, tvin_edge_attr_1_1_V);

		// release memory allocation
		delete [] edge_attr_1_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_1_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_1_2_V, tvin_edge_attr_1_2_V);

		sc_bv<14>* edge_attr_1_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_1_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_1_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_1_2_V, "%s\n", (edge_attr_1_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_1_2_V, tvin_edge_attr_1_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_1_2_V_depth);
		sprintf(tvin_edge_attr_1_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_1_2_V, tvin_edge_attr_1_2_V);

		// release memory allocation
		delete [] edge_attr_1_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_1_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_1_3_V, tvin_edge_attr_1_3_V);

		sc_bv<14>* edge_attr_1_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_1_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_1_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_1_3_V, "%s\n", (edge_attr_1_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_1_3_V, tvin_edge_attr_1_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_1_3_V_depth);
		sprintf(tvin_edge_attr_1_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_1_3_V, tvin_edge_attr_1_3_V);

		// release memory allocation
		delete [] edge_attr_1_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_2_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_2_0_V, tvin_edge_attr_2_0_V);

		sc_bv<14>* edge_attr_2_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_2_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_2_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_2_0_V, "%s\n", (edge_attr_2_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_2_0_V, tvin_edge_attr_2_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_2_0_V_depth);
		sprintf(tvin_edge_attr_2_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_2_0_V, tvin_edge_attr_2_0_V);

		// release memory allocation
		delete [] edge_attr_2_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_2_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_2_1_V, tvin_edge_attr_2_1_V);

		sc_bv<14>* edge_attr_2_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_2_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_2_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_2_1_V, "%s\n", (edge_attr_2_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_2_1_V, tvin_edge_attr_2_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_2_1_V_depth);
		sprintf(tvin_edge_attr_2_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_2_1_V, tvin_edge_attr_2_1_V);

		// release memory allocation
		delete [] edge_attr_2_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_2_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_2_2_V, tvin_edge_attr_2_2_V);

		sc_bv<14>* edge_attr_2_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_2_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_2_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_2_2_V, "%s\n", (edge_attr_2_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_2_2_V, tvin_edge_attr_2_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_2_2_V_depth);
		sprintf(tvin_edge_attr_2_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_2_2_V, tvin_edge_attr_2_2_V);

		// release memory allocation
		delete [] edge_attr_2_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_2_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_2_3_V, tvin_edge_attr_2_3_V);

		sc_bv<14>* edge_attr_2_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_2_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_2_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_2_3_V, "%s\n", (edge_attr_2_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_2_3_V, tvin_edge_attr_2_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_2_3_V_depth);
		sprintf(tvin_edge_attr_2_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_2_3_V, tvin_edge_attr_2_3_V);

		// release memory allocation
		delete [] edge_attr_2_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_3_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_3_0_V, tvin_edge_attr_3_0_V);

		sc_bv<14>* edge_attr_3_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_3_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_3_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_3_0_V, "%s\n", (edge_attr_3_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_3_0_V, tvin_edge_attr_3_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_3_0_V_depth);
		sprintf(tvin_edge_attr_3_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_3_0_V, tvin_edge_attr_3_0_V);

		// release memory allocation
		delete [] edge_attr_3_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_3_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_3_1_V, tvin_edge_attr_3_1_V);

		sc_bv<14>* edge_attr_3_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_3_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_3_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_3_1_V, "%s\n", (edge_attr_3_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_3_1_V, tvin_edge_attr_3_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_3_1_V_depth);
		sprintf(tvin_edge_attr_3_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_3_1_V, tvin_edge_attr_3_1_V);

		// release memory allocation
		delete [] edge_attr_3_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_3_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_3_2_V, tvin_edge_attr_3_2_V);

		sc_bv<14>* edge_attr_3_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_3_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_3_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_3_2_V, "%s\n", (edge_attr_3_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_3_2_V, tvin_edge_attr_3_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_3_2_V_depth);
		sprintf(tvin_edge_attr_3_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_3_2_V, tvin_edge_attr_3_2_V);

		// release memory allocation
		delete [] edge_attr_3_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_3_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_3_3_V, tvin_edge_attr_3_3_V);

		sc_bv<14>* edge_attr_3_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_3_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_3_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_3_3_V, "%s\n", (edge_attr_3_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_3_3_V, tvin_edge_attr_3_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_3_3_V_depth);
		sprintf(tvin_edge_attr_3_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_3_3_V, tvin_edge_attr_3_3_V);

		// release memory allocation
		delete [] edge_attr_3_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_4_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_4_0_V, tvin_edge_attr_4_0_V);

		sc_bv<14>* edge_attr_4_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_4_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_4_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_4_0_V, "%s\n", (edge_attr_4_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_4_0_V, tvin_edge_attr_4_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_4_0_V_depth);
		sprintf(tvin_edge_attr_4_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_4_0_V, tvin_edge_attr_4_0_V);

		// release memory allocation
		delete [] edge_attr_4_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_4_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_4_1_V, tvin_edge_attr_4_1_V);

		sc_bv<14>* edge_attr_4_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_4_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_4_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_4_1_V, "%s\n", (edge_attr_4_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_4_1_V, tvin_edge_attr_4_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_4_1_V_depth);
		sprintf(tvin_edge_attr_4_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_4_1_V, tvin_edge_attr_4_1_V);

		// release memory allocation
		delete [] edge_attr_4_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_4_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_4_2_V, tvin_edge_attr_4_2_V);

		sc_bv<14>* edge_attr_4_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_4_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_4_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_4_2_V, "%s\n", (edge_attr_4_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_4_2_V, tvin_edge_attr_4_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_4_2_V_depth);
		sprintf(tvin_edge_attr_4_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_4_2_V, tvin_edge_attr_4_2_V);

		// release memory allocation
		delete [] edge_attr_4_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_4_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_4_3_V, tvin_edge_attr_4_3_V);

		sc_bv<14>* edge_attr_4_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_4_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_4_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_4_3_V, "%s\n", (edge_attr_4_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_4_3_V, tvin_edge_attr_4_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_4_3_V_depth);
		sprintf(tvin_edge_attr_4_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_4_3_V, tvin_edge_attr_4_3_V);

		// release memory allocation
		delete [] edge_attr_4_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_5_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_5_0_V, tvin_edge_attr_5_0_V);

		sc_bv<14>* edge_attr_5_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_5_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_5_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_5_0_V, "%s\n", (edge_attr_5_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_5_0_V, tvin_edge_attr_5_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_5_0_V_depth);
		sprintf(tvin_edge_attr_5_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_5_0_V, tvin_edge_attr_5_0_V);

		// release memory allocation
		delete [] edge_attr_5_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_5_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_5_1_V, tvin_edge_attr_5_1_V);

		sc_bv<14>* edge_attr_5_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_5_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_5_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_5_1_V, "%s\n", (edge_attr_5_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_5_1_V, tvin_edge_attr_5_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_5_1_V_depth);
		sprintf(tvin_edge_attr_5_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_5_1_V, tvin_edge_attr_5_1_V);

		// release memory allocation
		delete [] edge_attr_5_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_5_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_5_2_V, tvin_edge_attr_5_2_V);

		sc_bv<14>* edge_attr_5_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_5_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_5_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_5_2_V, "%s\n", (edge_attr_5_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_5_2_V, tvin_edge_attr_5_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_5_2_V_depth);
		sprintf(tvin_edge_attr_5_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_5_2_V, tvin_edge_attr_5_2_V);

		// release memory allocation
		delete [] edge_attr_5_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_5_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_5_3_V, tvin_edge_attr_5_3_V);

		sc_bv<14>* edge_attr_5_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_5_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_5_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_5_3_V, "%s\n", (edge_attr_5_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_5_3_V, tvin_edge_attr_5_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_5_3_V_depth);
		sprintf(tvin_edge_attr_5_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_5_3_V, tvin_edge_attr_5_3_V);

		// release memory allocation
		delete [] edge_attr_5_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_6_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_6_0_V, tvin_edge_attr_6_0_V);

		sc_bv<14>* edge_attr_6_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_6_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_6_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_6_0_V, "%s\n", (edge_attr_6_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_6_0_V, tvin_edge_attr_6_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_6_0_V_depth);
		sprintf(tvin_edge_attr_6_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_6_0_V, tvin_edge_attr_6_0_V);

		// release memory allocation
		delete [] edge_attr_6_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_6_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_6_1_V, tvin_edge_attr_6_1_V);

		sc_bv<14>* edge_attr_6_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_6_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_6_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_6_1_V, "%s\n", (edge_attr_6_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_6_1_V, tvin_edge_attr_6_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_6_1_V_depth);
		sprintf(tvin_edge_attr_6_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_6_1_V, tvin_edge_attr_6_1_V);

		// release memory allocation
		delete [] edge_attr_6_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_6_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_6_2_V, tvin_edge_attr_6_2_V);

		sc_bv<14>* edge_attr_6_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_6_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_6_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_6_2_V, "%s\n", (edge_attr_6_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_6_2_V, tvin_edge_attr_6_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_6_2_V_depth);
		sprintf(tvin_edge_attr_6_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_6_2_V, tvin_edge_attr_6_2_V);

		// release memory allocation
		delete [] edge_attr_6_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_6_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_6_3_V, tvin_edge_attr_6_3_V);

		sc_bv<14>* edge_attr_6_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_6_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_6_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_6_3_V, "%s\n", (edge_attr_6_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_6_3_V, tvin_edge_attr_6_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_6_3_V_depth);
		sprintf(tvin_edge_attr_6_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_6_3_V, tvin_edge_attr_6_3_V);

		// release memory allocation
		delete [] edge_attr_6_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_7_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_7_0_V, tvin_edge_attr_7_0_V);

		sc_bv<14>* edge_attr_7_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_7_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_7_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_7_0_V, "%s\n", (edge_attr_7_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_7_0_V, tvin_edge_attr_7_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_7_0_V_depth);
		sprintf(tvin_edge_attr_7_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_7_0_V, tvin_edge_attr_7_0_V);

		// release memory allocation
		delete [] edge_attr_7_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_7_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_7_1_V, tvin_edge_attr_7_1_V);

		sc_bv<14>* edge_attr_7_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_7_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_7_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_7_1_V, "%s\n", (edge_attr_7_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_7_1_V, tvin_edge_attr_7_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_7_1_V_depth);
		sprintf(tvin_edge_attr_7_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_7_1_V, tvin_edge_attr_7_1_V);

		// release memory allocation
		delete [] edge_attr_7_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_7_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_7_2_V, tvin_edge_attr_7_2_V);

		sc_bv<14>* edge_attr_7_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_7_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_7_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_7_2_V, "%s\n", (edge_attr_7_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_7_2_V, tvin_edge_attr_7_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_7_2_V_depth);
		sprintf(tvin_edge_attr_7_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_7_2_V, tvin_edge_attr_7_2_V);

		// release memory allocation
		delete [] edge_attr_7_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_7_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_7_3_V, tvin_edge_attr_7_3_V);

		sc_bv<14>* edge_attr_7_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_7_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_7_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_7_3_V, "%s\n", (edge_attr_7_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_7_3_V, tvin_edge_attr_7_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_7_3_V_depth);
		sprintf(tvin_edge_attr_7_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_7_3_V, tvin_edge_attr_7_3_V);

		// release memory allocation
		delete [] edge_attr_7_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_8_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_8_0_V, tvin_edge_attr_8_0_V);

		sc_bv<14>* edge_attr_8_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_8_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_8_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_8_0_V, "%s\n", (edge_attr_8_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_8_0_V, tvin_edge_attr_8_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_8_0_V_depth);
		sprintf(tvin_edge_attr_8_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_8_0_V, tvin_edge_attr_8_0_V);

		// release memory allocation
		delete [] edge_attr_8_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_8_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_8_1_V, tvin_edge_attr_8_1_V);

		sc_bv<14>* edge_attr_8_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_8_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_8_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_8_1_V, "%s\n", (edge_attr_8_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_8_1_V, tvin_edge_attr_8_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_8_1_V_depth);
		sprintf(tvin_edge_attr_8_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_8_1_V, tvin_edge_attr_8_1_V);

		// release memory allocation
		delete [] edge_attr_8_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_8_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_8_2_V, tvin_edge_attr_8_2_V);

		sc_bv<14>* edge_attr_8_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_8_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_8_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_8_2_V, "%s\n", (edge_attr_8_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_8_2_V, tvin_edge_attr_8_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_8_2_V_depth);
		sprintf(tvin_edge_attr_8_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_8_2_V, tvin_edge_attr_8_2_V);

		// release memory allocation
		delete [] edge_attr_8_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_8_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_8_3_V, tvin_edge_attr_8_3_V);

		sc_bv<14>* edge_attr_8_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_8_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_8_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_8_3_V, "%s\n", (edge_attr_8_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_8_3_V, tvin_edge_attr_8_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_8_3_V_depth);
		sprintf(tvin_edge_attr_8_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_8_3_V, tvin_edge_attr_8_3_V);

		// release memory allocation
		delete [] edge_attr_8_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_9_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_9_0_V, tvin_edge_attr_9_0_V);

		sc_bv<14>* edge_attr_9_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_9_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_9_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_9_0_V, "%s\n", (edge_attr_9_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_9_0_V, tvin_edge_attr_9_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_9_0_V_depth);
		sprintf(tvin_edge_attr_9_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_9_0_V, tvin_edge_attr_9_0_V);

		// release memory allocation
		delete [] edge_attr_9_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_9_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_9_1_V, tvin_edge_attr_9_1_V);

		sc_bv<14>* edge_attr_9_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_9_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_9_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_9_1_V, "%s\n", (edge_attr_9_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_9_1_V, tvin_edge_attr_9_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_9_1_V_depth);
		sprintf(tvin_edge_attr_9_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_9_1_V, tvin_edge_attr_9_1_V);

		// release memory allocation
		delete [] edge_attr_9_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_9_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_9_2_V, tvin_edge_attr_9_2_V);

		sc_bv<14>* edge_attr_9_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_9_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_9_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_9_2_V, "%s\n", (edge_attr_9_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_9_2_V, tvin_edge_attr_9_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_9_2_V_depth);
		sprintf(tvin_edge_attr_9_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_9_2_V, tvin_edge_attr_9_2_V);

		// release memory allocation
		delete [] edge_attr_9_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_9_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_9_3_V, tvin_edge_attr_9_3_V);

		sc_bv<14>* edge_attr_9_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_9_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_9_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_9_3_V, "%s\n", (edge_attr_9_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_9_3_V, tvin_edge_attr_9_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_9_3_V_depth);
		sprintf(tvin_edge_attr_9_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_9_3_V, tvin_edge_attr_9_3_V);

		// release memory allocation
		delete [] edge_attr_9_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_10_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_10_0_V, tvin_edge_attr_10_0_V);

		sc_bv<14>* edge_attr_10_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_10_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_10_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_10_0_V, "%s\n", (edge_attr_10_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_10_0_V, tvin_edge_attr_10_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_10_0_V_depth);
		sprintf(tvin_edge_attr_10_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_10_0_V, tvin_edge_attr_10_0_V);

		// release memory allocation
		delete [] edge_attr_10_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_10_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_10_1_V, tvin_edge_attr_10_1_V);

		sc_bv<14>* edge_attr_10_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_10_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_10_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_10_1_V, "%s\n", (edge_attr_10_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_10_1_V, tvin_edge_attr_10_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_10_1_V_depth);
		sprintf(tvin_edge_attr_10_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_10_1_V, tvin_edge_attr_10_1_V);

		// release memory allocation
		delete [] edge_attr_10_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_10_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_10_2_V, tvin_edge_attr_10_2_V);

		sc_bv<14>* edge_attr_10_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_10_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_10_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_10_2_V, "%s\n", (edge_attr_10_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_10_2_V, tvin_edge_attr_10_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_10_2_V_depth);
		sprintf(tvin_edge_attr_10_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_10_2_V, tvin_edge_attr_10_2_V);

		// release memory allocation
		delete [] edge_attr_10_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_10_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_10_3_V, tvin_edge_attr_10_3_V);

		sc_bv<14>* edge_attr_10_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_10_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_10_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_10_3_V, "%s\n", (edge_attr_10_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_10_3_V, tvin_edge_attr_10_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_10_3_V_depth);
		sprintf(tvin_edge_attr_10_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_10_3_V, tvin_edge_attr_10_3_V);

		// release memory allocation
		delete [] edge_attr_10_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_11_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_11_0_V, tvin_edge_attr_11_0_V);

		sc_bv<14>* edge_attr_11_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_11_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_11_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_11_0_V, "%s\n", (edge_attr_11_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_11_0_V, tvin_edge_attr_11_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_11_0_V_depth);
		sprintf(tvin_edge_attr_11_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_11_0_V, tvin_edge_attr_11_0_V);

		// release memory allocation
		delete [] edge_attr_11_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_11_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_11_1_V, tvin_edge_attr_11_1_V);

		sc_bv<14>* edge_attr_11_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_11_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_11_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_11_1_V, "%s\n", (edge_attr_11_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_11_1_V, tvin_edge_attr_11_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_11_1_V_depth);
		sprintf(tvin_edge_attr_11_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_11_1_V, tvin_edge_attr_11_1_V);

		// release memory allocation
		delete [] edge_attr_11_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_11_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_11_2_V, tvin_edge_attr_11_2_V);

		sc_bv<14>* edge_attr_11_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_11_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_11_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_11_2_V, "%s\n", (edge_attr_11_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_11_2_V, tvin_edge_attr_11_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_11_2_V_depth);
		sprintf(tvin_edge_attr_11_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_11_2_V, tvin_edge_attr_11_2_V);

		// release memory allocation
		delete [] edge_attr_11_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_11_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_11_3_V, tvin_edge_attr_11_3_V);

		sc_bv<14>* edge_attr_11_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_11_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_11_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_11_3_V, "%s\n", (edge_attr_11_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_11_3_V, tvin_edge_attr_11_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_11_3_V_depth);
		sprintf(tvin_edge_attr_11_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_11_3_V, tvin_edge_attr_11_3_V);

		// release memory allocation
		delete [] edge_attr_11_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_12_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_12_0_V, tvin_edge_attr_12_0_V);

		sc_bv<14>* edge_attr_12_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_12_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// carray: (0) => (476) @ (4)
						for (int i_1 = 0; i_1 <= 476; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_12_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_12_0_V, "%s\n", (edge_attr_12_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_12_0_V, tvin_edge_attr_12_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_12_0_V_depth);
		sprintf(tvin_edge_attr_12_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_12_0_V, tvin_edge_attr_12_0_V);

		// release memory allocation
		delete [] edge_attr_12_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_12_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_12_1_V, tvin_edge_attr_12_1_V);

		sc_bv<14>* edge_attr_12_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_12_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// carray: (1) => (477) @ (4)
						for (int i_1 = 1; i_1 <= 477; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_12_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_12_1_V, "%s\n", (edge_attr_12_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_12_1_V, tvin_edge_attr_12_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_12_1_V_depth);
		sprintf(tvin_edge_attr_12_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_12_1_V, tvin_edge_attr_12_1_V);

		// release memory allocation
		delete [] edge_attr_12_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_12_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_12_2_V, tvin_edge_attr_12_2_V);

		sc_bv<14>* edge_attr_12_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_12_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// carray: (2) => (478) @ (4)
						for (int i_1 = 2; i_1 <= 478; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_12_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_12_2_V, "%s\n", (edge_attr_12_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_12_2_V, tvin_edge_attr_12_2_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_12_2_V_depth);
		sprintf(tvin_edge_attr_12_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_12_2_V, tvin_edge_attr_12_2_V);

		// release memory allocation
		delete [] edge_attr_12_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_attr_12_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_12_3_V, tvin_edge_attr_12_3_V);

		sc_bv<14>* edge_attr_12_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_attr_12_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr.V(13, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// carray: (3) => (479) @ (4)
						for (int i_1 = 3; i_1 <= 479; i_1 += 4)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_attr[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_attr[0][0]
							// regulate_c_name       : edge_attr_V
							// input_type_conversion : (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(edge_attr[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_attr_V_tmp_mem;
								edge_attr_V_tmp_mem = (edge_attr[i_0][i_1]).range().to_string(SC_BIN).c_str();
								edge_attr_12_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_attr_12_3_V, "%s\n", (edge_attr_12_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_12_3_V, tvin_edge_attr_12_3_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_attr_12_3_V_depth);
		sprintf(tvin_edge_attr_12_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_12_3_V, tvin_edge_attr_12_3_V);

		// release memory allocation
		delete [] edge_attr_12_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_0_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_0_0_V, tvin_edge_index_0_0_V);

		sc_bv<14>* edge_index_0_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_0_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_0_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_0_0_V, "%s\n", (edge_index_0_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_0_0_V, tvin_edge_index_0_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_0_0_V_depth);
		sprintf(tvin_edge_index_0_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_0_0_V, tvin_edge_index_0_0_V);

		// release memory allocation
		delete [] edge_index_0_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_0_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_0_1_V, tvin_edge_index_0_1_V);

		sc_bv<14>* edge_index_0_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_0_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_0_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_0_1_V, "%s\n", (edge_index_0_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_0_1_V, tvin_edge_index_0_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_0_1_V_depth);
		sprintf(tvin_edge_index_0_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_0_1_V, tvin_edge_index_0_1_V);

		// release memory allocation
		delete [] edge_index_0_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_1_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_1_0_V, tvin_edge_index_1_0_V);

		sc_bv<14>* edge_index_1_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_1_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_1_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_1_0_V, "%s\n", (edge_index_1_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_1_0_V, tvin_edge_index_1_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_1_0_V_depth);
		sprintf(tvin_edge_index_1_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_1_0_V, tvin_edge_index_1_0_V);

		// release memory allocation
		delete [] edge_index_1_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_1_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_1_1_V, tvin_edge_index_1_1_V);

		sc_bv<14>* edge_index_1_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_1_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_1_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_1_1_V, "%s\n", (edge_index_1_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_1_1_V, tvin_edge_index_1_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_1_1_V_depth);
		sprintf(tvin_edge_index_1_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_1_1_V, tvin_edge_index_1_1_V);

		// release memory allocation
		delete [] edge_index_1_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_2_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_2_0_V, tvin_edge_index_2_0_V);

		sc_bv<14>* edge_index_2_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_2_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_2_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_2_0_V, "%s\n", (edge_index_2_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_2_0_V, tvin_edge_index_2_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_2_0_V_depth);
		sprintf(tvin_edge_index_2_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_2_0_V, tvin_edge_index_2_0_V);

		// release memory allocation
		delete [] edge_index_2_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_2_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_2_1_V, tvin_edge_index_2_1_V);

		sc_bv<14>* edge_index_2_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_2_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_2_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_2_1_V, "%s\n", (edge_index_2_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_2_1_V, tvin_edge_index_2_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_2_1_V_depth);
		sprintf(tvin_edge_index_2_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_2_1_V, tvin_edge_index_2_1_V);

		// release memory allocation
		delete [] edge_index_2_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_3_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_3_0_V, tvin_edge_index_3_0_V);

		sc_bv<14>* edge_index_3_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_3_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_3_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_3_0_V, "%s\n", (edge_index_3_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_3_0_V, tvin_edge_index_3_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_3_0_V_depth);
		sprintf(tvin_edge_index_3_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_3_0_V, tvin_edge_index_3_0_V);

		// release memory allocation
		delete [] edge_index_3_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_3_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_3_1_V, tvin_edge_index_3_1_V);

		sc_bv<14>* edge_index_3_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_3_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_3_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_3_1_V, "%s\n", (edge_index_3_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_3_1_V, tvin_edge_index_3_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_3_1_V_depth);
		sprintf(tvin_edge_index_3_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_3_1_V, tvin_edge_index_3_1_V);

		// release memory allocation
		delete [] edge_index_3_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_4_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_4_0_V, tvin_edge_index_4_0_V);

		sc_bv<14>* edge_index_4_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_4_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_4_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_4_0_V, "%s\n", (edge_index_4_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_4_0_V, tvin_edge_index_4_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_4_0_V_depth);
		sprintf(tvin_edge_index_4_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_4_0_V, tvin_edge_index_4_0_V);

		// release memory allocation
		delete [] edge_index_4_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_4_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_4_1_V, tvin_edge_index_4_1_V);

		sc_bv<14>* edge_index_4_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_4_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_4_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_4_1_V, "%s\n", (edge_index_4_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_4_1_V, tvin_edge_index_4_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_4_1_V_depth);
		sprintf(tvin_edge_index_4_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_4_1_V, tvin_edge_index_4_1_V);

		// release memory allocation
		delete [] edge_index_4_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_5_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_5_0_V, tvin_edge_index_5_0_V);

		sc_bv<14>* edge_index_5_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_5_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_5_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_5_0_V, "%s\n", (edge_index_5_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_5_0_V, tvin_edge_index_5_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_5_0_V_depth);
		sprintf(tvin_edge_index_5_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_5_0_V, tvin_edge_index_5_0_V);

		// release memory allocation
		delete [] edge_index_5_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_5_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_5_1_V, tvin_edge_index_5_1_V);

		sc_bv<14>* edge_index_5_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_5_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_5_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_5_1_V, "%s\n", (edge_index_5_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_5_1_V, tvin_edge_index_5_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_5_1_V_depth);
		sprintf(tvin_edge_index_5_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_5_1_V, tvin_edge_index_5_1_V);

		// release memory allocation
		delete [] edge_index_5_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_6_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_6_0_V, tvin_edge_index_6_0_V);

		sc_bv<14>* edge_index_6_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_6_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_6_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_6_0_V, "%s\n", (edge_index_6_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_6_0_V, tvin_edge_index_6_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_6_0_V_depth);
		sprintf(tvin_edge_index_6_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_6_0_V, tvin_edge_index_6_0_V);

		// release memory allocation
		delete [] edge_index_6_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_6_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_6_1_V, tvin_edge_index_6_1_V);

		sc_bv<14>* edge_index_6_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_6_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_6_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_6_1_V, "%s\n", (edge_index_6_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_6_1_V, tvin_edge_index_6_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_6_1_V_depth);
		sprintf(tvin_edge_index_6_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_6_1_V, tvin_edge_index_6_1_V);

		// release memory allocation
		delete [] edge_index_6_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_7_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_7_0_V, tvin_edge_index_7_0_V);

		sc_bv<14>* edge_index_7_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_7_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_7_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_7_0_V, "%s\n", (edge_index_7_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_7_0_V, tvin_edge_index_7_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_7_0_V_depth);
		sprintf(tvin_edge_index_7_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_7_0_V, tvin_edge_index_7_0_V);

		// release memory allocation
		delete [] edge_index_7_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_7_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_7_1_V, tvin_edge_index_7_1_V);

		sc_bv<14>* edge_index_7_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_7_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_7_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_7_1_V, "%s\n", (edge_index_7_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_7_1_V, tvin_edge_index_7_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_7_1_V_depth);
		sprintf(tvin_edge_index_7_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_7_1_V, tvin_edge_index_7_1_V);

		// release memory allocation
		delete [] edge_index_7_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_8_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_8_0_V, tvin_edge_index_8_0_V);

		sc_bv<14>* edge_index_8_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_8_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_8_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_8_0_V, "%s\n", (edge_index_8_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_8_0_V, tvin_edge_index_8_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_8_0_V_depth);
		sprintf(tvin_edge_index_8_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_8_0_V, tvin_edge_index_8_0_V);

		// release memory allocation
		delete [] edge_index_8_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_8_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_8_1_V, tvin_edge_index_8_1_V);

		sc_bv<14>* edge_index_8_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_8_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_8_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_8_1_V, "%s\n", (edge_index_8_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_8_1_V, tvin_edge_index_8_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_8_1_V_depth);
		sprintf(tvin_edge_index_8_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_8_1_V, tvin_edge_index_8_1_V);

		// release memory allocation
		delete [] edge_index_8_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_9_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_9_0_V, tvin_edge_index_9_0_V);

		sc_bv<14>* edge_index_9_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_9_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_9_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_9_0_V, "%s\n", (edge_index_9_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_9_0_V, tvin_edge_index_9_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_9_0_V_depth);
		sprintf(tvin_edge_index_9_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_9_0_V, tvin_edge_index_9_0_V);

		// release memory allocation
		delete [] edge_index_9_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_9_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_9_1_V, tvin_edge_index_9_1_V);

		sc_bv<14>* edge_index_9_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_9_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_9_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_9_1_V, "%s\n", (edge_index_9_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_9_1_V, tvin_edge_index_9_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_9_1_V_depth);
		sprintf(tvin_edge_index_9_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_9_1_V, tvin_edge_index_9_1_V);

		// release memory allocation
		delete [] edge_index_9_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_10_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_10_0_V, tvin_edge_index_10_0_V);

		sc_bv<14>* edge_index_10_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_10_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_10_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_10_0_V, "%s\n", (edge_index_10_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_10_0_V, tvin_edge_index_10_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_10_0_V_depth);
		sprintf(tvin_edge_index_10_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_10_0_V, tvin_edge_index_10_0_V);

		// release memory allocation
		delete [] edge_index_10_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_10_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_10_1_V, tvin_edge_index_10_1_V);

		sc_bv<14>* edge_index_10_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_10_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_10_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_10_1_V, "%s\n", (edge_index_10_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_10_1_V, tvin_edge_index_10_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_10_1_V_depth);
		sprintf(tvin_edge_index_10_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_10_1_V, tvin_edge_index_10_1_V);

		// release memory allocation
		delete [] edge_index_10_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_11_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_11_0_V, tvin_edge_index_11_0_V);

		sc_bv<14>* edge_index_11_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_11_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_11_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_11_0_V, "%s\n", (edge_index_11_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_11_0_V, tvin_edge_index_11_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_11_0_V_depth);
		sprintf(tvin_edge_index_11_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_11_0_V, tvin_edge_index_11_0_V);

		// release memory allocation
		delete [] edge_index_11_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_11_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_11_1_V, tvin_edge_index_11_1_V);

		sc_bv<14>* edge_index_11_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_11_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_11_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_11_1_V, "%s\n", (edge_index_11_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_11_1_V, tvin_edge_index_11_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_11_1_V_depth);
		sprintf(tvin_edge_index_11_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_11_1_V, tvin_edge_index_11_1_V);

		// release memory allocation
		delete [] edge_index_11_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_12_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_12_0_V, tvin_edge_index_12_0_V);

		sc_bv<14>* edge_index_12_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_12_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// carray: (0) => (238) @ (2)
						for (int i_1 = 0; i_1 <= 238; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_12_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_12_0_V, "%s\n", (edge_index_12_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_12_0_V, tvin_edge_index_12_0_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_12_0_V_depth);
		sprintf(tvin_edge_index_12_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_12_0_V, tvin_edge_index_12_0_V);

		// release memory allocation
		delete [] edge_index_12_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_edge_index_12_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_12_1_V, tvin_edge_index_12_1_V);

		sc_bv<14>* edge_index_12_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: edge_index_12_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index.V(13, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// carray: (1) => (239) @ (2)
						for (int i_1 = 1; i_1 <= 239; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : edge_index[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : edge_index[0][0]
							// regulate_c_name       : edge_index_V
							// input_type_conversion : (edge_index[i_0][i_1]).to_string(2).c_str()
							if (&(edge_index[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> edge_index_V_tmp_mem;
								edge_index_V_tmp_mem = (edge_index[i_0][i_1]).to_string(2).c_str();
								edge_index_12_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_edge_index_12_1_V, "%s\n", (edge_index_12_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_12_1_V, tvin_edge_index_12_1_V);
		}

		tcl_file.set_num(120, &tcl_file.edge_index_12_1_V_depth);
		sprintf(tvin_edge_index_12_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_12_1_V, tvin_edge_index_12_1_V);

		// release memory allocation
		delete [] edge_index_12_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_0_V, tvin_layer11_out_0_V);

		sc_bv<14>* layer11_out_0_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_0_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_0_V, "%s\n", (layer11_out_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_0_V, tvin_layer11_out_0_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_0_V_depth);
		sprintf(tvin_layer11_out_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_0_V, tvin_layer11_out_0_V);

		// release memory allocation
		delete [] layer11_out_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_1_V, tvin_layer11_out_1_V);

		sc_bv<14>* layer11_out_1_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_1_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_1_V, "%s\n", (layer11_out_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_1_V, tvin_layer11_out_1_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_1_V_depth);
		sprintf(tvin_layer11_out_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_1_V, tvin_layer11_out_1_V);

		// release memory allocation
		delete [] layer11_out_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_2_V, tvin_layer11_out_2_V);

		sc_bv<14>* layer11_out_2_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_2_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_2_V, "%s\n", (layer11_out_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_2_V, tvin_layer11_out_2_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_2_V_depth);
		sprintf(tvin_layer11_out_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_2_V, tvin_layer11_out_2_V);

		// release memory allocation
		delete [] layer11_out_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_3_V, tvin_layer11_out_3_V);

		sc_bv<14>* layer11_out_3_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_3_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_3_V, "%s\n", (layer11_out_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_3_V, tvin_layer11_out_3_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_3_V_depth);
		sprintf(tvin_layer11_out_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_3_V, tvin_layer11_out_3_V);

		// release memory allocation
		delete [] layer11_out_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_4_V, tvin_layer11_out_4_V);

		sc_bv<14>* layer11_out_4_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_4_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_4_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_4_V, "%s\n", (layer11_out_4_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_4_V, tvin_layer11_out_4_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_4_V_depth);
		sprintf(tvin_layer11_out_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_4_V, tvin_layer11_out_4_V);

		// release memory allocation
		delete [] layer11_out_4_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_5_V, tvin_layer11_out_5_V);

		sc_bv<14>* layer11_out_5_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_5_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_5_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_5_V, "%s\n", (layer11_out_5_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_5_V, tvin_layer11_out_5_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_5_V_depth);
		sprintf(tvin_layer11_out_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_5_V, tvin_layer11_out_5_V);

		// release memory allocation
		delete [] layer11_out_5_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_6_V, tvin_layer11_out_6_V);

		sc_bv<14>* layer11_out_6_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_6_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_6_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_6_V, "%s\n", (layer11_out_6_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_6_V, tvin_layer11_out_6_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_6_V_depth);
		sprintf(tvin_layer11_out_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_6_V, tvin_layer11_out_6_V);

		// release memory allocation
		delete [] layer11_out_6_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_7_V, tvin_layer11_out_7_V);

		sc_bv<14>* layer11_out_7_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_7_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_7_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_7_V, "%s\n", (layer11_out_7_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_7_V, tvin_layer11_out_7_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_7_V_depth);
		sprintf(tvin_layer11_out_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_7_V, tvin_layer11_out_7_V);

		// release memory allocation
		delete [] layer11_out_7_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_8_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_8_V, tvin_layer11_out_8_V);

		sc_bv<14>* layer11_out_8_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_8_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_8_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_8_V, "%s\n", (layer11_out_8_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_8_V, tvin_layer11_out_8_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_8_V_depth);
		sprintf(tvin_layer11_out_8_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_8_V, tvin_layer11_out_8_V);

		// release memory allocation
		delete [] layer11_out_8_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_9_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_9_V, tvin_layer11_out_9_V);

		sc_bv<14>* layer11_out_9_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_9_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_9_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_9_V, "%s\n", (layer11_out_9_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_9_V, tvin_layer11_out_9_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_9_V_depth);
		sprintf(tvin_layer11_out_9_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_9_V, tvin_layer11_out_9_V);

		// release memory allocation
		delete [] layer11_out_9_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_10_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_10_V, tvin_layer11_out_10_V);

		sc_bv<14>* layer11_out_10_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_10_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_10_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_10_V, "%s\n", (layer11_out_10_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_10_V, tvin_layer11_out_10_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_10_V_depth);
		sprintf(tvin_layer11_out_10_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_10_V, tvin_layer11_out_10_V);

		// release memory allocation
		delete [] layer11_out_10_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_11_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_11_V, tvin_layer11_out_11_V);

		sc_bv<14>* layer11_out_11_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_11_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_11_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_11_V, "%s\n", (layer11_out_11_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_11_V, tvin_layer11_out_11_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_11_V_depth);
		sprintf(tvin_layer11_out_11_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_11_V, tvin_layer11_out_11_V);

		// release memory allocation
		delete [] layer11_out_11_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_layer11_out_12_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_layer11_out_12_V, tvin_layer11_out_12_V);

		sc_bv<14>* layer11_out_12_V_tvin_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_12_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_12_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvin_layer11_out_12_V, "%s\n", (layer11_out_12_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_layer11_out_12_V, tvin_layer11_out_12_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_12_V_depth);
		sprintf(tvin_layer11_out_12_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_layer11_out_12_V, tvin_layer11_out_12_V);

		// release memory allocation
		delete [] layer11_out_12_V_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		example(node_attr, edge_attr, edge_index, layer11_out, const_size_in_1, const_size_in_2, const_size_in_3, const_size_out_1);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_layer11_out_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_0_V, tvout_layer11_out_0_V);

		sc_bv<14>* layer11_out_0_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_0_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_0_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_0_V, "%s\n", (layer11_out_0_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_0_V, tvout_layer11_out_0_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_0_V_depth);
		sprintf(tvout_layer11_out_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_0_V, tvout_layer11_out_0_V);

		// release memory allocation
		delete [] layer11_out_0_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_1_V, tvout_layer11_out_1_V);

		sc_bv<14>* layer11_out_1_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_1_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_1_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_1_V, "%s\n", (layer11_out_1_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_1_V, tvout_layer11_out_1_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_1_V_depth);
		sprintf(tvout_layer11_out_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_1_V, tvout_layer11_out_1_V);

		// release memory allocation
		delete [] layer11_out_1_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_2_V, tvout_layer11_out_2_V);

		sc_bv<14>* layer11_out_2_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_2_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_2_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_2_V, "%s\n", (layer11_out_2_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_2_V, tvout_layer11_out_2_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_2_V_depth);
		sprintf(tvout_layer11_out_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_2_V, tvout_layer11_out_2_V);

		// release memory allocation
		delete [] layer11_out_2_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_3_V, tvout_layer11_out_3_V);

		sc_bv<14>* layer11_out_3_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_3_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_3_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_3_V, "%s\n", (layer11_out_3_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_3_V, tvout_layer11_out_3_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_3_V_depth);
		sprintf(tvout_layer11_out_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_3_V, tvout_layer11_out_3_V);

		// release memory allocation
		delete [] layer11_out_3_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_4_V, tvout_layer11_out_4_V);

		sc_bv<14>* layer11_out_4_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_4_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_4_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_4_V, "%s\n", (layer11_out_4_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_4_V, tvout_layer11_out_4_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_4_V_depth);
		sprintf(tvout_layer11_out_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_4_V, tvout_layer11_out_4_V);

		// release memory allocation
		delete [] layer11_out_4_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_5_V, tvout_layer11_out_5_V);

		sc_bv<14>* layer11_out_5_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_5_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_5_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_5_V, "%s\n", (layer11_out_5_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_5_V, tvout_layer11_out_5_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_5_V_depth);
		sprintf(tvout_layer11_out_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_5_V, tvout_layer11_out_5_V);

		// release memory allocation
		delete [] layer11_out_5_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_6_V, tvout_layer11_out_6_V);

		sc_bv<14>* layer11_out_6_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_6_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_6_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_6_V, "%s\n", (layer11_out_6_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_6_V, tvout_layer11_out_6_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_6_V_depth);
		sprintf(tvout_layer11_out_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_6_V, tvout_layer11_out_6_V);

		// release memory allocation
		delete [] layer11_out_6_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_7_V, tvout_layer11_out_7_V);

		sc_bv<14>* layer11_out_7_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_7_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_7_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_7_V, "%s\n", (layer11_out_7_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_7_V, tvout_layer11_out_7_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_7_V_depth);
		sprintf(tvout_layer11_out_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_7_V, tvout_layer11_out_7_V);

		// release memory allocation
		delete [] layer11_out_7_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_8_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_8_V, tvout_layer11_out_8_V);

		sc_bv<14>* layer11_out_8_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_8_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_8_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_8_V, "%s\n", (layer11_out_8_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_8_V, tvout_layer11_out_8_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_8_V_depth);
		sprintf(tvout_layer11_out_8_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_8_V, tvout_layer11_out_8_V);

		// release memory allocation
		delete [] layer11_out_8_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_9_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_9_V, tvout_layer11_out_9_V);

		sc_bv<14>* layer11_out_9_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_9_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_9_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_9_V, "%s\n", (layer11_out_9_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_9_V, tvout_layer11_out_9_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_9_V_depth);
		sprintf(tvout_layer11_out_9_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_9_V, tvout_layer11_out_9_V);

		// release memory allocation
		delete [] layer11_out_9_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_10_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_10_V, tvout_layer11_out_10_V);

		sc_bv<14>* layer11_out_10_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_10_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_10_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_10_V, "%s\n", (layer11_out_10_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_10_V, tvout_layer11_out_10_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_10_V_depth);
		sprintf(tvout_layer11_out_10_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_10_V, tvout_layer11_out_10_V);

		// release memory allocation
		delete [] layer11_out_10_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_11_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_11_V, tvout_layer11_out_11_V);

		sc_bv<14>* layer11_out_11_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_11_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_11_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_11_V, "%s\n", (layer11_out_11_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_11_V, tvout_layer11_out_11_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_11_V_depth);
		sprintf(tvout_layer11_out_11_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_11_V, tvout_layer11_out_11_V);

		// release memory allocation
		delete [] layer11_out_11_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer11_out_12_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_12_V, tvout_layer11_out_12_V);

		sc_bv<14>* layer11_out_12_V_tvout_wrapc_buffer = new sc_bv<14>[120];

		// RTL Name: layer11_out_12_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out.V(13, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// carray: (0) => (119) @ (1)
						for (int i_1 = 0; i_1 <= 119; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : layer11_out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : layer11_out[0][0]
							// regulate_c_name       : layer11_out_V
							// input_type_conversion : (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str()
							if (&(layer11_out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<14> layer11_out_V_tmp_mem;
								layer11_out_V_tmp_mem = (layer11_out[i_0][i_1]).range().to_string(SC_BIN).c_str();
								layer11_out_12_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_V_tmp_mem.range(13, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 120; i++)
		{
			sprintf(tvout_layer11_out_12_V, "%s\n", (layer11_out_12_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_12_V, tvout_layer11_out_12_V);
		}

		tcl_file.set_num(120, &tcl_file.layer11_out_12_V_depth);
		sprintf(tvout_layer11_out_12_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_12_V, tvout_layer11_out_12_V);

		// release memory allocation
		delete [] layer11_out_12_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_const_size_in_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);

		sc_bv<16>* const_size_in_1_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_in_1
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_in_1(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_in_1
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_in_1
						// regulate_c_name       : const_size_in_1
						// input_type_conversion : const_size_in_1
						if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_in_1_tmp_mem;
							const_size_in_1_tmp_mem = const_size_in_1;
							const_size_in_1_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_in_1_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_in_1, "%s\n", (const_size_in_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);
		}

		tcl_file.set_num(1, &tcl_file.const_size_in_1_depth);
		sprintf(tvout_const_size_in_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);

		// release memory allocation
		delete [] const_size_in_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_const_size_in_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_2, tvout_const_size_in_2);

		sc_bv<16>* const_size_in_2_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_in_2
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_in_2(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_in_2
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_in_2
						// regulate_c_name       : const_size_in_2
						// input_type_conversion : const_size_in_2
						if (&(const_size_in_2) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_in_2_tmp_mem;
							const_size_in_2_tmp_mem = const_size_in_2;
							const_size_in_2_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_in_2_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_in_2, "%s\n", (const_size_in_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_in_2, tvout_const_size_in_2);
		}

		tcl_file.set_num(1, &tcl_file.const_size_in_2_depth);
		sprintf(tvout_const_size_in_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_2, tvout_const_size_in_2);

		// release memory allocation
		delete [] const_size_in_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_const_size_in_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_3, tvout_const_size_in_3);

		sc_bv<16>* const_size_in_3_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_in_3
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_in_3(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_in_3
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_in_3
						// regulate_c_name       : const_size_in_3
						// input_type_conversion : const_size_in_3
						if (&(const_size_in_3) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_in_3_tmp_mem;
							const_size_in_3_tmp_mem = const_size_in_3;
							const_size_in_3_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_in_3_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_in_3, "%s\n", (const_size_in_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_in_3, tvout_const_size_in_3);
		}

		tcl_file.set_num(1, &tcl_file.const_size_in_3_depth);
		sprintf(tvout_const_size_in_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_3, tvout_const_size_in_3);

		// release memory allocation
		delete [] const_size_in_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_const_size_out_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);

		sc_bv<16>* const_size_out_1_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_out_1
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_out_1(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_out_1
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_out_1
						// regulate_c_name       : const_size_out_1
						// input_type_conversion : const_size_out_1
						if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_out_1_tmp_mem;
							const_size_out_1_tmp_mem = const_size_out_1;
							const_size_out_1_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_out_1_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_out_1, "%s\n", (const_size_out_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);
		}

		tcl_file.set_num(1, &tcl_file.const_size_out_1_depth);
		sprintf(tvout_const_size_out_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);

		// release memory allocation
		delete [] const_size_out_1_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "node_attr_0_0_V"
		delete [] tvin_node_attr_0_0_V;
		// release memory allocation: "node_attr_0_1_V"
		delete [] tvin_node_attr_0_1_V;
		// release memory allocation: "node_attr_0_2_V"
		delete [] tvin_node_attr_0_2_V;
		// release memory allocation: "node_attr_1_0_V"
		delete [] tvin_node_attr_1_0_V;
		// release memory allocation: "node_attr_1_1_V"
		delete [] tvin_node_attr_1_1_V;
		// release memory allocation: "node_attr_1_2_V"
		delete [] tvin_node_attr_1_2_V;
		// release memory allocation: "node_attr_2_0_V"
		delete [] tvin_node_attr_2_0_V;
		// release memory allocation: "node_attr_2_1_V"
		delete [] tvin_node_attr_2_1_V;
		// release memory allocation: "node_attr_2_2_V"
		delete [] tvin_node_attr_2_2_V;
		// release memory allocation: "node_attr_3_0_V"
		delete [] tvin_node_attr_3_0_V;
		// release memory allocation: "node_attr_3_1_V"
		delete [] tvin_node_attr_3_1_V;
		// release memory allocation: "node_attr_3_2_V"
		delete [] tvin_node_attr_3_2_V;
		// release memory allocation: "node_attr_4_0_V"
		delete [] tvin_node_attr_4_0_V;
		// release memory allocation: "node_attr_4_1_V"
		delete [] tvin_node_attr_4_1_V;
		// release memory allocation: "node_attr_4_2_V"
		delete [] tvin_node_attr_4_2_V;
		// release memory allocation: "node_attr_5_0_V"
		delete [] tvin_node_attr_5_0_V;
		// release memory allocation: "node_attr_5_1_V"
		delete [] tvin_node_attr_5_1_V;
		// release memory allocation: "node_attr_5_2_V"
		delete [] tvin_node_attr_5_2_V;
		// release memory allocation: "node_attr_6_0_V"
		delete [] tvin_node_attr_6_0_V;
		// release memory allocation: "node_attr_6_1_V"
		delete [] tvin_node_attr_6_1_V;
		// release memory allocation: "node_attr_6_2_V"
		delete [] tvin_node_attr_6_2_V;
		// release memory allocation: "node_attr_7_0_V"
		delete [] tvin_node_attr_7_0_V;
		// release memory allocation: "node_attr_7_1_V"
		delete [] tvin_node_attr_7_1_V;
		// release memory allocation: "node_attr_7_2_V"
		delete [] tvin_node_attr_7_2_V;
		// release memory allocation: "node_attr_8_0_V"
		delete [] tvin_node_attr_8_0_V;
		// release memory allocation: "node_attr_8_1_V"
		delete [] tvin_node_attr_8_1_V;
		// release memory allocation: "node_attr_8_2_V"
		delete [] tvin_node_attr_8_2_V;
		// release memory allocation: "node_attr_9_0_V"
		delete [] tvin_node_attr_9_0_V;
		// release memory allocation: "node_attr_9_1_V"
		delete [] tvin_node_attr_9_1_V;
		// release memory allocation: "node_attr_9_2_V"
		delete [] tvin_node_attr_9_2_V;
		// release memory allocation: "node_attr_10_0_V"
		delete [] tvin_node_attr_10_0_V;
		// release memory allocation: "node_attr_10_1_V"
		delete [] tvin_node_attr_10_1_V;
		// release memory allocation: "node_attr_10_2_V"
		delete [] tvin_node_attr_10_2_V;
		// release memory allocation: "edge_attr_0_0_V"
		delete [] tvin_edge_attr_0_0_V;
		// release memory allocation: "edge_attr_0_1_V"
		delete [] tvin_edge_attr_0_1_V;
		// release memory allocation: "edge_attr_0_2_V"
		delete [] tvin_edge_attr_0_2_V;
		// release memory allocation: "edge_attr_0_3_V"
		delete [] tvin_edge_attr_0_3_V;
		// release memory allocation: "edge_attr_1_0_V"
		delete [] tvin_edge_attr_1_0_V;
		// release memory allocation: "edge_attr_1_1_V"
		delete [] tvin_edge_attr_1_1_V;
		// release memory allocation: "edge_attr_1_2_V"
		delete [] tvin_edge_attr_1_2_V;
		// release memory allocation: "edge_attr_1_3_V"
		delete [] tvin_edge_attr_1_3_V;
		// release memory allocation: "edge_attr_2_0_V"
		delete [] tvin_edge_attr_2_0_V;
		// release memory allocation: "edge_attr_2_1_V"
		delete [] tvin_edge_attr_2_1_V;
		// release memory allocation: "edge_attr_2_2_V"
		delete [] tvin_edge_attr_2_2_V;
		// release memory allocation: "edge_attr_2_3_V"
		delete [] tvin_edge_attr_2_3_V;
		// release memory allocation: "edge_attr_3_0_V"
		delete [] tvin_edge_attr_3_0_V;
		// release memory allocation: "edge_attr_3_1_V"
		delete [] tvin_edge_attr_3_1_V;
		// release memory allocation: "edge_attr_3_2_V"
		delete [] tvin_edge_attr_3_2_V;
		// release memory allocation: "edge_attr_3_3_V"
		delete [] tvin_edge_attr_3_3_V;
		// release memory allocation: "edge_attr_4_0_V"
		delete [] tvin_edge_attr_4_0_V;
		// release memory allocation: "edge_attr_4_1_V"
		delete [] tvin_edge_attr_4_1_V;
		// release memory allocation: "edge_attr_4_2_V"
		delete [] tvin_edge_attr_4_2_V;
		// release memory allocation: "edge_attr_4_3_V"
		delete [] tvin_edge_attr_4_3_V;
		// release memory allocation: "edge_attr_5_0_V"
		delete [] tvin_edge_attr_5_0_V;
		// release memory allocation: "edge_attr_5_1_V"
		delete [] tvin_edge_attr_5_1_V;
		// release memory allocation: "edge_attr_5_2_V"
		delete [] tvin_edge_attr_5_2_V;
		// release memory allocation: "edge_attr_5_3_V"
		delete [] tvin_edge_attr_5_3_V;
		// release memory allocation: "edge_attr_6_0_V"
		delete [] tvin_edge_attr_6_0_V;
		// release memory allocation: "edge_attr_6_1_V"
		delete [] tvin_edge_attr_6_1_V;
		// release memory allocation: "edge_attr_6_2_V"
		delete [] tvin_edge_attr_6_2_V;
		// release memory allocation: "edge_attr_6_3_V"
		delete [] tvin_edge_attr_6_3_V;
		// release memory allocation: "edge_attr_7_0_V"
		delete [] tvin_edge_attr_7_0_V;
		// release memory allocation: "edge_attr_7_1_V"
		delete [] tvin_edge_attr_7_1_V;
		// release memory allocation: "edge_attr_7_2_V"
		delete [] tvin_edge_attr_7_2_V;
		// release memory allocation: "edge_attr_7_3_V"
		delete [] tvin_edge_attr_7_3_V;
		// release memory allocation: "edge_attr_8_0_V"
		delete [] tvin_edge_attr_8_0_V;
		// release memory allocation: "edge_attr_8_1_V"
		delete [] tvin_edge_attr_8_1_V;
		// release memory allocation: "edge_attr_8_2_V"
		delete [] tvin_edge_attr_8_2_V;
		// release memory allocation: "edge_attr_8_3_V"
		delete [] tvin_edge_attr_8_3_V;
		// release memory allocation: "edge_attr_9_0_V"
		delete [] tvin_edge_attr_9_0_V;
		// release memory allocation: "edge_attr_9_1_V"
		delete [] tvin_edge_attr_9_1_V;
		// release memory allocation: "edge_attr_9_2_V"
		delete [] tvin_edge_attr_9_2_V;
		// release memory allocation: "edge_attr_9_3_V"
		delete [] tvin_edge_attr_9_3_V;
		// release memory allocation: "edge_attr_10_0_V"
		delete [] tvin_edge_attr_10_0_V;
		// release memory allocation: "edge_attr_10_1_V"
		delete [] tvin_edge_attr_10_1_V;
		// release memory allocation: "edge_attr_10_2_V"
		delete [] tvin_edge_attr_10_2_V;
		// release memory allocation: "edge_attr_10_3_V"
		delete [] tvin_edge_attr_10_3_V;
		// release memory allocation: "edge_attr_11_0_V"
		delete [] tvin_edge_attr_11_0_V;
		// release memory allocation: "edge_attr_11_1_V"
		delete [] tvin_edge_attr_11_1_V;
		// release memory allocation: "edge_attr_11_2_V"
		delete [] tvin_edge_attr_11_2_V;
		// release memory allocation: "edge_attr_11_3_V"
		delete [] tvin_edge_attr_11_3_V;
		// release memory allocation: "edge_attr_12_0_V"
		delete [] tvin_edge_attr_12_0_V;
		// release memory allocation: "edge_attr_12_1_V"
		delete [] tvin_edge_attr_12_1_V;
		// release memory allocation: "edge_attr_12_2_V"
		delete [] tvin_edge_attr_12_2_V;
		// release memory allocation: "edge_attr_12_3_V"
		delete [] tvin_edge_attr_12_3_V;
		// release memory allocation: "edge_index_0_0_V"
		delete [] tvin_edge_index_0_0_V;
		// release memory allocation: "edge_index_0_1_V"
		delete [] tvin_edge_index_0_1_V;
		// release memory allocation: "edge_index_1_0_V"
		delete [] tvin_edge_index_1_0_V;
		// release memory allocation: "edge_index_1_1_V"
		delete [] tvin_edge_index_1_1_V;
		// release memory allocation: "edge_index_2_0_V"
		delete [] tvin_edge_index_2_0_V;
		// release memory allocation: "edge_index_2_1_V"
		delete [] tvin_edge_index_2_1_V;
		// release memory allocation: "edge_index_3_0_V"
		delete [] tvin_edge_index_3_0_V;
		// release memory allocation: "edge_index_3_1_V"
		delete [] tvin_edge_index_3_1_V;
		// release memory allocation: "edge_index_4_0_V"
		delete [] tvin_edge_index_4_0_V;
		// release memory allocation: "edge_index_4_1_V"
		delete [] tvin_edge_index_4_1_V;
		// release memory allocation: "edge_index_5_0_V"
		delete [] tvin_edge_index_5_0_V;
		// release memory allocation: "edge_index_5_1_V"
		delete [] tvin_edge_index_5_1_V;
		// release memory allocation: "edge_index_6_0_V"
		delete [] tvin_edge_index_6_0_V;
		// release memory allocation: "edge_index_6_1_V"
		delete [] tvin_edge_index_6_1_V;
		// release memory allocation: "edge_index_7_0_V"
		delete [] tvin_edge_index_7_0_V;
		// release memory allocation: "edge_index_7_1_V"
		delete [] tvin_edge_index_7_1_V;
		// release memory allocation: "edge_index_8_0_V"
		delete [] tvin_edge_index_8_0_V;
		// release memory allocation: "edge_index_8_1_V"
		delete [] tvin_edge_index_8_1_V;
		// release memory allocation: "edge_index_9_0_V"
		delete [] tvin_edge_index_9_0_V;
		// release memory allocation: "edge_index_9_1_V"
		delete [] tvin_edge_index_9_1_V;
		// release memory allocation: "edge_index_10_0_V"
		delete [] tvin_edge_index_10_0_V;
		// release memory allocation: "edge_index_10_1_V"
		delete [] tvin_edge_index_10_1_V;
		// release memory allocation: "edge_index_11_0_V"
		delete [] tvin_edge_index_11_0_V;
		// release memory allocation: "edge_index_11_1_V"
		delete [] tvin_edge_index_11_1_V;
		// release memory allocation: "edge_index_12_0_V"
		delete [] tvin_edge_index_12_0_V;
		// release memory allocation: "edge_index_12_1_V"
		delete [] tvin_edge_index_12_1_V;
		// release memory allocation: "layer11_out_0_V"
		delete [] tvout_layer11_out_0_V;
		delete [] tvin_layer11_out_0_V;
		// release memory allocation: "layer11_out_1_V"
		delete [] tvout_layer11_out_1_V;
		delete [] tvin_layer11_out_1_V;
		// release memory allocation: "layer11_out_2_V"
		delete [] tvout_layer11_out_2_V;
		delete [] tvin_layer11_out_2_V;
		// release memory allocation: "layer11_out_3_V"
		delete [] tvout_layer11_out_3_V;
		delete [] tvin_layer11_out_3_V;
		// release memory allocation: "layer11_out_4_V"
		delete [] tvout_layer11_out_4_V;
		delete [] tvin_layer11_out_4_V;
		// release memory allocation: "layer11_out_5_V"
		delete [] tvout_layer11_out_5_V;
		delete [] tvin_layer11_out_5_V;
		// release memory allocation: "layer11_out_6_V"
		delete [] tvout_layer11_out_6_V;
		delete [] tvin_layer11_out_6_V;
		// release memory allocation: "layer11_out_7_V"
		delete [] tvout_layer11_out_7_V;
		delete [] tvin_layer11_out_7_V;
		// release memory allocation: "layer11_out_8_V"
		delete [] tvout_layer11_out_8_V;
		delete [] tvin_layer11_out_8_V;
		// release memory allocation: "layer11_out_9_V"
		delete [] tvout_layer11_out_9_V;
		delete [] tvin_layer11_out_9_V;
		// release memory allocation: "layer11_out_10_V"
		delete [] tvout_layer11_out_10_V;
		delete [] tvin_layer11_out_10_V;
		// release memory allocation: "layer11_out_11_V"
		delete [] tvout_layer11_out_11_V;
		delete [] tvin_layer11_out_11_V;
		// release memory allocation: "layer11_out_12_V"
		delete [] tvout_layer11_out_12_V;
		delete [] tvin_layer11_out_12_V;
		// release memory allocation: "const_size_in_1"
		delete [] tvout_const_size_in_1;
		// release memory allocation: "const_size_in_2"
		delete [] tvout_const_size_in_2;
		// release memory allocation: "const_size_in_3"
		delete [] tvout_const_size_in_3;
		// release memory allocation: "const_size_out_1"
		delete [] tvout_const_size_out_1;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

