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


// wrapc file define: "node_attr_mat_s_V_V"
#define AUTOTB_TVIN_node_attr_mat_s_V_V  "../tv/cdatafile/c.example.autotvin_node_attr_mat_s_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V  "../tv/stream_size/stream_size_in_node_attr_mat_s_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_node_attr_mat_s_V_V  "../tv/stream_size/stream_ingress_status_node_attr_mat_s_V_V.dat"
// wrapc file define: "edge_attr_mat_s_0_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_0_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_0_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_0_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_0_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_0_V_V.dat"
// wrapc file define: "edge_attr_mat_s_1_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_1_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_1_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_1_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_1_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_1_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_1_V_V.dat"
// wrapc file define: "edge_attr_mat_s_2_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_2_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_2_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_2_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_2_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_2_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_2_V_V.dat"
// wrapc file define: "edge_attr_mat_s_3_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_3_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_3_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_3_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_3_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_3_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_3_V_V.dat"
// wrapc file define: "edge_attr_mat_s_4_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_4_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_4_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_4_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_4_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_4_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_4_V_V.dat"
// wrapc file define: "edge_attr_mat_s_5_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_5_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_5_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_5_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_5_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_5_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_5_V_V.dat"
// wrapc file define: "edge_attr_mat_s_6_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_6_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_6_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_6_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_6_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_6_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_6_V_V.dat"
// wrapc file define: "edge_attr_mat_s_7_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_7_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_7_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_7_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_7_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_7_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_7_V_V.dat"
// wrapc file define: "edge_attr_mat_s_8_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_8_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_8_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_8_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_8_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_8_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_8_V_V.dat"
// wrapc file define: "edge_attr_mat_s_9_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_9_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_9_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_9_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_9_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_9_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_9_V_V.dat"
// wrapc file define: "edge_attr_mat_s_10_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_10_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_10_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_10_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_10_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_10_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_10_V_V.dat"
// wrapc file define: "edge_attr_mat_s_11_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_11_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_11_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_11_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_11_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_11_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_11_V_V.dat"
// wrapc file define: "edge_attr_mat_s_12_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_12_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_12_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_12_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_12_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_12_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_12_V_V.dat"
// wrapc file define: "edge_attr_mat_s_13_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_13_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_13_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_13_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_13_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_13_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_13_V_V.dat"
// wrapc file define: "edge_attr_mat_s_14_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_14_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_14_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_14_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_14_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_14_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_14_V_V.dat"
// wrapc file define: "edge_attr_mat_s_15_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_15_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_15_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_15_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_15_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_15_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_15_V_V.dat"
// wrapc file define: "edge_attr_mat_s_16_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_16_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_16_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_16_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_16_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_16_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_16_V_V.dat"
// wrapc file define: "edge_attr_mat_s_17_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_17_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_17_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_17_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_17_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_17_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_17_V_V.dat"
// wrapc file define: "edge_attr_mat_s_18_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_18_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_18_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_18_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_18_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_18_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_18_V_V.dat"
// wrapc file define: "edge_attr_mat_s_19_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_19_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_19_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_19_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_19_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_19_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_19_V_V.dat"
// wrapc file define: "edge_attr_mat_s_20_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_20_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_20_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_20_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_20_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_20_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_20_V_V.dat"
// wrapc file define: "edge_attr_mat_s_21_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_21_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_21_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_21_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_21_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_21_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_21_V_V.dat"
// wrapc file define: "edge_attr_mat_s_22_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_22_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_22_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_22_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_22_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_22_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_22_V_V.dat"
// wrapc file define: "edge_attr_mat_s_23_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_23_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_23_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_23_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_23_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_23_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_23_V_V.dat"
// wrapc file define: "edge_attr_mat_s_24_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_24_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_24_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_24_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_24_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_24_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_24_V_V.dat"
// wrapc file define: "edge_attr_mat_s_25_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_25_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_25_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_25_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_25_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_25_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_25_V_V.dat"
// wrapc file define: "edge_attr_mat_s_26_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_26_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_26_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_26_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_26_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_26_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_26_V_V.dat"
// wrapc file define: "edge_attr_mat_s_27_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_27_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_27_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_27_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_27_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_27_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_27_V_V.dat"
// wrapc file define: "edge_attr_mat_s_28_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_28_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_28_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_28_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_28_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_28_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_28_V_V.dat"
// wrapc file define: "edge_attr_mat_s_29_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_29_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_29_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_29_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_29_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_29_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_29_V_V.dat"
// wrapc file define: "edge_attr_mat_s_30_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_30_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_30_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_30_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_30_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_30_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_30_V_V.dat"
// wrapc file define: "edge_attr_mat_s_31_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_31_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_31_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_31_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_31_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_31_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_31_V_V.dat"
// wrapc file define: "edge_attr_mat_s_32_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_32_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_32_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_32_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_32_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_32_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_32_V_V.dat"
// wrapc file define: "edge_attr_mat_s_33_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_33_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_33_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_33_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_33_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_33_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_33_V_V.dat"
// wrapc file define: "edge_attr_mat_s_34_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_34_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_34_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_34_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_34_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_34_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_34_V_V.dat"
// wrapc file define: "edge_attr_mat_s_35_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_35_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_35_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_35_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_35_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_35_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_35_V_V.dat"
// wrapc file define: "edge_attr_mat_s_36_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_36_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_36_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_36_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_36_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_36_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_36_V_V.dat"
// wrapc file define: "edge_attr_mat_s_37_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_37_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_37_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_37_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_37_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_37_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_37_V_V.dat"
// wrapc file define: "edge_attr_mat_s_38_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_38_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_38_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_38_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_38_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_38_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_38_V_V.dat"
// wrapc file define: "edge_attr_mat_s_39_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_39_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_39_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_39_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_39_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_39_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_39_V_V.dat"
// wrapc file define: "edge_attr_mat_s_40_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_40_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_40_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_40_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_40_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_40_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_40_V_V.dat"
// wrapc file define: "edge_attr_mat_s_41_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_41_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_41_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_41_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_41_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_41_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_41_V_V.dat"
// wrapc file define: "edge_attr_mat_s_42_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_42_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_42_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_42_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_42_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_42_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_42_V_V.dat"
// wrapc file define: "edge_attr_mat_s_43_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_43_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_43_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_43_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_43_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_43_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_43_V_V.dat"
// wrapc file define: "edge_attr_mat_s_44_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_44_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_44_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_44_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_44_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_44_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_44_V_V.dat"
// wrapc file define: "edge_attr_mat_s_45_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_45_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_45_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_45_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_45_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_45_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_45_V_V.dat"
// wrapc file define: "edge_attr_mat_s_46_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_46_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_46_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_46_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_46_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_46_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_46_V_V.dat"
// wrapc file define: "edge_attr_mat_s_47_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_47_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_47_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_47_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_47_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_47_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_47_V_V.dat"
// wrapc file define: "edge_attr_mat_s_48_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_48_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_48_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_48_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_48_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_48_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_48_V_V.dat"
// wrapc file define: "edge_attr_mat_s_49_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_49_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_49_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_49_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_49_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_49_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_49_V_V.dat"
// wrapc file define: "edge_attr_mat_s_50_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_50_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_50_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_50_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_50_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_50_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_50_V_V.dat"
// wrapc file define: "edge_attr_mat_s_51_V_V"
#define AUTOTB_TVIN_edge_attr_mat_s_51_V_V  "../tv/cdatafile/c.example.autotvin_edge_attr_mat_s_51_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_51_V_V  "../tv/stream_size/stream_size_in_edge_attr_mat_s_51_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_51_V_V  "../tv/stream_size/stream_ingress_status_edge_attr_mat_s_51_V_V.dat"
// wrapc file define: "edge_index_mat_s_0_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_0_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_0_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_0_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_0_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_0_V_V.dat"
// wrapc file define: "edge_index_mat_s_1_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_1_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_1_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_1_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_1_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_1_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_1_V_V.dat"
// wrapc file define: "edge_index_mat_s_2_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_2_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_2_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_2_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_2_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_2_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_2_V_V.dat"
// wrapc file define: "edge_index_mat_s_3_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_3_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_3_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_3_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_3_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_3_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_3_V_V.dat"
// wrapc file define: "edge_index_mat_s_4_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_4_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_4_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_4_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_4_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_4_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_4_V_V.dat"
// wrapc file define: "edge_index_mat_s_5_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_5_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_5_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_5_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_5_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_5_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_5_V_V.dat"
// wrapc file define: "edge_index_mat_s_6_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_6_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_6_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_6_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_6_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_6_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_6_V_V.dat"
// wrapc file define: "edge_index_mat_s_7_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_7_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_7_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_7_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_7_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_7_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_7_V_V.dat"
// wrapc file define: "edge_index_mat_s_8_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_8_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_8_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_8_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_8_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_8_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_8_V_V.dat"
// wrapc file define: "edge_index_mat_s_9_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_9_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_9_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_9_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_9_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_9_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_9_V_V.dat"
// wrapc file define: "edge_index_mat_s_10_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_10_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_10_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_10_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_10_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_10_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_10_V_V.dat"
// wrapc file define: "edge_index_mat_s_11_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_11_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_11_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_11_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_11_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_11_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_11_V_V.dat"
// wrapc file define: "edge_index_mat_s_12_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_12_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_12_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_12_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_12_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_12_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_12_V_V.dat"
// wrapc file define: "edge_index_mat_s_13_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_13_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_13_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_13_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_13_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_13_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_13_V_V.dat"
// wrapc file define: "edge_index_mat_s_14_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_14_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_14_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_14_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_14_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_14_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_14_V_V.dat"
// wrapc file define: "edge_index_mat_s_15_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_15_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_15_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_15_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_15_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_15_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_15_V_V.dat"
// wrapc file define: "edge_index_mat_s_16_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_16_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_16_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_16_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_16_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_16_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_16_V_V.dat"
// wrapc file define: "edge_index_mat_s_17_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_17_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_17_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_17_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_17_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_17_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_17_V_V.dat"
// wrapc file define: "edge_index_mat_s_18_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_18_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_18_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_18_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_18_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_18_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_18_V_V.dat"
// wrapc file define: "edge_index_mat_s_19_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_19_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_19_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_19_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_19_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_19_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_19_V_V.dat"
// wrapc file define: "edge_index_mat_s_20_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_20_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_20_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_20_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_20_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_20_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_20_V_V.dat"
// wrapc file define: "edge_index_mat_s_21_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_21_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_21_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_21_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_21_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_21_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_21_V_V.dat"
// wrapc file define: "edge_index_mat_s_22_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_22_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_22_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_22_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_22_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_22_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_22_V_V.dat"
// wrapc file define: "edge_index_mat_s_23_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_23_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_23_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_23_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_23_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_23_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_23_V_V.dat"
// wrapc file define: "edge_index_mat_s_24_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_24_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_24_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_24_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_24_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_24_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_24_V_V.dat"
// wrapc file define: "edge_index_mat_s_25_V_V"
#define AUTOTB_TVIN_edge_index_mat_s_25_V_V  "../tv/cdatafile/c.example.autotvin_edge_index_mat_s_25_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_edge_index_mat_s_25_V_V  "../tv/stream_size/stream_size_in_edge_index_mat_s_25_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_25_V_V  "../tv/stream_size/stream_ingress_status_edge_index_mat_s_25_V_V.dat"
// wrapc file define: "layer11_out_s_0_V_V"
#define AUTOTB_TVOUT_layer11_out_s_0_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_0_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_0_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_0_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_0_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_0_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_0_V_V.dat"
// wrapc file define: "layer11_out_s_1_V_V"
#define AUTOTB_TVOUT_layer11_out_s_1_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_1_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_1_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_1_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_1_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_1_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_1_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_1_V_V.dat"
// wrapc file define: "layer11_out_s_2_V_V"
#define AUTOTB_TVOUT_layer11_out_s_2_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_2_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_2_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_2_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_2_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_2_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_2_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_2_V_V.dat"
// wrapc file define: "layer11_out_s_3_V_V"
#define AUTOTB_TVOUT_layer11_out_s_3_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_3_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_3_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_3_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_3_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_3_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_3_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_3_V_V.dat"
// wrapc file define: "layer11_out_s_4_V_V"
#define AUTOTB_TVOUT_layer11_out_s_4_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_4_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_4_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_4_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_4_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_4_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_4_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_4_V_V.dat"
// wrapc file define: "layer11_out_s_5_V_V"
#define AUTOTB_TVOUT_layer11_out_s_5_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_5_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_5_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_5_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_5_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_5_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_5_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_5_V_V.dat"
// wrapc file define: "layer11_out_s_6_V_V"
#define AUTOTB_TVOUT_layer11_out_s_6_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_6_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_6_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_6_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_6_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_6_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_6_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_6_V_V.dat"
// wrapc file define: "layer11_out_s_7_V_V"
#define AUTOTB_TVOUT_layer11_out_s_7_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_7_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_7_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_7_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_7_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_7_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_7_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_7_V_V.dat"
// wrapc file define: "layer11_out_s_8_V_V"
#define AUTOTB_TVOUT_layer11_out_s_8_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_8_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_8_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_8_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_8_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_8_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_8_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_8_V_V.dat"
// wrapc file define: "layer11_out_s_9_V_V"
#define AUTOTB_TVOUT_layer11_out_s_9_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_9_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_9_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_9_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_9_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_9_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_9_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_9_V_V.dat"
// wrapc file define: "layer11_out_s_10_V_V"
#define AUTOTB_TVOUT_layer11_out_s_10_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_10_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_10_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_10_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_10_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_10_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_10_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_10_V_V.dat"
// wrapc file define: "layer11_out_s_11_V_V"
#define AUTOTB_TVOUT_layer11_out_s_11_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_11_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_11_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_11_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_11_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_11_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_11_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_11_V_V.dat"
// wrapc file define: "layer11_out_s_12_V_V"
#define AUTOTB_TVOUT_layer11_out_s_12_V_V  "../tv/cdatafile/c.example.autotvout_layer11_out_s_12_V_V.dat"
#define AUTOTB_TVIN_layer11_out_s_12_V_V  "../tv/cdatafile/c.example.autotvin_layer11_out_s_12_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer11_out_s_12_V_V  "../tv/stream_size/stream_size_out_layer11_out_s_12_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_12_V_V  "../tv/stream_size/stream_egress_status_layer11_out_s_12_V_V.dat"
// wrapc file define: "const_size_in_1"
#define AUTOTB_TVOUT_const_size_in_1  "../tv/cdatafile/c.example.autotvout_const_size_in_1.dat"
// wrapc file define: "const_size_in_2"
#define AUTOTB_TVOUT_const_size_in_2  "../tv/cdatafile/c.example.autotvout_const_size_in_2.dat"
// wrapc file define: "const_size_in_3"
#define AUTOTB_TVOUT_const_size_in_3  "../tv/cdatafile/c.example.autotvout_const_size_in_3.dat"
// wrapc file define: "const_size_out_1"
#define AUTOTB_TVOUT_const_size_out_1  "../tv/cdatafile/c.example.autotvout_const_size_out_1.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "layer11_out_s_0_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_0_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_0_V_V.dat"
// tvout file define: "layer11_out_s_1_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_1_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_1_V_V.dat"
// tvout file define: "layer11_out_s_2_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_2_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_2_V_V.dat"
// tvout file define: "layer11_out_s_3_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_3_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_3_V_V.dat"
// tvout file define: "layer11_out_s_4_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_4_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_4_V_V.dat"
// tvout file define: "layer11_out_s_5_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_5_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_5_V_V.dat"
// tvout file define: "layer11_out_s_6_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_6_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_6_V_V.dat"
// tvout file define: "layer11_out_s_7_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_7_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_7_V_V.dat"
// tvout file define: "layer11_out_s_8_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_8_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_8_V_V.dat"
// tvout file define: "layer11_out_s_9_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_9_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_9_V_V.dat"
// tvout file define: "layer11_out_s_10_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_10_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_10_V_V.dat"
// tvout file define: "layer11_out_s_11_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_11_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_11_V_V.dat"
// tvout file define: "layer11_out_s_12_V_V"
#define AUTOTB_TVOUT_PC_layer11_out_s_12_V_V  "../tv/rtldatafile/rtl.example.autotvout_layer11_out_s_12_V_V.dat"
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
			node_attr_mat_s_V_V_depth = 0;
			edge_attr_mat_s_0_V_V_depth = 0;
			edge_attr_mat_s_1_V_V_depth = 0;
			edge_attr_mat_s_2_V_V_depth = 0;
			edge_attr_mat_s_3_V_V_depth = 0;
			edge_attr_mat_s_4_V_V_depth = 0;
			edge_attr_mat_s_5_V_V_depth = 0;
			edge_attr_mat_s_6_V_V_depth = 0;
			edge_attr_mat_s_7_V_V_depth = 0;
			edge_attr_mat_s_8_V_V_depth = 0;
			edge_attr_mat_s_9_V_V_depth = 0;
			edge_attr_mat_s_10_V_V_depth = 0;
			edge_attr_mat_s_11_V_V_depth = 0;
			edge_attr_mat_s_12_V_V_depth = 0;
			edge_attr_mat_s_13_V_V_depth = 0;
			edge_attr_mat_s_14_V_V_depth = 0;
			edge_attr_mat_s_15_V_V_depth = 0;
			edge_attr_mat_s_16_V_V_depth = 0;
			edge_attr_mat_s_17_V_V_depth = 0;
			edge_attr_mat_s_18_V_V_depth = 0;
			edge_attr_mat_s_19_V_V_depth = 0;
			edge_attr_mat_s_20_V_V_depth = 0;
			edge_attr_mat_s_21_V_V_depth = 0;
			edge_attr_mat_s_22_V_V_depth = 0;
			edge_attr_mat_s_23_V_V_depth = 0;
			edge_attr_mat_s_24_V_V_depth = 0;
			edge_attr_mat_s_25_V_V_depth = 0;
			edge_attr_mat_s_26_V_V_depth = 0;
			edge_attr_mat_s_27_V_V_depth = 0;
			edge_attr_mat_s_28_V_V_depth = 0;
			edge_attr_mat_s_29_V_V_depth = 0;
			edge_attr_mat_s_30_V_V_depth = 0;
			edge_attr_mat_s_31_V_V_depth = 0;
			edge_attr_mat_s_32_V_V_depth = 0;
			edge_attr_mat_s_33_V_V_depth = 0;
			edge_attr_mat_s_34_V_V_depth = 0;
			edge_attr_mat_s_35_V_V_depth = 0;
			edge_attr_mat_s_36_V_V_depth = 0;
			edge_attr_mat_s_37_V_V_depth = 0;
			edge_attr_mat_s_38_V_V_depth = 0;
			edge_attr_mat_s_39_V_V_depth = 0;
			edge_attr_mat_s_40_V_V_depth = 0;
			edge_attr_mat_s_41_V_V_depth = 0;
			edge_attr_mat_s_42_V_V_depth = 0;
			edge_attr_mat_s_43_V_V_depth = 0;
			edge_attr_mat_s_44_V_V_depth = 0;
			edge_attr_mat_s_45_V_V_depth = 0;
			edge_attr_mat_s_46_V_V_depth = 0;
			edge_attr_mat_s_47_V_V_depth = 0;
			edge_attr_mat_s_48_V_V_depth = 0;
			edge_attr_mat_s_49_V_V_depth = 0;
			edge_attr_mat_s_50_V_V_depth = 0;
			edge_attr_mat_s_51_V_V_depth = 0;
			edge_index_mat_s_0_V_V_depth = 0;
			edge_index_mat_s_1_V_V_depth = 0;
			edge_index_mat_s_2_V_V_depth = 0;
			edge_index_mat_s_3_V_V_depth = 0;
			edge_index_mat_s_4_V_V_depth = 0;
			edge_index_mat_s_5_V_V_depth = 0;
			edge_index_mat_s_6_V_V_depth = 0;
			edge_index_mat_s_7_V_V_depth = 0;
			edge_index_mat_s_8_V_V_depth = 0;
			edge_index_mat_s_9_V_V_depth = 0;
			edge_index_mat_s_10_V_V_depth = 0;
			edge_index_mat_s_11_V_V_depth = 0;
			edge_index_mat_s_12_V_V_depth = 0;
			edge_index_mat_s_13_V_V_depth = 0;
			edge_index_mat_s_14_V_V_depth = 0;
			edge_index_mat_s_15_V_V_depth = 0;
			edge_index_mat_s_16_V_V_depth = 0;
			edge_index_mat_s_17_V_V_depth = 0;
			edge_index_mat_s_18_V_V_depth = 0;
			edge_index_mat_s_19_V_V_depth = 0;
			edge_index_mat_s_20_V_V_depth = 0;
			edge_index_mat_s_21_V_V_depth = 0;
			edge_index_mat_s_22_V_V_depth = 0;
			edge_index_mat_s_23_V_V_depth = 0;
			edge_index_mat_s_24_V_V_depth = 0;
			edge_index_mat_s_25_V_V_depth = 0;
			layer11_out_s_0_V_V_depth = 0;
			layer11_out_s_1_V_V_depth = 0;
			layer11_out_s_2_V_V_depth = 0;
			layer11_out_s_3_V_V_depth = 0;
			layer11_out_s_4_V_V_depth = 0;
			layer11_out_s_5_V_V_depth = 0;
			layer11_out_s_6_V_V_depth = 0;
			layer11_out_s_7_V_V_depth = 0;
			layer11_out_s_8_V_V_depth = 0;
			layer11_out_s_9_V_V_depth = 0;
			layer11_out_s_10_V_V_depth = 0;
			layer11_out_s_11_V_V_depth = 0;
			layer11_out_s_12_V_V_depth = 0;
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
			total_list << "{node_attr_mat_s_V_V " << node_attr_mat_s_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_0_V_V " << edge_attr_mat_s_0_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_1_V_V " << edge_attr_mat_s_1_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_2_V_V " << edge_attr_mat_s_2_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_3_V_V " << edge_attr_mat_s_3_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_4_V_V " << edge_attr_mat_s_4_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_5_V_V " << edge_attr_mat_s_5_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_6_V_V " << edge_attr_mat_s_6_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_7_V_V " << edge_attr_mat_s_7_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_8_V_V " << edge_attr_mat_s_8_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_9_V_V " << edge_attr_mat_s_9_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_10_V_V " << edge_attr_mat_s_10_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_11_V_V " << edge_attr_mat_s_11_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_12_V_V " << edge_attr_mat_s_12_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_13_V_V " << edge_attr_mat_s_13_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_14_V_V " << edge_attr_mat_s_14_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_15_V_V " << edge_attr_mat_s_15_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_16_V_V " << edge_attr_mat_s_16_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_17_V_V " << edge_attr_mat_s_17_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_18_V_V " << edge_attr_mat_s_18_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_19_V_V " << edge_attr_mat_s_19_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_20_V_V " << edge_attr_mat_s_20_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_21_V_V " << edge_attr_mat_s_21_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_22_V_V " << edge_attr_mat_s_22_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_23_V_V " << edge_attr_mat_s_23_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_24_V_V " << edge_attr_mat_s_24_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_25_V_V " << edge_attr_mat_s_25_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_26_V_V " << edge_attr_mat_s_26_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_27_V_V " << edge_attr_mat_s_27_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_28_V_V " << edge_attr_mat_s_28_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_29_V_V " << edge_attr_mat_s_29_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_30_V_V " << edge_attr_mat_s_30_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_31_V_V " << edge_attr_mat_s_31_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_32_V_V " << edge_attr_mat_s_32_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_33_V_V " << edge_attr_mat_s_33_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_34_V_V " << edge_attr_mat_s_34_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_35_V_V " << edge_attr_mat_s_35_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_36_V_V " << edge_attr_mat_s_36_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_37_V_V " << edge_attr_mat_s_37_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_38_V_V " << edge_attr_mat_s_38_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_39_V_V " << edge_attr_mat_s_39_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_40_V_V " << edge_attr_mat_s_40_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_41_V_V " << edge_attr_mat_s_41_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_42_V_V " << edge_attr_mat_s_42_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_43_V_V " << edge_attr_mat_s_43_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_44_V_V " << edge_attr_mat_s_44_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_45_V_V " << edge_attr_mat_s_45_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_46_V_V " << edge_attr_mat_s_46_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_47_V_V " << edge_attr_mat_s_47_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_48_V_V " << edge_attr_mat_s_48_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_49_V_V " << edge_attr_mat_s_49_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_50_V_V " << edge_attr_mat_s_50_V_V_depth << "}\n";
			total_list << "{edge_attr_mat_s_51_V_V " << edge_attr_mat_s_51_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_0_V_V " << edge_index_mat_s_0_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_1_V_V " << edge_index_mat_s_1_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_2_V_V " << edge_index_mat_s_2_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_3_V_V " << edge_index_mat_s_3_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_4_V_V " << edge_index_mat_s_4_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_5_V_V " << edge_index_mat_s_5_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_6_V_V " << edge_index_mat_s_6_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_7_V_V " << edge_index_mat_s_7_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_8_V_V " << edge_index_mat_s_8_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_9_V_V " << edge_index_mat_s_9_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_10_V_V " << edge_index_mat_s_10_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_11_V_V " << edge_index_mat_s_11_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_12_V_V " << edge_index_mat_s_12_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_13_V_V " << edge_index_mat_s_13_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_14_V_V " << edge_index_mat_s_14_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_15_V_V " << edge_index_mat_s_15_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_16_V_V " << edge_index_mat_s_16_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_17_V_V " << edge_index_mat_s_17_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_18_V_V " << edge_index_mat_s_18_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_19_V_V " << edge_index_mat_s_19_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_20_V_V " << edge_index_mat_s_20_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_21_V_V " << edge_index_mat_s_21_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_22_V_V " << edge_index_mat_s_22_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_23_V_V " << edge_index_mat_s_23_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_24_V_V " << edge_index_mat_s_24_V_V_depth << "}\n";
			total_list << "{edge_index_mat_s_25_V_V " << edge_index_mat_s_25_V_V_depth << "}\n";
			total_list << "{layer11_out_s_0_V_V " << layer11_out_s_0_V_V_depth << "}\n";
			total_list << "{layer11_out_s_1_V_V " << layer11_out_s_1_V_V_depth << "}\n";
			total_list << "{layer11_out_s_2_V_V " << layer11_out_s_2_V_V_depth << "}\n";
			total_list << "{layer11_out_s_3_V_V " << layer11_out_s_3_V_V_depth << "}\n";
			total_list << "{layer11_out_s_4_V_V " << layer11_out_s_4_V_V_depth << "}\n";
			total_list << "{layer11_out_s_5_V_V " << layer11_out_s_5_V_V_depth << "}\n";
			total_list << "{layer11_out_s_6_V_V " << layer11_out_s_6_V_V_depth << "}\n";
			total_list << "{layer11_out_s_7_V_V " << layer11_out_s_7_V_V_depth << "}\n";
			total_list << "{layer11_out_s_8_V_V " << layer11_out_s_8_V_V_depth << "}\n";
			total_list << "{layer11_out_s_9_V_V " << layer11_out_s_9_V_V_depth << "}\n";
			total_list << "{layer11_out_s_10_V_V " << layer11_out_s_10_V_V_depth << "}\n";
			total_list << "{layer11_out_s_11_V_V " << layer11_out_s_11_V_V_depth << "}\n";
			total_list << "{layer11_out_s_12_V_V " << layer11_out_s_12_V_V_depth << "}\n";
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
		int node_attr_mat_s_V_V_depth;
		int edge_attr_mat_s_0_V_V_depth;
		int edge_attr_mat_s_1_V_V_depth;
		int edge_attr_mat_s_2_V_V_depth;
		int edge_attr_mat_s_3_V_V_depth;
		int edge_attr_mat_s_4_V_V_depth;
		int edge_attr_mat_s_5_V_V_depth;
		int edge_attr_mat_s_6_V_V_depth;
		int edge_attr_mat_s_7_V_V_depth;
		int edge_attr_mat_s_8_V_V_depth;
		int edge_attr_mat_s_9_V_V_depth;
		int edge_attr_mat_s_10_V_V_depth;
		int edge_attr_mat_s_11_V_V_depth;
		int edge_attr_mat_s_12_V_V_depth;
		int edge_attr_mat_s_13_V_V_depth;
		int edge_attr_mat_s_14_V_V_depth;
		int edge_attr_mat_s_15_V_V_depth;
		int edge_attr_mat_s_16_V_V_depth;
		int edge_attr_mat_s_17_V_V_depth;
		int edge_attr_mat_s_18_V_V_depth;
		int edge_attr_mat_s_19_V_V_depth;
		int edge_attr_mat_s_20_V_V_depth;
		int edge_attr_mat_s_21_V_V_depth;
		int edge_attr_mat_s_22_V_V_depth;
		int edge_attr_mat_s_23_V_V_depth;
		int edge_attr_mat_s_24_V_V_depth;
		int edge_attr_mat_s_25_V_V_depth;
		int edge_attr_mat_s_26_V_V_depth;
		int edge_attr_mat_s_27_V_V_depth;
		int edge_attr_mat_s_28_V_V_depth;
		int edge_attr_mat_s_29_V_V_depth;
		int edge_attr_mat_s_30_V_V_depth;
		int edge_attr_mat_s_31_V_V_depth;
		int edge_attr_mat_s_32_V_V_depth;
		int edge_attr_mat_s_33_V_V_depth;
		int edge_attr_mat_s_34_V_V_depth;
		int edge_attr_mat_s_35_V_V_depth;
		int edge_attr_mat_s_36_V_V_depth;
		int edge_attr_mat_s_37_V_V_depth;
		int edge_attr_mat_s_38_V_V_depth;
		int edge_attr_mat_s_39_V_V_depth;
		int edge_attr_mat_s_40_V_V_depth;
		int edge_attr_mat_s_41_V_V_depth;
		int edge_attr_mat_s_42_V_V_depth;
		int edge_attr_mat_s_43_V_V_depth;
		int edge_attr_mat_s_44_V_V_depth;
		int edge_attr_mat_s_45_V_V_depth;
		int edge_attr_mat_s_46_V_V_depth;
		int edge_attr_mat_s_47_V_V_depth;
		int edge_attr_mat_s_48_V_V_depth;
		int edge_attr_mat_s_49_V_V_depth;
		int edge_attr_mat_s_50_V_V_depth;
		int edge_attr_mat_s_51_V_V_depth;
		int edge_index_mat_s_0_V_V_depth;
		int edge_index_mat_s_1_V_V_depth;
		int edge_index_mat_s_2_V_V_depth;
		int edge_index_mat_s_3_V_V_depth;
		int edge_index_mat_s_4_V_V_depth;
		int edge_index_mat_s_5_V_V_depth;
		int edge_index_mat_s_6_V_V_depth;
		int edge_index_mat_s_7_V_V_depth;
		int edge_index_mat_s_8_V_V_depth;
		int edge_index_mat_s_9_V_V_depth;
		int edge_index_mat_s_10_V_V_depth;
		int edge_index_mat_s_11_V_V_depth;
		int edge_index_mat_s_12_V_V_depth;
		int edge_index_mat_s_13_V_V_depth;
		int edge_index_mat_s_14_V_V_depth;
		int edge_index_mat_s_15_V_V_depth;
		int edge_index_mat_s_16_V_V_depth;
		int edge_index_mat_s_17_V_V_depth;
		int edge_index_mat_s_18_V_V_depth;
		int edge_index_mat_s_19_V_V_depth;
		int edge_index_mat_s_20_V_V_depth;
		int edge_index_mat_s_21_V_V_depth;
		int edge_index_mat_s_22_V_V_depth;
		int edge_index_mat_s_23_V_V_depth;
		int edge_index_mat_s_24_V_V_depth;
		int edge_index_mat_s_25_V_V_depth;
		int layer11_out_s_0_V_V_depth;
		int layer11_out_s_1_V_V_depth;
		int layer11_out_s_2_V_V_depth;
		int layer11_out_s_3_V_V_depth;
		int layer11_out_s_4_V_V_depth;
		int layer11_out_s_5_V_V_depth;
		int layer11_out_s_6_V_V_depth;
		int layer11_out_s_7_V_V_depth;
		int layer11_out_s_8_V_V_depth;
		int layer11_out_s_9_V_V_depth;
		int layer11_out_s_10_V_V_depth;
		int layer11_out_s_11_V_V_depth;
		int layer11_out_s_12_V_V_depth;
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
hls::stream<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > node_attr_mat_s[11],
hls::stream<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > edge_attr_mat_s[52],
hls::stream<ap_uint<14> > edge_index_mat_s[26],
hls::stream<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > layer11_out_s[13],
unsigned short (&const_size_in_1),
unsigned short (&const_size_in_2),
unsigned short (&const_size_in_3),
unsigned short (&const_size_out_1));

void AESL_WRAP_example (
hls::stream<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > node_attr_mat_s[11],
hls::stream<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > edge_attr_mat_s[52],
hls::stream<ap_uint<14> > edge_index_mat_s[26],
hls::stream<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > layer11_out_s[13],
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

		// pop stream input: "node_attr_mat_s[0]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // pop_size
			int aesl_tmp_307 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_307; i++)
			{
				node_attr_mat_s[0].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "node_attr_mat_s[1]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // pop_size
			int aesl_tmp_310 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_310; i++)
			{
				node_attr_mat_s[1].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "node_attr_mat_s[2]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // pop_size
			int aesl_tmp_313 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_313; i++)
			{
				node_attr_mat_s[2].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "node_attr_mat_s[3]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // pop_size
			int aesl_tmp_316 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_316; i++)
			{
				node_attr_mat_s[3].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "node_attr_mat_s[4]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // pop_size
			int aesl_tmp_319 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_319; i++)
			{
				node_attr_mat_s[4].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "node_attr_mat_s[5]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // pop_size
			int aesl_tmp_322 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_322; i++)
			{
				node_attr_mat_s[5].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "node_attr_mat_s[6]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // pop_size
			int aesl_tmp_325 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_325; i++)
			{
				node_attr_mat_s[6].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "node_attr_mat_s[7]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // pop_size
			int aesl_tmp_328 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_328; i++)
			{
				node_attr_mat_s[7].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "node_attr_mat_s[8]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // pop_size
			int aesl_tmp_331 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_331; i++)
			{
				node_attr_mat_s[8].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "node_attr_mat_s[9]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // pop_size
			int aesl_tmp_334 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_334; i++)
			{
				node_attr_mat_s[9].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "node_attr_mat_s[10]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // pop_size
			int aesl_tmp_337 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_337; i++)
			{
				node_attr_mat_s[10].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[0]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_340 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_340; i++)
			{
				edge_attr_mat_s[0].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[1]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_343 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_343; i++)
			{
				edge_attr_mat_s[1].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[2]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_346 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_346; i++)
			{
				edge_attr_mat_s[2].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[3]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_349 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_349; i++)
			{
				edge_attr_mat_s[3].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[4]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_352 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_352; i++)
			{
				edge_attr_mat_s[4].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[5]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_355 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_355; i++)
			{
				edge_attr_mat_s[5].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[6]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_358 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_358; i++)
			{
				edge_attr_mat_s[6].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[7]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_361 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_361; i++)
			{
				edge_attr_mat_s[7].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[8]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_364 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_364; i++)
			{
				edge_attr_mat_s[8].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[9]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_367 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_367; i++)
			{
				edge_attr_mat_s[9].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[10]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_370 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_370; i++)
			{
				edge_attr_mat_s[10].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[11]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_373 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_373; i++)
			{
				edge_attr_mat_s[11].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[12]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_376 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_376; i++)
			{
				edge_attr_mat_s[12].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[13]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_379 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_379; i++)
			{
				edge_attr_mat_s[13].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[14]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_382 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_382; i++)
			{
				edge_attr_mat_s[14].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[15]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_385 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_385; i++)
			{
				edge_attr_mat_s[15].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[16]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_388 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_388; i++)
			{
				edge_attr_mat_s[16].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[17]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_391 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_391; i++)
			{
				edge_attr_mat_s[17].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[18]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_394 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_394; i++)
			{
				edge_attr_mat_s[18].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[19]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_397 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_397; i++)
			{
				edge_attr_mat_s[19].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[20]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_400 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_400; i++)
			{
				edge_attr_mat_s[20].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[21]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_403 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_403; i++)
			{
				edge_attr_mat_s[21].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[22]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_406 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_406; i++)
			{
				edge_attr_mat_s[22].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[23]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_409 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_409; i++)
			{
				edge_attr_mat_s[23].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[24]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_412 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_412; i++)
			{
				edge_attr_mat_s[24].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[25]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_415 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_415; i++)
			{
				edge_attr_mat_s[25].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[26]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_418 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_418; i++)
			{
				edge_attr_mat_s[26].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[27]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_421 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_421; i++)
			{
				edge_attr_mat_s[27].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[28]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_424 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_424; i++)
			{
				edge_attr_mat_s[28].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[29]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_427 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_427; i++)
			{
				edge_attr_mat_s[29].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[30]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_430 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_430; i++)
			{
				edge_attr_mat_s[30].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[31]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_433 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_433; i++)
			{
				edge_attr_mat_s[31].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[32]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_436 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_436; i++)
			{
				edge_attr_mat_s[32].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[33]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_439 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_439; i++)
			{
				edge_attr_mat_s[33].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[34]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_442 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_442; i++)
			{
				edge_attr_mat_s[34].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[35]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_445 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_445; i++)
			{
				edge_attr_mat_s[35].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[36]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_448 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_448; i++)
			{
				edge_attr_mat_s[36].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[37]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_451 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_451; i++)
			{
				edge_attr_mat_s[37].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[38]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_454 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_454; i++)
			{
				edge_attr_mat_s[38].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[39]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_457 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_457; i++)
			{
				edge_attr_mat_s[39].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[40]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_460 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_460; i++)
			{
				edge_attr_mat_s[40].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[41]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_463 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_463; i++)
			{
				edge_attr_mat_s[41].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[42]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_466 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_466; i++)
			{
				edge_attr_mat_s[42].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[43]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_469 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_469; i++)
			{
				edge_attr_mat_s[43].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[44]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_472 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_472; i++)
			{
				edge_attr_mat_s[44].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[45]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_475 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_475; i++)
			{
				edge_attr_mat_s[45].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[46]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_478 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_478; i++)
			{
				edge_attr_mat_s[46].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[47]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_481 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_481; i++)
			{
				edge_attr_mat_s[47].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[48]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_484 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_484; i++)
			{
				edge_attr_mat_s[48].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[49]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_487 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_487; i++)
			{
				edge_attr_mat_s[49].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[50]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_490 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_490; i++)
			{
				edge_attr_mat_s[50].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_attr_mat_s[51]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_493 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_493; i++)
			{
				edge_attr_mat_s[51].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[0]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_496 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_496; i++)
			{
				edge_index_mat_s[0].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[1]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_499 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_499; i++)
			{
				edge_index_mat_s[1].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[2]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_502 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_502; i++)
			{
				edge_index_mat_s[2].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[3]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_505 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_505; i++)
			{
				edge_index_mat_s[3].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[4]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_508 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_508; i++)
			{
				edge_index_mat_s[4].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[5]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_511 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_511; i++)
			{
				edge_index_mat_s[5].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[6]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_514 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_514; i++)
			{
				edge_index_mat_s[6].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[7]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_517 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_517; i++)
			{
				edge_index_mat_s[7].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[8]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_520 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_520; i++)
			{
				edge_index_mat_s[8].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[9]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_523 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_523; i++)
			{
				edge_index_mat_s[9].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[10]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_526 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_526; i++)
			{
				edge_index_mat_s[10].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[11]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_529 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_529; i++)
			{
				edge_index_mat_s[11].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[12]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_532 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_532; i++)
			{
				edge_index_mat_s[12].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[13]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_535 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_535; i++)
			{
				edge_index_mat_s[13].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[14]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_538 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_538; i++)
			{
				edge_index_mat_s[14].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[15]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_541 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_541; i++)
			{
				edge_index_mat_s[15].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[16]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_544 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_544; i++)
			{
				edge_index_mat_s[16].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[17]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_547 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_547; i++)
			{
				edge_index_mat_s[17].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[18]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_550 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_550; i++)
			{
				edge_index_mat_s[18].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[19]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_553 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_553; i++)
			{
				edge_index_mat_s[19].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[20]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_556 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_556; i++)
			{
				edge_index_mat_s[20].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[21]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_559 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_559; i++)
			{
				edge_index_mat_s[21].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[22]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_562 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_562; i++)
			{
				edge_index_mat_s[22].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[23]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_565 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_565; i++)
			{
				edge_index_mat_s[23].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[24]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_568 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_568; i++)
			{
				edge_index_mat_s[24].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "edge_index_mat_s[25]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // pop_size
			int aesl_tmp_571 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_571; i++)
			{
				edge_index_mat_s[25].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[0]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_573;
		int aesl_tmp_574;
		int aesl_tmp_575 = 0;

		// read output stream size: "layer11_out_s[0]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_574 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[1]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_576;
		int aesl_tmp_577;
		int aesl_tmp_578 = 0;

		// read output stream size: "layer11_out_s[1]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_577 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[2]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_579;
		int aesl_tmp_580;
		int aesl_tmp_581 = 0;

		// read output stream size: "layer11_out_s[2]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_580 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[3]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_582;
		int aesl_tmp_583;
		int aesl_tmp_584 = 0;

		// read output stream size: "layer11_out_s[3]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_583 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[4]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_585;
		int aesl_tmp_586;
		int aesl_tmp_587 = 0;

		// read output stream size: "layer11_out_s[4]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_586 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[5]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_588;
		int aesl_tmp_589;
		int aesl_tmp_590 = 0;

		// read output stream size: "layer11_out_s[5]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_589 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[6]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_591;
		int aesl_tmp_592;
		int aesl_tmp_593 = 0;

		// read output stream size: "layer11_out_s[6]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_592 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[7]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_594;
		int aesl_tmp_595;
		int aesl_tmp_596 = 0;

		// read output stream size: "layer11_out_s[7]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_595 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[8]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_597;
		int aesl_tmp_598;
		int aesl_tmp_599 = 0;

		// read output stream size: "layer11_out_s[8]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_598 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[9]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_600;
		int aesl_tmp_601;
		int aesl_tmp_602 = 0;

		// read output stream size: "layer11_out_s[9]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_601 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[10]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_603;
		int aesl_tmp_604;
		int aesl_tmp_605 = 0;

		// read output stream size: "layer11_out_s[10]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_604 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[11]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_606;
		int aesl_tmp_607;
		int aesl_tmp_608 = 0;

		// read output stream size: "layer11_out_s[11]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_607 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer11_out_s[12]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_609;
		int aesl_tmp_610;
		int aesl_tmp_611 = 0;

		// read output stream size: "layer11_out_s[12]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // pop_size
			aesl_tmp_610 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, AESL_token); // [[/transaction]]
		}

		// output port post check: "layer11_out_s_0_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_0_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_0_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_0_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_0_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_0_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_0_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_0_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_0_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_574)
			{
				aesl_tmp_574 = i;
			}

			if (aesl_tmp_574 > 0 && aesl_tmp_573.size() < aesl_tmp_574)
			{
				int aesl_tmp_573_size = aesl_tmp_573.size();

				for (int tmp_aesl_tmp_573 = 0; tmp_aesl_tmp_573 < aesl_tmp_574 - aesl_tmp_573_size; tmp_aesl_tmp_573++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_573.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_0_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_0_0_2 = new sc_lv<14>[aesl_tmp_574 - aesl_tmp_575];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_575) => (aesl_tmp_574 - 1) @ (1)
							for (int i_0 = aesl_tmp_575; i_0 <= aesl_tmp_574 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_573[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_0_0_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_0_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_575) => (aesl_tmp_574 - 1) @ (1)
							for (int i_0 = aesl_tmp_575; i_0 <= aesl_tmp_574 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_573[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_573[0]
								// output_left_conversion : (aesl_tmp_573[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_573[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_573[i_0]).range() = (layer11_out_s_V_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer11_out_s_1_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_1_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_1_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_1_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_1_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_1_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_1_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_1_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_1_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_1_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_577)
			{
				aesl_tmp_577 = i;
			}

			if (aesl_tmp_577 > 0 && aesl_tmp_576.size() < aesl_tmp_577)
			{
				int aesl_tmp_576_size = aesl_tmp_576.size();

				for (int tmp_aesl_tmp_576 = 0; tmp_aesl_tmp_576 < aesl_tmp_577 - aesl_tmp_576_size; tmp_aesl_tmp_576++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_576.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_1_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_1_1_2 = new sc_lv<14>[aesl_tmp_577 - aesl_tmp_578];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_578) => (aesl_tmp_577 - 1) @ (1)
							for (int i_0 = aesl_tmp_578; i_0 <= aesl_tmp_577 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_576[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_1_1_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_1_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_578) => (aesl_tmp_577 - 1) @ (1)
							for (int i_0 = aesl_tmp_578; i_0 <= aesl_tmp_577 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_576[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_576[0]
								// output_left_conversion : (aesl_tmp_576[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_1_1_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_576[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_576[i_0]).range() = (layer11_out_s_V_V_lv0_1_1_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer11_out_s_2_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_2_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_2_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_2_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_2_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_2_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_2_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_2_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_2_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_2_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_580)
			{
				aesl_tmp_580 = i;
			}

			if (aesl_tmp_580 > 0 && aesl_tmp_579.size() < aesl_tmp_580)
			{
				int aesl_tmp_579_size = aesl_tmp_579.size();

				for (int tmp_aesl_tmp_579 = 0; tmp_aesl_tmp_579 < aesl_tmp_580 - aesl_tmp_579_size; tmp_aesl_tmp_579++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_579.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_2_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_2_2_2 = new sc_lv<14>[aesl_tmp_580 - aesl_tmp_581];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_581) => (aesl_tmp_580 - 1) @ (1)
							for (int i_0 = aesl_tmp_581; i_0 <= aesl_tmp_580 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_579[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_2_2_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_2_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_581) => (aesl_tmp_580 - 1) @ (1)
							for (int i_0 = aesl_tmp_581; i_0 <= aesl_tmp_580 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_579[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_579[0]
								// output_left_conversion : (aesl_tmp_579[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_2_2_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_579[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_579[i_0]).range() = (layer11_out_s_V_V_lv0_2_2_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer11_out_s_3_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_3_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_3_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_3_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_3_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_3_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_3_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_3_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_3_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_3_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_583)
			{
				aesl_tmp_583 = i;
			}

			if (aesl_tmp_583 > 0 && aesl_tmp_582.size() < aesl_tmp_583)
			{
				int aesl_tmp_582_size = aesl_tmp_582.size();

				for (int tmp_aesl_tmp_582 = 0; tmp_aesl_tmp_582 < aesl_tmp_583 - aesl_tmp_582_size; tmp_aesl_tmp_582++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_582.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_3_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_3_3_2 = new sc_lv<14>[aesl_tmp_583 - aesl_tmp_584];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_584) => (aesl_tmp_583 - 1) @ (1)
							for (int i_0 = aesl_tmp_584; i_0 <= aesl_tmp_583 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_582[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_3_3_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_3_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_584) => (aesl_tmp_583 - 1) @ (1)
							for (int i_0 = aesl_tmp_584; i_0 <= aesl_tmp_583 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_582[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_582[0]
								// output_left_conversion : (aesl_tmp_582[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_3_3_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_582[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_582[i_0]).range() = (layer11_out_s_V_V_lv0_3_3_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer11_out_s_4_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_4_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_4_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_4_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_4_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_4_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_4_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_4_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_4_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_4_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_586)
			{
				aesl_tmp_586 = i;
			}

			if (aesl_tmp_586 > 0 && aesl_tmp_585.size() < aesl_tmp_586)
			{
				int aesl_tmp_585_size = aesl_tmp_585.size();

				for (int tmp_aesl_tmp_585 = 0; tmp_aesl_tmp_585 < aesl_tmp_586 - aesl_tmp_585_size; tmp_aesl_tmp_585++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_585.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_4_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_4_4_2 = new sc_lv<14>[aesl_tmp_586 - aesl_tmp_587];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_587) => (aesl_tmp_586 - 1) @ (1)
							for (int i_0 = aesl_tmp_587; i_0 <= aesl_tmp_586 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_585[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_4_4_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_4_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_587) => (aesl_tmp_586 - 1) @ (1)
							for (int i_0 = aesl_tmp_587; i_0 <= aesl_tmp_586 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_585[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_585[0]
								// output_left_conversion : (aesl_tmp_585[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_4_4_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_585[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_585[i_0]).range() = (layer11_out_s_V_V_lv0_4_4_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer11_out_s_5_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_5_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_5_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_5_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_5_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_5_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_5_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_5_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_5_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_5_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_589)
			{
				aesl_tmp_589 = i;
			}

			if (aesl_tmp_589 > 0 && aesl_tmp_588.size() < aesl_tmp_589)
			{
				int aesl_tmp_588_size = aesl_tmp_588.size();

				for (int tmp_aesl_tmp_588 = 0; tmp_aesl_tmp_588 < aesl_tmp_589 - aesl_tmp_588_size; tmp_aesl_tmp_588++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_588.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_5_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_5_5_2 = new sc_lv<14>[aesl_tmp_589 - aesl_tmp_590];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_590) => (aesl_tmp_589 - 1) @ (1)
							for (int i_0 = aesl_tmp_590; i_0 <= aesl_tmp_589 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_588[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_5_5_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_5_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_590) => (aesl_tmp_589 - 1) @ (1)
							for (int i_0 = aesl_tmp_590; i_0 <= aesl_tmp_589 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_588[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_588[0]
								// output_left_conversion : (aesl_tmp_588[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_5_5_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_588[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_588[i_0]).range() = (layer11_out_s_V_V_lv0_5_5_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer11_out_s_6_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_6_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_6_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_6_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_6_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_6_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_6_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_6_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_6_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_6_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_592)
			{
				aesl_tmp_592 = i;
			}

			if (aesl_tmp_592 > 0 && aesl_tmp_591.size() < aesl_tmp_592)
			{
				int aesl_tmp_591_size = aesl_tmp_591.size();

				for (int tmp_aesl_tmp_591 = 0; tmp_aesl_tmp_591 < aesl_tmp_592 - aesl_tmp_591_size; tmp_aesl_tmp_591++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_591.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_6_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_6_6_2 = new sc_lv<14>[aesl_tmp_592 - aesl_tmp_593];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_593) => (aesl_tmp_592 - 1) @ (1)
							for (int i_0 = aesl_tmp_593; i_0 <= aesl_tmp_592 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_591[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_6_6_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_6_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_593) => (aesl_tmp_592 - 1) @ (1)
							for (int i_0 = aesl_tmp_593; i_0 <= aesl_tmp_592 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_591[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_591[0]
								// output_left_conversion : (aesl_tmp_591[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_6_6_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_591[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_591[i_0]).range() = (layer11_out_s_V_V_lv0_6_6_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer11_out_s_7_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_7_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_7_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_7_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_7_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_7_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_7_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_7_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_7_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_7_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_595)
			{
				aesl_tmp_595 = i;
			}

			if (aesl_tmp_595 > 0 && aesl_tmp_594.size() < aesl_tmp_595)
			{
				int aesl_tmp_594_size = aesl_tmp_594.size();

				for (int tmp_aesl_tmp_594 = 0; tmp_aesl_tmp_594 < aesl_tmp_595 - aesl_tmp_594_size; tmp_aesl_tmp_594++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_594.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_7_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_7_7_2 = new sc_lv<14>[aesl_tmp_595 - aesl_tmp_596];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_596) => (aesl_tmp_595 - 1) @ (1)
							for (int i_0 = aesl_tmp_596; i_0 <= aesl_tmp_595 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_594[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_7_7_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_7_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_596) => (aesl_tmp_595 - 1) @ (1)
							for (int i_0 = aesl_tmp_596; i_0 <= aesl_tmp_595 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_594[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_594[0]
								// output_left_conversion : (aesl_tmp_594[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_7_7_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_594[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_594[i_0]).range() = (layer11_out_s_V_V_lv0_7_7_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer11_out_s_8_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_8_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_8_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_8_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_8_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_8_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_8_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_8_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_8_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_8_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_598)
			{
				aesl_tmp_598 = i;
			}

			if (aesl_tmp_598 > 0 && aesl_tmp_597.size() < aesl_tmp_598)
			{
				int aesl_tmp_597_size = aesl_tmp_597.size();

				for (int tmp_aesl_tmp_597 = 0; tmp_aesl_tmp_597 < aesl_tmp_598 - aesl_tmp_597_size; tmp_aesl_tmp_597++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_597.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_8_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_8_8_2 = new sc_lv<14>[aesl_tmp_598 - aesl_tmp_599];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_599) => (aesl_tmp_598 - 1) @ (1)
							for (int i_0 = aesl_tmp_599; i_0 <= aesl_tmp_598 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_597[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_8_8_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_8_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_599) => (aesl_tmp_598 - 1) @ (1)
							for (int i_0 = aesl_tmp_599; i_0 <= aesl_tmp_598 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_597[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_597[0]
								// output_left_conversion : (aesl_tmp_597[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_8_8_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_597[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_597[i_0]).range() = (layer11_out_s_V_V_lv0_8_8_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer11_out_s_9_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_9_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_9_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_9_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_9_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_9_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_9_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_9_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_9_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_9_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_601)
			{
				aesl_tmp_601 = i;
			}

			if (aesl_tmp_601 > 0 && aesl_tmp_600.size() < aesl_tmp_601)
			{
				int aesl_tmp_600_size = aesl_tmp_600.size();

				for (int tmp_aesl_tmp_600 = 0; tmp_aesl_tmp_600 < aesl_tmp_601 - aesl_tmp_600_size; tmp_aesl_tmp_600++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_600.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_9_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_9_9_2 = new sc_lv<14>[aesl_tmp_601 - aesl_tmp_602];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_602) => (aesl_tmp_601 - 1) @ (1)
							for (int i_0 = aesl_tmp_602; i_0 <= aesl_tmp_601 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_600[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_9_9_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_9_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_602) => (aesl_tmp_601 - 1) @ (1)
							for (int i_0 = aesl_tmp_602; i_0 <= aesl_tmp_601 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_600[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_600[0]
								// output_left_conversion : (aesl_tmp_600[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_9_9_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_600[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_600[i_0]).range() = (layer11_out_s_V_V_lv0_9_9_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer11_out_s_10_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_10_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_10_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_10_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_10_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_10_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_10_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_10_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_10_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_10_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_604)
			{
				aesl_tmp_604 = i;
			}

			if (aesl_tmp_604 > 0 && aesl_tmp_603.size() < aesl_tmp_604)
			{
				int aesl_tmp_603_size = aesl_tmp_603.size();

				for (int tmp_aesl_tmp_603 = 0; tmp_aesl_tmp_603 < aesl_tmp_604 - aesl_tmp_603_size; tmp_aesl_tmp_603++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_603.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_10_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_10_10_2 = new sc_lv<14>[aesl_tmp_604 - aesl_tmp_605];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_605) => (aesl_tmp_604 - 1) @ (1)
							for (int i_0 = aesl_tmp_605; i_0 <= aesl_tmp_604 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_603[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_10_10_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_10_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_605) => (aesl_tmp_604 - 1) @ (1)
							for (int i_0 = aesl_tmp_605; i_0 <= aesl_tmp_604 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_603[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_603[0]
								// output_left_conversion : (aesl_tmp_603[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_10_10_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_603[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_603[i_0]).range() = (layer11_out_s_V_V_lv0_10_10_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer11_out_s_11_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_11_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_11_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_11_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_11_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_11_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_11_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_11_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_11_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_11_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_607)
			{
				aesl_tmp_607 = i;
			}

			if (aesl_tmp_607 > 0 && aesl_tmp_606.size() < aesl_tmp_607)
			{
				int aesl_tmp_606_size = aesl_tmp_606.size();

				for (int tmp_aesl_tmp_606 = 0; tmp_aesl_tmp_606 < aesl_tmp_607 - aesl_tmp_606_size; tmp_aesl_tmp_606++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_606.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_11_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_11_11_2 = new sc_lv<14>[aesl_tmp_607 - aesl_tmp_608];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_608) => (aesl_tmp_607 - 1) @ (1)
							for (int i_0 = aesl_tmp_608; i_0 <= aesl_tmp_607 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_606[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_11_11_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_11_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_608) => (aesl_tmp_607 - 1) @ (1)
							for (int i_0 = aesl_tmp_608; i_0 <= aesl_tmp_607 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_606[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_606[0]
								// output_left_conversion : (aesl_tmp_606[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_11_11_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_606[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_606[i_0]).range() = (layer11_out_s_V_V_lv0_11_11_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer11_out_s_12_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_12_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_12_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_12_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer11_out_s_12_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_12_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer11_out_s_12_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer11_out_s_12_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer11_out_s_12_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer11_out_s_12_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_610)
			{
				aesl_tmp_610 = i;
			}

			if (aesl_tmp_610 > 0 && aesl_tmp_609.size() < aesl_tmp_610)
			{
				int aesl_tmp_609_size = aesl_tmp_609.size();

				for (int tmp_aesl_tmp_609 = 0; tmp_aesl_tmp_609 < aesl_tmp_610 - aesl_tmp_609_size; tmp_aesl_tmp_609++)
				{
					ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_609.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer11_out_s_12_V_V
				{
					// bitslice(13, 0)
					// {
						// celement: layer11_out_s.V.V(13, 0)
						// {
							sc_lv<14>* layer11_out_s_V_V_lv0_12_12_2 = new sc_lv<14>[aesl_tmp_610 - aesl_tmp_611];
						// }
					// }

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_611) => (aesl_tmp_610 - 1) @ (1)
							for (int i_0 = aesl_tmp_611; i_0 <= aesl_tmp_610 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_609[0]) != NULL) // check the null address if the c port is array or others
								{
									layer11_out_s_V_V_lv0_12_12_2[hls_map_index].range(13, 0) = sc_bv<14>(layer11_out_s_12_V_V_pc_buffer[hls_map_index].range(13, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(13, 0)
					{
						int hls_map_index = 0;
						// celement: layer11_out_s.V.V(13, 0)
						{
							// carray: (aesl_tmp_611) => (aesl_tmp_610 - 1) @ (1)
							for (int i_0 = aesl_tmp_611; i_0 <= aesl_tmp_610 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_609[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_609[0]
								// output_left_conversion : (aesl_tmp_609[i_0]).range()
								// output_type_conversion : (layer11_out_s_V_V_lv0_12_12_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_609[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_609[i_0]).range() = (layer11_out_s_V_V_lv0_12_12_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
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

		// push back output stream: "layer11_out_s[0]"
		for (int i = 0; i < aesl_tmp_574; i++)
		{
			layer11_out_s[0].write(aesl_tmp_573[i]);
		}

		// push back output stream: "layer11_out_s[1]"
		for (int i = 0; i < aesl_tmp_577; i++)
		{
			layer11_out_s[1].write(aesl_tmp_576[i]);
		}

		// push back output stream: "layer11_out_s[2]"
		for (int i = 0; i < aesl_tmp_580; i++)
		{
			layer11_out_s[2].write(aesl_tmp_579[i]);
		}

		// push back output stream: "layer11_out_s[3]"
		for (int i = 0; i < aesl_tmp_583; i++)
		{
			layer11_out_s[3].write(aesl_tmp_582[i]);
		}

		// push back output stream: "layer11_out_s[4]"
		for (int i = 0; i < aesl_tmp_586; i++)
		{
			layer11_out_s[4].write(aesl_tmp_585[i]);
		}

		// push back output stream: "layer11_out_s[5]"
		for (int i = 0; i < aesl_tmp_589; i++)
		{
			layer11_out_s[5].write(aesl_tmp_588[i]);
		}

		// push back output stream: "layer11_out_s[6]"
		for (int i = 0; i < aesl_tmp_592; i++)
		{
			layer11_out_s[6].write(aesl_tmp_591[i]);
		}

		// push back output stream: "layer11_out_s[7]"
		for (int i = 0; i < aesl_tmp_595; i++)
		{
			layer11_out_s[7].write(aesl_tmp_594[i]);
		}

		// push back output stream: "layer11_out_s[8]"
		for (int i = 0; i < aesl_tmp_598; i++)
		{
			layer11_out_s[8].write(aesl_tmp_597[i]);
		}

		// push back output stream: "layer11_out_s[9]"
		for (int i = 0; i < aesl_tmp_601; i++)
		{
			layer11_out_s[9].write(aesl_tmp_600[i]);
		}

		// push back output stream: "layer11_out_s[10]"
		for (int i = 0; i < aesl_tmp_604; i++)
		{
			layer11_out_s[10].write(aesl_tmp_603[i]);
		}

		// push back output stream: "layer11_out_s[11]"
		for (int i = 0; i < aesl_tmp_607; i++)
		{
			layer11_out_s[11].write(aesl_tmp_606[i]);
		}

		// push back output stream: "layer11_out_s[12]"
		for (int i = 0; i < aesl_tmp_610; i++)
		{
			layer11_out_s[12].write(aesl_tmp_609[i]);
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "node_attr_mat_s_V_V"
		char* tvin_node_attr_mat_s_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_node_attr_mat_s_V_V);
		char* wrapc_stream_size_in_node_attr_mat_s_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V);
		char* wrapc_stream_ingress_status_node_attr_mat_s_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_node_attr_mat_s_V_V);

		// "edge_attr_mat_s_0_V_V"
		char* tvin_edge_attr_mat_s_0_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_0_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_0_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_0_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_0_V_V);

		// "edge_attr_mat_s_1_V_V"
		char* tvin_edge_attr_mat_s_1_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_1_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_1_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_1_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_1_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_1_V_V);

		// "edge_attr_mat_s_2_V_V"
		char* tvin_edge_attr_mat_s_2_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_2_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_2_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_2_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_2_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_2_V_V);

		// "edge_attr_mat_s_3_V_V"
		char* tvin_edge_attr_mat_s_3_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_3_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_3_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_3_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_3_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_3_V_V);

		// "edge_attr_mat_s_4_V_V"
		char* tvin_edge_attr_mat_s_4_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_4_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_4_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_4_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_4_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_4_V_V);

		// "edge_attr_mat_s_5_V_V"
		char* tvin_edge_attr_mat_s_5_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_5_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_5_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_5_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_5_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_5_V_V);

		// "edge_attr_mat_s_6_V_V"
		char* tvin_edge_attr_mat_s_6_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_6_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_6_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_6_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_6_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_6_V_V);

		// "edge_attr_mat_s_7_V_V"
		char* tvin_edge_attr_mat_s_7_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_7_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_7_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_7_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_7_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_7_V_V);

		// "edge_attr_mat_s_8_V_V"
		char* tvin_edge_attr_mat_s_8_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_8_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_8_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_8_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_8_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_8_V_V);

		// "edge_attr_mat_s_9_V_V"
		char* tvin_edge_attr_mat_s_9_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_9_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_9_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_9_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_9_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_9_V_V);

		// "edge_attr_mat_s_10_V_V"
		char* tvin_edge_attr_mat_s_10_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_10_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_10_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_10_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_10_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_10_V_V);

		// "edge_attr_mat_s_11_V_V"
		char* tvin_edge_attr_mat_s_11_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_11_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_11_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_11_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_11_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_11_V_V);

		// "edge_attr_mat_s_12_V_V"
		char* tvin_edge_attr_mat_s_12_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_12_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_12_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_12_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_12_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_12_V_V);

		// "edge_attr_mat_s_13_V_V"
		char* tvin_edge_attr_mat_s_13_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_13_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_13_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_13_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_13_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_13_V_V);

		// "edge_attr_mat_s_14_V_V"
		char* tvin_edge_attr_mat_s_14_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_14_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_14_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_14_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_14_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_14_V_V);

		// "edge_attr_mat_s_15_V_V"
		char* tvin_edge_attr_mat_s_15_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_15_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_15_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_15_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_15_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_15_V_V);

		// "edge_attr_mat_s_16_V_V"
		char* tvin_edge_attr_mat_s_16_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_16_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_16_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_16_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_16_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_16_V_V);

		// "edge_attr_mat_s_17_V_V"
		char* tvin_edge_attr_mat_s_17_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_17_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_17_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_17_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_17_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_17_V_V);

		// "edge_attr_mat_s_18_V_V"
		char* tvin_edge_attr_mat_s_18_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_18_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_18_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_18_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_18_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_18_V_V);

		// "edge_attr_mat_s_19_V_V"
		char* tvin_edge_attr_mat_s_19_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_19_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_19_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_19_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_19_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_19_V_V);

		// "edge_attr_mat_s_20_V_V"
		char* tvin_edge_attr_mat_s_20_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_20_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_20_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_20_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_20_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_20_V_V);

		// "edge_attr_mat_s_21_V_V"
		char* tvin_edge_attr_mat_s_21_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_21_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_21_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_21_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_21_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_21_V_V);

		// "edge_attr_mat_s_22_V_V"
		char* tvin_edge_attr_mat_s_22_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_22_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_22_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_22_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_22_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_22_V_V);

		// "edge_attr_mat_s_23_V_V"
		char* tvin_edge_attr_mat_s_23_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_23_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_23_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_23_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_23_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_23_V_V);

		// "edge_attr_mat_s_24_V_V"
		char* tvin_edge_attr_mat_s_24_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_24_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_24_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_24_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_24_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_24_V_V);

		// "edge_attr_mat_s_25_V_V"
		char* tvin_edge_attr_mat_s_25_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_25_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_25_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_25_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_25_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_25_V_V);

		// "edge_attr_mat_s_26_V_V"
		char* tvin_edge_attr_mat_s_26_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_26_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_26_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_26_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_26_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_26_V_V);

		// "edge_attr_mat_s_27_V_V"
		char* tvin_edge_attr_mat_s_27_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_27_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_27_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_27_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_27_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_27_V_V);

		// "edge_attr_mat_s_28_V_V"
		char* tvin_edge_attr_mat_s_28_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_28_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_28_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_28_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_28_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_28_V_V);

		// "edge_attr_mat_s_29_V_V"
		char* tvin_edge_attr_mat_s_29_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_29_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_29_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_29_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_29_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_29_V_V);

		// "edge_attr_mat_s_30_V_V"
		char* tvin_edge_attr_mat_s_30_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_30_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_30_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_30_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_30_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_30_V_V);

		// "edge_attr_mat_s_31_V_V"
		char* tvin_edge_attr_mat_s_31_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_31_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_31_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_31_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_31_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_31_V_V);

		// "edge_attr_mat_s_32_V_V"
		char* tvin_edge_attr_mat_s_32_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_32_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_32_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_32_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_32_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_32_V_V);

		// "edge_attr_mat_s_33_V_V"
		char* tvin_edge_attr_mat_s_33_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_33_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_33_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_33_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_33_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_33_V_V);

		// "edge_attr_mat_s_34_V_V"
		char* tvin_edge_attr_mat_s_34_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_34_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_34_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_34_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_34_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_34_V_V);

		// "edge_attr_mat_s_35_V_V"
		char* tvin_edge_attr_mat_s_35_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_35_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_35_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_35_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_35_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_35_V_V);

		// "edge_attr_mat_s_36_V_V"
		char* tvin_edge_attr_mat_s_36_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_36_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_36_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_36_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_36_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_36_V_V);

		// "edge_attr_mat_s_37_V_V"
		char* tvin_edge_attr_mat_s_37_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_37_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_37_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_37_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_37_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_37_V_V);

		// "edge_attr_mat_s_38_V_V"
		char* tvin_edge_attr_mat_s_38_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_38_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_38_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_38_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_38_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_38_V_V);

		// "edge_attr_mat_s_39_V_V"
		char* tvin_edge_attr_mat_s_39_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_39_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_39_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_39_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_39_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_39_V_V);

		// "edge_attr_mat_s_40_V_V"
		char* tvin_edge_attr_mat_s_40_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_40_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_40_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_40_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_40_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_40_V_V);

		// "edge_attr_mat_s_41_V_V"
		char* tvin_edge_attr_mat_s_41_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_41_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_41_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_41_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_41_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_41_V_V);

		// "edge_attr_mat_s_42_V_V"
		char* tvin_edge_attr_mat_s_42_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_42_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_42_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_42_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_42_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_42_V_V);

		// "edge_attr_mat_s_43_V_V"
		char* tvin_edge_attr_mat_s_43_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_43_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_43_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_43_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_43_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_43_V_V);

		// "edge_attr_mat_s_44_V_V"
		char* tvin_edge_attr_mat_s_44_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_44_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_44_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_44_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_44_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_44_V_V);

		// "edge_attr_mat_s_45_V_V"
		char* tvin_edge_attr_mat_s_45_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_45_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_45_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_45_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_45_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_45_V_V);

		// "edge_attr_mat_s_46_V_V"
		char* tvin_edge_attr_mat_s_46_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_46_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_46_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_46_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_46_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_46_V_V);

		// "edge_attr_mat_s_47_V_V"
		char* tvin_edge_attr_mat_s_47_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_47_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_47_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_47_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_47_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_47_V_V);

		// "edge_attr_mat_s_48_V_V"
		char* tvin_edge_attr_mat_s_48_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_48_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_48_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_48_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_48_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_48_V_V);

		// "edge_attr_mat_s_49_V_V"
		char* tvin_edge_attr_mat_s_49_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_49_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_49_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_49_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_49_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_49_V_V);

		// "edge_attr_mat_s_50_V_V"
		char* tvin_edge_attr_mat_s_50_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_50_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_50_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_50_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_50_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_50_V_V);

		// "edge_attr_mat_s_51_V_V"
		char* tvin_edge_attr_mat_s_51_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_attr_mat_s_51_V_V);
		char* wrapc_stream_size_in_edge_attr_mat_s_51_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_51_V_V);
		char* wrapc_stream_ingress_status_edge_attr_mat_s_51_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_51_V_V);

		// "edge_index_mat_s_0_V_V"
		char* tvin_edge_index_mat_s_0_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_0_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_0_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_0_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_0_V_V);

		// "edge_index_mat_s_1_V_V"
		char* tvin_edge_index_mat_s_1_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_1_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_1_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_1_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_1_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_1_V_V);

		// "edge_index_mat_s_2_V_V"
		char* tvin_edge_index_mat_s_2_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_2_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_2_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_2_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_2_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_2_V_V);

		// "edge_index_mat_s_3_V_V"
		char* tvin_edge_index_mat_s_3_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_3_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_3_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_3_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_3_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_3_V_V);

		// "edge_index_mat_s_4_V_V"
		char* tvin_edge_index_mat_s_4_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_4_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_4_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_4_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_4_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_4_V_V);

		// "edge_index_mat_s_5_V_V"
		char* tvin_edge_index_mat_s_5_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_5_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_5_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_5_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_5_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_5_V_V);

		// "edge_index_mat_s_6_V_V"
		char* tvin_edge_index_mat_s_6_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_6_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_6_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_6_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_6_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_6_V_V);

		// "edge_index_mat_s_7_V_V"
		char* tvin_edge_index_mat_s_7_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_7_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_7_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_7_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_7_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_7_V_V);

		// "edge_index_mat_s_8_V_V"
		char* tvin_edge_index_mat_s_8_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_8_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_8_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_8_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_8_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_8_V_V);

		// "edge_index_mat_s_9_V_V"
		char* tvin_edge_index_mat_s_9_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_9_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_9_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_9_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_9_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_9_V_V);

		// "edge_index_mat_s_10_V_V"
		char* tvin_edge_index_mat_s_10_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_10_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_10_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_10_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_10_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_10_V_V);

		// "edge_index_mat_s_11_V_V"
		char* tvin_edge_index_mat_s_11_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_11_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_11_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_11_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_11_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_11_V_V);

		// "edge_index_mat_s_12_V_V"
		char* tvin_edge_index_mat_s_12_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_12_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_12_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_12_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_12_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_12_V_V);

		// "edge_index_mat_s_13_V_V"
		char* tvin_edge_index_mat_s_13_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_13_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_13_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_13_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_13_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_13_V_V);

		// "edge_index_mat_s_14_V_V"
		char* tvin_edge_index_mat_s_14_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_14_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_14_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_14_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_14_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_14_V_V);

		// "edge_index_mat_s_15_V_V"
		char* tvin_edge_index_mat_s_15_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_15_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_15_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_15_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_15_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_15_V_V);

		// "edge_index_mat_s_16_V_V"
		char* tvin_edge_index_mat_s_16_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_16_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_16_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_16_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_16_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_16_V_V);

		// "edge_index_mat_s_17_V_V"
		char* tvin_edge_index_mat_s_17_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_17_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_17_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_17_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_17_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_17_V_V);

		// "edge_index_mat_s_18_V_V"
		char* tvin_edge_index_mat_s_18_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_18_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_18_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_18_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_18_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_18_V_V);

		// "edge_index_mat_s_19_V_V"
		char* tvin_edge_index_mat_s_19_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_19_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_19_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_19_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_19_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_19_V_V);

		// "edge_index_mat_s_20_V_V"
		char* tvin_edge_index_mat_s_20_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_20_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_20_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_20_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_20_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_20_V_V);

		// "edge_index_mat_s_21_V_V"
		char* tvin_edge_index_mat_s_21_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_21_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_21_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_21_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_21_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_21_V_V);

		// "edge_index_mat_s_22_V_V"
		char* tvin_edge_index_mat_s_22_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_22_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_22_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_22_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_22_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_22_V_V);

		// "edge_index_mat_s_23_V_V"
		char* tvin_edge_index_mat_s_23_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_23_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_23_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_23_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_23_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_23_V_V);

		// "edge_index_mat_s_24_V_V"
		char* tvin_edge_index_mat_s_24_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_24_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_24_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_24_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_24_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_24_V_V);

		// "edge_index_mat_s_25_V_V"
		char* tvin_edge_index_mat_s_25_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_edge_index_mat_s_25_V_V);
		char* wrapc_stream_size_in_edge_index_mat_s_25_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_25_V_V);
		char* wrapc_stream_ingress_status_edge_index_mat_s_25_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_25_V_V);

		// "layer11_out_s_0_V_V"
		char* tvin_layer11_out_s_0_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_0_V_V);
		char* tvout_layer11_out_s_0_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_0_V_V);
		char* wrapc_stream_size_out_layer11_out_s_0_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_0_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_0_V_V);

		// "layer11_out_s_1_V_V"
		char* tvin_layer11_out_s_1_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_1_V_V);
		char* tvout_layer11_out_s_1_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_1_V_V);
		char* wrapc_stream_size_out_layer11_out_s_1_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_1_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_1_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_1_V_V);

		// "layer11_out_s_2_V_V"
		char* tvin_layer11_out_s_2_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_2_V_V);
		char* tvout_layer11_out_s_2_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_2_V_V);
		char* wrapc_stream_size_out_layer11_out_s_2_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_2_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_2_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_2_V_V);

		// "layer11_out_s_3_V_V"
		char* tvin_layer11_out_s_3_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_3_V_V);
		char* tvout_layer11_out_s_3_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_3_V_V);
		char* wrapc_stream_size_out_layer11_out_s_3_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_3_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_3_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_3_V_V);

		// "layer11_out_s_4_V_V"
		char* tvin_layer11_out_s_4_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_4_V_V);
		char* tvout_layer11_out_s_4_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_4_V_V);
		char* wrapc_stream_size_out_layer11_out_s_4_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_4_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_4_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_4_V_V);

		// "layer11_out_s_5_V_V"
		char* tvin_layer11_out_s_5_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_5_V_V);
		char* tvout_layer11_out_s_5_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_5_V_V);
		char* wrapc_stream_size_out_layer11_out_s_5_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_5_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_5_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_5_V_V);

		// "layer11_out_s_6_V_V"
		char* tvin_layer11_out_s_6_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_6_V_V);
		char* tvout_layer11_out_s_6_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_6_V_V);
		char* wrapc_stream_size_out_layer11_out_s_6_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_6_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_6_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_6_V_V);

		// "layer11_out_s_7_V_V"
		char* tvin_layer11_out_s_7_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_7_V_V);
		char* tvout_layer11_out_s_7_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_7_V_V);
		char* wrapc_stream_size_out_layer11_out_s_7_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_7_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_7_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_7_V_V);

		// "layer11_out_s_8_V_V"
		char* tvin_layer11_out_s_8_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_8_V_V);
		char* tvout_layer11_out_s_8_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_8_V_V);
		char* wrapc_stream_size_out_layer11_out_s_8_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_8_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_8_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_8_V_V);

		// "layer11_out_s_9_V_V"
		char* tvin_layer11_out_s_9_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_9_V_V);
		char* tvout_layer11_out_s_9_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_9_V_V);
		char* wrapc_stream_size_out_layer11_out_s_9_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_9_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_9_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_9_V_V);

		// "layer11_out_s_10_V_V"
		char* tvin_layer11_out_s_10_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_10_V_V);
		char* tvout_layer11_out_s_10_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_10_V_V);
		char* wrapc_stream_size_out_layer11_out_s_10_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_10_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_10_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_10_V_V);

		// "layer11_out_s_11_V_V"
		char* tvin_layer11_out_s_11_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_11_V_V);
		char* tvout_layer11_out_s_11_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_11_V_V);
		char* wrapc_stream_size_out_layer11_out_s_11_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_11_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_11_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_11_V_V);

		// "layer11_out_s_12_V_V"
		char* tvin_layer11_out_s_12_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer11_out_s_12_V_V);
		char* tvout_layer11_out_s_12_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer11_out_s_12_V_V);
		char* wrapc_stream_size_out_layer11_out_s_12_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer11_out_s_12_V_V);
		char* wrapc_stream_egress_status_layer11_out_s_12_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer11_out_s_12_V_V);

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

		// dump stream tvin: "node_attr_mat_s[0]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_306;
		int aesl_tmp_307 = 0;
		while (!node_attr_mat_s[0].empty())
		{
			aesl_tmp_306.push_back(node_attr_mat_s[0].read());
			aesl_tmp_307++;
		}

		// dump stream tvin: "node_attr_mat_s[1]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_309;
		int aesl_tmp_310 = 0;
		while (!node_attr_mat_s[1].empty())
		{
			aesl_tmp_309.push_back(node_attr_mat_s[1].read());
			aesl_tmp_310++;
		}

		// dump stream tvin: "node_attr_mat_s[2]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_312;
		int aesl_tmp_313 = 0;
		while (!node_attr_mat_s[2].empty())
		{
			aesl_tmp_312.push_back(node_attr_mat_s[2].read());
			aesl_tmp_313++;
		}

		// dump stream tvin: "node_attr_mat_s[3]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_315;
		int aesl_tmp_316 = 0;
		while (!node_attr_mat_s[3].empty())
		{
			aesl_tmp_315.push_back(node_attr_mat_s[3].read());
			aesl_tmp_316++;
		}

		// dump stream tvin: "node_attr_mat_s[4]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_318;
		int aesl_tmp_319 = 0;
		while (!node_attr_mat_s[4].empty())
		{
			aesl_tmp_318.push_back(node_attr_mat_s[4].read());
			aesl_tmp_319++;
		}

		// dump stream tvin: "node_attr_mat_s[5]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_321;
		int aesl_tmp_322 = 0;
		while (!node_attr_mat_s[5].empty())
		{
			aesl_tmp_321.push_back(node_attr_mat_s[5].read());
			aesl_tmp_322++;
		}

		// dump stream tvin: "node_attr_mat_s[6]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_324;
		int aesl_tmp_325 = 0;
		while (!node_attr_mat_s[6].empty())
		{
			aesl_tmp_324.push_back(node_attr_mat_s[6].read());
			aesl_tmp_325++;
		}

		// dump stream tvin: "node_attr_mat_s[7]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_327;
		int aesl_tmp_328 = 0;
		while (!node_attr_mat_s[7].empty())
		{
			aesl_tmp_327.push_back(node_attr_mat_s[7].read());
			aesl_tmp_328++;
		}

		// dump stream tvin: "node_attr_mat_s[8]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_330;
		int aesl_tmp_331 = 0;
		while (!node_attr_mat_s[8].empty())
		{
			aesl_tmp_330.push_back(node_attr_mat_s[8].read());
			aesl_tmp_331++;
		}

		// dump stream tvin: "node_attr_mat_s[9]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_333;
		int aesl_tmp_334 = 0;
		while (!node_attr_mat_s[9].empty())
		{
			aesl_tmp_333.push_back(node_attr_mat_s[9].read());
			aesl_tmp_334++;
		}

		// dump stream tvin: "node_attr_mat_s[10]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_336;
		int aesl_tmp_337 = 0;
		while (!node_attr_mat_s[10].empty())
		{
			aesl_tmp_336.push_back(node_attr_mat_s[10].read());
			aesl_tmp_337++;
		}

		// dump stream tvin: "edge_attr_mat_s[0]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_339;
		int aesl_tmp_340 = 0;
		while (!edge_attr_mat_s[0].empty())
		{
			aesl_tmp_339.push_back(edge_attr_mat_s[0].read());
			aesl_tmp_340++;
		}

		// dump stream tvin: "edge_attr_mat_s[1]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_342;
		int aesl_tmp_343 = 0;
		while (!edge_attr_mat_s[1].empty())
		{
			aesl_tmp_342.push_back(edge_attr_mat_s[1].read());
			aesl_tmp_343++;
		}

		// dump stream tvin: "edge_attr_mat_s[2]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_345;
		int aesl_tmp_346 = 0;
		while (!edge_attr_mat_s[2].empty())
		{
			aesl_tmp_345.push_back(edge_attr_mat_s[2].read());
			aesl_tmp_346++;
		}

		// dump stream tvin: "edge_attr_mat_s[3]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_348;
		int aesl_tmp_349 = 0;
		while (!edge_attr_mat_s[3].empty())
		{
			aesl_tmp_348.push_back(edge_attr_mat_s[3].read());
			aesl_tmp_349++;
		}

		// dump stream tvin: "edge_attr_mat_s[4]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_351;
		int aesl_tmp_352 = 0;
		while (!edge_attr_mat_s[4].empty())
		{
			aesl_tmp_351.push_back(edge_attr_mat_s[4].read());
			aesl_tmp_352++;
		}

		// dump stream tvin: "edge_attr_mat_s[5]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_354;
		int aesl_tmp_355 = 0;
		while (!edge_attr_mat_s[5].empty())
		{
			aesl_tmp_354.push_back(edge_attr_mat_s[5].read());
			aesl_tmp_355++;
		}

		// dump stream tvin: "edge_attr_mat_s[6]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_357;
		int aesl_tmp_358 = 0;
		while (!edge_attr_mat_s[6].empty())
		{
			aesl_tmp_357.push_back(edge_attr_mat_s[6].read());
			aesl_tmp_358++;
		}

		// dump stream tvin: "edge_attr_mat_s[7]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_360;
		int aesl_tmp_361 = 0;
		while (!edge_attr_mat_s[7].empty())
		{
			aesl_tmp_360.push_back(edge_attr_mat_s[7].read());
			aesl_tmp_361++;
		}

		// dump stream tvin: "edge_attr_mat_s[8]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_363;
		int aesl_tmp_364 = 0;
		while (!edge_attr_mat_s[8].empty())
		{
			aesl_tmp_363.push_back(edge_attr_mat_s[8].read());
			aesl_tmp_364++;
		}

		// dump stream tvin: "edge_attr_mat_s[9]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_366;
		int aesl_tmp_367 = 0;
		while (!edge_attr_mat_s[9].empty())
		{
			aesl_tmp_366.push_back(edge_attr_mat_s[9].read());
			aesl_tmp_367++;
		}

		// dump stream tvin: "edge_attr_mat_s[10]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_369;
		int aesl_tmp_370 = 0;
		while (!edge_attr_mat_s[10].empty())
		{
			aesl_tmp_369.push_back(edge_attr_mat_s[10].read());
			aesl_tmp_370++;
		}

		// dump stream tvin: "edge_attr_mat_s[11]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_372;
		int aesl_tmp_373 = 0;
		while (!edge_attr_mat_s[11].empty())
		{
			aesl_tmp_372.push_back(edge_attr_mat_s[11].read());
			aesl_tmp_373++;
		}

		// dump stream tvin: "edge_attr_mat_s[12]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_375;
		int aesl_tmp_376 = 0;
		while (!edge_attr_mat_s[12].empty())
		{
			aesl_tmp_375.push_back(edge_attr_mat_s[12].read());
			aesl_tmp_376++;
		}

		// dump stream tvin: "edge_attr_mat_s[13]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_378;
		int aesl_tmp_379 = 0;
		while (!edge_attr_mat_s[13].empty())
		{
			aesl_tmp_378.push_back(edge_attr_mat_s[13].read());
			aesl_tmp_379++;
		}

		// dump stream tvin: "edge_attr_mat_s[14]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_381;
		int aesl_tmp_382 = 0;
		while (!edge_attr_mat_s[14].empty())
		{
			aesl_tmp_381.push_back(edge_attr_mat_s[14].read());
			aesl_tmp_382++;
		}

		// dump stream tvin: "edge_attr_mat_s[15]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_384;
		int aesl_tmp_385 = 0;
		while (!edge_attr_mat_s[15].empty())
		{
			aesl_tmp_384.push_back(edge_attr_mat_s[15].read());
			aesl_tmp_385++;
		}

		// dump stream tvin: "edge_attr_mat_s[16]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_387;
		int aesl_tmp_388 = 0;
		while (!edge_attr_mat_s[16].empty())
		{
			aesl_tmp_387.push_back(edge_attr_mat_s[16].read());
			aesl_tmp_388++;
		}

		// dump stream tvin: "edge_attr_mat_s[17]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_390;
		int aesl_tmp_391 = 0;
		while (!edge_attr_mat_s[17].empty())
		{
			aesl_tmp_390.push_back(edge_attr_mat_s[17].read());
			aesl_tmp_391++;
		}

		// dump stream tvin: "edge_attr_mat_s[18]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_393;
		int aesl_tmp_394 = 0;
		while (!edge_attr_mat_s[18].empty())
		{
			aesl_tmp_393.push_back(edge_attr_mat_s[18].read());
			aesl_tmp_394++;
		}

		// dump stream tvin: "edge_attr_mat_s[19]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_396;
		int aesl_tmp_397 = 0;
		while (!edge_attr_mat_s[19].empty())
		{
			aesl_tmp_396.push_back(edge_attr_mat_s[19].read());
			aesl_tmp_397++;
		}

		// dump stream tvin: "edge_attr_mat_s[20]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_399;
		int aesl_tmp_400 = 0;
		while (!edge_attr_mat_s[20].empty())
		{
			aesl_tmp_399.push_back(edge_attr_mat_s[20].read());
			aesl_tmp_400++;
		}

		// dump stream tvin: "edge_attr_mat_s[21]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_402;
		int aesl_tmp_403 = 0;
		while (!edge_attr_mat_s[21].empty())
		{
			aesl_tmp_402.push_back(edge_attr_mat_s[21].read());
			aesl_tmp_403++;
		}

		// dump stream tvin: "edge_attr_mat_s[22]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_405;
		int aesl_tmp_406 = 0;
		while (!edge_attr_mat_s[22].empty())
		{
			aesl_tmp_405.push_back(edge_attr_mat_s[22].read());
			aesl_tmp_406++;
		}

		// dump stream tvin: "edge_attr_mat_s[23]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_408;
		int aesl_tmp_409 = 0;
		while (!edge_attr_mat_s[23].empty())
		{
			aesl_tmp_408.push_back(edge_attr_mat_s[23].read());
			aesl_tmp_409++;
		}

		// dump stream tvin: "edge_attr_mat_s[24]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_411;
		int aesl_tmp_412 = 0;
		while (!edge_attr_mat_s[24].empty())
		{
			aesl_tmp_411.push_back(edge_attr_mat_s[24].read());
			aesl_tmp_412++;
		}

		// dump stream tvin: "edge_attr_mat_s[25]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_414;
		int aesl_tmp_415 = 0;
		while (!edge_attr_mat_s[25].empty())
		{
			aesl_tmp_414.push_back(edge_attr_mat_s[25].read());
			aesl_tmp_415++;
		}

		// dump stream tvin: "edge_attr_mat_s[26]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_417;
		int aesl_tmp_418 = 0;
		while (!edge_attr_mat_s[26].empty())
		{
			aesl_tmp_417.push_back(edge_attr_mat_s[26].read());
			aesl_tmp_418++;
		}

		// dump stream tvin: "edge_attr_mat_s[27]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_420;
		int aesl_tmp_421 = 0;
		while (!edge_attr_mat_s[27].empty())
		{
			aesl_tmp_420.push_back(edge_attr_mat_s[27].read());
			aesl_tmp_421++;
		}

		// dump stream tvin: "edge_attr_mat_s[28]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_423;
		int aesl_tmp_424 = 0;
		while (!edge_attr_mat_s[28].empty())
		{
			aesl_tmp_423.push_back(edge_attr_mat_s[28].read());
			aesl_tmp_424++;
		}

		// dump stream tvin: "edge_attr_mat_s[29]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_426;
		int aesl_tmp_427 = 0;
		while (!edge_attr_mat_s[29].empty())
		{
			aesl_tmp_426.push_back(edge_attr_mat_s[29].read());
			aesl_tmp_427++;
		}

		// dump stream tvin: "edge_attr_mat_s[30]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_429;
		int aesl_tmp_430 = 0;
		while (!edge_attr_mat_s[30].empty())
		{
			aesl_tmp_429.push_back(edge_attr_mat_s[30].read());
			aesl_tmp_430++;
		}

		// dump stream tvin: "edge_attr_mat_s[31]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_432;
		int aesl_tmp_433 = 0;
		while (!edge_attr_mat_s[31].empty())
		{
			aesl_tmp_432.push_back(edge_attr_mat_s[31].read());
			aesl_tmp_433++;
		}

		// dump stream tvin: "edge_attr_mat_s[32]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_435;
		int aesl_tmp_436 = 0;
		while (!edge_attr_mat_s[32].empty())
		{
			aesl_tmp_435.push_back(edge_attr_mat_s[32].read());
			aesl_tmp_436++;
		}

		// dump stream tvin: "edge_attr_mat_s[33]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_438;
		int aesl_tmp_439 = 0;
		while (!edge_attr_mat_s[33].empty())
		{
			aesl_tmp_438.push_back(edge_attr_mat_s[33].read());
			aesl_tmp_439++;
		}

		// dump stream tvin: "edge_attr_mat_s[34]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_441;
		int aesl_tmp_442 = 0;
		while (!edge_attr_mat_s[34].empty())
		{
			aesl_tmp_441.push_back(edge_attr_mat_s[34].read());
			aesl_tmp_442++;
		}

		// dump stream tvin: "edge_attr_mat_s[35]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_444;
		int aesl_tmp_445 = 0;
		while (!edge_attr_mat_s[35].empty())
		{
			aesl_tmp_444.push_back(edge_attr_mat_s[35].read());
			aesl_tmp_445++;
		}

		// dump stream tvin: "edge_attr_mat_s[36]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_447;
		int aesl_tmp_448 = 0;
		while (!edge_attr_mat_s[36].empty())
		{
			aesl_tmp_447.push_back(edge_attr_mat_s[36].read());
			aesl_tmp_448++;
		}

		// dump stream tvin: "edge_attr_mat_s[37]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_450;
		int aesl_tmp_451 = 0;
		while (!edge_attr_mat_s[37].empty())
		{
			aesl_tmp_450.push_back(edge_attr_mat_s[37].read());
			aesl_tmp_451++;
		}

		// dump stream tvin: "edge_attr_mat_s[38]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_453;
		int aesl_tmp_454 = 0;
		while (!edge_attr_mat_s[38].empty())
		{
			aesl_tmp_453.push_back(edge_attr_mat_s[38].read());
			aesl_tmp_454++;
		}

		// dump stream tvin: "edge_attr_mat_s[39]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_456;
		int aesl_tmp_457 = 0;
		while (!edge_attr_mat_s[39].empty())
		{
			aesl_tmp_456.push_back(edge_attr_mat_s[39].read());
			aesl_tmp_457++;
		}

		// dump stream tvin: "edge_attr_mat_s[40]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_459;
		int aesl_tmp_460 = 0;
		while (!edge_attr_mat_s[40].empty())
		{
			aesl_tmp_459.push_back(edge_attr_mat_s[40].read());
			aesl_tmp_460++;
		}

		// dump stream tvin: "edge_attr_mat_s[41]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_462;
		int aesl_tmp_463 = 0;
		while (!edge_attr_mat_s[41].empty())
		{
			aesl_tmp_462.push_back(edge_attr_mat_s[41].read());
			aesl_tmp_463++;
		}

		// dump stream tvin: "edge_attr_mat_s[42]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_465;
		int aesl_tmp_466 = 0;
		while (!edge_attr_mat_s[42].empty())
		{
			aesl_tmp_465.push_back(edge_attr_mat_s[42].read());
			aesl_tmp_466++;
		}

		// dump stream tvin: "edge_attr_mat_s[43]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_468;
		int aesl_tmp_469 = 0;
		while (!edge_attr_mat_s[43].empty())
		{
			aesl_tmp_468.push_back(edge_attr_mat_s[43].read());
			aesl_tmp_469++;
		}

		// dump stream tvin: "edge_attr_mat_s[44]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_471;
		int aesl_tmp_472 = 0;
		while (!edge_attr_mat_s[44].empty())
		{
			aesl_tmp_471.push_back(edge_attr_mat_s[44].read());
			aesl_tmp_472++;
		}

		// dump stream tvin: "edge_attr_mat_s[45]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_474;
		int aesl_tmp_475 = 0;
		while (!edge_attr_mat_s[45].empty())
		{
			aesl_tmp_474.push_back(edge_attr_mat_s[45].read());
			aesl_tmp_475++;
		}

		// dump stream tvin: "edge_attr_mat_s[46]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_477;
		int aesl_tmp_478 = 0;
		while (!edge_attr_mat_s[46].empty())
		{
			aesl_tmp_477.push_back(edge_attr_mat_s[46].read());
			aesl_tmp_478++;
		}

		// dump stream tvin: "edge_attr_mat_s[47]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_480;
		int aesl_tmp_481 = 0;
		while (!edge_attr_mat_s[47].empty())
		{
			aesl_tmp_480.push_back(edge_attr_mat_s[47].read());
			aesl_tmp_481++;
		}

		// dump stream tvin: "edge_attr_mat_s[48]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_483;
		int aesl_tmp_484 = 0;
		while (!edge_attr_mat_s[48].empty())
		{
			aesl_tmp_483.push_back(edge_attr_mat_s[48].read());
			aesl_tmp_484++;
		}

		// dump stream tvin: "edge_attr_mat_s[49]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_486;
		int aesl_tmp_487 = 0;
		while (!edge_attr_mat_s[49].empty())
		{
			aesl_tmp_486.push_back(edge_attr_mat_s[49].read());
			aesl_tmp_487++;
		}

		// dump stream tvin: "edge_attr_mat_s[50]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_489;
		int aesl_tmp_490 = 0;
		while (!edge_attr_mat_s[50].empty())
		{
			aesl_tmp_489.push_back(edge_attr_mat_s[50].read());
			aesl_tmp_490++;
		}

		// dump stream tvin: "edge_attr_mat_s[51]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_492;
		int aesl_tmp_493 = 0;
		while (!edge_attr_mat_s[51].empty())
		{
			aesl_tmp_492.push_back(edge_attr_mat_s[51].read());
			aesl_tmp_493++;
		}

		// dump stream tvin: "edge_index_mat_s[0]"
		std::vector<ap_uint<14> > aesl_tmp_495;
		int aesl_tmp_496 = 0;
		while (!edge_index_mat_s[0].empty())
		{
			aesl_tmp_495.push_back(edge_index_mat_s[0].read());
			aesl_tmp_496++;
		}

		// dump stream tvin: "edge_index_mat_s[1]"
		std::vector<ap_uint<14> > aesl_tmp_498;
		int aesl_tmp_499 = 0;
		while (!edge_index_mat_s[1].empty())
		{
			aesl_tmp_498.push_back(edge_index_mat_s[1].read());
			aesl_tmp_499++;
		}

		// dump stream tvin: "edge_index_mat_s[2]"
		std::vector<ap_uint<14> > aesl_tmp_501;
		int aesl_tmp_502 = 0;
		while (!edge_index_mat_s[2].empty())
		{
			aesl_tmp_501.push_back(edge_index_mat_s[2].read());
			aesl_tmp_502++;
		}

		// dump stream tvin: "edge_index_mat_s[3]"
		std::vector<ap_uint<14> > aesl_tmp_504;
		int aesl_tmp_505 = 0;
		while (!edge_index_mat_s[3].empty())
		{
			aesl_tmp_504.push_back(edge_index_mat_s[3].read());
			aesl_tmp_505++;
		}

		// dump stream tvin: "edge_index_mat_s[4]"
		std::vector<ap_uint<14> > aesl_tmp_507;
		int aesl_tmp_508 = 0;
		while (!edge_index_mat_s[4].empty())
		{
			aesl_tmp_507.push_back(edge_index_mat_s[4].read());
			aesl_tmp_508++;
		}

		// dump stream tvin: "edge_index_mat_s[5]"
		std::vector<ap_uint<14> > aesl_tmp_510;
		int aesl_tmp_511 = 0;
		while (!edge_index_mat_s[5].empty())
		{
			aesl_tmp_510.push_back(edge_index_mat_s[5].read());
			aesl_tmp_511++;
		}

		// dump stream tvin: "edge_index_mat_s[6]"
		std::vector<ap_uint<14> > aesl_tmp_513;
		int aesl_tmp_514 = 0;
		while (!edge_index_mat_s[6].empty())
		{
			aesl_tmp_513.push_back(edge_index_mat_s[6].read());
			aesl_tmp_514++;
		}

		// dump stream tvin: "edge_index_mat_s[7]"
		std::vector<ap_uint<14> > aesl_tmp_516;
		int aesl_tmp_517 = 0;
		while (!edge_index_mat_s[7].empty())
		{
			aesl_tmp_516.push_back(edge_index_mat_s[7].read());
			aesl_tmp_517++;
		}

		// dump stream tvin: "edge_index_mat_s[8]"
		std::vector<ap_uint<14> > aesl_tmp_519;
		int aesl_tmp_520 = 0;
		while (!edge_index_mat_s[8].empty())
		{
			aesl_tmp_519.push_back(edge_index_mat_s[8].read());
			aesl_tmp_520++;
		}

		// dump stream tvin: "edge_index_mat_s[9]"
		std::vector<ap_uint<14> > aesl_tmp_522;
		int aesl_tmp_523 = 0;
		while (!edge_index_mat_s[9].empty())
		{
			aesl_tmp_522.push_back(edge_index_mat_s[9].read());
			aesl_tmp_523++;
		}

		// dump stream tvin: "edge_index_mat_s[10]"
		std::vector<ap_uint<14> > aesl_tmp_525;
		int aesl_tmp_526 = 0;
		while (!edge_index_mat_s[10].empty())
		{
			aesl_tmp_525.push_back(edge_index_mat_s[10].read());
			aesl_tmp_526++;
		}

		// dump stream tvin: "edge_index_mat_s[11]"
		std::vector<ap_uint<14> > aesl_tmp_528;
		int aesl_tmp_529 = 0;
		while (!edge_index_mat_s[11].empty())
		{
			aesl_tmp_528.push_back(edge_index_mat_s[11].read());
			aesl_tmp_529++;
		}

		// dump stream tvin: "edge_index_mat_s[12]"
		std::vector<ap_uint<14> > aesl_tmp_531;
		int aesl_tmp_532 = 0;
		while (!edge_index_mat_s[12].empty())
		{
			aesl_tmp_531.push_back(edge_index_mat_s[12].read());
			aesl_tmp_532++;
		}

		// dump stream tvin: "edge_index_mat_s[13]"
		std::vector<ap_uint<14> > aesl_tmp_534;
		int aesl_tmp_535 = 0;
		while (!edge_index_mat_s[13].empty())
		{
			aesl_tmp_534.push_back(edge_index_mat_s[13].read());
			aesl_tmp_535++;
		}

		// dump stream tvin: "edge_index_mat_s[14]"
		std::vector<ap_uint<14> > aesl_tmp_537;
		int aesl_tmp_538 = 0;
		while (!edge_index_mat_s[14].empty())
		{
			aesl_tmp_537.push_back(edge_index_mat_s[14].read());
			aesl_tmp_538++;
		}

		// dump stream tvin: "edge_index_mat_s[15]"
		std::vector<ap_uint<14> > aesl_tmp_540;
		int aesl_tmp_541 = 0;
		while (!edge_index_mat_s[15].empty())
		{
			aesl_tmp_540.push_back(edge_index_mat_s[15].read());
			aesl_tmp_541++;
		}

		// dump stream tvin: "edge_index_mat_s[16]"
		std::vector<ap_uint<14> > aesl_tmp_543;
		int aesl_tmp_544 = 0;
		while (!edge_index_mat_s[16].empty())
		{
			aesl_tmp_543.push_back(edge_index_mat_s[16].read());
			aesl_tmp_544++;
		}

		// dump stream tvin: "edge_index_mat_s[17]"
		std::vector<ap_uint<14> > aesl_tmp_546;
		int aesl_tmp_547 = 0;
		while (!edge_index_mat_s[17].empty())
		{
			aesl_tmp_546.push_back(edge_index_mat_s[17].read());
			aesl_tmp_547++;
		}

		// dump stream tvin: "edge_index_mat_s[18]"
		std::vector<ap_uint<14> > aesl_tmp_549;
		int aesl_tmp_550 = 0;
		while (!edge_index_mat_s[18].empty())
		{
			aesl_tmp_549.push_back(edge_index_mat_s[18].read());
			aesl_tmp_550++;
		}

		// dump stream tvin: "edge_index_mat_s[19]"
		std::vector<ap_uint<14> > aesl_tmp_552;
		int aesl_tmp_553 = 0;
		while (!edge_index_mat_s[19].empty())
		{
			aesl_tmp_552.push_back(edge_index_mat_s[19].read());
			aesl_tmp_553++;
		}

		// dump stream tvin: "edge_index_mat_s[20]"
		std::vector<ap_uint<14> > aesl_tmp_555;
		int aesl_tmp_556 = 0;
		while (!edge_index_mat_s[20].empty())
		{
			aesl_tmp_555.push_back(edge_index_mat_s[20].read());
			aesl_tmp_556++;
		}

		// dump stream tvin: "edge_index_mat_s[21]"
		std::vector<ap_uint<14> > aesl_tmp_558;
		int aesl_tmp_559 = 0;
		while (!edge_index_mat_s[21].empty())
		{
			aesl_tmp_558.push_back(edge_index_mat_s[21].read());
			aesl_tmp_559++;
		}

		// dump stream tvin: "edge_index_mat_s[22]"
		std::vector<ap_uint<14> > aesl_tmp_561;
		int aesl_tmp_562 = 0;
		while (!edge_index_mat_s[22].empty())
		{
			aesl_tmp_561.push_back(edge_index_mat_s[22].read());
			aesl_tmp_562++;
		}

		// dump stream tvin: "edge_index_mat_s[23]"
		std::vector<ap_uint<14> > aesl_tmp_564;
		int aesl_tmp_565 = 0;
		while (!edge_index_mat_s[23].empty())
		{
			aesl_tmp_564.push_back(edge_index_mat_s[23].read());
			aesl_tmp_565++;
		}

		// dump stream tvin: "edge_index_mat_s[24]"
		std::vector<ap_uint<14> > aesl_tmp_567;
		int aesl_tmp_568 = 0;
		while (!edge_index_mat_s[24].empty())
		{
			aesl_tmp_567.push_back(edge_index_mat_s[24].read());
			aesl_tmp_568++;
		}

		// dump stream tvin: "edge_index_mat_s[25]"
		std::vector<ap_uint<14> > aesl_tmp_570;
		int aesl_tmp_571 = 0;
		while (!edge_index_mat_s[25].empty())
		{
			aesl_tmp_570.push_back(edge_index_mat_s[25].read());
			aesl_tmp_571++;
		}

		// dump stream tvin: "layer11_out_s[0]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_573;
		int aesl_tmp_574 = 0;
		while (!layer11_out_s[0].empty())
		{
			aesl_tmp_573.push_back(layer11_out_s[0].read());
			aesl_tmp_574++;
		}

		// dump stream tvin: "layer11_out_s[1]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_576;
		int aesl_tmp_577 = 0;
		while (!layer11_out_s[1].empty())
		{
			aesl_tmp_576.push_back(layer11_out_s[1].read());
			aesl_tmp_577++;
		}

		// dump stream tvin: "layer11_out_s[2]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_579;
		int aesl_tmp_580 = 0;
		while (!layer11_out_s[2].empty())
		{
			aesl_tmp_579.push_back(layer11_out_s[2].read());
			aesl_tmp_580++;
		}

		// dump stream tvin: "layer11_out_s[3]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_582;
		int aesl_tmp_583 = 0;
		while (!layer11_out_s[3].empty())
		{
			aesl_tmp_582.push_back(layer11_out_s[3].read());
			aesl_tmp_583++;
		}

		// dump stream tvin: "layer11_out_s[4]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_585;
		int aesl_tmp_586 = 0;
		while (!layer11_out_s[4].empty())
		{
			aesl_tmp_585.push_back(layer11_out_s[4].read());
			aesl_tmp_586++;
		}

		// dump stream tvin: "layer11_out_s[5]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_588;
		int aesl_tmp_589 = 0;
		while (!layer11_out_s[5].empty())
		{
			aesl_tmp_588.push_back(layer11_out_s[5].read());
			aesl_tmp_589++;
		}

		// dump stream tvin: "layer11_out_s[6]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_591;
		int aesl_tmp_592 = 0;
		while (!layer11_out_s[6].empty())
		{
			aesl_tmp_591.push_back(layer11_out_s[6].read());
			aesl_tmp_592++;
		}

		// dump stream tvin: "layer11_out_s[7]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_594;
		int aesl_tmp_595 = 0;
		while (!layer11_out_s[7].empty())
		{
			aesl_tmp_594.push_back(layer11_out_s[7].read());
			aesl_tmp_595++;
		}

		// dump stream tvin: "layer11_out_s[8]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_597;
		int aesl_tmp_598 = 0;
		while (!layer11_out_s[8].empty())
		{
			aesl_tmp_597.push_back(layer11_out_s[8].read());
			aesl_tmp_598++;
		}

		// dump stream tvin: "layer11_out_s[9]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_600;
		int aesl_tmp_601 = 0;
		while (!layer11_out_s[9].empty())
		{
			aesl_tmp_600.push_back(layer11_out_s[9].read());
			aesl_tmp_601++;
		}

		// dump stream tvin: "layer11_out_s[10]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_603;
		int aesl_tmp_604 = 0;
		while (!layer11_out_s[10].empty())
		{
			aesl_tmp_603.push_back(layer11_out_s[10].read());
			aesl_tmp_604++;
		}

		// dump stream tvin: "layer11_out_s[11]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_606;
		int aesl_tmp_607 = 0;
		while (!layer11_out_s[11].empty())
		{
			aesl_tmp_606.push_back(layer11_out_s[11].read());
			aesl_tmp_607++;
		}

		// dump stream tvin: "layer11_out_s[12]"
		std::vector<ap_fixed<14, 7, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_609;
		int aesl_tmp_610 = 0;
		while (!layer11_out_s[12].empty())
		{
			aesl_tmp_609.push_back(layer11_out_s[12].read());
			aesl_tmp_610++;
		}

		// push back input stream: "node_attr_mat_s[0]"
		for (int i = 0; i < aesl_tmp_307; i++)
		{
			node_attr_mat_s[0].write(aesl_tmp_306[i]);
		}

		// push back input stream: "node_attr_mat_s[1]"
		for (int i = 0; i < aesl_tmp_310; i++)
		{
			node_attr_mat_s[1].write(aesl_tmp_309[i]);
		}

		// push back input stream: "node_attr_mat_s[2]"
		for (int i = 0; i < aesl_tmp_313; i++)
		{
			node_attr_mat_s[2].write(aesl_tmp_312[i]);
		}

		// push back input stream: "node_attr_mat_s[3]"
		for (int i = 0; i < aesl_tmp_316; i++)
		{
			node_attr_mat_s[3].write(aesl_tmp_315[i]);
		}

		// push back input stream: "node_attr_mat_s[4]"
		for (int i = 0; i < aesl_tmp_319; i++)
		{
			node_attr_mat_s[4].write(aesl_tmp_318[i]);
		}

		// push back input stream: "node_attr_mat_s[5]"
		for (int i = 0; i < aesl_tmp_322; i++)
		{
			node_attr_mat_s[5].write(aesl_tmp_321[i]);
		}

		// push back input stream: "node_attr_mat_s[6]"
		for (int i = 0; i < aesl_tmp_325; i++)
		{
			node_attr_mat_s[6].write(aesl_tmp_324[i]);
		}

		// push back input stream: "node_attr_mat_s[7]"
		for (int i = 0; i < aesl_tmp_328; i++)
		{
			node_attr_mat_s[7].write(aesl_tmp_327[i]);
		}

		// push back input stream: "node_attr_mat_s[8]"
		for (int i = 0; i < aesl_tmp_331; i++)
		{
			node_attr_mat_s[8].write(aesl_tmp_330[i]);
		}

		// push back input stream: "node_attr_mat_s[9]"
		for (int i = 0; i < aesl_tmp_334; i++)
		{
			node_attr_mat_s[9].write(aesl_tmp_333[i]);
		}

		// push back input stream: "node_attr_mat_s[10]"
		for (int i = 0; i < aesl_tmp_337; i++)
		{
			node_attr_mat_s[10].write(aesl_tmp_336[i]);
		}

		// push back input stream: "edge_attr_mat_s[0]"
		for (int i = 0; i < aesl_tmp_340; i++)
		{
			edge_attr_mat_s[0].write(aesl_tmp_339[i]);
		}

		// push back input stream: "edge_attr_mat_s[1]"
		for (int i = 0; i < aesl_tmp_343; i++)
		{
			edge_attr_mat_s[1].write(aesl_tmp_342[i]);
		}

		// push back input stream: "edge_attr_mat_s[2]"
		for (int i = 0; i < aesl_tmp_346; i++)
		{
			edge_attr_mat_s[2].write(aesl_tmp_345[i]);
		}

		// push back input stream: "edge_attr_mat_s[3]"
		for (int i = 0; i < aesl_tmp_349; i++)
		{
			edge_attr_mat_s[3].write(aesl_tmp_348[i]);
		}

		// push back input stream: "edge_attr_mat_s[4]"
		for (int i = 0; i < aesl_tmp_352; i++)
		{
			edge_attr_mat_s[4].write(aesl_tmp_351[i]);
		}

		// push back input stream: "edge_attr_mat_s[5]"
		for (int i = 0; i < aesl_tmp_355; i++)
		{
			edge_attr_mat_s[5].write(aesl_tmp_354[i]);
		}

		// push back input stream: "edge_attr_mat_s[6]"
		for (int i = 0; i < aesl_tmp_358; i++)
		{
			edge_attr_mat_s[6].write(aesl_tmp_357[i]);
		}

		// push back input stream: "edge_attr_mat_s[7]"
		for (int i = 0; i < aesl_tmp_361; i++)
		{
			edge_attr_mat_s[7].write(aesl_tmp_360[i]);
		}

		// push back input stream: "edge_attr_mat_s[8]"
		for (int i = 0; i < aesl_tmp_364; i++)
		{
			edge_attr_mat_s[8].write(aesl_tmp_363[i]);
		}

		// push back input stream: "edge_attr_mat_s[9]"
		for (int i = 0; i < aesl_tmp_367; i++)
		{
			edge_attr_mat_s[9].write(aesl_tmp_366[i]);
		}

		// push back input stream: "edge_attr_mat_s[10]"
		for (int i = 0; i < aesl_tmp_370; i++)
		{
			edge_attr_mat_s[10].write(aesl_tmp_369[i]);
		}

		// push back input stream: "edge_attr_mat_s[11]"
		for (int i = 0; i < aesl_tmp_373; i++)
		{
			edge_attr_mat_s[11].write(aesl_tmp_372[i]);
		}

		// push back input stream: "edge_attr_mat_s[12]"
		for (int i = 0; i < aesl_tmp_376; i++)
		{
			edge_attr_mat_s[12].write(aesl_tmp_375[i]);
		}

		// push back input stream: "edge_attr_mat_s[13]"
		for (int i = 0; i < aesl_tmp_379; i++)
		{
			edge_attr_mat_s[13].write(aesl_tmp_378[i]);
		}

		// push back input stream: "edge_attr_mat_s[14]"
		for (int i = 0; i < aesl_tmp_382; i++)
		{
			edge_attr_mat_s[14].write(aesl_tmp_381[i]);
		}

		// push back input stream: "edge_attr_mat_s[15]"
		for (int i = 0; i < aesl_tmp_385; i++)
		{
			edge_attr_mat_s[15].write(aesl_tmp_384[i]);
		}

		// push back input stream: "edge_attr_mat_s[16]"
		for (int i = 0; i < aesl_tmp_388; i++)
		{
			edge_attr_mat_s[16].write(aesl_tmp_387[i]);
		}

		// push back input stream: "edge_attr_mat_s[17]"
		for (int i = 0; i < aesl_tmp_391; i++)
		{
			edge_attr_mat_s[17].write(aesl_tmp_390[i]);
		}

		// push back input stream: "edge_attr_mat_s[18]"
		for (int i = 0; i < aesl_tmp_394; i++)
		{
			edge_attr_mat_s[18].write(aesl_tmp_393[i]);
		}

		// push back input stream: "edge_attr_mat_s[19]"
		for (int i = 0; i < aesl_tmp_397; i++)
		{
			edge_attr_mat_s[19].write(aesl_tmp_396[i]);
		}

		// push back input stream: "edge_attr_mat_s[20]"
		for (int i = 0; i < aesl_tmp_400; i++)
		{
			edge_attr_mat_s[20].write(aesl_tmp_399[i]);
		}

		// push back input stream: "edge_attr_mat_s[21]"
		for (int i = 0; i < aesl_tmp_403; i++)
		{
			edge_attr_mat_s[21].write(aesl_tmp_402[i]);
		}

		// push back input stream: "edge_attr_mat_s[22]"
		for (int i = 0; i < aesl_tmp_406; i++)
		{
			edge_attr_mat_s[22].write(aesl_tmp_405[i]);
		}

		// push back input stream: "edge_attr_mat_s[23]"
		for (int i = 0; i < aesl_tmp_409; i++)
		{
			edge_attr_mat_s[23].write(aesl_tmp_408[i]);
		}

		// push back input stream: "edge_attr_mat_s[24]"
		for (int i = 0; i < aesl_tmp_412; i++)
		{
			edge_attr_mat_s[24].write(aesl_tmp_411[i]);
		}

		// push back input stream: "edge_attr_mat_s[25]"
		for (int i = 0; i < aesl_tmp_415; i++)
		{
			edge_attr_mat_s[25].write(aesl_tmp_414[i]);
		}

		// push back input stream: "edge_attr_mat_s[26]"
		for (int i = 0; i < aesl_tmp_418; i++)
		{
			edge_attr_mat_s[26].write(aesl_tmp_417[i]);
		}

		// push back input stream: "edge_attr_mat_s[27]"
		for (int i = 0; i < aesl_tmp_421; i++)
		{
			edge_attr_mat_s[27].write(aesl_tmp_420[i]);
		}

		// push back input stream: "edge_attr_mat_s[28]"
		for (int i = 0; i < aesl_tmp_424; i++)
		{
			edge_attr_mat_s[28].write(aesl_tmp_423[i]);
		}

		// push back input stream: "edge_attr_mat_s[29]"
		for (int i = 0; i < aesl_tmp_427; i++)
		{
			edge_attr_mat_s[29].write(aesl_tmp_426[i]);
		}

		// push back input stream: "edge_attr_mat_s[30]"
		for (int i = 0; i < aesl_tmp_430; i++)
		{
			edge_attr_mat_s[30].write(aesl_tmp_429[i]);
		}

		// push back input stream: "edge_attr_mat_s[31]"
		for (int i = 0; i < aesl_tmp_433; i++)
		{
			edge_attr_mat_s[31].write(aesl_tmp_432[i]);
		}

		// push back input stream: "edge_attr_mat_s[32]"
		for (int i = 0; i < aesl_tmp_436; i++)
		{
			edge_attr_mat_s[32].write(aesl_tmp_435[i]);
		}

		// push back input stream: "edge_attr_mat_s[33]"
		for (int i = 0; i < aesl_tmp_439; i++)
		{
			edge_attr_mat_s[33].write(aesl_tmp_438[i]);
		}

		// push back input stream: "edge_attr_mat_s[34]"
		for (int i = 0; i < aesl_tmp_442; i++)
		{
			edge_attr_mat_s[34].write(aesl_tmp_441[i]);
		}

		// push back input stream: "edge_attr_mat_s[35]"
		for (int i = 0; i < aesl_tmp_445; i++)
		{
			edge_attr_mat_s[35].write(aesl_tmp_444[i]);
		}

		// push back input stream: "edge_attr_mat_s[36]"
		for (int i = 0; i < aesl_tmp_448; i++)
		{
			edge_attr_mat_s[36].write(aesl_tmp_447[i]);
		}

		// push back input stream: "edge_attr_mat_s[37]"
		for (int i = 0; i < aesl_tmp_451; i++)
		{
			edge_attr_mat_s[37].write(aesl_tmp_450[i]);
		}

		// push back input stream: "edge_attr_mat_s[38]"
		for (int i = 0; i < aesl_tmp_454; i++)
		{
			edge_attr_mat_s[38].write(aesl_tmp_453[i]);
		}

		// push back input stream: "edge_attr_mat_s[39]"
		for (int i = 0; i < aesl_tmp_457; i++)
		{
			edge_attr_mat_s[39].write(aesl_tmp_456[i]);
		}

		// push back input stream: "edge_attr_mat_s[40]"
		for (int i = 0; i < aesl_tmp_460; i++)
		{
			edge_attr_mat_s[40].write(aesl_tmp_459[i]);
		}

		// push back input stream: "edge_attr_mat_s[41]"
		for (int i = 0; i < aesl_tmp_463; i++)
		{
			edge_attr_mat_s[41].write(aesl_tmp_462[i]);
		}

		// push back input stream: "edge_attr_mat_s[42]"
		for (int i = 0; i < aesl_tmp_466; i++)
		{
			edge_attr_mat_s[42].write(aesl_tmp_465[i]);
		}

		// push back input stream: "edge_attr_mat_s[43]"
		for (int i = 0; i < aesl_tmp_469; i++)
		{
			edge_attr_mat_s[43].write(aesl_tmp_468[i]);
		}

		// push back input stream: "edge_attr_mat_s[44]"
		for (int i = 0; i < aesl_tmp_472; i++)
		{
			edge_attr_mat_s[44].write(aesl_tmp_471[i]);
		}

		// push back input stream: "edge_attr_mat_s[45]"
		for (int i = 0; i < aesl_tmp_475; i++)
		{
			edge_attr_mat_s[45].write(aesl_tmp_474[i]);
		}

		// push back input stream: "edge_attr_mat_s[46]"
		for (int i = 0; i < aesl_tmp_478; i++)
		{
			edge_attr_mat_s[46].write(aesl_tmp_477[i]);
		}

		// push back input stream: "edge_attr_mat_s[47]"
		for (int i = 0; i < aesl_tmp_481; i++)
		{
			edge_attr_mat_s[47].write(aesl_tmp_480[i]);
		}

		// push back input stream: "edge_attr_mat_s[48]"
		for (int i = 0; i < aesl_tmp_484; i++)
		{
			edge_attr_mat_s[48].write(aesl_tmp_483[i]);
		}

		// push back input stream: "edge_attr_mat_s[49]"
		for (int i = 0; i < aesl_tmp_487; i++)
		{
			edge_attr_mat_s[49].write(aesl_tmp_486[i]);
		}

		// push back input stream: "edge_attr_mat_s[50]"
		for (int i = 0; i < aesl_tmp_490; i++)
		{
			edge_attr_mat_s[50].write(aesl_tmp_489[i]);
		}

		// push back input stream: "edge_attr_mat_s[51]"
		for (int i = 0; i < aesl_tmp_493; i++)
		{
			edge_attr_mat_s[51].write(aesl_tmp_492[i]);
		}

		// push back input stream: "edge_index_mat_s[0]"
		for (int i = 0; i < aesl_tmp_496; i++)
		{
			edge_index_mat_s[0].write(aesl_tmp_495[i]);
		}

		// push back input stream: "edge_index_mat_s[1]"
		for (int i = 0; i < aesl_tmp_499; i++)
		{
			edge_index_mat_s[1].write(aesl_tmp_498[i]);
		}

		// push back input stream: "edge_index_mat_s[2]"
		for (int i = 0; i < aesl_tmp_502; i++)
		{
			edge_index_mat_s[2].write(aesl_tmp_501[i]);
		}

		// push back input stream: "edge_index_mat_s[3]"
		for (int i = 0; i < aesl_tmp_505; i++)
		{
			edge_index_mat_s[3].write(aesl_tmp_504[i]);
		}

		// push back input stream: "edge_index_mat_s[4]"
		for (int i = 0; i < aesl_tmp_508; i++)
		{
			edge_index_mat_s[4].write(aesl_tmp_507[i]);
		}

		// push back input stream: "edge_index_mat_s[5]"
		for (int i = 0; i < aesl_tmp_511; i++)
		{
			edge_index_mat_s[5].write(aesl_tmp_510[i]);
		}

		// push back input stream: "edge_index_mat_s[6]"
		for (int i = 0; i < aesl_tmp_514; i++)
		{
			edge_index_mat_s[6].write(aesl_tmp_513[i]);
		}

		// push back input stream: "edge_index_mat_s[7]"
		for (int i = 0; i < aesl_tmp_517; i++)
		{
			edge_index_mat_s[7].write(aesl_tmp_516[i]);
		}

		// push back input stream: "edge_index_mat_s[8]"
		for (int i = 0; i < aesl_tmp_520; i++)
		{
			edge_index_mat_s[8].write(aesl_tmp_519[i]);
		}

		// push back input stream: "edge_index_mat_s[9]"
		for (int i = 0; i < aesl_tmp_523; i++)
		{
			edge_index_mat_s[9].write(aesl_tmp_522[i]);
		}

		// push back input stream: "edge_index_mat_s[10]"
		for (int i = 0; i < aesl_tmp_526; i++)
		{
			edge_index_mat_s[10].write(aesl_tmp_525[i]);
		}

		// push back input stream: "edge_index_mat_s[11]"
		for (int i = 0; i < aesl_tmp_529; i++)
		{
			edge_index_mat_s[11].write(aesl_tmp_528[i]);
		}

		// push back input stream: "edge_index_mat_s[12]"
		for (int i = 0; i < aesl_tmp_532; i++)
		{
			edge_index_mat_s[12].write(aesl_tmp_531[i]);
		}

		// push back input stream: "edge_index_mat_s[13]"
		for (int i = 0; i < aesl_tmp_535; i++)
		{
			edge_index_mat_s[13].write(aesl_tmp_534[i]);
		}

		// push back input stream: "edge_index_mat_s[14]"
		for (int i = 0; i < aesl_tmp_538; i++)
		{
			edge_index_mat_s[14].write(aesl_tmp_537[i]);
		}

		// push back input stream: "edge_index_mat_s[15]"
		for (int i = 0; i < aesl_tmp_541; i++)
		{
			edge_index_mat_s[15].write(aesl_tmp_540[i]);
		}

		// push back input stream: "edge_index_mat_s[16]"
		for (int i = 0; i < aesl_tmp_544; i++)
		{
			edge_index_mat_s[16].write(aesl_tmp_543[i]);
		}

		// push back input stream: "edge_index_mat_s[17]"
		for (int i = 0; i < aesl_tmp_547; i++)
		{
			edge_index_mat_s[17].write(aesl_tmp_546[i]);
		}

		// push back input stream: "edge_index_mat_s[18]"
		for (int i = 0; i < aesl_tmp_550; i++)
		{
			edge_index_mat_s[18].write(aesl_tmp_549[i]);
		}

		// push back input stream: "edge_index_mat_s[19]"
		for (int i = 0; i < aesl_tmp_553; i++)
		{
			edge_index_mat_s[19].write(aesl_tmp_552[i]);
		}

		// push back input stream: "edge_index_mat_s[20]"
		for (int i = 0; i < aesl_tmp_556; i++)
		{
			edge_index_mat_s[20].write(aesl_tmp_555[i]);
		}

		// push back input stream: "edge_index_mat_s[21]"
		for (int i = 0; i < aesl_tmp_559; i++)
		{
			edge_index_mat_s[21].write(aesl_tmp_558[i]);
		}

		// push back input stream: "edge_index_mat_s[22]"
		for (int i = 0; i < aesl_tmp_562; i++)
		{
			edge_index_mat_s[22].write(aesl_tmp_561[i]);
		}

		// push back input stream: "edge_index_mat_s[23]"
		for (int i = 0; i < aesl_tmp_565; i++)
		{
			edge_index_mat_s[23].write(aesl_tmp_564[i]);
		}

		// push back input stream: "edge_index_mat_s[24]"
		for (int i = 0; i < aesl_tmp_568; i++)
		{
			edge_index_mat_s[24].write(aesl_tmp_567[i]);
		}

		// push back input stream: "edge_index_mat_s[25]"
		for (int i = 0; i < aesl_tmp_571; i++)
		{
			edge_index_mat_s[25].write(aesl_tmp_570[i]);
		}

		// push back input stream: "layer11_out_s[0]"
		for (int i = 0; i < aesl_tmp_574; i++)
		{
			layer11_out_s[0].write(aesl_tmp_573[i]);
		}

		// push back input stream: "layer11_out_s[1]"
		for (int i = 0; i < aesl_tmp_577; i++)
		{
			layer11_out_s[1].write(aesl_tmp_576[i]);
		}

		// push back input stream: "layer11_out_s[2]"
		for (int i = 0; i < aesl_tmp_580; i++)
		{
			layer11_out_s[2].write(aesl_tmp_579[i]);
		}

		// push back input stream: "layer11_out_s[3]"
		for (int i = 0; i < aesl_tmp_583; i++)
		{
			layer11_out_s[3].write(aesl_tmp_582[i]);
		}

		// push back input stream: "layer11_out_s[4]"
		for (int i = 0; i < aesl_tmp_586; i++)
		{
			layer11_out_s[4].write(aesl_tmp_585[i]);
		}

		// push back input stream: "layer11_out_s[5]"
		for (int i = 0; i < aesl_tmp_589; i++)
		{
			layer11_out_s[5].write(aesl_tmp_588[i]);
		}

		// push back input stream: "layer11_out_s[6]"
		for (int i = 0; i < aesl_tmp_592; i++)
		{
			layer11_out_s[6].write(aesl_tmp_591[i]);
		}

		// push back input stream: "layer11_out_s[7]"
		for (int i = 0; i < aesl_tmp_595; i++)
		{
			layer11_out_s[7].write(aesl_tmp_594[i]);
		}

		// push back input stream: "layer11_out_s[8]"
		for (int i = 0; i < aesl_tmp_598; i++)
		{
			layer11_out_s[8].write(aesl_tmp_597[i]);
		}

		// push back input stream: "layer11_out_s[9]"
		for (int i = 0; i < aesl_tmp_601; i++)
		{
			layer11_out_s[9].write(aesl_tmp_600[i]);
		}

		// push back input stream: "layer11_out_s[10]"
		for (int i = 0; i < aesl_tmp_604; i++)
		{
			layer11_out_s[10].write(aesl_tmp_603[i]);
		}

		// push back input stream: "layer11_out_s[11]"
		for (int i = 0; i < aesl_tmp_607; i++)
		{
			layer11_out_s[11].write(aesl_tmp_606[i]);
		}

		// push back input stream: "layer11_out_s[12]"
		for (int i = 0; i < aesl_tmp_610; i++)
		{
			layer11_out_s[12].write(aesl_tmp_609[i]);
		}

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		example(node_attr_mat_s, edge_attr_mat_s, edge_index_mat_s, layer11_out_s, const_size_in_1, const_size_in_2, const_size_in_3, const_size_out_1);

		CodeState = DUMP_OUTPUTS;
		// record input size to tv3: "node_attr_mat_s[0]"
		int aesl_tmp_308 = node_attr_mat_s[0].size();

		// record input size to tv3: "node_attr_mat_s[1]"
		int aesl_tmp_311 = node_attr_mat_s[1].size();

		// record input size to tv3: "node_attr_mat_s[2]"
		int aesl_tmp_314 = node_attr_mat_s[2].size();

		// record input size to tv3: "node_attr_mat_s[3]"
		int aesl_tmp_317 = node_attr_mat_s[3].size();

		// record input size to tv3: "node_attr_mat_s[4]"
		int aesl_tmp_320 = node_attr_mat_s[4].size();

		// record input size to tv3: "node_attr_mat_s[5]"
		int aesl_tmp_323 = node_attr_mat_s[5].size();

		// record input size to tv3: "node_attr_mat_s[6]"
		int aesl_tmp_326 = node_attr_mat_s[6].size();

		// record input size to tv3: "node_attr_mat_s[7]"
		int aesl_tmp_329 = node_attr_mat_s[7].size();

		// record input size to tv3: "node_attr_mat_s[8]"
		int aesl_tmp_332 = node_attr_mat_s[8].size();

		// record input size to tv3: "node_attr_mat_s[9]"
		int aesl_tmp_335 = node_attr_mat_s[9].size();

		// record input size to tv3: "node_attr_mat_s[10]"
		int aesl_tmp_338 = node_attr_mat_s[10].size();

		// record input size to tv3: "edge_attr_mat_s[0]"
		int aesl_tmp_341 = edge_attr_mat_s[0].size();

		// record input size to tv3: "edge_attr_mat_s[1]"
		int aesl_tmp_344 = edge_attr_mat_s[1].size();

		// record input size to tv3: "edge_attr_mat_s[2]"
		int aesl_tmp_347 = edge_attr_mat_s[2].size();

		// record input size to tv3: "edge_attr_mat_s[3]"
		int aesl_tmp_350 = edge_attr_mat_s[3].size();

		// record input size to tv3: "edge_attr_mat_s[4]"
		int aesl_tmp_353 = edge_attr_mat_s[4].size();

		// record input size to tv3: "edge_attr_mat_s[5]"
		int aesl_tmp_356 = edge_attr_mat_s[5].size();

		// record input size to tv3: "edge_attr_mat_s[6]"
		int aesl_tmp_359 = edge_attr_mat_s[6].size();

		// record input size to tv3: "edge_attr_mat_s[7]"
		int aesl_tmp_362 = edge_attr_mat_s[7].size();

		// record input size to tv3: "edge_attr_mat_s[8]"
		int aesl_tmp_365 = edge_attr_mat_s[8].size();

		// record input size to tv3: "edge_attr_mat_s[9]"
		int aesl_tmp_368 = edge_attr_mat_s[9].size();

		// record input size to tv3: "edge_attr_mat_s[10]"
		int aesl_tmp_371 = edge_attr_mat_s[10].size();

		// record input size to tv3: "edge_attr_mat_s[11]"
		int aesl_tmp_374 = edge_attr_mat_s[11].size();

		// record input size to tv3: "edge_attr_mat_s[12]"
		int aesl_tmp_377 = edge_attr_mat_s[12].size();

		// record input size to tv3: "edge_attr_mat_s[13]"
		int aesl_tmp_380 = edge_attr_mat_s[13].size();

		// record input size to tv3: "edge_attr_mat_s[14]"
		int aesl_tmp_383 = edge_attr_mat_s[14].size();

		// record input size to tv3: "edge_attr_mat_s[15]"
		int aesl_tmp_386 = edge_attr_mat_s[15].size();

		// record input size to tv3: "edge_attr_mat_s[16]"
		int aesl_tmp_389 = edge_attr_mat_s[16].size();

		// record input size to tv3: "edge_attr_mat_s[17]"
		int aesl_tmp_392 = edge_attr_mat_s[17].size();

		// record input size to tv3: "edge_attr_mat_s[18]"
		int aesl_tmp_395 = edge_attr_mat_s[18].size();

		// record input size to tv3: "edge_attr_mat_s[19]"
		int aesl_tmp_398 = edge_attr_mat_s[19].size();

		// record input size to tv3: "edge_attr_mat_s[20]"
		int aesl_tmp_401 = edge_attr_mat_s[20].size();

		// record input size to tv3: "edge_attr_mat_s[21]"
		int aesl_tmp_404 = edge_attr_mat_s[21].size();

		// record input size to tv3: "edge_attr_mat_s[22]"
		int aesl_tmp_407 = edge_attr_mat_s[22].size();

		// record input size to tv3: "edge_attr_mat_s[23]"
		int aesl_tmp_410 = edge_attr_mat_s[23].size();

		// record input size to tv3: "edge_attr_mat_s[24]"
		int aesl_tmp_413 = edge_attr_mat_s[24].size();

		// record input size to tv3: "edge_attr_mat_s[25]"
		int aesl_tmp_416 = edge_attr_mat_s[25].size();

		// record input size to tv3: "edge_attr_mat_s[26]"
		int aesl_tmp_419 = edge_attr_mat_s[26].size();

		// record input size to tv3: "edge_attr_mat_s[27]"
		int aesl_tmp_422 = edge_attr_mat_s[27].size();

		// record input size to tv3: "edge_attr_mat_s[28]"
		int aesl_tmp_425 = edge_attr_mat_s[28].size();

		// record input size to tv3: "edge_attr_mat_s[29]"
		int aesl_tmp_428 = edge_attr_mat_s[29].size();

		// record input size to tv3: "edge_attr_mat_s[30]"
		int aesl_tmp_431 = edge_attr_mat_s[30].size();

		// record input size to tv3: "edge_attr_mat_s[31]"
		int aesl_tmp_434 = edge_attr_mat_s[31].size();

		// record input size to tv3: "edge_attr_mat_s[32]"
		int aesl_tmp_437 = edge_attr_mat_s[32].size();

		// record input size to tv3: "edge_attr_mat_s[33]"
		int aesl_tmp_440 = edge_attr_mat_s[33].size();

		// record input size to tv3: "edge_attr_mat_s[34]"
		int aesl_tmp_443 = edge_attr_mat_s[34].size();

		// record input size to tv3: "edge_attr_mat_s[35]"
		int aesl_tmp_446 = edge_attr_mat_s[35].size();

		// record input size to tv3: "edge_attr_mat_s[36]"
		int aesl_tmp_449 = edge_attr_mat_s[36].size();

		// record input size to tv3: "edge_attr_mat_s[37]"
		int aesl_tmp_452 = edge_attr_mat_s[37].size();

		// record input size to tv3: "edge_attr_mat_s[38]"
		int aesl_tmp_455 = edge_attr_mat_s[38].size();

		// record input size to tv3: "edge_attr_mat_s[39]"
		int aesl_tmp_458 = edge_attr_mat_s[39].size();

		// record input size to tv3: "edge_attr_mat_s[40]"
		int aesl_tmp_461 = edge_attr_mat_s[40].size();

		// record input size to tv3: "edge_attr_mat_s[41]"
		int aesl_tmp_464 = edge_attr_mat_s[41].size();

		// record input size to tv3: "edge_attr_mat_s[42]"
		int aesl_tmp_467 = edge_attr_mat_s[42].size();

		// record input size to tv3: "edge_attr_mat_s[43]"
		int aesl_tmp_470 = edge_attr_mat_s[43].size();

		// record input size to tv3: "edge_attr_mat_s[44]"
		int aesl_tmp_473 = edge_attr_mat_s[44].size();

		// record input size to tv3: "edge_attr_mat_s[45]"
		int aesl_tmp_476 = edge_attr_mat_s[45].size();

		// record input size to tv3: "edge_attr_mat_s[46]"
		int aesl_tmp_479 = edge_attr_mat_s[46].size();

		// record input size to tv3: "edge_attr_mat_s[47]"
		int aesl_tmp_482 = edge_attr_mat_s[47].size();

		// record input size to tv3: "edge_attr_mat_s[48]"
		int aesl_tmp_485 = edge_attr_mat_s[48].size();

		// record input size to tv3: "edge_attr_mat_s[49]"
		int aesl_tmp_488 = edge_attr_mat_s[49].size();

		// record input size to tv3: "edge_attr_mat_s[50]"
		int aesl_tmp_491 = edge_attr_mat_s[50].size();

		// record input size to tv3: "edge_attr_mat_s[51]"
		int aesl_tmp_494 = edge_attr_mat_s[51].size();

		// record input size to tv3: "edge_index_mat_s[0]"
		int aesl_tmp_497 = edge_index_mat_s[0].size();

		// record input size to tv3: "edge_index_mat_s[1]"
		int aesl_tmp_500 = edge_index_mat_s[1].size();

		// record input size to tv3: "edge_index_mat_s[2]"
		int aesl_tmp_503 = edge_index_mat_s[2].size();

		// record input size to tv3: "edge_index_mat_s[3]"
		int aesl_tmp_506 = edge_index_mat_s[3].size();

		// record input size to tv3: "edge_index_mat_s[4]"
		int aesl_tmp_509 = edge_index_mat_s[4].size();

		// record input size to tv3: "edge_index_mat_s[5]"
		int aesl_tmp_512 = edge_index_mat_s[5].size();

		// record input size to tv3: "edge_index_mat_s[6]"
		int aesl_tmp_515 = edge_index_mat_s[6].size();

		// record input size to tv3: "edge_index_mat_s[7]"
		int aesl_tmp_518 = edge_index_mat_s[7].size();

		// record input size to tv3: "edge_index_mat_s[8]"
		int aesl_tmp_521 = edge_index_mat_s[8].size();

		// record input size to tv3: "edge_index_mat_s[9]"
		int aesl_tmp_524 = edge_index_mat_s[9].size();

		// record input size to tv3: "edge_index_mat_s[10]"
		int aesl_tmp_527 = edge_index_mat_s[10].size();

		// record input size to tv3: "edge_index_mat_s[11]"
		int aesl_tmp_530 = edge_index_mat_s[11].size();

		// record input size to tv3: "edge_index_mat_s[12]"
		int aesl_tmp_533 = edge_index_mat_s[12].size();

		// record input size to tv3: "edge_index_mat_s[13]"
		int aesl_tmp_536 = edge_index_mat_s[13].size();

		// record input size to tv3: "edge_index_mat_s[14]"
		int aesl_tmp_539 = edge_index_mat_s[14].size();

		// record input size to tv3: "edge_index_mat_s[15]"
		int aesl_tmp_542 = edge_index_mat_s[15].size();

		// record input size to tv3: "edge_index_mat_s[16]"
		int aesl_tmp_545 = edge_index_mat_s[16].size();

		// record input size to tv3: "edge_index_mat_s[17]"
		int aesl_tmp_548 = edge_index_mat_s[17].size();

		// record input size to tv3: "edge_index_mat_s[18]"
		int aesl_tmp_551 = edge_index_mat_s[18].size();

		// record input size to tv3: "edge_index_mat_s[19]"
		int aesl_tmp_554 = edge_index_mat_s[19].size();

		// record input size to tv3: "edge_index_mat_s[20]"
		int aesl_tmp_557 = edge_index_mat_s[20].size();

		// record input size to tv3: "edge_index_mat_s[21]"
		int aesl_tmp_560 = edge_index_mat_s[21].size();

		// record input size to tv3: "edge_index_mat_s[22]"
		int aesl_tmp_563 = edge_index_mat_s[22].size();

		// record input size to tv3: "edge_index_mat_s[23]"
		int aesl_tmp_566 = edge_index_mat_s[23].size();

		// record input size to tv3: "edge_index_mat_s[24]"
		int aesl_tmp_569 = edge_index_mat_s[24].size();

		// record input size to tv3: "edge_index_mat_s[25]"
		int aesl_tmp_572 = edge_index_mat_s[25].size();

		// pop output stream: "layer11_out_s[0]"
		int aesl_tmp_575 = aesl_tmp_574;
		aesl_tmp_574 = 0;
     aesl_tmp_573.clear();
		while (!layer11_out_s[0].empty())
		{
			aesl_tmp_573.push_back(layer11_out_s[0].read());
			aesl_tmp_574++;
		}

		// pop output stream: "layer11_out_s[1]"
		int aesl_tmp_578 = aesl_tmp_577;
		aesl_tmp_577 = 0;
     aesl_tmp_576.clear();
		while (!layer11_out_s[1].empty())
		{
			aesl_tmp_576.push_back(layer11_out_s[1].read());
			aesl_tmp_577++;
		}

		// pop output stream: "layer11_out_s[2]"
		int aesl_tmp_581 = aesl_tmp_580;
		aesl_tmp_580 = 0;
     aesl_tmp_579.clear();
		while (!layer11_out_s[2].empty())
		{
			aesl_tmp_579.push_back(layer11_out_s[2].read());
			aesl_tmp_580++;
		}

		// pop output stream: "layer11_out_s[3]"
		int aesl_tmp_584 = aesl_tmp_583;
		aesl_tmp_583 = 0;
     aesl_tmp_582.clear();
		while (!layer11_out_s[3].empty())
		{
			aesl_tmp_582.push_back(layer11_out_s[3].read());
			aesl_tmp_583++;
		}

		// pop output stream: "layer11_out_s[4]"
		int aesl_tmp_587 = aesl_tmp_586;
		aesl_tmp_586 = 0;
     aesl_tmp_585.clear();
		while (!layer11_out_s[4].empty())
		{
			aesl_tmp_585.push_back(layer11_out_s[4].read());
			aesl_tmp_586++;
		}

		// pop output stream: "layer11_out_s[5]"
		int aesl_tmp_590 = aesl_tmp_589;
		aesl_tmp_589 = 0;
     aesl_tmp_588.clear();
		while (!layer11_out_s[5].empty())
		{
			aesl_tmp_588.push_back(layer11_out_s[5].read());
			aesl_tmp_589++;
		}

		// pop output stream: "layer11_out_s[6]"
		int aesl_tmp_593 = aesl_tmp_592;
		aesl_tmp_592 = 0;
     aesl_tmp_591.clear();
		while (!layer11_out_s[6].empty())
		{
			aesl_tmp_591.push_back(layer11_out_s[6].read());
			aesl_tmp_592++;
		}

		// pop output stream: "layer11_out_s[7]"
		int aesl_tmp_596 = aesl_tmp_595;
		aesl_tmp_595 = 0;
     aesl_tmp_594.clear();
		while (!layer11_out_s[7].empty())
		{
			aesl_tmp_594.push_back(layer11_out_s[7].read());
			aesl_tmp_595++;
		}

		// pop output stream: "layer11_out_s[8]"
		int aesl_tmp_599 = aesl_tmp_598;
		aesl_tmp_598 = 0;
     aesl_tmp_597.clear();
		while (!layer11_out_s[8].empty())
		{
			aesl_tmp_597.push_back(layer11_out_s[8].read());
			aesl_tmp_598++;
		}

		// pop output stream: "layer11_out_s[9]"
		int aesl_tmp_602 = aesl_tmp_601;
		aesl_tmp_601 = 0;
     aesl_tmp_600.clear();
		while (!layer11_out_s[9].empty())
		{
			aesl_tmp_600.push_back(layer11_out_s[9].read());
			aesl_tmp_601++;
		}

		// pop output stream: "layer11_out_s[10]"
		int aesl_tmp_605 = aesl_tmp_604;
		aesl_tmp_604 = 0;
     aesl_tmp_603.clear();
		while (!layer11_out_s[10].empty())
		{
			aesl_tmp_603.push_back(layer11_out_s[10].read());
			aesl_tmp_604++;
		}

		// pop output stream: "layer11_out_s[11]"
		int aesl_tmp_608 = aesl_tmp_607;
		aesl_tmp_607 = 0;
     aesl_tmp_606.clear();
		while (!layer11_out_s[11].empty())
		{
			aesl_tmp_606.push_back(layer11_out_s[11].read());
			aesl_tmp_607++;
		}

		// pop output stream: "layer11_out_s[12]"
		int aesl_tmp_611 = aesl_tmp_610;
		aesl_tmp_610 = 0;
     aesl_tmp_609.clear();
		while (!layer11_out_s[12].empty())
		{
			aesl_tmp_609.push_back(layer11_out_s[12].read());
			aesl_tmp_610++;
		}

		// [[transaction]]
		sprintf(tvin_node_attr_mat_s_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_node_attr_mat_s_V_V, tvin_node_attr_mat_s_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_node_attr_mat_s_V_V, tvin_node_attr_mat_s_V_V);

		sc_bv<14>* node_attr_mat_s_V_V_tvin_wrapc_buffer = new sc_bv<14>[11];

		// RTL Name: node_attr_mat_s_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: node_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_307 - aesl_tmp_308 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_307 - aesl_tmp_308 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_306[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_306[0]
						// regulate_c_name       : node_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_306[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_306[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> node_attr_mat_s_V_V_tmp_mem;
							node_attr_mat_s_V_V_tmp_mem = (aesl_tmp_306[i_0]).range().to_string(SC_BIN).c_str();
							node_attr_mat_s_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = node_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_307 - aesl_tmp_308; i++)
		{
			sprintf(tvin_node_attr_mat_s_V_V, "%s\n", (node_attr_mat_s_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_node_attr_mat_s_V_V, tvin_node_attr_mat_s_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_307 > aesl_tmp_308)
     {
		sc_int<32> stream_ingress_size_node_attr_mat_s_V_V = aesl_tmp_307;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_node_attr_mat_s_V_V, stream_ingress_size_node_attr_mat_s_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_node_attr_mat_s_V_V, "\n");

		for (int i = 0; i < aesl_tmp_307 - aesl_tmp_308; i++)
		{
			stream_ingress_size_node_attr_mat_s_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_node_attr_mat_s_V_V, stream_ingress_size_node_attr_mat_s_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_node_attr_mat_s_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_node_attr_mat_s_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_node_attr_mat_s_V_V, stream_ingress_size_node_attr_mat_s_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_node_attr_mat_s_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_307 - aesl_tmp_308, &tcl_file.node_attr_mat_s_V_V_depth);
		sprintf(tvin_node_attr_mat_s_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_node_attr_mat_s_V_V, tvin_node_attr_mat_s_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_node_attr_mat_s_V_V, tvin_node_attr_mat_s_V_V);

		// release memory allocation
		delete [] node_attr_mat_s_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_node_attr_mat_s_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, wrapc_stream_size_in_node_attr_mat_s_V_V);
		sprintf(wrapc_stream_size_in_node_attr_mat_s_V_V, "%d\n", aesl_tmp_307 - aesl_tmp_308);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, wrapc_stream_size_in_node_attr_mat_s_V_V);
		sprintf(wrapc_stream_size_in_node_attr_mat_s_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_node_attr_mat_s_V_V, wrapc_stream_size_in_node_attr_mat_s_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_0_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_0_V_V, tvin_edge_attr_mat_s_0_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_0_V_V, tvin_edge_attr_mat_s_0_V_V);

		sc_bv<14>* edge_attr_mat_s_0_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_340 - aesl_tmp_341];

		// RTL Name: edge_attr_mat_s_0_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_340 - aesl_tmp_341 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_340 - aesl_tmp_341 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_339[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_339[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_339[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_339[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_339[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_0_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_340 - aesl_tmp_341; i++)
		{
			sprintf(tvin_edge_attr_mat_s_0_V_V, "%s\n", (edge_attr_mat_s_0_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_0_V_V, tvin_edge_attr_mat_s_0_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_340 > aesl_tmp_341)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_0_V_V = aesl_tmp_340;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_0_V_V, stream_ingress_size_edge_attr_mat_s_0_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_0_V_V, "\n");

		for (int i = 0; i < aesl_tmp_340 - aesl_tmp_341; i++)
		{
			stream_ingress_size_edge_attr_mat_s_0_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_0_V_V, stream_ingress_size_edge_attr_mat_s_0_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_0_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_0_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_0_V_V, stream_ingress_size_edge_attr_mat_s_0_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_0_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_340 - aesl_tmp_341, &tcl_file.edge_attr_mat_s_0_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_0_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_0_V_V, tvin_edge_attr_mat_s_0_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_0_V_V, tvin_edge_attr_mat_s_0_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_0_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_0_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, wrapc_stream_size_in_edge_attr_mat_s_0_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_0_V_V, "%d\n", aesl_tmp_340 - aesl_tmp_341);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, wrapc_stream_size_in_edge_attr_mat_s_0_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_0_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_0_V_V, wrapc_stream_size_in_edge_attr_mat_s_0_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_1_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_1_V_V, tvin_edge_attr_mat_s_1_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_1_V_V, tvin_edge_attr_mat_s_1_V_V);

		sc_bv<14>* edge_attr_mat_s_1_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_343 - aesl_tmp_344];

		// RTL Name: edge_attr_mat_s_1_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_343 - aesl_tmp_344 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_343 - aesl_tmp_344 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_342[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_342[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_342[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_342[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_342[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_1_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_343 - aesl_tmp_344; i++)
		{
			sprintf(tvin_edge_attr_mat_s_1_V_V, "%s\n", (edge_attr_mat_s_1_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_1_V_V, tvin_edge_attr_mat_s_1_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_343 > aesl_tmp_344)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_1_V_V = aesl_tmp_343;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_1_V_V, stream_ingress_size_edge_attr_mat_s_1_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_1_V_V, "\n");

		for (int i = 0; i < aesl_tmp_343 - aesl_tmp_344; i++)
		{
			stream_ingress_size_edge_attr_mat_s_1_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_1_V_V, stream_ingress_size_edge_attr_mat_s_1_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_1_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_1_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_1_V_V, stream_ingress_size_edge_attr_mat_s_1_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_1_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_343 - aesl_tmp_344, &tcl_file.edge_attr_mat_s_1_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_1_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_1_V_V, tvin_edge_attr_mat_s_1_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_1_V_V, tvin_edge_attr_mat_s_1_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_1_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_1_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_1_V_V, wrapc_stream_size_in_edge_attr_mat_s_1_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_1_V_V, "%d\n", aesl_tmp_343 - aesl_tmp_344);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_1_V_V, wrapc_stream_size_in_edge_attr_mat_s_1_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_1_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_1_V_V, wrapc_stream_size_in_edge_attr_mat_s_1_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_2_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_2_V_V, tvin_edge_attr_mat_s_2_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_2_V_V, tvin_edge_attr_mat_s_2_V_V);

		sc_bv<14>* edge_attr_mat_s_2_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_346 - aesl_tmp_347];

		// RTL Name: edge_attr_mat_s_2_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_346 - aesl_tmp_347 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_346 - aesl_tmp_347 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_345[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_345[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_345[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_345[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_345[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_2_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_346 - aesl_tmp_347; i++)
		{
			sprintf(tvin_edge_attr_mat_s_2_V_V, "%s\n", (edge_attr_mat_s_2_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_2_V_V, tvin_edge_attr_mat_s_2_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_346 > aesl_tmp_347)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_2_V_V = aesl_tmp_346;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_2_V_V, stream_ingress_size_edge_attr_mat_s_2_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_2_V_V, "\n");

		for (int i = 0; i < aesl_tmp_346 - aesl_tmp_347; i++)
		{
			stream_ingress_size_edge_attr_mat_s_2_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_2_V_V, stream_ingress_size_edge_attr_mat_s_2_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_2_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_2_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_2_V_V, stream_ingress_size_edge_attr_mat_s_2_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_2_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_346 - aesl_tmp_347, &tcl_file.edge_attr_mat_s_2_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_2_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_2_V_V, tvin_edge_attr_mat_s_2_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_2_V_V, tvin_edge_attr_mat_s_2_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_2_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_2_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_2_V_V, wrapc_stream_size_in_edge_attr_mat_s_2_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_2_V_V, "%d\n", aesl_tmp_346 - aesl_tmp_347);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_2_V_V, wrapc_stream_size_in_edge_attr_mat_s_2_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_2_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_2_V_V, wrapc_stream_size_in_edge_attr_mat_s_2_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_3_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_3_V_V, tvin_edge_attr_mat_s_3_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_3_V_V, tvin_edge_attr_mat_s_3_V_V);

		sc_bv<14>* edge_attr_mat_s_3_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_349 - aesl_tmp_350];

		// RTL Name: edge_attr_mat_s_3_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_349 - aesl_tmp_350 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_349 - aesl_tmp_350 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_348[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_348[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_348[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_348[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_348[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_3_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_349 - aesl_tmp_350; i++)
		{
			sprintf(tvin_edge_attr_mat_s_3_V_V, "%s\n", (edge_attr_mat_s_3_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_3_V_V, tvin_edge_attr_mat_s_3_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_349 > aesl_tmp_350)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_3_V_V = aesl_tmp_349;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_3_V_V, stream_ingress_size_edge_attr_mat_s_3_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_3_V_V, "\n");

		for (int i = 0; i < aesl_tmp_349 - aesl_tmp_350; i++)
		{
			stream_ingress_size_edge_attr_mat_s_3_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_3_V_V, stream_ingress_size_edge_attr_mat_s_3_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_3_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_3_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_3_V_V, stream_ingress_size_edge_attr_mat_s_3_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_3_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_349 - aesl_tmp_350, &tcl_file.edge_attr_mat_s_3_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_3_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_3_V_V, tvin_edge_attr_mat_s_3_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_3_V_V, tvin_edge_attr_mat_s_3_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_3_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_3_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_3_V_V, wrapc_stream_size_in_edge_attr_mat_s_3_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_3_V_V, "%d\n", aesl_tmp_349 - aesl_tmp_350);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_3_V_V, wrapc_stream_size_in_edge_attr_mat_s_3_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_3_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_3_V_V, wrapc_stream_size_in_edge_attr_mat_s_3_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_4_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_4_V_V, tvin_edge_attr_mat_s_4_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_4_V_V, tvin_edge_attr_mat_s_4_V_V);

		sc_bv<14>* edge_attr_mat_s_4_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_352 - aesl_tmp_353];

		// RTL Name: edge_attr_mat_s_4_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_352 - aesl_tmp_353 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_352 - aesl_tmp_353 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_351[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_351[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_351[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_351[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_351[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_4_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_352 - aesl_tmp_353; i++)
		{
			sprintf(tvin_edge_attr_mat_s_4_V_V, "%s\n", (edge_attr_mat_s_4_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_4_V_V, tvin_edge_attr_mat_s_4_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_352 > aesl_tmp_353)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_4_V_V = aesl_tmp_352;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_4_V_V, stream_ingress_size_edge_attr_mat_s_4_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_4_V_V, "\n");

		for (int i = 0; i < aesl_tmp_352 - aesl_tmp_353; i++)
		{
			stream_ingress_size_edge_attr_mat_s_4_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_4_V_V, stream_ingress_size_edge_attr_mat_s_4_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_4_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_4_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_4_V_V, stream_ingress_size_edge_attr_mat_s_4_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_4_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_352 - aesl_tmp_353, &tcl_file.edge_attr_mat_s_4_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_4_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_4_V_V, tvin_edge_attr_mat_s_4_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_4_V_V, tvin_edge_attr_mat_s_4_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_4_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_4_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_4_V_V, wrapc_stream_size_in_edge_attr_mat_s_4_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_4_V_V, "%d\n", aesl_tmp_352 - aesl_tmp_353);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_4_V_V, wrapc_stream_size_in_edge_attr_mat_s_4_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_4_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_4_V_V, wrapc_stream_size_in_edge_attr_mat_s_4_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_5_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_5_V_V, tvin_edge_attr_mat_s_5_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_5_V_V, tvin_edge_attr_mat_s_5_V_V);

		sc_bv<14>* edge_attr_mat_s_5_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_355 - aesl_tmp_356];

		// RTL Name: edge_attr_mat_s_5_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_355 - aesl_tmp_356 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_355 - aesl_tmp_356 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_354[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_354[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_354[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_354[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_354[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_5_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_355 - aesl_tmp_356; i++)
		{
			sprintf(tvin_edge_attr_mat_s_5_V_V, "%s\n", (edge_attr_mat_s_5_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_5_V_V, tvin_edge_attr_mat_s_5_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_355 > aesl_tmp_356)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_5_V_V = aesl_tmp_355;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_5_V_V, stream_ingress_size_edge_attr_mat_s_5_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_5_V_V, "\n");

		for (int i = 0; i < aesl_tmp_355 - aesl_tmp_356; i++)
		{
			stream_ingress_size_edge_attr_mat_s_5_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_5_V_V, stream_ingress_size_edge_attr_mat_s_5_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_5_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_5_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_5_V_V, stream_ingress_size_edge_attr_mat_s_5_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_5_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_355 - aesl_tmp_356, &tcl_file.edge_attr_mat_s_5_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_5_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_5_V_V, tvin_edge_attr_mat_s_5_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_5_V_V, tvin_edge_attr_mat_s_5_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_5_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_5_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_5_V_V, wrapc_stream_size_in_edge_attr_mat_s_5_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_5_V_V, "%d\n", aesl_tmp_355 - aesl_tmp_356);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_5_V_V, wrapc_stream_size_in_edge_attr_mat_s_5_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_5_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_5_V_V, wrapc_stream_size_in_edge_attr_mat_s_5_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_6_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_6_V_V, tvin_edge_attr_mat_s_6_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_6_V_V, tvin_edge_attr_mat_s_6_V_V);

		sc_bv<14>* edge_attr_mat_s_6_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_358 - aesl_tmp_359];

		// RTL Name: edge_attr_mat_s_6_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_358 - aesl_tmp_359 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_358 - aesl_tmp_359 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_357[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_357[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_357[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_357[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_357[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_6_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_358 - aesl_tmp_359; i++)
		{
			sprintf(tvin_edge_attr_mat_s_6_V_V, "%s\n", (edge_attr_mat_s_6_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_6_V_V, tvin_edge_attr_mat_s_6_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_358 > aesl_tmp_359)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_6_V_V = aesl_tmp_358;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_6_V_V, stream_ingress_size_edge_attr_mat_s_6_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_6_V_V, "\n");

		for (int i = 0; i < aesl_tmp_358 - aesl_tmp_359; i++)
		{
			stream_ingress_size_edge_attr_mat_s_6_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_6_V_V, stream_ingress_size_edge_attr_mat_s_6_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_6_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_6_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_6_V_V, stream_ingress_size_edge_attr_mat_s_6_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_6_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_358 - aesl_tmp_359, &tcl_file.edge_attr_mat_s_6_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_6_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_6_V_V, tvin_edge_attr_mat_s_6_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_6_V_V, tvin_edge_attr_mat_s_6_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_6_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_6_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_6_V_V, wrapc_stream_size_in_edge_attr_mat_s_6_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_6_V_V, "%d\n", aesl_tmp_358 - aesl_tmp_359);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_6_V_V, wrapc_stream_size_in_edge_attr_mat_s_6_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_6_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_6_V_V, wrapc_stream_size_in_edge_attr_mat_s_6_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_7_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_7_V_V, tvin_edge_attr_mat_s_7_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_7_V_V, tvin_edge_attr_mat_s_7_V_V);

		sc_bv<14>* edge_attr_mat_s_7_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_361 - aesl_tmp_362];

		// RTL Name: edge_attr_mat_s_7_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_361 - aesl_tmp_362 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_361 - aesl_tmp_362 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_360[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_360[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_360[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_360[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_360[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_7_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_361 - aesl_tmp_362; i++)
		{
			sprintf(tvin_edge_attr_mat_s_7_V_V, "%s\n", (edge_attr_mat_s_7_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_7_V_V, tvin_edge_attr_mat_s_7_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_361 > aesl_tmp_362)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_7_V_V = aesl_tmp_361;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_7_V_V, stream_ingress_size_edge_attr_mat_s_7_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_7_V_V, "\n");

		for (int i = 0; i < aesl_tmp_361 - aesl_tmp_362; i++)
		{
			stream_ingress_size_edge_attr_mat_s_7_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_7_V_V, stream_ingress_size_edge_attr_mat_s_7_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_7_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_7_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_7_V_V, stream_ingress_size_edge_attr_mat_s_7_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_7_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_361 - aesl_tmp_362, &tcl_file.edge_attr_mat_s_7_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_7_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_7_V_V, tvin_edge_attr_mat_s_7_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_7_V_V, tvin_edge_attr_mat_s_7_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_7_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_7_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_7_V_V, wrapc_stream_size_in_edge_attr_mat_s_7_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_7_V_V, "%d\n", aesl_tmp_361 - aesl_tmp_362);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_7_V_V, wrapc_stream_size_in_edge_attr_mat_s_7_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_7_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_7_V_V, wrapc_stream_size_in_edge_attr_mat_s_7_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_8_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_8_V_V, tvin_edge_attr_mat_s_8_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_8_V_V, tvin_edge_attr_mat_s_8_V_V);

		sc_bv<14>* edge_attr_mat_s_8_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_364 - aesl_tmp_365];

		// RTL Name: edge_attr_mat_s_8_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_364 - aesl_tmp_365 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_364 - aesl_tmp_365 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_363[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_363[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_363[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_363[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_363[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_8_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_364 - aesl_tmp_365; i++)
		{
			sprintf(tvin_edge_attr_mat_s_8_V_V, "%s\n", (edge_attr_mat_s_8_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_8_V_V, tvin_edge_attr_mat_s_8_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_364 > aesl_tmp_365)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_8_V_V = aesl_tmp_364;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_8_V_V, stream_ingress_size_edge_attr_mat_s_8_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_8_V_V, "\n");

		for (int i = 0; i < aesl_tmp_364 - aesl_tmp_365; i++)
		{
			stream_ingress_size_edge_attr_mat_s_8_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_8_V_V, stream_ingress_size_edge_attr_mat_s_8_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_8_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_8_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_8_V_V, stream_ingress_size_edge_attr_mat_s_8_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_8_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_364 - aesl_tmp_365, &tcl_file.edge_attr_mat_s_8_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_8_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_8_V_V, tvin_edge_attr_mat_s_8_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_8_V_V, tvin_edge_attr_mat_s_8_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_8_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_8_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_8_V_V, wrapc_stream_size_in_edge_attr_mat_s_8_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_8_V_V, "%d\n", aesl_tmp_364 - aesl_tmp_365);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_8_V_V, wrapc_stream_size_in_edge_attr_mat_s_8_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_8_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_8_V_V, wrapc_stream_size_in_edge_attr_mat_s_8_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_9_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_9_V_V, tvin_edge_attr_mat_s_9_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_9_V_V, tvin_edge_attr_mat_s_9_V_V);

		sc_bv<14>* edge_attr_mat_s_9_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_367 - aesl_tmp_368];

		// RTL Name: edge_attr_mat_s_9_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_367 - aesl_tmp_368 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_367 - aesl_tmp_368 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_366[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_366[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_366[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_366[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_366[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_9_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_367 - aesl_tmp_368; i++)
		{
			sprintf(tvin_edge_attr_mat_s_9_V_V, "%s\n", (edge_attr_mat_s_9_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_9_V_V, tvin_edge_attr_mat_s_9_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_367 > aesl_tmp_368)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_9_V_V = aesl_tmp_367;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_9_V_V, stream_ingress_size_edge_attr_mat_s_9_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_9_V_V, "\n");

		for (int i = 0; i < aesl_tmp_367 - aesl_tmp_368; i++)
		{
			stream_ingress_size_edge_attr_mat_s_9_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_9_V_V, stream_ingress_size_edge_attr_mat_s_9_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_9_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_9_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_9_V_V, stream_ingress_size_edge_attr_mat_s_9_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_9_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_367 - aesl_tmp_368, &tcl_file.edge_attr_mat_s_9_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_9_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_9_V_V, tvin_edge_attr_mat_s_9_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_9_V_V, tvin_edge_attr_mat_s_9_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_9_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_9_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_9_V_V, wrapc_stream_size_in_edge_attr_mat_s_9_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_9_V_V, "%d\n", aesl_tmp_367 - aesl_tmp_368);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_9_V_V, wrapc_stream_size_in_edge_attr_mat_s_9_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_9_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_9_V_V, wrapc_stream_size_in_edge_attr_mat_s_9_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_10_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_10_V_V, tvin_edge_attr_mat_s_10_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_10_V_V, tvin_edge_attr_mat_s_10_V_V);

		sc_bv<14>* edge_attr_mat_s_10_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_370 - aesl_tmp_371];

		// RTL Name: edge_attr_mat_s_10_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_370 - aesl_tmp_371 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_370 - aesl_tmp_371 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_369[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_369[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_369[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_369[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_369[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_10_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_370 - aesl_tmp_371; i++)
		{
			sprintf(tvin_edge_attr_mat_s_10_V_V, "%s\n", (edge_attr_mat_s_10_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_10_V_V, tvin_edge_attr_mat_s_10_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_370 > aesl_tmp_371)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_10_V_V = aesl_tmp_370;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_10_V_V, stream_ingress_size_edge_attr_mat_s_10_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_10_V_V, "\n");

		for (int i = 0; i < aesl_tmp_370 - aesl_tmp_371; i++)
		{
			stream_ingress_size_edge_attr_mat_s_10_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_10_V_V, stream_ingress_size_edge_attr_mat_s_10_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_10_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_10_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_10_V_V, stream_ingress_size_edge_attr_mat_s_10_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_10_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_370 - aesl_tmp_371, &tcl_file.edge_attr_mat_s_10_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_10_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_10_V_V, tvin_edge_attr_mat_s_10_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_10_V_V, tvin_edge_attr_mat_s_10_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_10_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_10_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_10_V_V, wrapc_stream_size_in_edge_attr_mat_s_10_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_10_V_V, "%d\n", aesl_tmp_370 - aesl_tmp_371);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_10_V_V, wrapc_stream_size_in_edge_attr_mat_s_10_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_10_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_10_V_V, wrapc_stream_size_in_edge_attr_mat_s_10_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_11_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_11_V_V, tvin_edge_attr_mat_s_11_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_11_V_V, tvin_edge_attr_mat_s_11_V_V);

		sc_bv<14>* edge_attr_mat_s_11_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_373 - aesl_tmp_374];

		// RTL Name: edge_attr_mat_s_11_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_373 - aesl_tmp_374 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_373 - aesl_tmp_374 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_372[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_372[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_372[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_372[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_372[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_11_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_373 - aesl_tmp_374; i++)
		{
			sprintf(tvin_edge_attr_mat_s_11_V_V, "%s\n", (edge_attr_mat_s_11_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_11_V_V, tvin_edge_attr_mat_s_11_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_373 > aesl_tmp_374)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_11_V_V = aesl_tmp_373;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_11_V_V, stream_ingress_size_edge_attr_mat_s_11_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_11_V_V, "\n");

		for (int i = 0; i < aesl_tmp_373 - aesl_tmp_374; i++)
		{
			stream_ingress_size_edge_attr_mat_s_11_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_11_V_V, stream_ingress_size_edge_attr_mat_s_11_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_11_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_11_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_11_V_V, stream_ingress_size_edge_attr_mat_s_11_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_11_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_373 - aesl_tmp_374, &tcl_file.edge_attr_mat_s_11_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_11_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_11_V_V, tvin_edge_attr_mat_s_11_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_11_V_V, tvin_edge_attr_mat_s_11_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_11_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_11_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_11_V_V, wrapc_stream_size_in_edge_attr_mat_s_11_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_11_V_V, "%d\n", aesl_tmp_373 - aesl_tmp_374);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_11_V_V, wrapc_stream_size_in_edge_attr_mat_s_11_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_11_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_11_V_V, wrapc_stream_size_in_edge_attr_mat_s_11_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_12_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_12_V_V, tvin_edge_attr_mat_s_12_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_12_V_V, tvin_edge_attr_mat_s_12_V_V);

		sc_bv<14>* edge_attr_mat_s_12_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_376 - aesl_tmp_377];

		// RTL Name: edge_attr_mat_s_12_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_376 - aesl_tmp_377 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_376 - aesl_tmp_377 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_375[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_375[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_375[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_375[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_375[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_12_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_376 - aesl_tmp_377; i++)
		{
			sprintf(tvin_edge_attr_mat_s_12_V_V, "%s\n", (edge_attr_mat_s_12_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_12_V_V, tvin_edge_attr_mat_s_12_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_376 > aesl_tmp_377)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_12_V_V = aesl_tmp_376;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_12_V_V, stream_ingress_size_edge_attr_mat_s_12_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_12_V_V, "\n");

		for (int i = 0; i < aesl_tmp_376 - aesl_tmp_377; i++)
		{
			stream_ingress_size_edge_attr_mat_s_12_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_12_V_V, stream_ingress_size_edge_attr_mat_s_12_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_12_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_12_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_12_V_V, stream_ingress_size_edge_attr_mat_s_12_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_12_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_376 - aesl_tmp_377, &tcl_file.edge_attr_mat_s_12_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_12_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_12_V_V, tvin_edge_attr_mat_s_12_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_12_V_V, tvin_edge_attr_mat_s_12_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_12_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_12_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_12_V_V, wrapc_stream_size_in_edge_attr_mat_s_12_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_12_V_V, "%d\n", aesl_tmp_376 - aesl_tmp_377);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_12_V_V, wrapc_stream_size_in_edge_attr_mat_s_12_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_12_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_12_V_V, wrapc_stream_size_in_edge_attr_mat_s_12_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_13_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_13_V_V, tvin_edge_attr_mat_s_13_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_13_V_V, tvin_edge_attr_mat_s_13_V_V);

		sc_bv<14>* edge_attr_mat_s_13_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_379 - aesl_tmp_380];

		// RTL Name: edge_attr_mat_s_13_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_379 - aesl_tmp_380 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_379 - aesl_tmp_380 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_378[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_378[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_378[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_378[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_378[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_13_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_379 - aesl_tmp_380; i++)
		{
			sprintf(tvin_edge_attr_mat_s_13_V_V, "%s\n", (edge_attr_mat_s_13_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_13_V_V, tvin_edge_attr_mat_s_13_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_379 > aesl_tmp_380)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_13_V_V = aesl_tmp_379;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_13_V_V, stream_ingress_size_edge_attr_mat_s_13_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_13_V_V, "\n");

		for (int i = 0; i < aesl_tmp_379 - aesl_tmp_380; i++)
		{
			stream_ingress_size_edge_attr_mat_s_13_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_13_V_V, stream_ingress_size_edge_attr_mat_s_13_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_13_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_13_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_13_V_V, stream_ingress_size_edge_attr_mat_s_13_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_13_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_379 - aesl_tmp_380, &tcl_file.edge_attr_mat_s_13_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_13_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_13_V_V, tvin_edge_attr_mat_s_13_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_13_V_V, tvin_edge_attr_mat_s_13_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_13_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_13_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_13_V_V, wrapc_stream_size_in_edge_attr_mat_s_13_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_13_V_V, "%d\n", aesl_tmp_379 - aesl_tmp_380);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_13_V_V, wrapc_stream_size_in_edge_attr_mat_s_13_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_13_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_13_V_V, wrapc_stream_size_in_edge_attr_mat_s_13_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_14_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_14_V_V, tvin_edge_attr_mat_s_14_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_14_V_V, tvin_edge_attr_mat_s_14_V_V);

		sc_bv<14>* edge_attr_mat_s_14_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_382 - aesl_tmp_383];

		// RTL Name: edge_attr_mat_s_14_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_382 - aesl_tmp_383 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_382 - aesl_tmp_383 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_381[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_381[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_381[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_381[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_381[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_14_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_382 - aesl_tmp_383; i++)
		{
			sprintf(tvin_edge_attr_mat_s_14_V_V, "%s\n", (edge_attr_mat_s_14_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_14_V_V, tvin_edge_attr_mat_s_14_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_382 > aesl_tmp_383)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_14_V_V = aesl_tmp_382;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_14_V_V, stream_ingress_size_edge_attr_mat_s_14_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_14_V_V, "\n");

		for (int i = 0; i < aesl_tmp_382 - aesl_tmp_383; i++)
		{
			stream_ingress_size_edge_attr_mat_s_14_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_14_V_V, stream_ingress_size_edge_attr_mat_s_14_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_14_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_14_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_14_V_V, stream_ingress_size_edge_attr_mat_s_14_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_14_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_382 - aesl_tmp_383, &tcl_file.edge_attr_mat_s_14_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_14_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_14_V_V, tvin_edge_attr_mat_s_14_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_14_V_V, tvin_edge_attr_mat_s_14_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_14_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_14_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_14_V_V, wrapc_stream_size_in_edge_attr_mat_s_14_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_14_V_V, "%d\n", aesl_tmp_382 - aesl_tmp_383);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_14_V_V, wrapc_stream_size_in_edge_attr_mat_s_14_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_14_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_14_V_V, wrapc_stream_size_in_edge_attr_mat_s_14_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_15_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_15_V_V, tvin_edge_attr_mat_s_15_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_15_V_V, tvin_edge_attr_mat_s_15_V_V);

		sc_bv<14>* edge_attr_mat_s_15_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_385 - aesl_tmp_386];

		// RTL Name: edge_attr_mat_s_15_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_385 - aesl_tmp_386 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_385 - aesl_tmp_386 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_384[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_384[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_384[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_384[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_384[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_15_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_385 - aesl_tmp_386; i++)
		{
			sprintf(tvin_edge_attr_mat_s_15_V_V, "%s\n", (edge_attr_mat_s_15_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_15_V_V, tvin_edge_attr_mat_s_15_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_385 > aesl_tmp_386)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_15_V_V = aesl_tmp_385;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_15_V_V, stream_ingress_size_edge_attr_mat_s_15_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_15_V_V, "\n");

		for (int i = 0; i < aesl_tmp_385 - aesl_tmp_386; i++)
		{
			stream_ingress_size_edge_attr_mat_s_15_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_15_V_V, stream_ingress_size_edge_attr_mat_s_15_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_15_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_15_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_15_V_V, stream_ingress_size_edge_attr_mat_s_15_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_15_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_385 - aesl_tmp_386, &tcl_file.edge_attr_mat_s_15_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_15_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_15_V_V, tvin_edge_attr_mat_s_15_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_15_V_V, tvin_edge_attr_mat_s_15_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_15_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_15_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_15_V_V, wrapc_stream_size_in_edge_attr_mat_s_15_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_15_V_V, "%d\n", aesl_tmp_385 - aesl_tmp_386);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_15_V_V, wrapc_stream_size_in_edge_attr_mat_s_15_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_15_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_15_V_V, wrapc_stream_size_in_edge_attr_mat_s_15_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_16_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_16_V_V, tvin_edge_attr_mat_s_16_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_16_V_V, tvin_edge_attr_mat_s_16_V_V);

		sc_bv<14>* edge_attr_mat_s_16_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_388 - aesl_tmp_389];

		// RTL Name: edge_attr_mat_s_16_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_388 - aesl_tmp_389 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_388 - aesl_tmp_389 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_387[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_387[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_387[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_387[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_387[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_16_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_388 - aesl_tmp_389; i++)
		{
			sprintf(tvin_edge_attr_mat_s_16_V_V, "%s\n", (edge_attr_mat_s_16_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_16_V_V, tvin_edge_attr_mat_s_16_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_388 > aesl_tmp_389)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_16_V_V = aesl_tmp_388;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_16_V_V, stream_ingress_size_edge_attr_mat_s_16_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_16_V_V, "\n");

		for (int i = 0; i < aesl_tmp_388 - aesl_tmp_389; i++)
		{
			stream_ingress_size_edge_attr_mat_s_16_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_16_V_V, stream_ingress_size_edge_attr_mat_s_16_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_16_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_16_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_16_V_V, stream_ingress_size_edge_attr_mat_s_16_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_16_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_388 - aesl_tmp_389, &tcl_file.edge_attr_mat_s_16_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_16_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_16_V_V, tvin_edge_attr_mat_s_16_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_16_V_V, tvin_edge_attr_mat_s_16_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_16_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_16_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_16_V_V, wrapc_stream_size_in_edge_attr_mat_s_16_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_16_V_V, "%d\n", aesl_tmp_388 - aesl_tmp_389);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_16_V_V, wrapc_stream_size_in_edge_attr_mat_s_16_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_16_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_16_V_V, wrapc_stream_size_in_edge_attr_mat_s_16_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_17_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_17_V_V, tvin_edge_attr_mat_s_17_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_17_V_V, tvin_edge_attr_mat_s_17_V_V);

		sc_bv<14>* edge_attr_mat_s_17_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_391 - aesl_tmp_392];

		// RTL Name: edge_attr_mat_s_17_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_391 - aesl_tmp_392 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_391 - aesl_tmp_392 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_390[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_390[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_390[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_390[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_390[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_17_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_391 - aesl_tmp_392; i++)
		{
			sprintf(tvin_edge_attr_mat_s_17_V_V, "%s\n", (edge_attr_mat_s_17_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_17_V_V, tvin_edge_attr_mat_s_17_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_391 > aesl_tmp_392)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_17_V_V = aesl_tmp_391;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_17_V_V, stream_ingress_size_edge_attr_mat_s_17_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_17_V_V, "\n");

		for (int i = 0; i < aesl_tmp_391 - aesl_tmp_392; i++)
		{
			stream_ingress_size_edge_attr_mat_s_17_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_17_V_V, stream_ingress_size_edge_attr_mat_s_17_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_17_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_17_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_17_V_V, stream_ingress_size_edge_attr_mat_s_17_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_17_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_391 - aesl_tmp_392, &tcl_file.edge_attr_mat_s_17_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_17_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_17_V_V, tvin_edge_attr_mat_s_17_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_17_V_V, tvin_edge_attr_mat_s_17_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_17_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_17_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_17_V_V, wrapc_stream_size_in_edge_attr_mat_s_17_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_17_V_V, "%d\n", aesl_tmp_391 - aesl_tmp_392);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_17_V_V, wrapc_stream_size_in_edge_attr_mat_s_17_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_17_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_17_V_V, wrapc_stream_size_in_edge_attr_mat_s_17_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_18_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_18_V_V, tvin_edge_attr_mat_s_18_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_18_V_V, tvin_edge_attr_mat_s_18_V_V);

		sc_bv<14>* edge_attr_mat_s_18_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_394 - aesl_tmp_395];

		// RTL Name: edge_attr_mat_s_18_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_394 - aesl_tmp_395 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_394 - aesl_tmp_395 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_393[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_393[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_393[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_393[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_393[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_18_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_394 - aesl_tmp_395; i++)
		{
			sprintf(tvin_edge_attr_mat_s_18_V_V, "%s\n", (edge_attr_mat_s_18_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_18_V_V, tvin_edge_attr_mat_s_18_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_394 > aesl_tmp_395)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_18_V_V = aesl_tmp_394;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_18_V_V, stream_ingress_size_edge_attr_mat_s_18_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_18_V_V, "\n");

		for (int i = 0; i < aesl_tmp_394 - aesl_tmp_395; i++)
		{
			stream_ingress_size_edge_attr_mat_s_18_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_18_V_V, stream_ingress_size_edge_attr_mat_s_18_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_18_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_18_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_18_V_V, stream_ingress_size_edge_attr_mat_s_18_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_18_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_394 - aesl_tmp_395, &tcl_file.edge_attr_mat_s_18_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_18_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_18_V_V, tvin_edge_attr_mat_s_18_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_18_V_V, tvin_edge_attr_mat_s_18_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_18_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_18_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_18_V_V, wrapc_stream_size_in_edge_attr_mat_s_18_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_18_V_V, "%d\n", aesl_tmp_394 - aesl_tmp_395);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_18_V_V, wrapc_stream_size_in_edge_attr_mat_s_18_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_18_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_18_V_V, wrapc_stream_size_in_edge_attr_mat_s_18_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_19_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_19_V_V, tvin_edge_attr_mat_s_19_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_19_V_V, tvin_edge_attr_mat_s_19_V_V);

		sc_bv<14>* edge_attr_mat_s_19_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_397 - aesl_tmp_398];

		// RTL Name: edge_attr_mat_s_19_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_397 - aesl_tmp_398 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_397 - aesl_tmp_398 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_396[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_396[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_396[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_396[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_396[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_19_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_397 - aesl_tmp_398; i++)
		{
			sprintf(tvin_edge_attr_mat_s_19_V_V, "%s\n", (edge_attr_mat_s_19_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_19_V_V, tvin_edge_attr_mat_s_19_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_397 > aesl_tmp_398)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_19_V_V = aesl_tmp_397;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_19_V_V, stream_ingress_size_edge_attr_mat_s_19_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_19_V_V, "\n");

		for (int i = 0; i < aesl_tmp_397 - aesl_tmp_398; i++)
		{
			stream_ingress_size_edge_attr_mat_s_19_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_19_V_V, stream_ingress_size_edge_attr_mat_s_19_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_19_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_19_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_19_V_V, stream_ingress_size_edge_attr_mat_s_19_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_19_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_397 - aesl_tmp_398, &tcl_file.edge_attr_mat_s_19_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_19_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_19_V_V, tvin_edge_attr_mat_s_19_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_19_V_V, tvin_edge_attr_mat_s_19_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_19_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_19_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_19_V_V, wrapc_stream_size_in_edge_attr_mat_s_19_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_19_V_V, "%d\n", aesl_tmp_397 - aesl_tmp_398);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_19_V_V, wrapc_stream_size_in_edge_attr_mat_s_19_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_19_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_19_V_V, wrapc_stream_size_in_edge_attr_mat_s_19_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_20_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_20_V_V, tvin_edge_attr_mat_s_20_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_20_V_V, tvin_edge_attr_mat_s_20_V_V);

		sc_bv<14>* edge_attr_mat_s_20_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_400 - aesl_tmp_401];

		// RTL Name: edge_attr_mat_s_20_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_400 - aesl_tmp_401 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_400 - aesl_tmp_401 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_399[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_399[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_399[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_399[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_399[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_20_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_400 - aesl_tmp_401; i++)
		{
			sprintf(tvin_edge_attr_mat_s_20_V_V, "%s\n", (edge_attr_mat_s_20_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_20_V_V, tvin_edge_attr_mat_s_20_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_400 > aesl_tmp_401)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_20_V_V = aesl_tmp_400;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_20_V_V, stream_ingress_size_edge_attr_mat_s_20_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_20_V_V, "\n");

		for (int i = 0; i < aesl_tmp_400 - aesl_tmp_401; i++)
		{
			stream_ingress_size_edge_attr_mat_s_20_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_20_V_V, stream_ingress_size_edge_attr_mat_s_20_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_20_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_20_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_20_V_V, stream_ingress_size_edge_attr_mat_s_20_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_20_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_400 - aesl_tmp_401, &tcl_file.edge_attr_mat_s_20_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_20_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_20_V_V, tvin_edge_attr_mat_s_20_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_20_V_V, tvin_edge_attr_mat_s_20_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_20_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_20_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_20_V_V, wrapc_stream_size_in_edge_attr_mat_s_20_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_20_V_V, "%d\n", aesl_tmp_400 - aesl_tmp_401);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_20_V_V, wrapc_stream_size_in_edge_attr_mat_s_20_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_20_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_20_V_V, wrapc_stream_size_in_edge_attr_mat_s_20_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_21_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_21_V_V, tvin_edge_attr_mat_s_21_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_21_V_V, tvin_edge_attr_mat_s_21_V_V);

		sc_bv<14>* edge_attr_mat_s_21_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_403 - aesl_tmp_404];

		// RTL Name: edge_attr_mat_s_21_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_403 - aesl_tmp_404 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_403 - aesl_tmp_404 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_402[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_402[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_402[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_402[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_402[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_21_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_403 - aesl_tmp_404; i++)
		{
			sprintf(tvin_edge_attr_mat_s_21_V_V, "%s\n", (edge_attr_mat_s_21_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_21_V_V, tvin_edge_attr_mat_s_21_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_403 > aesl_tmp_404)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_21_V_V = aesl_tmp_403;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_21_V_V, stream_ingress_size_edge_attr_mat_s_21_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_21_V_V, "\n");

		for (int i = 0; i < aesl_tmp_403 - aesl_tmp_404; i++)
		{
			stream_ingress_size_edge_attr_mat_s_21_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_21_V_V, stream_ingress_size_edge_attr_mat_s_21_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_21_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_21_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_21_V_V, stream_ingress_size_edge_attr_mat_s_21_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_21_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_403 - aesl_tmp_404, &tcl_file.edge_attr_mat_s_21_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_21_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_21_V_V, tvin_edge_attr_mat_s_21_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_21_V_V, tvin_edge_attr_mat_s_21_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_21_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_21_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_21_V_V, wrapc_stream_size_in_edge_attr_mat_s_21_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_21_V_V, "%d\n", aesl_tmp_403 - aesl_tmp_404);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_21_V_V, wrapc_stream_size_in_edge_attr_mat_s_21_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_21_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_21_V_V, wrapc_stream_size_in_edge_attr_mat_s_21_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_22_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_22_V_V, tvin_edge_attr_mat_s_22_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_22_V_V, tvin_edge_attr_mat_s_22_V_V);

		sc_bv<14>* edge_attr_mat_s_22_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_406 - aesl_tmp_407];

		// RTL Name: edge_attr_mat_s_22_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_406 - aesl_tmp_407 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_406 - aesl_tmp_407 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_405[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_405[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_405[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_405[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_405[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_22_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_406 - aesl_tmp_407; i++)
		{
			sprintf(tvin_edge_attr_mat_s_22_V_V, "%s\n", (edge_attr_mat_s_22_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_22_V_V, tvin_edge_attr_mat_s_22_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_406 > aesl_tmp_407)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_22_V_V = aesl_tmp_406;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_22_V_V, stream_ingress_size_edge_attr_mat_s_22_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_22_V_V, "\n");

		for (int i = 0; i < aesl_tmp_406 - aesl_tmp_407; i++)
		{
			stream_ingress_size_edge_attr_mat_s_22_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_22_V_V, stream_ingress_size_edge_attr_mat_s_22_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_22_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_22_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_22_V_V, stream_ingress_size_edge_attr_mat_s_22_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_22_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_406 - aesl_tmp_407, &tcl_file.edge_attr_mat_s_22_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_22_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_22_V_V, tvin_edge_attr_mat_s_22_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_22_V_V, tvin_edge_attr_mat_s_22_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_22_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_22_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_22_V_V, wrapc_stream_size_in_edge_attr_mat_s_22_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_22_V_V, "%d\n", aesl_tmp_406 - aesl_tmp_407);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_22_V_V, wrapc_stream_size_in_edge_attr_mat_s_22_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_22_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_22_V_V, wrapc_stream_size_in_edge_attr_mat_s_22_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_23_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_23_V_V, tvin_edge_attr_mat_s_23_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_23_V_V, tvin_edge_attr_mat_s_23_V_V);

		sc_bv<14>* edge_attr_mat_s_23_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_409 - aesl_tmp_410];

		// RTL Name: edge_attr_mat_s_23_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_409 - aesl_tmp_410 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_409 - aesl_tmp_410 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_408[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_408[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_408[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_408[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_408[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_23_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_409 - aesl_tmp_410; i++)
		{
			sprintf(tvin_edge_attr_mat_s_23_V_V, "%s\n", (edge_attr_mat_s_23_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_23_V_V, tvin_edge_attr_mat_s_23_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_409 > aesl_tmp_410)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_23_V_V = aesl_tmp_409;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_23_V_V, stream_ingress_size_edge_attr_mat_s_23_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_23_V_V, "\n");

		for (int i = 0; i < aesl_tmp_409 - aesl_tmp_410; i++)
		{
			stream_ingress_size_edge_attr_mat_s_23_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_23_V_V, stream_ingress_size_edge_attr_mat_s_23_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_23_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_23_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_23_V_V, stream_ingress_size_edge_attr_mat_s_23_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_23_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_409 - aesl_tmp_410, &tcl_file.edge_attr_mat_s_23_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_23_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_23_V_V, tvin_edge_attr_mat_s_23_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_23_V_V, tvin_edge_attr_mat_s_23_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_23_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_23_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_23_V_V, wrapc_stream_size_in_edge_attr_mat_s_23_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_23_V_V, "%d\n", aesl_tmp_409 - aesl_tmp_410);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_23_V_V, wrapc_stream_size_in_edge_attr_mat_s_23_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_23_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_23_V_V, wrapc_stream_size_in_edge_attr_mat_s_23_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_24_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_24_V_V, tvin_edge_attr_mat_s_24_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_24_V_V, tvin_edge_attr_mat_s_24_V_V);

		sc_bv<14>* edge_attr_mat_s_24_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_412 - aesl_tmp_413];

		// RTL Name: edge_attr_mat_s_24_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_412 - aesl_tmp_413 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_412 - aesl_tmp_413 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_411[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_411[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_411[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_411[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_411[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_24_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_412 - aesl_tmp_413; i++)
		{
			sprintf(tvin_edge_attr_mat_s_24_V_V, "%s\n", (edge_attr_mat_s_24_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_24_V_V, tvin_edge_attr_mat_s_24_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_412 > aesl_tmp_413)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_24_V_V = aesl_tmp_412;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_24_V_V, stream_ingress_size_edge_attr_mat_s_24_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_24_V_V, "\n");

		for (int i = 0; i < aesl_tmp_412 - aesl_tmp_413; i++)
		{
			stream_ingress_size_edge_attr_mat_s_24_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_24_V_V, stream_ingress_size_edge_attr_mat_s_24_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_24_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_24_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_24_V_V, stream_ingress_size_edge_attr_mat_s_24_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_24_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_412 - aesl_tmp_413, &tcl_file.edge_attr_mat_s_24_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_24_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_24_V_V, tvin_edge_attr_mat_s_24_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_24_V_V, tvin_edge_attr_mat_s_24_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_24_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_24_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_24_V_V, wrapc_stream_size_in_edge_attr_mat_s_24_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_24_V_V, "%d\n", aesl_tmp_412 - aesl_tmp_413);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_24_V_V, wrapc_stream_size_in_edge_attr_mat_s_24_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_24_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_24_V_V, wrapc_stream_size_in_edge_attr_mat_s_24_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_25_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_25_V_V, tvin_edge_attr_mat_s_25_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_25_V_V, tvin_edge_attr_mat_s_25_V_V);

		sc_bv<14>* edge_attr_mat_s_25_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_415 - aesl_tmp_416];

		// RTL Name: edge_attr_mat_s_25_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_415 - aesl_tmp_416 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_415 - aesl_tmp_416 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_414[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_414[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_414[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_414[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_414[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_25_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_415 - aesl_tmp_416; i++)
		{
			sprintf(tvin_edge_attr_mat_s_25_V_V, "%s\n", (edge_attr_mat_s_25_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_25_V_V, tvin_edge_attr_mat_s_25_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_415 > aesl_tmp_416)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_25_V_V = aesl_tmp_415;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_25_V_V, stream_ingress_size_edge_attr_mat_s_25_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_25_V_V, "\n");

		for (int i = 0; i < aesl_tmp_415 - aesl_tmp_416; i++)
		{
			stream_ingress_size_edge_attr_mat_s_25_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_25_V_V, stream_ingress_size_edge_attr_mat_s_25_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_25_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_25_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_25_V_V, stream_ingress_size_edge_attr_mat_s_25_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_25_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_415 - aesl_tmp_416, &tcl_file.edge_attr_mat_s_25_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_25_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_25_V_V, tvin_edge_attr_mat_s_25_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_25_V_V, tvin_edge_attr_mat_s_25_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_25_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_25_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_25_V_V, wrapc_stream_size_in_edge_attr_mat_s_25_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_25_V_V, "%d\n", aesl_tmp_415 - aesl_tmp_416);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_25_V_V, wrapc_stream_size_in_edge_attr_mat_s_25_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_25_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_25_V_V, wrapc_stream_size_in_edge_attr_mat_s_25_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_26_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_26_V_V, tvin_edge_attr_mat_s_26_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_26_V_V, tvin_edge_attr_mat_s_26_V_V);

		sc_bv<14>* edge_attr_mat_s_26_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_418 - aesl_tmp_419];

		// RTL Name: edge_attr_mat_s_26_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_418 - aesl_tmp_419 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_418 - aesl_tmp_419 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_417[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_417[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_417[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_417[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_417[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_26_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_418 - aesl_tmp_419; i++)
		{
			sprintf(tvin_edge_attr_mat_s_26_V_V, "%s\n", (edge_attr_mat_s_26_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_26_V_V, tvin_edge_attr_mat_s_26_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_418 > aesl_tmp_419)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_26_V_V = aesl_tmp_418;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_26_V_V, stream_ingress_size_edge_attr_mat_s_26_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_26_V_V, "\n");

		for (int i = 0; i < aesl_tmp_418 - aesl_tmp_419; i++)
		{
			stream_ingress_size_edge_attr_mat_s_26_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_26_V_V, stream_ingress_size_edge_attr_mat_s_26_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_26_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_26_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_26_V_V, stream_ingress_size_edge_attr_mat_s_26_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_26_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_418 - aesl_tmp_419, &tcl_file.edge_attr_mat_s_26_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_26_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_26_V_V, tvin_edge_attr_mat_s_26_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_26_V_V, tvin_edge_attr_mat_s_26_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_26_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_26_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_26_V_V, wrapc_stream_size_in_edge_attr_mat_s_26_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_26_V_V, "%d\n", aesl_tmp_418 - aesl_tmp_419);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_26_V_V, wrapc_stream_size_in_edge_attr_mat_s_26_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_26_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_26_V_V, wrapc_stream_size_in_edge_attr_mat_s_26_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_27_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_27_V_V, tvin_edge_attr_mat_s_27_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_27_V_V, tvin_edge_attr_mat_s_27_V_V);

		sc_bv<14>* edge_attr_mat_s_27_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_421 - aesl_tmp_422];

		// RTL Name: edge_attr_mat_s_27_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_421 - aesl_tmp_422 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_421 - aesl_tmp_422 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_420[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_420[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_420[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_420[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_420[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_27_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_421 - aesl_tmp_422; i++)
		{
			sprintf(tvin_edge_attr_mat_s_27_V_V, "%s\n", (edge_attr_mat_s_27_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_27_V_V, tvin_edge_attr_mat_s_27_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_421 > aesl_tmp_422)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_27_V_V = aesl_tmp_421;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_27_V_V, stream_ingress_size_edge_attr_mat_s_27_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_27_V_V, "\n");

		for (int i = 0; i < aesl_tmp_421 - aesl_tmp_422; i++)
		{
			stream_ingress_size_edge_attr_mat_s_27_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_27_V_V, stream_ingress_size_edge_attr_mat_s_27_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_27_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_27_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_27_V_V, stream_ingress_size_edge_attr_mat_s_27_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_27_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_421 - aesl_tmp_422, &tcl_file.edge_attr_mat_s_27_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_27_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_27_V_V, tvin_edge_attr_mat_s_27_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_27_V_V, tvin_edge_attr_mat_s_27_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_27_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_27_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_27_V_V, wrapc_stream_size_in_edge_attr_mat_s_27_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_27_V_V, "%d\n", aesl_tmp_421 - aesl_tmp_422);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_27_V_V, wrapc_stream_size_in_edge_attr_mat_s_27_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_27_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_27_V_V, wrapc_stream_size_in_edge_attr_mat_s_27_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_28_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_28_V_V, tvin_edge_attr_mat_s_28_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_28_V_V, tvin_edge_attr_mat_s_28_V_V);

		sc_bv<14>* edge_attr_mat_s_28_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_424 - aesl_tmp_425];

		// RTL Name: edge_attr_mat_s_28_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_424 - aesl_tmp_425 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_424 - aesl_tmp_425 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_423[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_423[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_423[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_423[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_423[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_28_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_424 - aesl_tmp_425; i++)
		{
			sprintf(tvin_edge_attr_mat_s_28_V_V, "%s\n", (edge_attr_mat_s_28_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_28_V_V, tvin_edge_attr_mat_s_28_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_424 > aesl_tmp_425)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_28_V_V = aesl_tmp_424;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_28_V_V, stream_ingress_size_edge_attr_mat_s_28_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_28_V_V, "\n");

		for (int i = 0; i < aesl_tmp_424 - aesl_tmp_425; i++)
		{
			stream_ingress_size_edge_attr_mat_s_28_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_28_V_V, stream_ingress_size_edge_attr_mat_s_28_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_28_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_28_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_28_V_V, stream_ingress_size_edge_attr_mat_s_28_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_28_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_424 - aesl_tmp_425, &tcl_file.edge_attr_mat_s_28_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_28_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_28_V_V, tvin_edge_attr_mat_s_28_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_28_V_V, tvin_edge_attr_mat_s_28_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_28_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_28_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_28_V_V, wrapc_stream_size_in_edge_attr_mat_s_28_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_28_V_V, "%d\n", aesl_tmp_424 - aesl_tmp_425);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_28_V_V, wrapc_stream_size_in_edge_attr_mat_s_28_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_28_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_28_V_V, wrapc_stream_size_in_edge_attr_mat_s_28_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_29_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_29_V_V, tvin_edge_attr_mat_s_29_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_29_V_V, tvin_edge_attr_mat_s_29_V_V);

		sc_bv<14>* edge_attr_mat_s_29_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_427 - aesl_tmp_428];

		// RTL Name: edge_attr_mat_s_29_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_427 - aesl_tmp_428 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_427 - aesl_tmp_428 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_426[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_426[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_426[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_426[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_426[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_29_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_427 - aesl_tmp_428; i++)
		{
			sprintf(tvin_edge_attr_mat_s_29_V_V, "%s\n", (edge_attr_mat_s_29_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_29_V_V, tvin_edge_attr_mat_s_29_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_427 > aesl_tmp_428)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_29_V_V = aesl_tmp_427;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_29_V_V, stream_ingress_size_edge_attr_mat_s_29_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_29_V_V, "\n");

		for (int i = 0; i < aesl_tmp_427 - aesl_tmp_428; i++)
		{
			stream_ingress_size_edge_attr_mat_s_29_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_29_V_V, stream_ingress_size_edge_attr_mat_s_29_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_29_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_29_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_29_V_V, stream_ingress_size_edge_attr_mat_s_29_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_29_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_427 - aesl_tmp_428, &tcl_file.edge_attr_mat_s_29_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_29_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_29_V_V, tvin_edge_attr_mat_s_29_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_29_V_V, tvin_edge_attr_mat_s_29_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_29_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_29_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_29_V_V, wrapc_stream_size_in_edge_attr_mat_s_29_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_29_V_V, "%d\n", aesl_tmp_427 - aesl_tmp_428);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_29_V_V, wrapc_stream_size_in_edge_attr_mat_s_29_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_29_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_29_V_V, wrapc_stream_size_in_edge_attr_mat_s_29_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_30_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_30_V_V, tvin_edge_attr_mat_s_30_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_30_V_V, tvin_edge_attr_mat_s_30_V_V);

		sc_bv<14>* edge_attr_mat_s_30_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_430 - aesl_tmp_431];

		// RTL Name: edge_attr_mat_s_30_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_430 - aesl_tmp_431 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_430 - aesl_tmp_431 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_429[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_429[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_429[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_429[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_429[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_30_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_430 - aesl_tmp_431; i++)
		{
			sprintf(tvin_edge_attr_mat_s_30_V_V, "%s\n", (edge_attr_mat_s_30_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_30_V_V, tvin_edge_attr_mat_s_30_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_430 > aesl_tmp_431)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_30_V_V = aesl_tmp_430;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_30_V_V, stream_ingress_size_edge_attr_mat_s_30_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_30_V_V, "\n");

		for (int i = 0; i < aesl_tmp_430 - aesl_tmp_431; i++)
		{
			stream_ingress_size_edge_attr_mat_s_30_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_30_V_V, stream_ingress_size_edge_attr_mat_s_30_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_30_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_30_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_30_V_V, stream_ingress_size_edge_attr_mat_s_30_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_30_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_430 - aesl_tmp_431, &tcl_file.edge_attr_mat_s_30_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_30_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_30_V_V, tvin_edge_attr_mat_s_30_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_30_V_V, tvin_edge_attr_mat_s_30_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_30_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_30_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_30_V_V, wrapc_stream_size_in_edge_attr_mat_s_30_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_30_V_V, "%d\n", aesl_tmp_430 - aesl_tmp_431);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_30_V_V, wrapc_stream_size_in_edge_attr_mat_s_30_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_30_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_30_V_V, wrapc_stream_size_in_edge_attr_mat_s_30_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_31_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_31_V_V, tvin_edge_attr_mat_s_31_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_31_V_V, tvin_edge_attr_mat_s_31_V_V);

		sc_bv<14>* edge_attr_mat_s_31_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_433 - aesl_tmp_434];

		// RTL Name: edge_attr_mat_s_31_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_433 - aesl_tmp_434 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_433 - aesl_tmp_434 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_432[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_432[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_432[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_432[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_432[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_31_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_433 - aesl_tmp_434; i++)
		{
			sprintf(tvin_edge_attr_mat_s_31_V_V, "%s\n", (edge_attr_mat_s_31_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_31_V_V, tvin_edge_attr_mat_s_31_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_433 > aesl_tmp_434)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_31_V_V = aesl_tmp_433;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_31_V_V, stream_ingress_size_edge_attr_mat_s_31_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_31_V_V, "\n");

		for (int i = 0; i < aesl_tmp_433 - aesl_tmp_434; i++)
		{
			stream_ingress_size_edge_attr_mat_s_31_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_31_V_V, stream_ingress_size_edge_attr_mat_s_31_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_31_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_31_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_31_V_V, stream_ingress_size_edge_attr_mat_s_31_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_31_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_433 - aesl_tmp_434, &tcl_file.edge_attr_mat_s_31_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_31_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_31_V_V, tvin_edge_attr_mat_s_31_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_31_V_V, tvin_edge_attr_mat_s_31_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_31_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_31_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_31_V_V, wrapc_stream_size_in_edge_attr_mat_s_31_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_31_V_V, "%d\n", aesl_tmp_433 - aesl_tmp_434);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_31_V_V, wrapc_stream_size_in_edge_attr_mat_s_31_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_31_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_31_V_V, wrapc_stream_size_in_edge_attr_mat_s_31_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_32_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_32_V_V, tvin_edge_attr_mat_s_32_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_32_V_V, tvin_edge_attr_mat_s_32_V_V);

		sc_bv<14>* edge_attr_mat_s_32_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_436 - aesl_tmp_437];

		// RTL Name: edge_attr_mat_s_32_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_436 - aesl_tmp_437 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_436 - aesl_tmp_437 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_435[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_435[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_435[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_435[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_435[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_32_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_436 - aesl_tmp_437; i++)
		{
			sprintf(tvin_edge_attr_mat_s_32_V_V, "%s\n", (edge_attr_mat_s_32_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_32_V_V, tvin_edge_attr_mat_s_32_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_436 > aesl_tmp_437)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_32_V_V = aesl_tmp_436;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_32_V_V, stream_ingress_size_edge_attr_mat_s_32_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_32_V_V, "\n");

		for (int i = 0; i < aesl_tmp_436 - aesl_tmp_437; i++)
		{
			stream_ingress_size_edge_attr_mat_s_32_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_32_V_V, stream_ingress_size_edge_attr_mat_s_32_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_32_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_32_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_32_V_V, stream_ingress_size_edge_attr_mat_s_32_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_32_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_436 - aesl_tmp_437, &tcl_file.edge_attr_mat_s_32_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_32_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_32_V_V, tvin_edge_attr_mat_s_32_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_32_V_V, tvin_edge_attr_mat_s_32_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_32_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_32_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_32_V_V, wrapc_stream_size_in_edge_attr_mat_s_32_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_32_V_V, "%d\n", aesl_tmp_436 - aesl_tmp_437);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_32_V_V, wrapc_stream_size_in_edge_attr_mat_s_32_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_32_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_32_V_V, wrapc_stream_size_in_edge_attr_mat_s_32_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_33_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_33_V_V, tvin_edge_attr_mat_s_33_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_33_V_V, tvin_edge_attr_mat_s_33_V_V);

		sc_bv<14>* edge_attr_mat_s_33_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_439 - aesl_tmp_440];

		// RTL Name: edge_attr_mat_s_33_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_439 - aesl_tmp_440 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_439 - aesl_tmp_440 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_438[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_438[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_438[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_438[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_438[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_33_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_439 - aesl_tmp_440; i++)
		{
			sprintf(tvin_edge_attr_mat_s_33_V_V, "%s\n", (edge_attr_mat_s_33_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_33_V_V, tvin_edge_attr_mat_s_33_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_439 > aesl_tmp_440)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_33_V_V = aesl_tmp_439;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_33_V_V, stream_ingress_size_edge_attr_mat_s_33_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_33_V_V, "\n");

		for (int i = 0; i < aesl_tmp_439 - aesl_tmp_440; i++)
		{
			stream_ingress_size_edge_attr_mat_s_33_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_33_V_V, stream_ingress_size_edge_attr_mat_s_33_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_33_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_33_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_33_V_V, stream_ingress_size_edge_attr_mat_s_33_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_33_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_439 - aesl_tmp_440, &tcl_file.edge_attr_mat_s_33_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_33_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_33_V_V, tvin_edge_attr_mat_s_33_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_33_V_V, tvin_edge_attr_mat_s_33_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_33_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_33_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_33_V_V, wrapc_stream_size_in_edge_attr_mat_s_33_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_33_V_V, "%d\n", aesl_tmp_439 - aesl_tmp_440);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_33_V_V, wrapc_stream_size_in_edge_attr_mat_s_33_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_33_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_33_V_V, wrapc_stream_size_in_edge_attr_mat_s_33_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_34_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_34_V_V, tvin_edge_attr_mat_s_34_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_34_V_V, tvin_edge_attr_mat_s_34_V_V);

		sc_bv<14>* edge_attr_mat_s_34_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_442 - aesl_tmp_443];

		// RTL Name: edge_attr_mat_s_34_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_442 - aesl_tmp_443 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_442 - aesl_tmp_443 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_441[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_441[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_441[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_441[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_441[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_34_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_442 - aesl_tmp_443; i++)
		{
			sprintf(tvin_edge_attr_mat_s_34_V_V, "%s\n", (edge_attr_mat_s_34_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_34_V_V, tvin_edge_attr_mat_s_34_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_442 > aesl_tmp_443)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_34_V_V = aesl_tmp_442;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_34_V_V, stream_ingress_size_edge_attr_mat_s_34_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_34_V_V, "\n");

		for (int i = 0; i < aesl_tmp_442 - aesl_tmp_443; i++)
		{
			stream_ingress_size_edge_attr_mat_s_34_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_34_V_V, stream_ingress_size_edge_attr_mat_s_34_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_34_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_34_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_34_V_V, stream_ingress_size_edge_attr_mat_s_34_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_34_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_442 - aesl_tmp_443, &tcl_file.edge_attr_mat_s_34_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_34_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_34_V_V, tvin_edge_attr_mat_s_34_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_34_V_V, tvin_edge_attr_mat_s_34_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_34_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_34_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_34_V_V, wrapc_stream_size_in_edge_attr_mat_s_34_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_34_V_V, "%d\n", aesl_tmp_442 - aesl_tmp_443);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_34_V_V, wrapc_stream_size_in_edge_attr_mat_s_34_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_34_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_34_V_V, wrapc_stream_size_in_edge_attr_mat_s_34_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_35_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_35_V_V, tvin_edge_attr_mat_s_35_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_35_V_V, tvin_edge_attr_mat_s_35_V_V);

		sc_bv<14>* edge_attr_mat_s_35_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_445 - aesl_tmp_446];

		// RTL Name: edge_attr_mat_s_35_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_445 - aesl_tmp_446 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_445 - aesl_tmp_446 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_444[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_444[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_444[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_444[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_444[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_35_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_445 - aesl_tmp_446; i++)
		{
			sprintf(tvin_edge_attr_mat_s_35_V_V, "%s\n", (edge_attr_mat_s_35_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_35_V_V, tvin_edge_attr_mat_s_35_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_445 > aesl_tmp_446)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_35_V_V = aesl_tmp_445;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_35_V_V, stream_ingress_size_edge_attr_mat_s_35_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_35_V_V, "\n");

		for (int i = 0; i < aesl_tmp_445 - aesl_tmp_446; i++)
		{
			stream_ingress_size_edge_attr_mat_s_35_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_35_V_V, stream_ingress_size_edge_attr_mat_s_35_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_35_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_35_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_35_V_V, stream_ingress_size_edge_attr_mat_s_35_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_35_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_445 - aesl_tmp_446, &tcl_file.edge_attr_mat_s_35_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_35_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_35_V_V, tvin_edge_attr_mat_s_35_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_35_V_V, tvin_edge_attr_mat_s_35_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_35_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_35_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_35_V_V, wrapc_stream_size_in_edge_attr_mat_s_35_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_35_V_V, "%d\n", aesl_tmp_445 - aesl_tmp_446);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_35_V_V, wrapc_stream_size_in_edge_attr_mat_s_35_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_35_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_35_V_V, wrapc_stream_size_in_edge_attr_mat_s_35_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_36_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_36_V_V, tvin_edge_attr_mat_s_36_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_36_V_V, tvin_edge_attr_mat_s_36_V_V);

		sc_bv<14>* edge_attr_mat_s_36_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_448 - aesl_tmp_449];

		// RTL Name: edge_attr_mat_s_36_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_448 - aesl_tmp_449 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_448 - aesl_tmp_449 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_447[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_447[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_447[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_447[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_447[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_36_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_448 - aesl_tmp_449; i++)
		{
			sprintf(tvin_edge_attr_mat_s_36_V_V, "%s\n", (edge_attr_mat_s_36_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_36_V_V, tvin_edge_attr_mat_s_36_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_448 > aesl_tmp_449)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_36_V_V = aesl_tmp_448;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_36_V_V, stream_ingress_size_edge_attr_mat_s_36_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_36_V_V, "\n");

		for (int i = 0; i < aesl_tmp_448 - aesl_tmp_449; i++)
		{
			stream_ingress_size_edge_attr_mat_s_36_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_36_V_V, stream_ingress_size_edge_attr_mat_s_36_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_36_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_36_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_36_V_V, stream_ingress_size_edge_attr_mat_s_36_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_36_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_448 - aesl_tmp_449, &tcl_file.edge_attr_mat_s_36_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_36_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_36_V_V, tvin_edge_attr_mat_s_36_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_36_V_V, tvin_edge_attr_mat_s_36_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_36_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_36_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_36_V_V, wrapc_stream_size_in_edge_attr_mat_s_36_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_36_V_V, "%d\n", aesl_tmp_448 - aesl_tmp_449);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_36_V_V, wrapc_stream_size_in_edge_attr_mat_s_36_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_36_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_36_V_V, wrapc_stream_size_in_edge_attr_mat_s_36_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_37_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_37_V_V, tvin_edge_attr_mat_s_37_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_37_V_V, tvin_edge_attr_mat_s_37_V_V);

		sc_bv<14>* edge_attr_mat_s_37_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_451 - aesl_tmp_452];

		// RTL Name: edge_attr_mat_s_37_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_451 - aesl_tmp_452 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_451 - aesl_tmp_452 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_450[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_450[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_450[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_450[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_450[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_37_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_451 - aesl_tmp_452; i++)
		{
			sprintf(tvin_edge_attr_mat_s_37_V_V, "%s\n", (edge_attr_mat_s_37_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_37_V_V, tvin_edge_attr_mat_s_37_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_451 > aesl_tmp_452)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_37_V_V = aesl_tmp_451;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_37_V_V, stream_ingress_size_edge_attr_mat_s_37_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_37_V_V, "\n");

		for (int i = 0; i < aesl_tmp_451 - aesl_tmp_452; i++)
		{
			stream_ingress_size_edge_attr_mat_s_37_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_37_V_V, stream_ingress_size_edge_attr_mat_s_37_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_37_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_37_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_37_V_V, stream_ingress_size_edge_attr_mat_s_37_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_37_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_451 - aesl_tmp_452, &tcl_file.edge_attr_mat_s_37_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_37_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_37_V_V, tvin_edge_attr_mat_s_37_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_37_V_V, tvin_edge_attr_mat_s_37_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_37_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_37_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_37_V_V, wrapc_stream_size_in_edge_attr_mat_s_37_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_37_V_V, "%d\n", aesl_tmp_451 - aesl_tmp_452);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_37_V_V, wrapc_stream_size_in_edge_attr_mat_s_37_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_37_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_37_V_V, wrapc_stream_size_in_edge_attr_mat_s_37_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_38_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_38_V_V, tvin_edge_attr_mat_s_38_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_38_V_V, tvin_edge_attr_mat_s_38_V_V);

		sc_bv<14>* edge_attr_mat_s_38_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_454 - aesl_tmp_455];

		// RTL Name: edge_attr_mat_s_38_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_454 - aesl_tmp_455 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_454 - aesl_tmp_455 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_453[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_453[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_453[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_453[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_453[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_38_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_454 - aesl_tmp_455; i++)
		{
			sprintf(tvin_edge_attr_mat_s_38_V_V, "%s\n", (edge_attr_mat_s_38_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_38_V_V, tvin_edge_attr_mat_s_38_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_454 > aesl_tmp_455)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_38_V_V = aesl_tmp_454;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_38_V_V, stream_ingress_size_edge_attr_mat_s_38_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_38_V_V, "\n");

		for (int i = 0; i < aesl_tmp_454 - aesl_tmp_455; i++)
		{
			stream_ingress_size_edge_attr_mat_s_38_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_38_V_V, stream_ingress_size_edge_attr_mat_s_38_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_38_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_38_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_38_V_V, stream_ingress_size_edge_attr_mat_s_38_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_38_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_454 - aesl_tmp_455, &tcl_file.edge_attr_mat_s_38_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_38_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_38_V_V, tvin_edge_attr_mat_s_38_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_38_V_V, tvin_edge_attr_mat_s_38_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_38_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_38_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_38_V_V, wrapc_stream_size_in_edge_attr_mat_s_38_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_38_V_V, "%d\n", aesl_tmp_454 - aesl_tmp_455);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_38_V_V, wrapc_stream_size_in_edge_attr_mat_s_38_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_38_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_38_V_V, wrapc_stream_size_in_edge_attr_mat_s_38_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_39_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_39_V_V, tvin_edge_attr_mat_s_39_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_39_V_V, tvin_edge_attr_mat_s_39_V_V);

		sc_bv<14>* edge_attr_mat_s_39_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_457 - aesl_tmp_458];

		// RTL Name: edge_attr_mat_s_39_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_457 - aesl_tmp_458 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_457 - aesl_tmp_458 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_456[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_456[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_456[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_456[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_456[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_39_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_457 - aesl_tmp_458; i++)
		{
			sprintf(tvin_edge_attr_mat_s_39_V_V, "%s\n", (edge_attr_mat_s_39_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_39_V_V, tvin_edge_attr_mat_s_39_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_457 > aesl_tmp_458)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_39_V_V = aesl_tmp_457;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_39_V_V, stream_ingress_size_edge_attr_mat_s_39_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_39_V_V, "\n");

		for (int i = 0; i < aesl_tmp_457 - aesl_tmp_458; i++)
		{
			stream_ingress_size_edge_attr_mat_s_39_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_39_V_V, stream_ingress_size_edge_attr_mat_s_39_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_39_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_39_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_39_V_V, stream_ingress_size_edge_attr_mat_s_39_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_39_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_457 - aesl_tmp_458, &tcl_file.edge_attr_mat_s_39_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_39_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_39_V_V, tvin_edge_attr_mat_s_39_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_39_V_V, tvin_edge_attr_mat_s_39_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_39_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_39_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_39_V_V, wrapc_stream_size_in_edge_attr_mat_s_39_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_39_V_V, "%d\n", aesl_tmp_457 - aesl_tmp_458);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_39_V_V, wrapc_stream_size_in_edge_attr_mat_s_39_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_39_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_39_V_V, wrapc_stream_size_in_edge_attr_mat_s_39_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_40_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_40_V_V, tvin_edge_attr_mat_s_40_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_40_V_V, tvin_edge_attr_mat_s_40_V_V);

		sc_bv<14>* edge_attr_mat_s_40_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_460 - aesl_tmp_461];

		// RTL Name: edge_attr_mat_s_40_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_460 - aesl_tmp_461 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_460 - aesl_tmp_461 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_459[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_459[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_459[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_459[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_459[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_40_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_460 - aesl_tmp_461; i++)
		{
			sprintf(tvin_edge_attr_mat_s_40_V_V, "%s\n", (edge_attr_mat_s_40_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_40_V_V, tvin_edge_attr_mat_s_40_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_460 > aesl_tmp_461)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_40_V_V = aesl_tmp_460;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_40_V_V, stream_ingress_size_edge_attr_mat_s_40_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_40_V_V, "\n");

		for (int i = 0; i < aesl_tmp_460 - aesl_tmp_461; i++)
		{
			stream_ingress_size_edge_attr_mat_s_40_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_40_V_V, stream_ingress_size_edge_attr_mat_s_40_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_40_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_40_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_40_V_V, stream_ingress_size_edge_attr_mat_s_40_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_40_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_460 - aesl_tmp_461, &tcl_file.edge_attr_mat_s_40_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_40_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_40_V_V, tvin_edge_attr_mat_s_40_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_40_V_V, tvin_edge_attr_mat_s_40_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_40_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_40_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_40_V_V, wrapc_stream_size_in_edge_attr_mat_s_40_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_40_V_V, "%d\n", aesl_tmp_460 - aesl_tmp_461);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_40_V_V, wrapc_stream_size_in_edge_attr_mat_s_40_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_40_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_40_V_V, wrapc_stream_size_in_edge_attr_mat_s_40_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_41_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_41_V_V, tvin_edge_attr_mat_s_41_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_41_V_V, tvin_edge_attr_mat_s_41_V_V);

		sc_bv<14>* edge_attr_mat_s_41_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_463 - aesl_tmp_464];

		// RTL Name: edge_attr_mat_s_41_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_463 - aesl_tmp_464 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_463 - aesl_tmp_464 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_462[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_462[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_462[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_462[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_462[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_41_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_463 - aesl_tmp_464; i++)
		{
			sprintf(tvin_edge_attr_mat_s_41_V_V, "%s\n", (edge_attr_mat_s_41_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_41_V_V, tvin_edge_attr_mat_s_41_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_463 > aesl_tmp_464)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_41_V_V = aesl_tmp_463;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_41_V_V, stream_ingress_size_edge_attr_mat_s_41_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_41_V_V, "\n");

		for (int i = 0; i < aesl_tmp_463 - aesl_tmp_464; i++)
		{
			stream_ingress_size_edge_attr_mat_s_41_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_41_V_V, stream_ingress_size_edge_attr_mat_s_41_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_41_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_41_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_41_V_V, stream_ingress_size_edge_attr_mat_s_41_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_41_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_463 - aesl_tmp_464, &tcl_file.edge_attr_mat_s_41_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_41_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_41_V_V, tvin_edge_attr_mat_s_41_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_41_V_V, tvin_edge_attr_mat_s_41_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_41_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_41_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_41_V_V, wrapc_stream_size_in_edge_attr_mat_s_41_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_41_V_V, "%d\n", aesl_tmp_463 - aesl_tmp_464);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_41_V_V, wrapc_stream_size_in_edge_attr_mat_s_41_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_41_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_41_V_V, wrapc_stream_size_in_edge_attr_mat_s_41_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_42_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_42_V_V, tvin_edge_attr_mat_s_42_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_42_V_V, tvin_edge_attr_mat_s_42_V_V);

		sc_bv<14>* edge_attr_mat_s_42_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_466 - aesl_tmp_467];

		// RTL Name: edge_attr_mat_s_42_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_466 - aesl_tmp_467 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_466 - aesl_tmp_467 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_465[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_465[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_465[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_465[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_465[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_42_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_466 - aesl_tmp_467; i++)
		{
			sprintf(tvin_edge_attr_mat_s_42_V_V, "%s\n", (edge_attr_mat_s_42_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_42_V_V, tvin_edge_attr_mat_s_42_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_466 > aesl_tmp_467)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_42_V_V = aesl_tmp_466;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_42_V_V, stream_ingress_size_edge_attr_mat_s_42_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_42_V_V, "\n");

		for (int i = 0; i < aesl_tmp_466 - aesl_tmp_467; i++)
		{
			stream_ingress_size_edge_attr_mat_s_42_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_42_V_V, stream_ingress_size_edge_attr_mat_s_42_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_42_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_42_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_42_V_V, stream_ingress_size_edge_attr_mat_s_42_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_42_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_466 - aesl_tmp_467, &tcl_file.edge_attr_mat_s_42_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_42_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_42_V_V, tvin_edge_attr_mat_s_42_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_42_V_V, tvin_edge_attr_mat_s_42_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_42_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_42_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_42_V_V, wrapc_stream_size_in_edge_attr_mat_s_42_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_42_V_V, "%d\n", aesl_tmp_466 - aesl_tmp_467);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_42_V_V, wrapc_stream_size_in_edge_attr_mat_s_42_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_42_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_42_V_V, wrapc_stream_size_in_edge_attr_mat_s_42_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_43_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_43_V_V, tvin_edge_attr_mat_s_43_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_43_V_V, tvin_edge_attr_mat_s_43_V_V);

		sc_bv<14>* edge_attr_mat_s_43_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_469 - aesl_tmp_470];

		// RTL Name: edge_attr_mat_s_43_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_469 - aesl_tmp_470 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_469 - aesl_tmp_470 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_468[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_468[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_468[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_468[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_468[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_43_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_469 - aesl_tmp_470; i++)
		{
			sprintf(tvin_edge_attr_mat_s_43_V_V, "%s\n", (edge_attr_mat_s_43_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_43_V_V, tvin_edge_attr_mat_s_43_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_469 > aesl_tmp_470)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_43_V_V = aesl_tmp_469;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_43_V_V, stream_ingress_size_edge_attr_mat_s_43_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_43_V_V, "\n");

		for (int i = 0; i < aesl_tmp_469 - aesl_tmp_470; i++)
		{
			stream_ingress_size_edge_attr_mat_s_43_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_43_V_V, stream_ingress_size_edge_attr_mat_s_43_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_43_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_43_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_43_V_V, stream_ingress_size_edge_attr_mat_s_43_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_43_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_469 - aesl_tmp_470, &tcl_file.edge_attr_mat_s_43_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_43_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_43_V_V, tvin_edge_attr_mat_s_43_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_43_V_V, tvin_edge_attr_mat_s_43_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_43_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_43_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_43_V_V, wrapc_stream_size_in_edge_attr_mat_s_43_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_43_V_V, "%d\n", aesl_tmp_469 - aesl_tmp_470);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_43_V_V, wrapc_stream_size_in_edge_attr_mat_s_43_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_43_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_43_V_V, wrapc_stream_size_in_edge_attr_mat_s_43_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_44_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_44_V_V, tvin_edge_attr_mat_s_44_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_44_V_V, tvin_edge_attr_mat_s_44_V_V);

		sc_bv<14>* edge_attr_mat_s_44_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_472 - aesl_tmp_473];

		// RTL Name: edge_attr_mat_s_44_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_472 - aesl_tmp_473 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_472 - aesl_tmp_473 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_471[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_471[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_471[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_471[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_471[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_44_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_472 - aesl_tmp_473; i++)
		{
			sprintf(tvin_edge_attr_mat_s_44_V_V, "%s\n", (edge_attr_mat_s_44_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_44_V_V, tvin_edge_attr_mat_s_44_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_472 > aesl_tmp_473)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_44_V_V = aesl_tmp_472;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_44_V_V, stream_ingress_size_edge_attr_mat_s_44_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_44_V_V, "\n");

		for (int i = 0; i < aesl_tmp_472 - aesl_tmp_473; i++)
		{
			stream_ingress_size_edge_attr_mat_s_44_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_44_V_V, stream_ingress_size_edge_attr_mat_s_44_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_44_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_44_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_44_V_V, stream_ingress_size_edge_attr_mat_s_44_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_44_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_472 - aesl_tmp_473, &tcl_file.edge_attr_mat_s_44_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_44_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_44_V_V, tvin_edge_attr_mat_s_44_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_44_V_V, tvin_edge_attr_mat_s_44_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_44_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_44_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_44_V_V, wrapc_stream_size_in_edge_attr_mat_s_44_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_44_V_V, "%d\n", aesl_tmp_472 - aesl_tmp_473);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_44_V_V, wrapc_stream_size_in_edge_attr_mat_s_44_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_44_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_44_V_V, wrapc_stream_size_in_edge_attr_mat_s_44_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_45_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_45_V_V, tvin_edge_attr_mat_s_45_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_45_V_V, tvin_edge_attr_mat_s_45_V_V);

		sc_bv<14>* edge_attr_mat_s_45_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_475 - aesl_tmp_476];

		// RTL Name: edge_attr_mat_s_45_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_475 - aesl_tmp_476 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_475 - aesl_tmp_476 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_474[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_474[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_474[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_474[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_474[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_45_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_475 - aesl_tmp_476; i++)
		{
			sprintf(tvin_edge_attr_mat_s_45_V_V, "%s\n", (edge_attr_mat_s_45_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_45_V_V, tvin_edge_attr_mat_s_45_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_475 > aesl_tmp_476)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_45_V_V = aesl_tmp_475;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_45_V_V, stream_ingress_size_edge_attr_mat_s_45_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_45_V_V, "\n");

		for (int i = 0; i < aesl_tmp_475 - aesl_tmp_476; i++)
		{
			stream_ingress_size_edge_attr_mat_s_45_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_45_V_V, stream_ingress_size_edge_attr_mat_s_45_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_45_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_45_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_45_V_V, stream_ingress_size_edge_attr_mat_s_45_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_45_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_475 - aesl_tmp_476, &tcl_file.edge_attr_mat_s_45_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_45_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_45_V_V, tvin_edge_attr_mat_s_45_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_45_V_V, tvin_edge_attr_mat_s_45_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_45_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_45_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_45_V_V, wrapc_stream_size_in_edge_attr_mat_s_45_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_45_V_V, "%d\n", aesl_tmp_475 - aesl_tmp_476);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_45_V_V, wrapc_stream_size_in_edge_attr_mat_s_45_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_45_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_45_V_V, wrapc_stream_size_in_edge_attr_mat_s_45_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_46_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_46_V_V, tvin_edge_attr_mat_s_46_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_46_V_V, tvin_edge_attr_mat_s_46_V_V);

		sc_bv<14>* edge_attr_mat_s_46_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_478 - aesl_tmp_479];

		// RTL Name: edge_attr_mat_s_46_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_478 - aesl_tmp_479 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_478 - aesl_tmp_479 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_477[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_477[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_477[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_477[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_477[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_46_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_478 - aesl_tmp_479; i++)
		{
			sprintf(tvin_edge_attr_mat_s_46_V_V, "%s\n", (edge_attr_mat_s_46_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_46_V_V, tvin_edge_attr_mat_s_46_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_478 > aesl_tmp_479)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_46_V_V = aesl_tmp_478;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_46_V_V, stream_ingress_size_edge_attr_mat_s_46_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_46_V_V, "\n");

		for (int i = 0; i < aesl_tmp_478 - aesl_tmp_479; i++)
		{
			stream_ingress_size_edge_attr_mat_s_46_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_46_V_V, stream_ingress_size_edge_attr_mat_s_46_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_46_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_46_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_46_V_V, stream_ingress_size_edge_attr_mat_s_46_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_46_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_478 - aesl_tmp_479, &tcl_file.edge_attr_mat_s_46_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_46_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_46_V_V, tvin_edge_attr_mat_s_46_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_46_V_V, tvin_edge_attr_mat_s_46_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_46_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_46_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_46_V_V, wrapc_stream_size_in_edge_attr_mat_s_46_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_46_V_V, "%d\n", aesl_tmp_478 - aesl_tmp_479);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_46_V_V, wrapc_stream_size_in_edge_attr_mat_s_46_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_46_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_46_V_V, wrapc_stream_size_in_edge_attr_mat_s_46_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_47_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_47_V_V, tvin_edge_attr_mat_s_47_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_47_V_V, tvin_edge_attr_mat_s_47_V_V);

		sc_bv<14>* edge_attr_mat_s_47_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_481 - aesl_tmp_482];

		// RTL Name: edge_attr_mat_s_47_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_481 - aesl_tmp_482 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_481 - aesl_tmp_482 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_480[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_480[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_480[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_480[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_480[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_47_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_481 - aesl_tmp_482; i++)
		{
			sprintf(tvin_edge_attr_mat_s_47_V_V, "%s\n", (edge_attr_mat_s_47_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_47_V_V, tvin_edge_attr_mat_s_47_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_481 > aesl_tmp_482)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_47_V_V = aesl_tmp_481;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_47_V_V, stream_ingress_size_edge_attr_mat_s_47_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_47_V_V, "\n");

		for (int i = 0; i < aesl_tmp_481 - aesl_tmp_482; i++)
		{
			stream_ingress_size_edge_attr_mat_s_47_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_47_V_V, stream_ingress_size_edge_attr_mat_s_47_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_47_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_47_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_47_V_V, stream_ingress_size_edge_attr_mat_s_47_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_47_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_481 - aesl_tmp_482, &tcl_file.edge_attr_mat_s_47_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_47_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_47_V_V, tvin_edge_attr_mat_s_47_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_47_V_V, tvin_edge_attr_mat_s_47_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_47_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_47_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_47_V_V, wrapc_stream_size_in_edge_attr_mat_s_47_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_47_V_V, "%d\n", aesl_tmp_481 - aesl_tmp_482);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_47_V_V, wrapc_stream_size_in_edge_attr_mat_s_47_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_47_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_47_V_V, wrapc_stream_size_in_edge_attr_mat_s_47_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_48_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_48_V_V, tvin_edge_attr_mat_s_48_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_48_V_V, tvin_edge_attr_mat_s_48_V_V);

		sc_bv<14>* edge_attr_mat_s_48_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_484 - aesl_tmp_485];

		// RTL Name: edge_attr_mat_s_48_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_484 - aesl_tmp_485 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_484 - aesl_tmp_485 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_483[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_483[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_483[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_483[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_483[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_48_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_484 - aesl_tmp_485; i++)
		{
			sprintf(tvin_edge_attr_mat_s_48_V_V, "%s\n", (edge_attr_mat_s_48_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_48_V_V, tvin_edge_attr_mat_s_48_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_484 > aesl_tmp_485)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_48_V_V = aesl_tmp_484;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_48_V_V, stream_ingress_size_edge_attr_mat_s_48_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_48_V_V, "\n");

		for (int i = 0; i < aesl_tmp_484 - aesl_tmp_485; i++)
		{
			stream_ingress_size_edge_attr_mat_s_48_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_48_V_V, stream_ingress_size_edge_attr_mat_s_48_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_48_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_48_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_48_V_V, stream_ingress_size_edge_attr_mat_s_48_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_48_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_484 - aesl_tmp_485, &tcl_file.edge_attr_mat_s_48_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_48_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_48_V_V, tvin_edge_attr_mat_s_48_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_48_V_V, tvin_edge_attr_mat_s_48_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_48_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_48_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_48_V_V, wrapc_stream_size_in_edge_attr_mat_s_48_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_48_V_V, "%d\n", aesl_tmp_484 - aesl_tmp_485);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_48_V_V, wrapc_stream_size_in_edge_attr_mat_s_48_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_48_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_48_V_V, wrapc_stream_size_in_edge_attr_mat_s_48_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_49_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_49_V_V, tvin_edge_attr_mat_s_49_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_49_V_V, tvin_edge_attr_mat_s_49_V_V);

		sc_bv<14>* edge_attr_mat_s_49_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_487 - aesl_tmp_488];

		// RTL Name: edge_attr_mat_s_49_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_487 - aesl_tmp_488 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_487 - aesl_tmp_488 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_486[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_486[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_486[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_486[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_486[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_49_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_487 - aesl_tmp_488; i++)
		{
			sprintf(tvin_edge_attr_mat_s_49_V_V, "%s\n", (edge_attr_mat_s_49_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_49_V_V, tvin_edge_attr_mat_s_49_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_487 > aesl_tmp_488)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_49_V_V = aesl_tmp_487;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_49_V_V, stream_ingress_size_edge_attr_mat_s_49_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_49_V_V, "\n");

		for (int i = 0; i < aesl_tmp_487 - aesl_tmp_488; i++)
		{
			stream_ingress_size_edge_attr_mat_s_49_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_49_V_V, stream_ingress_size_edge_attr_mat_s_49_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_49_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_49_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_49_V_V, stream_ingress_size_edge_attr_mat_s_49_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_49_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_487 - aesl_tmp_488, &tcl_file.edge_attr_mat_s_49_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_49_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_49_V_V, tvin_edge_attr_mat_s_49_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_49_V_V, tvin_edge_attr_mat_s_49_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_49_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_49_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_49_V_V, wrapc_stream_size_in_edge_attr_mat_s_49_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_49_V_V, "%d\n", aesl_tmp_487 - aesl_tmp_488);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_49_V_V, wrapc_stream_size_in_edge_attr_mat_s_49_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_49_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_49_V_V, wrapc_stream_size_in_edge_attr_mat_s_49_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_50_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_50_V_V, tvin_edge_attr_mat_s_50_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_50_V_V, tvin_edge_attr_mat_s_50_V_V);

		sc_bv<14>* edge_attr_mat_s_50_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_490 - aesl_tmp_491];

		// RTL Name: edge_attr_mat_s_50_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_490 - aesl_tmp_491 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_490 - aesl_tmp_491 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_489[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_489[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_489[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_489[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_489[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_50_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_490 - aesl_tmp_491; i++)
		{
			sprintf(tvin_edge_attr_mat_s_50_V_V, "%s\n", (edge_attr_mat_s_50_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_50_V_V, tvin_edge_attr_mat_s_50_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_490 > aesl_tmp_491)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_50_V_V = aesl_tmp_490;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_50_V_V, stream_ingress_size_edge_attr_mat_s_50_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_50_V_V, "\n");

		for (int i = 0; i < aesl_tmp_490 - aesl_tmp_491; i++)
		{
			stream_ingress_size_edge_attr_mat_s_50_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_50_V_V, stream_ingress_size_edge_attr_mat_s_50_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_50_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_50_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_50_V_V, stream_ingress_size_edge_attr_mat_s_50_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_50_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_490 - aesl_tmp_491, &tcl_file.edge_attr_mat_s_50_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_50_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_50_V_V, tvin_edge_attr_mat_s_50_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_50_V_V, tvin_edge_attr_mat_s_50_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_50_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_50_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_50_V_V, wrapc_stream_size_in_edge_attr_mat_s_50_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_50_V_V, "%d\n", aesl_tmp_490 - aesl_tmp_491);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_50_V_V, wrapc_stream_size_in_edge_attr_mat_s_50_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_50_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_50_V_V, wrapc_stream_size_in_edge_attr_mat_s_50_V_V);

		// [[transaction]]
		sprintf(tvin_edge_attr_mat_s_51_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_51_V_V, tvin_edge_attr_mat_s_51_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_51_V_V, tvin_edge_attr_mat_s_51_V_V);

		sc_bv<14>* edge_attr_mat_s_51_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_493 - aesl_tmp_494];

		// RTL Name: edge_attr_mat_s_51_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_attr_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_493 - aesl_tmp_494 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_493 - aesl_tmp_494 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_492[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_492[0]
						// regulate_c_name       : edge_attr_mat_s_V_V
						// input_type_conversion : (aesl_tmp_492[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_492[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_attr_mat_s_V_V_tmp_mem;
							edge_attr_mat_s_V_V_tmp_mem = (aesl_tmp_492[i_0]).range().to_string(SC_BIN).c_str();
							edge_attr_mat_s_51_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_attr_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_493 - aesl_tmp_494; i++)
		{
			sprintf(tvin_edge_attr_mat_s_51_V_V, "%s\n", (edge_attr_mat_s_51_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_51_V_V, tvin_edge_attr_mat_s_51_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_493 > aesl_tmp_494)
     {
		sc_int<32> stream_ingress_size_edge_attr_mat_s_51_V_V = aesl_tmp_493;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_51_V_V, stream_ingress_size_edge_attr_mat_s_51_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_51_V_V, "\n");

		for (int i = 0; i < aesl_tmp_493 - aesl_tmp_494; i++)
		{
			stream_ingress_size_edge_attr_mat_s_51_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_51_V_V, stream_ingress_size_edge_attr_mat_s_51_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_51_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_attr_mat_s_51_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_51_V_V, stream_ingress_size_edge_attr_mat_s_51_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_51_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_493 - aesl_tmp_494, &tcl_file.edge_attr_mat_s_51_V_V_depth);
		sprintf(tvin_edge_attr_mat_s_51_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_attr_mat_s_51_V_V, tvin_edge_attr_mat_s_51_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_attr_mat_s_51_V_V, tvin_edge_attr_mat_s_51_V_V);

		// release memory allocation
		delete [] edge_attr_mat_s_51_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_51_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_51_V_V, wrapc_stream_size_in_edge_attr_mat_s_51_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_51_V_V, "%d\n", aesl_tmp_493 - aesl_tmp_494);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_51_V_V, wrapc_stream_size_in_edge_attr_mat_s_51_V_V);
		sprintf(wrapc_stream_size_in_edge_attr_mat_s_51_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_attr_mat_s_51_V_V, wrapc_stream_size_in_edge_attr_mat_s_51_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_0_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_0_V_V, tvin_edge_index_mat_s_0_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_0_V_V, tvin_edge_index_mat_s_0_V_V);

		sc_bv<14>* edge_index_mat_s_0_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_496 - aesl_tmp_497];

		// RTL Name: edge_index_mat_s_0_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_496 - aesl_tmp_497 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_496 - aesl_tmp_497 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_495[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_495[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_495[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_495[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_495[i_0]).to_string(2).c_str();
							edge_index_mat_s_0_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_496 - aesl_tmp_497; i++)
		{
			sprintf(tvin_edge_index_mat_s_0_V_V, "%s\n", (edge_index_mat_s_0_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_0_V_V, tvin_edge_index_mat_s_0_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_496 > aesl_tmp_497)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_0_V_V = aesl_tmp_496;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_0_V_V, stream_ingress_size_edge_index_mat_s_0_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_0_V_V, "\n");

		for (int i = 0; i < aesl_tmp_496 - aesl_tmp_497; i++)
		{
			stream_ingress_size_edge_index_mat_s_0_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_0_V_V, stream_ingress_size_edge_index_mat_s_0_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_0_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_0_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_0_V_V, stream_ingress_size_edge_index_mat_s_0_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_0_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_496 - aesl_tmp_497, &tcl_file.edge_index_mat_s_0_V_V_depth);
		sprintf(tvin_edge_index_mat_s_0_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_0_V_V, tvin_edge_index_mat_s_0_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_0_V_V, tvin_edge_index_mat_s_0_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_0_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_0_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, wrapc_stream_size_in_edge_index_mat_s_0_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_0_V_V, "%d\n", aesl_tmp_496 - aesl_tmp_497);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, wrapc_stream_size_in_edge_index_mat_s_0_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_0_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_0_V_V, wrapc_stream_size_in_edge_index_mat_s_0_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_1_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_1_V_V, tvin_edge_index_mat_s_1_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_1_V_V, tvin_edge_index_mat_s_1_V_V);

		sc_bv<14>* edge_index_mat_s_1_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_499 - aesl_tmp_500];

		// RTL Name: edge_index_mat_s_1_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_499 - aesl_tmp_500 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_499 - aesl_tmp_500 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_498[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_498[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_498[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_498[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_498[i_0]).to_string(2).c_str();
							edge_index_mat_s_1_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_499 - aesl_tmp_500; i++)
		{
			sprintf(tvin_edge_index_mat_s_1_V_V, "%s\n", (edge_index_mat_s_1_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_1_V_V, tvin_edge_index_mat_s_1_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_499 > aesl_tmp_500)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_1_V_V = aesl_tmp_499;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_1_V_V, stream_ingress_size_edge_index_mat_s_1_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_1_V_V, "\n");

		for (int i = 0; i < aesl_tmp_499 - aesl_tmp_500; i++)
		{
			stream_ingress_size_edge_index_mat_s_1_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_1_V_V, stream_ingress_size_edge_index_mat_s_1_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_1_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_1_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_1_V_V, stream_ingress_size_edge_index_mat_s_1_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_1_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_499 - aesl_tmp_500, &tcl_file.edge_index_mat_s_1_V_V_depth);
		sprintf(tvin_edge_index_mat_s_1_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_1_V_V, tvin_edge_index_mat_s_1_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_1_V_V, tvin_edge_index_mat_s_1_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_1_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_1_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_1_V_V, wrapc_stream_size_in_edge_index_mat_s_1_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_1_V_V, "%d\n", aesl_tmp_499 - aesl_tmp_500);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_1_V_V, wrapc_stream_size_in_edge_index_mat_s_1_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_1_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_1_V_V, wrapc_stream_size_in_edge_index_mat_s_1_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_2_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_2_V_V, tvin_edge_index_mat_s_2_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_2_V_V, tvin_edge_index_mat_s_2_V_V);

		sc_bv<14>* edge_index_mat_s_2_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_502 - aesl_tmp_503];

		// RTL Name: edge_index_mat_s_2_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_502 - aesl_tmp_503 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_502 - aesl_tmp_503 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_501[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_501[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_501[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_501[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_501[i_0]).to_string(2).c_str();
							edge_index_mat_s_2_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_502 - aesl_tmp_503; i++)
		{
			sprintf(tvin_edge_index_mat_s_2_V_V, "%s\n", (edge_index_mat_s_2_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_2_V_V, tvin_edge_index_mat_s_2_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_502 > aesl_tmp_503)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_2_V_V = aesl_tmp_502;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_2_V_V, stream_ingress_size_edge_index_mat_s_2_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_2_V_V, "\n");

		for (int i = 0; i < aesl_tmp_502 - aesl_tmp_503; i++)
		{
			stream_ingress_size_edge_index_mat_s_2_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_2_V_V, stream_ingress_size_edge_index_mat_s_2_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_2_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_2_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_2_V_V, stream_ingress_size_edge_index_mat_s_2_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_2_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_502 - aesl_tmp_503, &tcl_file.edge_index_mat_s_2_V_V_depth);
		sprintf(tvin_edge_index_mat_s_2_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_2_V_V, tvin_edge_index_mat_s_2_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_2_V_V, tvin_edge_index_mat_s_2_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_2_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_2_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_2_V_V, wrapc_stream_size_in_edge_index_mat_s_2_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_2_V_V, "%d\n", aesl_tmp_502 - aesl_tmp_503);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_2_V_V, wrapc_stream_size_in_edge_index_mat_s_2_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_2_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_2_V_V, wrapc_stream_size_in_edge_index_mat_s_2_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_3_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_3_V_V, tvin_edge_index_mat_s_3_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_3_V_V, tvin_edge_index_mat_s_3_V_V);

		sc_bv<14>* edge_index_mat_s_3_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_505 - aesl_tmp_506];

		// RTL Name: edge_index_mat_s_3_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_505 - aesl_tmp_506 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_505 - aesl_tmp_506 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_504[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_504[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_504[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_504[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_504[i_0]).to_string(2).c_str();
							edge_index_mat_s_3_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_505 - aesl_tmp_506; i++)
		{
			sprintf(tvin_edge_index_mat_s_3_V_V, "%s\n", (edge_index_mat_s_3_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_3_V_V, tvin_edge_index_mat_s_3_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_505 > aesl_tmp_506)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_3_V_V = aesl_tmp_505;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_3_V_V, stream_ingress_size_edge_index_mat_s_3_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_3_V_V, "\n");

		for (int i = 0; i < aesl_tmp_505 - aesl_tmp_506; i++)
		{
			stream_ingress_size_edge_index_mat_s_3_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_3_V_V, stream_ingress_size_edge_index_mat_s_3_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_3_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_3_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_3_V_V, stream_ingress_size_edge_index_mat_s_3_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_3_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_505 - aesl_tmp_506, &tcl_file.edge_index_mat_s_3_V_V_depth);
		sprintf(tvin_edge_index_mat_s_3_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_3_V_V, tvin_edge_index_mat_s_3_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_3_V_V, tvin_edge_index_mat_s_3_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_3_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_3_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_3_V_V, wrapc_stream_size_in_edge_index_mat_s_3_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_3_V_V, "%d\n", aesl_tmp_505 - aesl_tmp_506);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_3_V_V, wrapc_stream_size_in_edge_index_mat_s_3_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_3_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_3_V_V, wrapc_stream_size_in_edge_index_mat_s_3_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_4_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_4_V_V, tvin_edge_index_mat_s_4_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_4_V_V, tvin_edge_index_mat_s_4_V_V);

		sc_bv<14>* edge_index_mat_s_4_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_508 - aesl_tmp_509];

		// RTL Name: edge_index_mat_s_4_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_508 - aesl_tmp_509 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_508 - aesl_tmp_509 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_507[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_507[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_507[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_507[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_507[i_0]).to_string(2).c_str();
							edge_index_mat_s_4_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_508 - aesl_tmp_509; i++)
		{
			sprintf(tvin_edge_index_mat_s_4_V_V, "%s\n", (edge_index_mat_s_4_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_4_V_V, tvin_edge_index_mat_s_4_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_508 > aesl_tmp_509)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_4_V_V = aesl_tmp_508;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_4_V_V, stream_ingress_size_edge_index_mat_s_4_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_4_V_V, "\n");

		for (int i = 0; i < aesl_tmp_508 - aesl_tmp_509; i++)
		{
			stream_ingress_size_edge_index_mat_s_4_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_4_V_V, stream_ingress_size_edge_index_mat_s_4_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_4_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_4_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_4_V_V, stream_ingress_size_edge_index_mat_s_4_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_4_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_508 - aesl_tmp_509, &tcl_file.edge_index_mat_s_4_V_V_depth);
		sprintf(tvin_edge_index_mat_s_4_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_4_V_V, tvin_edge_index_mat_s_4_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_4_V_V, tvin_edge_index_mat_s_4_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_4_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_4_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_4_V_V, wrapc_stream_size_in_edge_index_mat_s_4_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_4_V_V, "%d\n", aesl_tmp_508 - aesl_tmp_509);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_4_V_V, wrapc_stream_size_in_edge_index_mat_s_4_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_4_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_4_V_V, wrapc_stream_size_in_edge_index_mat_s_4_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_5_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_5_V_V, tvin_edge_index_mat_s_5_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_5_V_V, tvin_edge_index_mat_s_5_V_V);

		sc_bv<14>* edge_index_mat_s_5_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_511 - aesl_tmp_512];

		// RTL Name: edge_index_mat_s_5_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_511 - aesl_tmp_512 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_511 - aesl_tmp_512 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_510[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_510[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_510[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_510[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_510[i_0]).to_string(2).c_str();
							edge_index_mat_s_5_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_511 - aesl_tmp_512; i++)
		{
			sprintf(tvin_edge_index_mat_s_5_V_V, "%s\n", (edge_index_mat_s_5_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_5_V_V, tvin_edge_index_mat_s_5_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_511 > aesl_tmp_512)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_5_V_V = aesl_tmp_511;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_5_V_V, stream_ingress_size_edge_index_mat_s_5_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_5_V_V, "\n");

		for (int i = 0; i < aesl_tmp_511 - aesl_tmp_512; i++)
		{
			stream_ingress_size_edge_index_mat_s_5_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_5_V_V, stream_ingress_size_edge_index_mat_s_5_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_5_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_5_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_5_V_V, stream_ingress_size_edge_index_mat_s_5_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_5_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_511 - aesl_tmp_512, &tcl_file.edge_index_mat_s_5_V_V_depth);
		sprintf(tvin_edge_index_mat_s_5_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_5_V_V, tvin_edge_index_mat_s_5_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_5_V_V, tvin_edge_index_mat_s_5_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_5_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_5_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_5_V_V, wrapc_stream_size_in_edge_index_mat_s_5_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_5_V_V, "%d\n", aesl_tmp_511 - aesl_tmp_512);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_5_V_V, wrapc_stream_size_in_edge_index_mat_s_5_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_5_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_5_V_V, wrapc_stream_size_in_edge_index_mat_s_5_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_6_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_6_V_V, tvin_edge_index_mat_s_6_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_6_V_V, tvin_edge_index_mat_s_6_V_V);

		sc_bv<14>* edge_index_mat_s_6_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_514 - aesl_tmp_515];

		// RTL Name: edge_index_mat_s_6_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_514 - aesl_tmp_515 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_514 - aesl_tmp_515 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_513[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_513[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_513[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_513[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_513[i_0]).to_string(2).c_str();
							edge_index_mat_s_6_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_514 - aesl_tmp_515; i++)
		{
			sprintf(tvin_edge_index_mat_s_6_V_V, "%s\n", (edge_index_mat_s_6_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_6_V_V, tvin_edge_index_mat_s_6_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_514 > aesl_tmp_515)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_6_V_V = aesl_tmp_514;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_6_V_V, stream_ingress_size_edge_index_mat_s_6_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_6_V_V, "\n");

		for (int i = 0; i < aesl_tmp_514 - aesl_tmp_515; i++)
		{
			stream_ingress_size_edge_index_mat_s_6_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_6_V_V, stream_ingress_size_edge_index_mat_s_6_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_6_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_6_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_6_V_V, stream_ingress_size_edge_index_mat_s_6_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_6_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_514 - aesl_tmp_515, &tcl_file.edge_index_mat_s_6_V_V_depth);
		sprintf(tvin_edge_index_mat_s_6_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_6_V_V, tvin_edge_index_mat_s_6_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_6_V_V, tvin_edge_index_mat_s_6_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_6_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_6_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_6_V_V, wrapc_stream_size_in_edge_index_mat_s_6_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_6_V_V, "%d\n", aesl_tmp_514 - aesl_tmp_515);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_6_V_V, wrapc_stream_size_in_edge_index_mat_s_6_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_6_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_6_V_V, wrapc_stream_size_in_edge_index_mat_s_6_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_7_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_7_V_V, tvin_edge_index_mat_s_7_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_7_V_V, tvin_edge_index_mat_s_7_V_V);

		sc_bv<14>* edge_index_mat_s_7_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_517 - aesl_tmp_518];

		// RTL Name: edge_index_mat_s_7_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_517 - aesl_tmp_518 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_517 - aesl_tmp_518 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_516[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_516[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_516[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_516[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_516[i_0]).to_string(2).c_str();
							edge_index_mat_s_7_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_517 - aesl_tmp_518; i++)
		{
			sprintf(tvin_edge_index_mat_s_7_V_V, "%s\n", (edge_index_mat_s_7_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_7_V_V, tvin_edge_index_mat_s_7_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_517 > aesl_tmp_518)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_7_V_V = aesl_tmp_517;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_7_V_V, stream_ingress_size_edge_index_mat_s_7_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_7_V_V, "\n");

		for (int i = 0; i < aesl_tmp_517 - aesl_tmp_518; i++)
		{
			stream_ingress_size_edge_index_mat_s_7_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_7_V_V, stream_ingress_size_edge_index_mat_s_7_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_7_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_7_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_7_V_V, stream_ingress_size_edge_index_mat_s_7_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_7_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_517 - aesl_tmp_518, &tcl_file.edge_index_mat_s_7_V_V_depth);
		sprintf(tvin_edge_index_mat_s_7_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_7_V_V, tvin_edge_index_mat_s_7_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_7_V_V, tvin_edge_index_mat_s_7_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_7_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_7_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_7_V_V, wrapc_stream_size_in_edge_index_mat_s_7_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_7_V_V, "%d\n", aesl_tmp_517 - aesl_tmp_518);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_7_V_V, wrapc_stream_size_in_edge_index_mat_s_7_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_7_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_7_V_V, wrapc_stream_size_in_edge_index_mat_s_7_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_8_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_8_V_V, tvin_edge_index_mat_s_8_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_8_V_V, tvin_edge_index_mat_s_8_V_V);

		sc_bv<14>* edge_index_mat_s_8_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_520 - aesl_tmp_521];

		// RTL Name: edge_index_mat_s_8_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_520 - aesl_tmp_521 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_520 - aesl_tmp_521 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_519[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_519[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_519[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_519[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_519[i_0]).to_string(2).c_str();
							edge_index_mat_s_8_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_520 - aesl_tmp_521; i++)
		{
			sprintf(tvin_edge_index_mat_s_8_V_V, "%s\n", (edge_index_mat_s_8_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_8_V_V, tvin_edge_index_mat_s_8_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_520 > aesl_tmp_521)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_8_V_V = aesl_tmp_520;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_8_V_V, stream_ingress_size_edge_index_mat_s_8_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_8_V_V, "\n");

		for (int i = 0; i < aesl_tmp_520 - aesl_tmp_521; i++)
		{
			stream_ingress_size_edge_index_mat_s_8_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_8_V_V, stream_ingress_size_edge_index_mat_s_8_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_8_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_8_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_8_V_V, stream_ingress_size_edge_index_mat_s_8_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_8_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_520 - aesl_tmp_521, &tcl_file.edge_index_mat_s_8_V_V_depth);
		sprintf(tvin_edge_index_mat_s_8_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_8_V_V, tvin_edge_index_mat_s_8_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_8_V_V, tvin_edge_index_mat_s_8_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_8_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_8_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_8_V_V, wrapc_stream_size_in_edge_index_mat_s_8_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_8_V_V, "%d\n", aesl_tmp_520 - aesl_tmp_521);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_8_V_V, wrapc_stream_size_in_edge_index_mat_s_8_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_8_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_8_V_V, wrapc_stream_size_in_edge_index_mat_s_8_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_9_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_9_V_V, tvin_edge_index_mat_s_9_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_9_V_V, tvin_edge_index_mat_s_9_V_V);

		sc_bv<14>* edge_index_mat_s_9_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_523 - aesl_tmp_524];

		// RTL Name: edge_index_mat_s_9_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_523 - aesl_tmp_524 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_523 - aesl_tmp_524 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_522[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_522[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_522[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_522[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_522[i_0]).to_string(2).c_str();
							edge_index_mat_s_9_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_523 - aesl_tmp_524; i++)
		{
			sprintf(tvin_edge_index_mat_s_9_V_V, "%s\n", (edge_index_mat_s_9_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_9_V_V, tvin_edge_index_mat_s_9_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_523 > aesl_tmp_524)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_9_V_V = aesl_tmp_523;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_9_V_V, stream_ingress_size_edge_index_mat_s_9_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_9_V_V, "\n");

		for (int i = 0; i < aesl_tmp_523 - aesl_tmp_524; i++)
		{
			stream_ingress_size_edge_index_mat_s_9_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_9_V_V, stream_ingress_size_edge_index_mat_s_9_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_9_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_9_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_9_V_V, stream_ingress_size_edge_index_mat_s_9_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_9_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_523 - aesl_tmp_524, &tcl_file.edge_index_mat_s_9_V_V_depth);
		sprintf(tvin_edge_index_mat_s_9_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_9_V_V, tvin_edge_index_mat_s_9_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_9_V_V, tvin_edge_index_mat_s_9_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_9_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_9_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_9_V_V, wrapc_stream_size_in_edge_index_mat_s_9_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_9_V_V, "%d\n", aesl_tmp_523 - aesl_tmp_524);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_9_V_V, wrapc_stream_size_in_edge_index_mat_s_9_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_9_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_9_V_V, wrapc_stream_size_in_edge_index_mat_s_9_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_10_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_10_V_V, tvin_edge_index_mat_s_10_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_10_V_V, tvin_edge_index_mat_s_10_V_V);

		sc_bv<14>* edge_index_mat_s_10_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_526 - aesl_tmp_527];

		// RTL Name: edge_index_mat_s_10_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_526 - aesl_tmp_527 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_526 - aesl_tmp_527 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_525[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_525[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_525[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_525[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_525[i_0]).to_string(2).c_str();
							edge_index_mat_s_10_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_526 - aesl_tmp_527; i++)
		{
			sprintf(tvin_edge_index_mat_s_10_V_V, "%s\n", (edge_index_mat_s_10_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_10_V_V, tvin_edge_index_mat_s_10_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_526 > aesl_tmp_527)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_10_V_V = aesl_tmp_526;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_10_V_V, stream_ingress_size_edge_index_mat_s_10_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_10_V_V, "\n");

		for (int i = 0; i < aesl_tmp_526 - aesl_tmp_527; i++)
		{
			stream_ingress_size_edge_index_mat_s_10_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_10_V_V, stream_ingress_size_edge_index_mat_s_10_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_10_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_10_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_10_V_V, stream_ingress_size_edge_index_mat_s_10_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_10_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_526 - aesl_tmp_527, &tcl_file.edge_index_mat_s_10_V_V_depth);
		sprintf(tvin_edge_index_mat_s_10_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_10_V_V, tvin_edge_index_mat_s_10_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_10_V_V, tvin_edge_index_mat_s_10_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_10_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_10_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_10_V_V, wrapc_stream_size_in_edge_index_mat_s_10_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_10_V_V, "%d\n", aesl_tmp_526 - aesl_tmp_527);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_10_V_V, wrapc_stream_size_in_edge_index_mat_s_10_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_10_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_10_V_V, wrapc_stream_size_in_edge_index_mat_s_10_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_11_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_11_V_V, tvin_edge_index_mat_s_11_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_11_V_V, tvin_edge_index_mat_s_11_V_V);

		sc_bv<14>* edge_index_mat_s_11_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_529 - aesl_tmp_530];

		// RTL Name: edge_index_mat_s_11_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_529 - aesl_tmp_530 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_529 - aesl_tmp_530 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_528[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_528[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_528[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_528[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_528[i_0]).to_string(2).c_str();
							edge_index_mat_s_11_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_529 - aesl_tmp_530; i++)
		{
			sprintf(tvin_edge_index_mat_s_11_V_V, "%s\n", (edge_index_mat_s_11_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_11_V_V, tvin_edge_index_mat_s_11_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_529 > aesl_tmp_530)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_11_V_V = aesl_tmp_529;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_11_V_V, stream_ingress_size_edge_index_mat_s_11_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_11_V_V, "\n");

		for (int i = 0; i < aesl_tmp_529 - aesl_tmp_530; i++)
		{
			stream_ingress_size_edge_index_mat_s_11_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_11_V_V, stream_ingress_size_edge_index_mat_s_11_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_11_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_11_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_11_V_V, stream_ingress_size_edge_index_mat_s_11_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_11_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_529 - aesl_tmp_530, &tcl_file.edge_index_mat_s_11_V_V_depth);
		sprintf(tvin_edge_index_mat_s_11_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_11_V_V, tvin_edge_index_mat_s_11_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_11_V_V, tvin_edge_index_mat_s_11_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_11_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_11_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_11_V_V, wrapc_stream_size_in_edge_index_mat_s_11_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_11_V_V, "%d\n", aesl_tmp_529 - aesl_tmp_530);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_11_V_V, wrapc_stream_size_in_edge_index_mat_s_11_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_11_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_11_V_V, wrapc_stream_size_in_edge_index_mat_s_11_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_12_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_12_V_V, tvin_edge_index_mat_s_12_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_12_V_V, tvin_edge_index_mat_s_12_V_V);

		sc_bv<14>* edge_index_mat_s_12_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_532 - aesl_tmp_533];

		// RTL Name: edge_index_mat_s_12_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_532 - aesl_tmp_533 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_532 - aesl_tmp_533 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_531[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_531[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_531[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_531[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_531[i_0]).to_string(2).c_str();
							edge_index_mat_s_12_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_532 - aesl_tmp_533; i++)
		{
			sprintf(tvin_edge_index_mat_s_12_V_V, "%s\n", (edge_index_mat_s_12_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_12_V_V, tvin_edge_index_mat_s_12_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_532 > aesl_tmp_533)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_12_V_V = aesl_tmp_532;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_12_V_V, stream_ingress_size_edge_index_mat_s_12_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_12_V_V, "\n");

		for (int i = 0; i < aesl_tmp_532 - aesl_tmp_533; i++)
		{
			stream_ingress_size_edge_index_mat_s_12_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_12_V_V, stream_ingress_size_edge_index_mat_s_12_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_12_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_12_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_12_V_V, stream_ingress_size_edge_index_mat_s_12_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_12_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_532 - aesl_tmp_533, &tcl_file.edge_index_mat_s_12_V_V_depth);
		sprintf(tvin_edge_index_mat_s_12_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_12_V_V, tvin_edge_index_mat_s_12_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_12_V_V, tvin_edge_index_mat_s_12_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_12_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_12_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_12_V_V, wrapc_stream_size_in_edge_index_mat_s_12_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_12_V_V, "%d\n", aesl_tmp_532 - aesl_tmp_533);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_12_V_V, wrapc_stream_size_in_edge_index_mat_s_12_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_12_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_12_V_V, wrapc_stream_size_in_edge_index_mat_s_12_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_13_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_13_V_V, tvin_edge_index_mat_s_13_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_13_V_V, tvin_edge_index_mat_s_13_V_V);

		sc_bv<14>* edge_index_mat_s_13_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_535 - aesl_tmp_536];

		// RTL Name: edge_index_mat_s_13_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_535 - aesl_tmp_536 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_535 - aesl_tmp_536 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_534[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_534[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_534[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_534[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_534[i_0]).to_string(2).c_str();
							edge_index_mat_s_13_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_535 - aesl_tmp_536; i++)
		{
			sprintf(tvin_edge_index_mat_s_13_V_V, "%s\n", (edge_index_mat_s_13_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_13_V_V, tvin_edge_index_mat_s_13_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_535 > aesl_tmp_536)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_13_V_V = aesl_tmp_535;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_13_V_V, stream_ingress_size_edge_index_mat_s_13_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_13_V_V, "\n");

		for (int i = 0; i < aesl_tmp_535 - aesl_tmp_536; i++)
		{
			stream_ingress_size_edge_index_mat_s_13_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_13_V_V, stream_ingress_size_edge_index_mat_s_13_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_13_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_13_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_13_V_V, stream_ingress_size_edge_index_mat_s_13_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_13_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_535 - aesl_tmp_536, &tcl_file.edge_index_mat_s_13_V_V_depth);
		sprintf(tvin_edge_index_mat_s_13_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_13_V_V, tvin_edge_index_mat_s_13_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_13_V_V, tvin_edge_index_mat_s_13_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_13_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_13_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_13_V_V, wrapc_stream_size_in_edge_index_mat_s_13_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_13_V_V, "%d\n", aesl_tmp_535 - aesl_tmp_536);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_13_V_V, wrapc_stream_size_in_edge_index_mat_s_13_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_13_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_13_V_V, wrapc_stream_size_in_edge_index_mat_s_13_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_14_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_14_V_V, tvin_edge_index_mat_s_14_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_14_V_V, tvin_edge_index_mat_s_14_V_V);

		sc_bv<14>* edge_index_mat_s_14_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_538 - aesl_tmp_539];

		// RTL Name: edge_index_mat_s_14_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_538 - aesl_tmp_539 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_538 - aesl_tmp_539 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_537[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_537[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_537[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_537[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_537[i_0]).to_string(2).c_str();
							edge_index_mat_s_14_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_538 - aesl_tmp_539; i++)
		{
			sprintf(tvin_edge_index_mat_s_14_V_V, "%s\n", (edge_index_mat_s_14_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_14_V_V, tvin_edge_index_mat_s_14_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_538 > aesl_tmp_539)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_14_V_V = aesl_tmp_538;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_14_V_V, stream_ingress_size_edge_index_mat_s_14_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_14_V_V, "\n");

		for (int i = 0; i < aesl_tmp_538 - aesl_tmp_539; i++)
		{
			stream_ingress_size_edge_index_mat_s_14_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_14_V_V, stream_ingress_size_edge_index_mat_s_14_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_14_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_14_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_14_V_V, stream_ingress_size_edge_index_mat_s_14_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_14_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_538 - aesl_tmp_539, &tcl_file.edge_index_mat_s_14_V_V_depth);
		sprintf(tvin_edge_index_mat_s_14_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_14_V_V, tvin_edge_index_mat_s_14_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_14_V_V, tvin_edge_index_mat_s_14_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_14_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_14_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_14_V_V, wrapc_stream_size_in_edge_index_mat_s_14_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_14_V_V, "%d\n", aesl_tmp_538 - aesl_tmp_539);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_14_V_V, wrapc_stream_size_in_edge_index_mat_s_14_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_14_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_14_V_V, wrapc_stream_size_in_edge_index_mat_s_14_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_15_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_15_V_V, tvin_edge_index_mat_s_15_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_15_V_V, tvin_edge_index_mat_s_15_V_V);

		sc_bv<14>* edge_index_mat_s_15_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_541 - aesl_tmp_542];

		// RTL Name: edge_index_mat_s_15_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_541 - aesl_tmp_542 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_541 - aesl_tmp_542 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_540[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_540[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_540[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_540[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_540[i_0]).to_string(2).c_str();
							edge_index_mat_s_15_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_541 - aesl_tmp_542; i++)
		{
			sprintf(tvin_edge_index_mat_s_15_V_V, "%s\n", (edge_index_mat_s_15_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_15_V_V, tvin_edge_index_mat_s_15_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_541 > aesl_tmp_542)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_15_V_V = aesl_tmp_541;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_15_V_V, stream_ingress_size_edge_index_mat_s_15_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_15_V_V, "\n");

		for (int i = 0; i < aesl_tmp_541 - aesl_tmp_542; i++)
		{
			stream_ingress_size_edge_index_mat_s_15_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_15_V_V, stream_ingress_size_edge_index_mat_s_15_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_15_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_15_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_15_V_V, stream_ingress_size_edge_index_mat_s_15_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_15_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_541 - aesl_tmp_542, &tcl_file.edge_index_mat_s_15_V_V_depth);
		sprintf(tvin_edge_index_mat_s_15_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_15_V_V, tvin_edge_index_mat_s_15_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_15_V_V, tvin_edge_index_mat_s_15_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_15_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_15_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_15_V_V, wrapc_stream_size_in_edge_index_mat_s_15_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_15_V_V, "%d\n", aesl_tmp_541 - aesl_tmp_542);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_15_V_V, wrapc_stream_size_in_edge_index_mat_s_15_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_15_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_15_V_V, wrapc_stream_size_in_edge_index_mat_s_15_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_16_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_16_V_V, tvin_edge_index_mat_s_16_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_16_V_V, tvin_edge_index_mat_s_16_V_V);

		sc_bv<14>* edge_index_mat_s_16_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_544 - aesl_tmp_545];

		// RTL Name: edge_index_mat_s_16_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_544 - aesl_tmp_545 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_544 - aesl_tmp_545 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_543[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_543[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_543[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_543[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_543[i_0]).to_string(2).c_str();
							edge_index_mat_s_16_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_544 - aesl_tmp_545; i++)
		{
			sprintf(tvin_edge_index_mat_s_16_V_V, "%s\n", (edge_index_mat_s_16_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_16_V_V, tvin_edge_index_mat_s_16_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_544 > aesl_tmp_545)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_16_V_V = aesl_tmp_544;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_16_V_V, stream_ingress_size_edge_index_mat_s_16_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_16_V_V, "\n");

		for (int i = 0; i < aesl_tmp_544 - aesl_tmp_545; i++)
		{
			stream_ingress_size_edge_index_mat_s_16_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_16_V_V, stream_ingress_size_edge_index_mat_s_16_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_16_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_16_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_16_V_V, stream_ingress_size_edge_index_mat_s_16_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_16_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_544 - aesl_tmp_545, &tcl_file.edge_index_mat_s_16_V_V_depth);
		sprintf(tvin_edge_index_mat_s_16_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_16_V_V, tvin_edge_index_mat_s_16_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_16_V_V, tvin_edge_index_mat_s_16_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_16_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_16_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_16_V_V, wrapc_stream_size_in_edge_index_mat_s_16_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_16_V_V, "%d\n", aesl_tmp_544 - aesl_tmp_545);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_16_V_V, wrapc_stream_size_in_edge_index_mat_s_16_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_16_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_16_V_V, wrapc_stream_size_in_edge_index_mat_s_16_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_17_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_17_V_V, tvin_edge_index_mat_s_17_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_17_V_V, tvin_edge_index_mat_s_17_V_V);

		sc_bv<14>* edge_index_mat_s_17_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_547 - aesl_tmp_548];

		// RTL Name: edge_index_mat_s_17_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_547 - aesl_tmp_548 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_547 - aesl_tmp_548 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_546[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_546[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_546[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_546[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_546[i_0]).to_string(2).c_str();
							edge_index_mat_s_17_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_547 - aesl_tmp_548; i++)
		{
			sprintf(tvin_edge_index_mat_s_17_V_V, "%s\n", (edge_index_mat_s_17_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_17_V_V, tvin_edge_index_mat_s_17_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_547 > aesl_tmp_548)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_17_V_V = aesl_tmp_547;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_17_V_V, stream_ingress_size_edge_index_mat_s_17_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_17_V_V, "\n");

		for (int i = 0; i < aesl_tmp_547 - aesl_tmp_548; i++)
		{
			stream_ingress_size_edge_index_mat_s_17_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_17_V_V, stream_ingress_size_edge_index_mat_s_17_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_17_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_17_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_17_V_V, stream_ingress_size_edge_index_mat_s_17_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_17_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_547 - aesl_tmp_548, &tcl_file.edge_index_mat_s_17_V_V_depth);
		sprintf(tvin_edge_index_mat_s_17_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_17_V_V, tvin_edge_index_mat_s_17_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_17_V_V, tvin_edge_index_mat_s_17_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_17_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_17_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_17_V_V, wrapc_stream_size_in_edge_index_mat_s_17_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_17_V_V, "%d\n", aesl_tmp_547 - aesl_tmp_548);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_17_V_V, wrapc_stream_size_in_edge_index_mat_s_17_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_17_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_17_V_V, wrapc_stream_size_in_edge_index_mat_s_17_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_18_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_18_V_V, tvin_edge_index_mat_s_18_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_18_V_V, tvin_edge_index_mat_s_18_V_V);

		sc_bv<14>* edge_index_mat_s_18_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_550 - aesl_tmp_551];

		// RTL Name: edge_index_mat_s_18_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_550 - aesl_tmp_551 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_550 - aesl_tmp_551 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_549[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_549[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_549[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_549[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_549[i_0]).to_string(2).c_str();
							edge_index_mat_s_18_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_550 - aesl_tmp_551; i++)
		{
			sprintf(tvin_edge_index_mat_s_18_V_V, "%s\n", (edge_index_mat_s_18_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_18_V_V, tvin_edge_index_mat_s_18_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_550 > aesl_tmp_551)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_18_V_V = aesl_tmp_550;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_18_V_V, stream_ingress_size_edge_index_mat_s_18_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_18_V_V, "\n");

		for (int i = 0; i < aesl_tmp_550 - aesl_tmp_551; i++)
		{
			stream_ingress_size_edge_index_mat_s_18_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_18_V_V, stream_ingress_size_edge_index_mat_s_18_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_18_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_18_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_18_V_V, stream_ingress_size_edge_index_mat_s_18_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_18_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_550 - aesl_tmp_551, &tcl_file.edge_index_mat_s_18_V_V_depth);
		sprintf(tvin_edge_index_mat_s_18_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_18_V_V, tvin_edge_index_mat_s_18_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_18_V_V, tvin_edge_index_mat_s_18_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_18_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_18_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_18_V_V, wrapc_stream_size_in_edge_index_mat_s_18_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_18_V_V, "%d\n", aesl_tmp_550 - aesl_tmp_551);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_18_V_V, wrapc_stream_size_in_edge_index_mat_s_18_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_18_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_18_V_V, wrapc_stream_size_in_edge_index_mat_s_18_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_19_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_19_V_V, tvin_edge_index_mat_s_19_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_19_V_V, tvin_edge_index_mat_s_19_V_V);

		sc_bv<14>* edge_index_mat_s_19_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_553 - aesl_tmp_554];

		// RTL Name: edge_index_mat_s_19_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_553 - aesl_tmp_554 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_553 - aesl_tmp_554 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_552[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_552[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_552[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_552[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_552[i_0]).to_string(2).c_str();
							edge_index_mat_s_19_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_553 - aesl_tmp_554; i++)
		{
			sprintf(tvin_edge_index_mat_s_19_V_V, "%s\n", (edge_index_mat_s_19_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_19_V_V, tvin_edge_index_mat_s_19_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_553 > aesl_tmp_554)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_19_V_V = aesl_tmp_553;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_19_V_V, stream_ingress_size_edge_index_mat_s_19_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_19_V_V, "\n");

		for (int i = 0; i < aesl_tmp_553 - aesl_tmp_554; i++)
		{
			stream_ingress_size_edge_index_mat_s_19_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_19_V_V, stream_ingress_size_edge_index_mat_s_19_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_19_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_19_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_19_V_V, stream_ingress_size_edge_index_mat_s_19_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_19_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_553 - aesl_tmp_554, &tcl_file.edge_index_mat_s_19_V_V_depth);
		sprintf(tvin_edge_index_mat_s_19_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_19_V_V, tvin_edge_index_mat_s_19_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_19_V_V, tvin_edge_index_mat_s_19_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_19_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_19_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_19_V_V, wrapc_stream_size_in_edge_index_mat_s_19_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_19_V_V, "%d\n", aesl_tmp_553 - aesl_tmp_554);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_19_V_V, wrapc_stream_size_in_edge_index_mat_s_19_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_19_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_19_V_V, wrapc_stream_size_in_edge_index_mat_s_19_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_20_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_20_V_V, tvin_edge_index_mat_s_20_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_20_V_V, tvin_edge_index_mat_s_20_V_V);

		sc_bv<14>* edge_index_mat_s_20_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_556 - aesl_tmp_557];

		// RTL Name: edge_index_mat_s_20_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_556 - aesl_tmp_557 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_556 - aesl_tmp_557 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_555[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_555[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_555[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_555[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_555[i_0]).to_string(2).c_str();
							edge_index_mat_s_20_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_556 - aesl_tmp_557; i++)
		{
			sprintf(tvin_edge_index_mat_s_20_V_V, "%s\n", (edge_index_mat_s_20_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_20_V_V, tvin_edge_index_mat_s_20_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_556 > aesl_tmp_557)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_20_V_V = aesl_tmp_556;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_20_V_V, stream_ingress_size_edge_index_mat_s_20_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_20_V_V, "\n");

		for (int i = 0; i < aesl_tmp_556 - aesl_tmp_557; i++)
		{
			stream_ingress_size_edge_index_mat_s_20_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_20_V_V, stream_ingress_size_edge_index_mat_s_20_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_20_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_20_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_20_V_V, stream_ingress_size_edge_index_mat_s_20_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_20_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_556 - aesl_tmp_557, &tcl_file.edge_index_mat_s_20_V_V_depth);
		sprintf(tvin_edge_index_mat_s_20_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_20_V_V, tvin_edge_index_mat_s_20_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_20_V_V, tvin_edge_index_mat_s_20_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_20_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_20_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_20_V_V, wrapc_stream_size_in_edge_index_mat_s_20_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_20_V_V, "%d\n", aesl_tmp_556 - aesl_tmp_557);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_20_V_V, wrapc_stream_size_in_edge_index_mat_s_20_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_20_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_20_V_V, wrapc_stream_size_in_edge_index_mat_s_20_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_21_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_21_V_V, tvin_edge_index_mat_s_21_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_21_V_V, tvin_edge_index_mat_s_21_V_V);

		sc_bv<14>* edge_index_mat_s_21_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_559 - aesl_tmp_560];

		// RTL Name: edge_index_mat_s_21_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_559 - aesl_tmp_560 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_559 - aesl_tmp_560 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_558[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_558[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_558[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_558[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_558[i_0]).to_string(2).c_str();
							edge_index_mat_s_21_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_559 - aesl_tmp_560; i++)
		{
			sprintf(tvin_edge_index_mat_s_21_V_V, "%s\n", (edge_index_mat_s_21_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_21_V_V, tvin_edge_index_mat_s_21_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_559 > aesl_tmp_560)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_21_V_V = aesl_tmp_559;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_21_V_V, stream_ingress_size_edge_index_mat_s_21_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_21_V_V, "\n");

		for (int i = 0; i < aesl_tmp_559 - aesl_tmp_560; i++)
		{
			stream_ingress_size_edge_index_mat_s_21_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_21_V_V, stream_ingress_size_edge_index_mat_s_21_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_21_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_21_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_21_V_V, stream_ingress_size_edge_index_mat_s_21_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_21_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_559 - aesl_tmp_560, &tcl_file.edge_index_mat_s_21_V_V_depth);
		sprintf(tvin_edge_index_mat_s_21_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_21_V_V, tvin_edge_index_mat_s_21_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_21_V_V, tvin_edge_index_mat_s_21_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_21_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_21_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_21_V_V, wrapc_stream_size_in_edge_index_mat_s_21_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_21_V_V, "%d\n", aesl_tmp_559 - aesl_tmp_560);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_21_V_V, wrapc_stream_size_in_edge_index_mat_s_21_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_21_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_21_V_V, wrapc_stream_size_in_edge_index_mat_s_21_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_22_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_22_V_V, tvin_edge_index_mat_s_22_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_22_V_V, tvin_edge_index_mat_s_22_V_V);

		sc_bv<14>* edge_index_mat_s_22_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_562 - aesl_tmp_563];

		// RTL Name: edge_index_mat_s_22_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_562 - aesl_tmp_563 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_562 - aesl_tmp_563 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_561[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_561[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_561[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_561[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_561[i_0]).to_string(2).c_str();
							edge_index_mat_s_22_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_562 - aesl_tmp_563; i++)
		{
			sprintf(tvin_edge_index_mat_s_22_V_V, "%s\n", (edge_index_mat_s_22_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_22_V_V, tvin_edge_index_mat_s_22_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_562 > aesl_tmp_563)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_22_V_V = aesl_tmp_562;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_22_V_V, stream_ingress_size_edge_index_mat_s_22_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_22_V_V, "\n");

		for (int i = 0; i < aesl_tmp_562 - aesl_tmp_563; i++)
		{
			stream_ingress_size_edge_index_mat_s_22_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_22_V_V, stream_ingress_size_edge_index_mat_s_22_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_22_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_22_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_22_V_V, stream_ingress_size_edge_index_mat_s_22_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_22_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_562 - aesl_tmp_563, &tcl_file.edge_index_mat_s_22_V_V_depth);
		sprintf(tvin_edge_index_mat_s_22_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_22_V_V, tvin_edge_index_mat_s_22_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_22_V_V, tvin_edge_index_mat_s_22_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_22_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_22_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_22_V_V, wrapc_stream_size_in_edge_index_mat_s_22_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_22_V_V, "%d\n", aesl_tmp_562 - aesl_tmp_563);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_22_V_V, wrapc_stream_size_in_edge_index_mat_s_22_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_22_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_22_V_V, wrapc_stream_size_in_edge_index_mat_s_22_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_23_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_23_V_V, tvin_edge_index_mat_s_23_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_23_V_V, tvin_edge_index_mat_s_23_V_V);

		sc_bv<14>* edge_index_mat_s_23_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_565 - aesl_tmp_566];

		// RTL Name: edge_index_mat_s_23_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_565 - aesl_tmp_566 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_565 - aesl_tmp_566 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_564[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_564[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_564[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_564[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_564[i_0]).to_string(2).c_str();
							edge_index_mat_s_23_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_565 - aesl_tmp_566; i++)
		{
			sprintf(tvin_edge_index_mat_s_23_V_V, "%s\n", (edge_index_mat_s_23_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_23_V_V, tvin_edge_index_mat_s_23_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_565 > aesl_tmp_566)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_23_V_V = aesl_tmp_565;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_23_V_V, stream_ingress_size_edge_index_mat_s_23_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_23_V_V, "\n");

		for (int i = 0; i < aesl_tmp_565 - aesl_tmp_566; i++)
		{
			stream_ingress_size_edge_index_mat_s_23_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_23_V_V, stream_ingress_size_edge_index_mat_s_23_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_23_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_23_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_23_V_V, stream_ingress_size_edge_index_mat_s_23_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_23_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_565 - aesl_tmp_566, &tcl_file.edge_index_mat_s_23_V_V_depth);
		sprintf(tvin_edge_index_mat_s_23_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_23_V_V, tvin_edge_index_mat_s_23_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_23_V_V, tvin_edge_index_mat_s_23_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_23_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_23_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_23_V_V, wrapc_stream_size_in_edge_index_mat_s_23_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_23_V_V, "%d\n", aesl_tmp_565 - aesl_tmp_566);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_23_V_V, wrapc_stream_size_in_edge_index_mat_s_23_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_23_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_23_V_V, wrapc_stream_size_in_edge_index_mat_s_23_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_24_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_24_V_V, tvin_edge_index_mat_s_24_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_24_V_V, tvin_edge_index_mat_s_24_V_V);

		sc_bv<14>* edge_index_mat_s_24_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_568 - aesl_tmp_569];

		// RTL Name: edge_index_mat_s_24_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_568 - aesl_tmp_569 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_568 - aesl_tmp_569 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_567[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_567[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_567[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_567[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_567[i_0]).to_string(2).c_str();
							edge_index_mat_s_24_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_568 - aesl_tmp_569; i++)
		{
			sprintf(tvin_edge_index_mat_s_24_V_V, "%s\n", (edge_index_mat_s_24_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_24_V_V, tvin_edge_index_mat_s_24_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_568 > aesl_tmp_569)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_24_V_V = aesl_tmp_568;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_24_V_V, stream_ingress_size_edge_index_mat_s_24_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_24_V_V, "\n");

		for (int i = 0; i < aesl_tmp_568 - aesl_tmp_569; i++)
		{
			stream_ingress_size_edge_index_mat_s_24_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_24_V_V, stream_ingress_size_edge_index_mat_s_24_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_24_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_24_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_24_V_V, stream_ingress_size_edge_index_mat_s_24_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_24_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_568 - aesl_tmp_569, &tcl_file.edge_index_mat_s_24_V_V_depth);
		sprintf(tvin_edge_index_mat_s_24_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_24_V_V, tvin_edge_index_mat_s_24_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_24_V_V, tvin_edge_index_mat_s_24_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_24_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_24_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_24_V_V, wrapc_stream_size_in_edge_index_mat_s_24_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_24_V_V, "%d\n", aesl_tmp_568 - aesl_tmp_569);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_24_V_V, wrapc_stream_size_in_edge_index_mat_s_24_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_24_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_24_V_V, wrapc_stream_size_in_edge_index_mat_s_24_V_V);

		// [[transaction]]
		sprintf(tvin_edge_index_mat_s_25_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_25_V_V, tvin_edge_index_mat_s_25_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_25_V_V, tvin_edge_index_mat_s_25_V_V);

		sc_bv<14>* edge_index_mat_s_25_V_V_tvin_wrapc_buffer = new sc_bv<14>[aesl_tmp_571 - aesl_tmp_572];

		// RTL Name: edge_index_mat_s_25_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: edge_index_mat_s.V.V(13, 0)
				{
					// carray: (0) => (aesl_tmp_571 - aesl_tmp_572 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_571 - aesl_tmp_572 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_570[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_570[0]
						// regulate_c_name       : edge_index_mat_s_V_V
						// input_type_conversion : (aesl_tmp_570[i_0]).to_string(2).c_str()
						if (&(aesl_tmp_570[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> edge_index_mat_s_V_V_tmp_mem;
							edge_index_mat_s_V_V_tmp_mem = (aesl_tmp_570[i_0]).to_string(2).c_str();
							edge_index_mat_s_25_V_V_tvin_wrapc_buffer[hls_map_index].range(13, 0) = edge_index_mat_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_571 - aesl_tmp_572; i++)
		{
			sprintf(tvin_edge_index_mat_s_25_V_V, "%s\n", (edge_index_mat_s_25_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_25_V_V, tvin_edge_index_mat_s_25_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_571 > aesl_tmp_572)
     {
		sc_int<32> stream_ingress_size_edge_index_mat_s_25_V_V = aesl_tmp_571;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_25_V_V, stream_ingress_size_edge_index_mat_s_25_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_25_V_V, "\n");

		for (int i = 0; i < aesl_tmp_571 - aesl_tmp_572; i++)
		{
			stream_ingress_size_edge_index_mat_s_25_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_25_V_V, stream_ingress_size_edge_index_mat_s_25_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_25_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_edge_index_mat_s_25_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_25_V_V, stream_ingress_size_edge_index_mat_s_25_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_25_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_571 - aesl_tmp_572, &tcl_file.edge_index_mat_s_25_V_V_depth);
		sprintf(tvin_edge_index_mat_s_25_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_edge_index_mat_s_25_V_V, tvin_edge_index_mat_s_25_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_edge_index_mat_s_25_V_V, tvin_edge_index_mat_s_25_V_V);

		// release memory allocation
		delete [] edge_index_mat_s_25_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_edge_index_mat_s_25_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_25_V_V, wrapc_stream_size_in_edge_index_mat_s_25_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_25_V_V, "%d\n", aesl_tmp_571 - aesl_tmp_572);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_25_V_V, wrapc_stream_size_in_edge_index_mat_s_25_V_V);
		sprintf(wrapc_stream_size_in_edge_index_mat_s_25_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_edge_index_mat_s_25_V_V, wrapc_stream_size_in_edge_index_mat_s_25_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_0_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_0_V_V, tvout_layer11_out_s_0_V_V);

		sc_bv<16>* layer11_out_s_0_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_574 - aesl_tmp_575];

		// RTL Name: layer11_out_s_0_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_575) => (aesl_tmp_574 - 1) @ (1)
					for (int i_0 = aesl_tmp_575; i_0 <= aesl_tmp_574 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_573[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_573[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_573[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_573[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_573[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_0_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_574 - aesl_tmp_575; i++)
		{
			sprintf(tvout_layer11_out_s_0_V_V, "%s\n", (layer11_out_s_0_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_0_V_V, tvout_layer11_out_s_0_V_V);
		}

		tcl_file.set_num(aesl_tmp_574 - aesl_tmp_575, &tcl_file.layer11_out_s_0_V_V_depth);
		sprintf(tvout_layer11_out_s_0_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_0_V_V, tvout_layer11_out_s_0_V_V);

		// release memory allocation
		delete [] layer11_out_s_0_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_0_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, wrapc_stream_size_out_layer11_out_s_0_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_0_V_V, "%d\n", aesl_tmp_574 - aesl_tmp_575);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, wrapc_stream_size_out_layer11_out_s_0_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_0_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_0_V_V, wrapc_stream_size_out_layer11_out_s_0_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_1_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_1_V_V, tvout_layer11_out_s_1_V_V);

		sc_bv<16>* layer11_out_s_1_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_577 - aesl_tmp_578];

		// RTL Name: layer11_out_s_1_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_578) => (aesl_tmp_577 - 1) @ (1)
					for (int i_0 = aesl_tmp_578; i_0 <= aesl_tmp_577 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_576[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_576[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_576[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_576[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_576[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_1_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_577 - aesl_tmp_578; i++)
		{
			sprintf(tvout_layer11_out_s_1_V_V, "%s\n", (layer11_out_s_1_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_1_V_V, tvout_layer11_out_s_1_V_V);
		}

		tcl_file.set_num(aesl_tmp_577 - aesl_tmp_578, &tcl_file.layer11_out_s_1_V_V_depth);
		sprintf(tvout_layer11_out_s_1_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_1_V_V, tvout_layer11_out_s_1_V_V);

		// release memory allocation
		delete [] layer11_out_s_1_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_1_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_1_V_V, wrapc_stream_size_out_layer11_out_s_1_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_1_V_V, "%d\n", aesl_tmp_577 - aesl_tmp_578);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_1_V_V, wrapc_stream_size_out_layer11_out_s_1_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_1_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_1_V_V, wrapc_stream_size_out_layer11_out_s_1_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_2_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_2_V_V, tvout_layer11_out_s_2_V_V);

		sc_bv<16>* layer11_out_s_2_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_580 - aesl_tmp_581];

		// RTL Name: layer11_out_s_2_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_581) => (aesl_tmp_580 - 1) @ (1)
					for (int i_0 = aesl_tmp_581; i_0 <= aesl_tmp_580 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_579[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_579[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_579[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_579[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_579[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_2_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_580 - aesl_tmp_581; i++)
		{
			sprintf(tvout_layer11_out_s_2_V_V, "%s\n", (layer11_out_s_2_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_2_V_V, tvout_layer11_out_s_2_V_V);
		}

		tcl_file.set_num(aesl_tmp_580 - aesl_tmp_581, &tcl_file.layer11_out_s_2_V_V_depth);
		sprintf(tvout_layer11_out_s_2_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_2_V_V, tvout_layer11_out_s_2_V_V);

		// release memory allocation
		delete [] layer11_out_s_2_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_2_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_2_V_V, wrapc_stream_size_out_layer11_out_s_2_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_2_V_V, "%d\n", aesl_tmp_580 - aesl_tmp_581);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_2_V_V, wrapc_stream_size_out_layer11_out_s_2_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_2_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_2_V_V, wrapc_stream_size_out_layer11_out_s_2_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_3_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_3_V_V, tvout_layer11_out_s_3_V_V);

		sc_bv<16>* layer11_out_s_3_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_583 - aesl_tmp_584];

		// RTL Name: layer11_out_s_3_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_584) => (aesl_tmp_583 - 1) @ (1)
					for (int i_0 = aesl_tmp_584; i_0 <= aesl_tmp_583 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_582[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_582[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_582[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_582[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_582[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_3_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_583 - aesl_tmp_584; i++)
		{
			sprintf(tvout_layer11_out_s_3_V_V, "%s\n", (layer11_out_s_3_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_3_V_V, tvout_layer11_out_s_3_V_V);
		}

		tcl_file.set_num(aesl_tmp_583 - aesl_tmp_584, &tcl_file.layer11_out_s_3_V_V_depth);
		sprintf(tvout_layer11_out_s_3_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_3_V_V, tvout_layer11_out_s_3_V_V);

		// release memory allocation
		delete [] layer11_out_s_3_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_3_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_3_V_V, wrapc_stream_size_out_layer11_out_s_3_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_3_V_V, "%d\n", aesl_tmp_583 - aesl_tmp_584);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_3_V_V, wrapc_stream_size_out_layer11_out_s_3_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_3_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_3_V_V, wrapc_stream_size_out_layer11_out_s_3_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_4_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_4_V_V, tvout_layer11_out_s_4_V_V);

		sc_bv<16>* layer11_out_s_4_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_586 - aesl_tmp_587];

		// RTL Name: layer11_out_s_4_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_587) => (aesl_tmp_586 - 1) @ (1)
					for (int i_0 = aesl_tmp_587; i_0 <= aesl_tmp_586 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_585[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_585[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_585[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_585[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_585[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_4_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_586 - aesl_tmp_587; i++)
		{
			sprintf(tvout_layer11_out_s_4_V_V, "%s\n", (layer11_out_s_4_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_4_V_V, tvout_layer11_out_s_4_V_V);
		}

		tcl_file.set_num(aesl_tmp_586 - aesl_tmp_587, &tcl_file.layer11_out_s_4_V_V_depth);
		sprintf(tvout_layer11_out_s_4_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_4_V_V, tvout_layer11_out_s_4_V_V);

		// release memory allocation
		delete [] layer11_out_s_4_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_4_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_4_V_V, wrapc_stream_size_out_layer11_out_s_4_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_4_V_V, "%d\n", aesl_tmp_586 - aesl_tmp_587);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_4_V_V, wrapc_stream_size_out_layer11_out_s_4_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_4_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_4_V_V, wrapc_stream_size_out_layer11_out_s_4_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_5_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_5_V_V, tvout_layer11_out_s_5_V_V);

		sc_bv<16>* layer11_out_s_5_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_589 - aesl_tmp_590];

		// RTL Name: layer11_out_s_5_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_590) => (aesl_tmp_589 - 1) @ (1)
					for (int i_0 = aesl_tmp_590; i_0 <= aesl_tmp_589 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_588[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_588[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_588[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_588[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_588[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_5_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_589 - aesl_tmp_590; i++)
		{
			sprintf(tvout_layer11_out_s_5_V_V, "%s\n", (layer11_out_s_5_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_5_V_V, tvout_layer11_out_s_5_V_V);
		}

		tcl_file.set_num(aesl_tmp_589 - aesl_tmp_590, &tcl_file.layer11_out_s_5_V_V_depth);
		sprintf(tvout_layer11_out_s_5_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_5_V_V, tvout_layer11_out_s_5_V_V);

		// release memory allocation
		delete [] layer11_out_s_5_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_5_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_5_V_V, wrapc_stream_size_out_layer11_out_s_5_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_5_V_V, "%d\n", aesl_tmp_589 - aesl_tmp_590);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_5_V_V, wrapc_stream_size_out_layer11_out_s_5_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_5_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_5_V_V, wrapc_stream_size_out_layer11_out_s_5_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_6_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_6_V_V, tvout_layer11_out_s_6_V_V);

		sc_bv<16>* layer11_out_s_6_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_592 - aesl_tmp_593];

		// RTL Name: layer11_out_s_6_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_593) => (aesl_tmp_592 - 1) @ (1)
					for (int i_0 = aesl_tmp_593; i_0 <= aesl_tmp_592 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_591[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_591[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_591[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_591[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_591[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_6_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_592 - aesl_tmp_593; i++)
		{
			sprintf(tvout_layer11_out_s_6_V_V, "%s\n", (layer11_out_s_6_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_6_V_V, tvout_layer11_out_s_6_V_V);
		}

		tcl_file.set_num(aesl_tmp_592 - aesl_tmp_593, &tcl_file.layer11_out_s_6_V_V_depth);
		sprintf(tvout_layer11_out_s_6_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_6_V_V, tvout_layer11_out_s_6_V_V);

		// release memory allocation
		delete [] layer11_out_s_6_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_6_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_6_V_V, wrapc_stream_size_out_layer11_out_s_6_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_6_V_V, "%d\n", aesl_tmp_592 - aesl_tmp_593);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_6_V_V, wrapc_stream_size_out_layer11_out_s_6_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_6_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_6_V_V, wrapc_stream_size_out_layer11_out_s_6_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_7_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_7_V_V, tvout_layer11_out_s_7_V_V);

		sc_bv<16>* layer11_out_s_7_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_595 - aesl_tmp_596];

		// RTL Name: layer11_out_s_7_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_596) => (aesl_tmp_595 - 1) @ (1)
					for (int i_0 = aesl_tmp_596; i_0 <= aesl_tmp_595 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_594[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_594[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_594[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_594[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_594[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_7_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_595 - aesl_tmp_596; i++)
		{
			sprintf(tvout_layer11_out_s_7_V_V, "%s\n", (layer11_out_s_7_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_7_V_V, tvout_layer11_out_s_7_V_V);
		}

		tcl_file.set_num(aesl_tmp_595 - aesl_tmp_596, &tcl_file.layer11_out_s_7_V_V_depth);
		sprintf(tvout_layer11_out_s_7_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_7_V_V, tvout_layer11_out_s_7_V_V);

		// release memory allocation
		delete [] layer11_out_s_7_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_7_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_7_V_V, wrapc_stream_size_out_layer11_out_s_7_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_7_V_V, "%d\n", aesl_tmp_595 - aesl_tmp_596);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_7_V_V, wrapc_stream_size_out_layer11_out_s_7_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_7_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_7_V_V, wrapc_stream_size_out_layer11_out_s_7_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_8_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_8_V_V, tvout_layer11_out_s_8_V_V);

		sc_bv<16>* layer11_out_s_8_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_598 - aesl_tmp_599];

		// RTL Name: layer11_out_s_8_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_599) => (aesl_tmp_598 - 1) @ (1)
					for (int i_0 = aesl_tmp_599; i_0 <= aesl_tmp_598 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_597[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_597[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_597[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_597[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_597[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_8_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_598 - aesl_tmp_599; i++)
		{
			sprintf(tvout_layer11_out_s_8_V_V, "%s\n", (layer11_out_s_8_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_8_V_V, tvout_layer11_out_s_8_V_V);
		}

		tcl_file.set_num(aesl_tmp_598 - aesl_tmp_599, &tcl_file.layer11_out_s_8_V_V_depth);
		sprintf(tvout_layer11_out_s_8_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_8_V_V, tvout_layer11_out_s_8_V_V);

		// release memory allocation
		delete [] layer11_out_s_8_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_8_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_8_V_V, wrapc_stream_size_out_layer11_out_s_8_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_8_V_V, "%d\n", aesl_tmp_598 - aesl_tmp_599);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_8_V_V, wrapc_stream_size_out_layer11_out_s_8_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_8_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_8_V_V, wrapc_stream_size_out_layer11_out_s_8_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_9_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_9_V_V, tvout_layer11_out_s_9_V_V);

		sc_bv<16>* layer11_out_s_9_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_601 - aesl_tmp_602];

		// RTL Name: layer11_out_s_9_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_602) => (aesl_tmp_601 - 1) @ (1)
					for (int i_0 = aesl_tmp_602; i_0 <= aesl_tmp_601 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_600[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_600[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_600[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_600[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_600[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_9_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_601 - aesl_tmp_602; i++)
		{
			sprintf(tvout_layer11_out_s_9_V_V, "%s\n", (layer11_out_s_9_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_9_V_V, tvout_layer11_out_s_9_V_V);
		}

		tcl_file.set_num(aesl_tmp_601 - aesl_tmp_602, &tcl_file.layer11_out_s_9_V_V_depth);
		sprintf(tvout_layer11_out_s_9_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_9_V_V, tvout_layer11_out_s_9_V_V);

		// release memory allocation
		delete [] layer11_out_s_9_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_9_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_9_V_V, wrapc_stream_size_out_layer11_out_s_9_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_9_V_V, "%d\n", aesl_tmp_601 - aesl_tmp_602);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_9_V_V, wrapc_stream_size_out_layer11_out_s_9_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_9_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_9_V_V, wrapc_stream_size_out_layer11_out_s_9_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_10_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_10_V_V, tvout_layer11_out_s_10_V_V);

		sc_bv<16>* layer11_out_s_10_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_604 - aesl_tmp_605];

		// RTL Name: layer11_out_s_10_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_605) => (aesl_tmp_604 - 1) @ (1)
					for (int i_0 = aesl_tmp_605; i_0 <= aesl_tmp_604 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_603[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_603[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_603[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_603[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_603[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_10_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_604 - aesl_tmp_605; i++)
		{
			sprintf(tvout_layer11_out_s_10_V_V, "%s\n", (layer11_out_s_10_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_10_V_V, tvout_layer11_out_s_10_V_V);
		}

		tcl_file.set_num(aesl_tmp_604 - aesl_tmp_605, &tcl_file.layer11_out_s_10_V_V_depth);
		sprintf(tvout_layer11_out_s_10_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_10_V_V, tvout_layer11_out_s_10_V_V);

		// release memory allocation
		delete [] layer11_out_s_10_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_10_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_10_V_V, wrapc_stream_size_out_layer11_out_s_10_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_10_V_V, "%d\n", aesl_tmp_604 - aesl_tmp_605);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_10_V_V, wrapc_stream_size_out_layer11_out_s_10_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_10_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_10_V_V, wrapc_stream_size_out_layer11_out_s_10_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_11_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_11_V_V, tvout_layer11_out_s_11_V_V);

		sc_bv<16>* layer11_out_s_11_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_607 - aesl_tmp_608];

		// RTL Name: layer11_out_s_11_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_608) => (aesl_tmp_607 - 1) @ (1)
					for (int i_0 = aesl_tmp_608; i_0 <= aesl_tmp_607 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_606[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_606[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_606[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_606[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_606[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_11_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_607 - aesl_tmp_608; i++)
		{
			sprintf(tvout_layer11_out_s_11_V_V, "%s\n", (layer11_out_s_11_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_11_V_V, tvout_layer11_out_s_11_V_V);
		}

		tcl_file.set_num(aesl_tmp_607 - aesl_tmp_608, &tcl_file.layer11_out_s_11_V_V_depth);
		sprintf(tvout_layer11_out_s_11_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_11_V_V, tvout_layer11_out_s_11_V_V);

		// release memory allocation
		delete [] layer11_out_s_11_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_11_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_11_V_V, wrapc_stream_size_out_layer11_out_s_11_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_11_V_V, "%d\n", aesl_tmp_607 - aesl_tmp_608);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_11_V_V, wrapc_stream_size_out_layer11_out_s_11_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_11_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_11_V_V, wrapc_stream_size_out_layer11_out_s_11_V_V);

		// [[transaction]]
		sprintf(tvout_layer11_out_s_12_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_12_V_V, tvout_layer11_out_s_12_V_V);

		sc_bv<16>* layer11_out_s_12_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_610 - aesl_tmp_611];

		// RTL Name: layer11_out_s_12_V_V
		{
			// bitslice(13, 0)
			{
				int hls_map_index = 0;
				// celement: layer11_out_s.V.V(13, 0)
				{
					// carray: (aesl_tmp_611) => (aesl_tmp_610 - 1) @ (1)
					for (int i_0 = aesl_tmp_611; i_0 <= aesl_tmp_610 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_609[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_609[0]
						// regulate_c_name       : layer11_out_s_V_V
						// input_type_conversion : (aesl_tmp_609[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_609[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<14> layer11_out_s_V_V_tmp_mem;
							layer11_out_s_V_V_tmp_mem = (aesl_tmp_609[i_0]).range().to_string(SC_BIN).c_str();
							layer11_out_s_12_V_V_tvout_wrapc_buffer[hls_map_index].range(13, 0) = layer11_out_s_V_V_tmp_mem.range(13, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_610 - aesl_tmp_611; i++)
		{
			sprintf(tvout_layer11_out_s_12_V_V, "%s\n", (layer11_out_s_12_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_12_V_V, tvout_layer11_out_s_12_V_V);
		}

		tcl_file.set_num(aesl_tmp_610 - aesl_tmp_611, &tcl_file.layer11_out_s_12_V_V_depth);
		sprintf(tvout_layer11_out_s_12_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer11_out_s_12_V_V, tvout_layer11_out_s_12_V_V);

		// release memory allocation
		delete [] layer11_out_s_12_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer11_out_s_12_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_12_V_V, wrapc_stream_size_out_layer11_out_s_12_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_12_V_V, "%d\n", aesl_tmp_610 - aesl_tmp_611);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_12_V_V, wrapc_stream_size_out_layer11_out_s_12_V_V);
		sprintf(wrapc_stream_size_out_layer11_out_s_12_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer11_out_s_12_V_V, wrapc_stream_size_out_layer11_out_s_12_V_V);

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

		// push back output stream: "layer11_out_s[0]"
		for (int i = 0; i < aesl_tmp_574; i++)
		{
			layer11_out_s[0].write(aesl_tmp_573[i]);
		}

		// push back output stream: "layer11_out_s[1]"
		for (int i = 0; i < aesl_tmp_577; i++)
		{
			layer11_out_s[1].write(aesl_tmp_576[i]);
		}

		// push back output stream: "layer11_out_s[2]"
		for (int i = 0; i < aesl_tmp_580; i++)
		{
			layer11_out_s[2].write(aesl_tmp_579[i]);
		}

		// push back output stream: "layer11_out_s[3]"
		for (int i = 0; i < aesl_tmp_583; i++)
		{
			layer11_out_s[3].write(aesl_tmp_582[i]);
		}

		// push back output stream: "layer11_out_s[4]"
		for (int i = 0; i < aesl_tmp_586; i++)
		{
			layer11_out_s[4].write(aesl_tmp_585[i]);
		}

		// push back output stream: "layer11_out_s[5]"
		for (int i = 0; i < aesl_tmp_589; i++)
		{
			layer11_out_s[5].write(aesl_tmp_588[i]);
		}

		// push back output stream: "layer11_out_s[6]"
		for (int i = 0; i < aesl_tmp_592; i++)
		{
			layer11_out_s[6].write(aesl_tmp_591[i]);
		}

		// push back output stream: "layer11_out_s[7]"
		for (int i = 0; i < aesl_tmp_595; i++)
		{
			layer11_out_s[7].write(aesl_tmp_594[i]);
		}

		// push back output stream: "layer11_out_s[8]"
		for (int i = 0; i < aesl_tmp_598; i++)
		{
			layer11_out_s[8].write(aesl_tmp_597[i]);
		}

		// push back output stream: "layer11_out_s[9]"
		for (int i = 0; i < aesl_tmp_601; i++)
		{
			layer11_out_s[9].write(aesl_tmp_600[i]);
		}

		// push back output stream: "layer11_out_s[10]"
		for (int i = 0; i < aesl_tmp_604; i++)
		{
			layer11_out_s[10].write(aesl_tmp_603[i]);
		}

		// push back output stream: "layer11_out_s[11]"
		for (int i = 0; i < aesl_tmp_607; i++)
		{
			layer11_out_s[11].write(aesl_tmp_606[i]);
		}

		// push back output stream: "layer11_out_s[12]"
		for (int i = 0; i < aesl_tmp_610; i++)
		{
			layer11_out_s[12].write(aesl_tmp_609[i]);
		}

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "node_attr_mat_s_V_V"
		delete [] tvin_node_attr_mat_s_V_V;
		delete [] wrapc_stream_size_in_node_attr_mat_s_V_V;
		// release memory allocation: "edge_attr_mat_s_0_V_V"
		delete [] tvin_edge_attr_mat_s_0_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_0_V_V;
		// release memory allocation: "edge_attr_mat_s_1_V_V"
		delete [] tvin_edge_attr_mat_s_1_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_1_V_V;
		// release memory allocation: "edge_attr_mat_s_2_V_V"
		delete [] tvin_edge_attr_mat_s_2_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_2_V_V;
		// release memory allocation: "edge_attr_mat_s_3_V_V"
		delete [] tvin_edge_attr_mat_s_3_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_3_V_V;
		// release memory allocation: "edge_attr_mat_s_4_V_V"
		delete [] tvin_edge_attr_mat_s_4_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_4_V_V;
		// release memory allocation: "edge_attr_mat_s_5_V_V"
		delete [] tvin_edge_attr_mat_s_5_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_5_V_V;
		// release memory allocation: "edge_attr_mat_s_6_V_V"
		delete [] tvin_edge_attr_mat_s_6_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_6_V_V;
		// release memory allocation: "edge_attr_mat_s_7_V_V"
		delete [] tvin_edge_attr_mat_s_7_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_7_V_V;
		// release memory allocation: "edge_attr_mat_s_8_V_V"
		delete [] tvin_edge_attr_mat_s_8_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_8_V_V;
		// release memory allocation: "edge_attr_mat_s_9_V_V"
		delete [] tvin_edge_attr_mat_s_9_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_9_V_V;
		// release memory allocation: "edge_attr_mat_s_10_V_V"
		delete [] tvin_edge_attr_mat_s_10_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_10_V_V;
		// release memory allocation: "edge_attr_mat_s_11_V_V"
		delete [] tvin_edge_attr_mat_s_11_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_11_V_V;
		// release memory allocation: "edge_attr_mat_s_12_V_V"
		delete [] tvin_edge_attr_mat_s_12_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_12_V_V;
		// release memory allocation: "edge_attr_mat_s_13_V_V"
		delete [] tvin_edge_attr_mat_s_13_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_13_V_V;
		// release memory allocation: "edge_attr_mat_s_14_V_V"
		delete [] tvin_edge_attr_mat_s_14_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_14_V_V;
		// release memory allocation: "edge_attr_mat_s_15_V_V"
		delete [] tvin_edge_attr_mat_s_15_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_15_V_V;
		// release memory allocation: "edge_attr_mat_s_16_V_V"
		delete [] tvin_edge_attr_mat_s_16_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_16_V_V;
		// release memory allocation: "edge_attr_mat_s_17_V_V"
		delete [] tvin_edge_attr_mat_s_17_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_17_V_V;
		// release memory allocation: "edge_attr_mat_s_18_V_V"
		delete [] tvin_edge_attr_mat_s_18_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_18_V_V;
		// release memory allocation: "edge_attr_mat_s_19_V_V"
		delete [] tvin_edge_attr_mat_s_19_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_19_V_V;
		// release memory allocation: "edge_attr_mat_s_20_V_V"
		delete [] tvin_edge_attr_mat_s_20_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_20_V_V;
		// release memory allocation: "edge_attr_mat_s_21_V_V"
		delete [] tvin_edge_attr_mat_s_21_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_21_V_V;
		// release memory allocation: "edge_attr_mat_s_22_V_V"
		delete [] tvin_edge_attr_mat_s_22_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_22_V_V;
		// release memory allocation: "edge_attr_mat_s_23_V_V"
		delete [] tvin_edge_attr_mat_s_23_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_23_V_V;
		// release memory allocation: "edge_attr_mat_s_24_V_V"
		delete [] tvin_edge_attr_mat_s_24_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_24_V_V;
		// release memory allocation: "edge_attr_mat_s_25_V_V"
		delete [] tvin_edge_attr_mat_s_25_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_25_V_V;
		// release memory allocation: "edge_attr_mat_s_26_V_V"
		delete [] tvin_edge_attr_mat_s_26_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_26_V_V;
		// release memory allocation: "edge_attr_mat_s_27_V_V"
		delete [] tvin_edge_attr_mat_s_27_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_27_V_V;
		// release memory allocation: "edge_attr_mat_s_28_V_V"
		delete [] tvin_edge_attr_mat_s_28_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_28_V_V;
		// release memory allocation: "edge_attr_mat_s_29_V_V"
		delete [] tvin_edge_attr_mat_s_29_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_29_V_V;
		// release memory allocation: "edge_attr_mat_s_30_V_V"
		delete [] tvin_edge_attr_mat_s_30_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_30_V_V;
		// release memory allocation: "edge_attr_mat_s_31_V_V"
		delete [] tvin_edge_attr_mat_s_31_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_31_V_V;
		// release memory allocation: "edge_attr_mat_s_32_V_V"
		delete [] tvin_edge_attr_mat_s_32_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_32_V_V;
		// release memory allocation: "edge_attr_mat_s_33_V_V"
		delete [] tvin_edge_attr_mat_s_33_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_33_V_V;
		// release memory allocation: "edge_attr_mat_s_34_V_V"
		delete [] tvin_edge_attr_mat_s_34_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_34_V_V;
		// release memory allocation: "edge_attr_mat_s_35_V_V"
		delete [] tvin_edge_attr_mat_s_35_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_35_V_V;
		// release memory allocation: "edge_attr_mat_s_36_V_V"
		delete [] tvin_edge_attr_mat_s_36_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_36_V_V;
		// release memory allocation: "edge_attr_mat_s_37_V_V"
		delete [] tvin_edge_attr_mat_s_37_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_37_V_V;
		// release memory allocation: "edge_attr_mat_s_38_V_V"
		delete [] tvin_edge_attr_mat_s_38_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_38_V_V;
		// release memory allocation: "edge_attr_mat_s_39_V_V"
		delete [] tvin_edge_attr_mat_s_39_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_39_V_V;
		// release memory allocation: "edge_attr_mat_s_40_V_V"
		delete [] tvin_edge_attr_mat_s_40_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_40_V_V;
		// release memory allocation: "edge_attr_mat_s_41_V_V"
		delete [] tvin_edge_attr_mat_s_41_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_41_V_V;
		// release memory allocation: "edge_attr_mat_s_42_V_V"
		delete [] tvin_edge_attr_mat_s_42_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_42_V_V;
		// release memory allocation: "edge_attr_mat_s_43_V_V"
		delete [] tvin_edge_attr_mat_s_43_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_43_V_V;
		// release memory allocation: "edge_attr_mat_s_44_V_V"
		delete [] tvin_edge_attr_mat_s_44_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_44_V_V;
		// release memory allocation: "edge_attr_mat_s_45_V_V"
		delete [] tvin_edge_attr_mat_s_45_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_45_V_V;
		// release memory allocation: "edge_attr_mat_s_46_V_V"
		delete [] tvin_edge_attr_mat_s_46_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_46_V_V;
		// release memory allocation: "edge_attr_mat_s_47_V_V"
		delete [] tvin_edge_attr_mat_s_47_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_47_V_V;
		// release memory allocation: "edge_attr_mat_s_48_V_V"
		delete [] tvin_edge_attr_mat_s_48_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_48_V_V;
		// release memory allocation: "edge_attr_mat_s_49_V_V"
		delete [] tvin_edge_attr_mat_s_49_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_49_V_V;
		// release memory allocation: "edge_attr_mat_s_50_V_V"
		delete [] tvin_edge_attr_mat_s_50_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_50_V_V;
		// release memory allocation: "edge_attr_mat_s_51_V_V"
		delete [] tvin_edge_attr_mat_s_51_V_V;
		delete [] wrapc_stream_size_in_edge_attr_mat_s_51_V_V;
		// release memory allocation: "edge_index_mat_s_0_V_V"
		delete [] tvin_edge_index_mat_s_0_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_0_V_V;
		// release memory allocation: "edge_index_mat_s_1_V_V"
		delete [] tvin_edge_index_mat_s_1_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_1_V_V;
		// release memory allocation: "edge_index_mat_s_2_V_V"
		delete [] tvin_edge_index_mat_s_2_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_2_V_V;
		// release memory allocation: "edge_index_mat_s_3_V_V"
		delete [] tvin_edge_index_mat_s_3_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_3_V_V;
		// release memory allocation: "edge_index_mat_s_4_V_V"
		delete [] tvin_edge_index_mat_s_4_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_4_V_V;
		// release memory allocation: "edge_index_mat_s_5_V_V"
		delete [] tvin_edge_index_mat_s_5_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_5_V_V;
		// release memory allocation: "edge_index_mat_s_6_V_V"
		delete [] tvin_edge_index_mat_s_6_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_6_V_V;
		// release memory allocation: "edge_index_mat_s_7_V_V"
		delete [] tvin_edge_index_mat_s_7_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_7_V_V;
		// release memory allocation: "edge_index_mat_s_8_V_V"
		delete [] tvin_edge_index_mat_s_8_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_8_V_V;
		// release memory allocation: "edge_index_mat_s_9_V_V"
		delete [] tvin_edge_index_mat_s_9_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_9_V_V;
		// release memory allocation: "edge_index_mat_s_10_V_V"
		delete [] tvin_edge_index_mat_s_10_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_10_V_V;
		// release memory allocation: "edge_index_mat_s_11_V_V"
		delete [] tvin_edge_index_mat_s_11_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_11_V_V;
		// release memory allocation: "edge_index_mat_s_12_V_V"
		delete [] tvin_edge_index_mat_s_12_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_12_V_V;
		// release memory allocation: "edge_index_mat_s_13_V_V"
		delete [] tvin_edge_index_mat_s_13_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_13_V_V;
		// release memory allocation: "edge_index_mat_s_14_V_V"
		delete [] tvin_edge_index_mat_s_14_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_14_V_V;
		// release memory allocation: "edge_index_mat_s_15_V_V"
		delete [] tvin_edge_index_mat_s_15_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_15_V_V;
		// release memory allocation: "edge_index_mat_s_16_V_V"
		delete [] tvin_edge_index_mat_s_16_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_16_V_V;
		// release memory allocation: "edge_index_mat_s_17_V_V"
		delete [] tvin_edge_index_mat_s_17_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_17_V_V;
		// release memory allocation: "edge_index_mat_s_18_V_V"
		delete [] tvin_edge_index_mat_s_18_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_18_V_V;
		// release memory allocation: "edge_index_mat_s_19_V_V"
		delete [] tvin_edge_index_mat_s_19_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_19_V_V;
		// release memory allocation: "edge_index_mat_s_20_V_V"
		delete [] tvin_edge_index_mat_s_20_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_20_V_V;
		// release memory allocation: "edge_index_mat_s_21_V_V"
		delete [] tvin_edge_index_mat_s_21_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_21_V_V;
		// release memory allocation: "edge_index_mat_s_22_V_V"
		delete [] tvin_edge_index_mat_s_22_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_22_V_V;
		// release memory allocation: "edge_index_mat_s_23_V_V"
		delete [] tvin_edge_index_mat_s_23_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_23_V_V;
		// release memory allocation: "edge_index_mat_s_24_V_V"
		delete [] tvin_edge_index_mat_s_24_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_24_V_V;
		// release memory allocation: "edge_index_mat_s_25_V_V"
		delete [] tvin_edge_index_mat_s_25_V_V;
		delete [] wrapc_stream_size_in_edge_index_mat_s_25_V_V;
		// release memory allocation: "layer11_out_s_0_V_V"
		delete [] tvout_layer11_out_s_0_V_V;
		delete [] tvin_layer11_out_s_0_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_0_V_V;
		// release memory allocation: "layer11_out_s_1_V_V"
		delete [] tvout_layer11_out_s_1_V_V;
		delete [] tvin_layer11_out_s_1_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_1_V_V;
		// release memory allocation: "layer11_out_s_2_V_V"
		delete [] tvout_layer11_out_s_2_V_V;
		delete [] tvin_layer11_out_s_2_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_2_V_V;
		// release memory allocation: "layer11_out_s_3_V_V"
		delete [] tvout_layer11_out_s_3_V_V;
		delete [] tvin_layer11_out_s_3_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_3_V_V;
		// release memory allocation: "layer11_out_s_4_V_V"
		delete [] tvout_layer11_out_s_4_V_V;
		delete [] tvin_layer11_out_s_4_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_4_V_V;
		// release memory allocation: "layer11_out_s_5_V_V"
		delete [] tvout_layer11_out_s_5_V_V;
		delete [] tvin_layer11_out_s_5_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_5_V_V;
		// release memory allocation: "layer11_out_s_6_V_V"
		delete [] tvout_layer11_out_s_6_V_V;
		delete [] tvin_layer11_out_s_6_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_6_V_V;
		// release memory allocation: "layer11_out_s_7_V_V"
		delete [] tvout_layer11_out_s_7_V_V;
		delete [] tvin_layer11_out_s_7_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_7_V_V;
		// release memory allocation: "layer11_out_s_8_V_V"
		delete [] tvout_layer11_out_s_8_V_V;
		delete [] tvin_layer11_out_s_8_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_8_V_V;
		// release memory allocation: "layer11_out_s_9_V_V"
		delete [] tvout_layer11_out_s_9_V_V;
		delete [] tvin_layer11_out_s_9_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_9_V_V;
		// release memory allocation: "layer11_out_s_10_V_V"
		delete [] tvout_layer11_out_s_10_V_V;
		delete [] tvin_layer11_out_s_10_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_10_V_V;
		// release memory allocation: "layer11_out_s_11_V_V"
		delete [] tvout_layer11_out_s_11_V_V;
		delete [] tvin_layer11_out_s_11_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_11_V_V;
		// release memory allocation: "layer11_out_s_12_V_V"
		delete [] tvout_layer11_out_s_12_V_V;
		delete [] tvin_layer11_out_s_12_V_V;
		delete [] wrapc_stream_size_out_layer11_out_s_12_V_V;
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

