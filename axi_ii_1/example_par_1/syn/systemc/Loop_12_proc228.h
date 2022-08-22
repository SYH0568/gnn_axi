// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Loop_12_proc228_HH_
#define _Loop_12_proc228_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct Loop_12_proc228 : public sc_module {
    // Port declarations 85
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<7> > layer11_out_0_address0;
    sc_out< sc_logic > layer11_out_0_ce0;
    sc_in< sc_lv<7> > layer11_out_0_q0;
    sc_out< sc_lv<16> > layer11_out_s_0_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_0_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_0_V_V_TREADY;
    sc_out< sc_lv<7> > layer11_out_1_address0;
    sc_out< sc_logic > layer11_out_1_ce0;
    sc_in< sc_lv<7> > layer11_out_1_q0;
    sc_out< sc_lv<16> > layer11_out_s_1_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_1_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_1_V_V_TREADY;
    sc_out< sc_lv<7> > layer11_out_2_address0;
    sc_out< sc_logic > layer11_out_2_ce0;
    sc_in< sc_lv<7> > layer11_out_2_q0;
    sc_out< sc_lv<16> > layer11_out_s_2_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_2_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_2_V_V_TREADY;
    sc_out< sc_lv<7> > layer11_out_3_address0;
    sc_out< sc_logic > layer11_out_3_ce0;
    sc_in< sc_lv<7> > layer11_out_3_q0;
    sc_out< sc_lv<16> > layer11_out_s_3_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_3_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_3_V_V_TREADY;
    sc_out< sc_lv<7> > layer11_out_4_address0;
    sc_out< sc_logic > layer11_out_4_ce0;
    sc_in< sc_lv<7> > layer11_out_4_q0;
    sc_out< sc_lv<16> > layer11_out_s_4_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_4_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_4_V_V_TREADY;
    sc_out< sc_lv<7> > layer11_out_5_address0;
    sc_out< sc_logic > layer11_out_5_ce0;
    sc_in< sc_lv<7> > layer11_out_5_q0;
    sc_out< sc_lv<16> > layer11_out_s_5_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_5_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_5_V_V_TREADY;
    sc_out< sc_lv<7> > layer11_out_6_address0;
    sc_out< sc_logic > layer11_out_6_ce0;
    sc_in< sc_lv<7> > layer11_out_6_q0;
    sc_out< sc_lv<16> > layer11_out_s_6_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_6_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_6_V_V_TREADY;
    sc_out< sc_lv<7> > layer11_out_7_address0;
    sc_out< sc_logic > layer11_out_7_ce0;
    sc_in< sc_lv<7> > layer11_out_7_q0;
    sc_out< sc_lv<16> > layer11_out_s_7_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_7_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_7_V_V_TREADY;
    sc_out< sc_lv<7> > layer11_out_8_address0;
    sc_out< sc_logic > layer11_out_8_ce0;
    sc_in< sc_lv<7> > layer11_out_8_q0;
    sc_out< sc_lv<16> > layer11_out_s_8_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_8_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_8_V_V_TREADY;
    sc_out< sc_lv<7> > layer11_out_9_address0;
    sc_out< sc_logic > layer11_out_9_ce0;
    sc_in< sc_lv<7> > layer11_out_9_q0;
    sc_out< sc_lv<16> > layer11_out_s_9_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_9_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_9_V_V_TREADY;
    sc_out< sc_lv<7> > layer11_out_10_address0;
    sc_out< sc_logic > layer11_out_10_ce0;
    sc_in< sc_lv<7> > layer11_out_10_q0;
    sc_out< sc_lv<16> > layer11_out_s_10_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_10_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_10_V_V_TREADY;
    sc_out< sc_lv<7> > layer11_out_11_address0;
    sc_out< sc_logic > layer11_out_11_ce0;
    sc_in< sc_lv<7> > layer11_out_11_q0;
    sc_out< sc_lv<16> > layer11_out_s_11_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_11_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_11_V_V_TREADY;
    sc_out< sc_lv<7> > layer11_out_12_address0;
    sc_out< sc_logic > layer11_out_12_ce0;
    sc_in< sc_lv<7> > layer11_out_12_q0;
    sc_out< sc_lv<16> > layer11_out_s_12_V_V_TDATA;
    sc_out< sc_logic > layer11_out_s_12_V_V_TVALID;
    sc_in< sc_logic > layer11_out_s_12_V_V_TREADY;


    // Module declarations
    Loop_12_proc228(sc_module_name name);
    SC_HAS_PROCESS(Loop_12_proc228);

    ~Loop_12_proc228();

    sc_trace_file* mVcdFile;

    regslice_both<16>* regslice_both_layer11_out_s_0_V_V_U;
    regslice_both<16>* regslice_both_layer11_out_s_1_V_V_U;
    regslice_both<16>* regslice_both_layer11_out_s_2_V_V_U;
    regslice_both<16>* regslice_both_layer11_out_s_3_V_V_U;
    regslice_both<16>* regslice_both_layer11_out_s_4_V_V_U;
    regslice_both<16>* regslice_both_layer11_out_s_5_V_V_U;
    regslice_both<16>* regslice_both_layer11_out_s_6_V_V_U;
    regslice_both<16>* regslice_both_layer11_out_s_7_V_V_U;
    regslice_both<16>* regslice_both_layer11_out_s_8_V_V_U;
    regslice_both<16>* regslice_both_layer11_out_s_9_V_V_U;
    regslice_both<16>* regslice_both_layer11_out_s_10_V_V_U;
    regslice_both<16>* regslice_both_layer11_out_s_11_V_V_U;
    regslice_both<16>* regslice_both_layer11_out_s_12_V_V_U;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > layer11_out_s_0_V_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln218_reg_453;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > icmp_ln218_reg_453_pp0_iter1_reg;
    sc_signal< sc_logic > layer11_out_s_1_V_V_TDATA_blk_n;
    sc_signal< sc_logic > layer11_out_s_2_V_V_TDATA_blk_n;
    sc_signal< sc_logic > layer11_out_s_3_V_V_TDATA_blk_n;
    sc_signal< sc_logic > layer11_out_s_4_V_V_TDATA_blk_n;
    sc_signal< sc_logic > layer11_out_s_5_V_V_TDATA_blk_n;
    sc_signal< sc_logic > layer11_out_s_6_V_V_TDATA_blk_n;
    sc_signal< sc_logic > layer11_out_s_7_V_V_TDATA_blk_n;
    sc_signal< sc_logic > layer11_out_s_8_V_V_TDATA_blk_n;
    sc_signal< sc_logic > layer11_out_s_9_V_V_TDATA_blk_n;
    sc_signal< sc_logic > layer11_out_s_10_V_V_TDATA_blk_n;
    sc_signal< sc_logic > layer11_out_s_11_V_V_TDATA_blk_n;
    sc_signal< sc_logic > layer11_out_s_12_V_V_TDATA_blk_n;
    sc_signal< sc_lv<7> > i68_0_reg_348;
    sc_signal< sc_lv<1> > icmp_ln218_fu_359_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_io;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state4_io;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<7> > i_fu_365_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_lv<64> > zext_ln224_fu_371_p1;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > regslice_both_layer11_out_s_0_V_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_layer11_out_s_1_V_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_layer11_out_s_2_V_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_layer11_out_s_3_V_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_layer11_out_s_4_V_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_layer11_out_s_5_V_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_layer11_out_s_6_V_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_layer11_out_s_7_V_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_layer11_out_s_8_V_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_layer11_out_s_9_V_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_layer11_out_s_10_V_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_layer11_out_s_11_V_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_layer11_out_s_12_V_V_U_apdone_blk;
    sc_signal< bool > ap_block_state5;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<16> > layer11_out_s_0_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_0_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_0_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_0_V_V_U_vld_out;
    sc_signal< sc_lv<16> > layer11_out_s_1_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_1_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_1_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_1_V_V_U_vld_out;
    sc_signal< sc_lv<16> > layer11_out_s_2_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_2_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_2_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_2_V_V_U_vld_out;
    sc_signal< sc_lv<16> > layer11_out_s_3_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_3_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_3_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_3_V_V_U_vld_out;
    sc_signal< sc_lv<16> > layer11_out_s_4_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_4_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_4_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_4_V_V_U_vld_out;
    sc_signal< sc_lv<16> > layer11_out_s_5_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_5_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_5_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_5_V_V_U_vld_out;
    sc_signal< sc_lv<16> > layer11_out_s_6_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_6_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_6_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_6_V_V_U_vld_out;
    sc_signal< sc_lv<16> > layer11_out_s_7_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_7_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_7_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_7_V_V_U_vld_out;
    sc_signal< sc_lv<16> > layer11_out_s_8_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_8_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_8_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_8_V_V_U_vld_out;
    sc_signal< sc_lv<16> > layer11_out_s_9_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_9_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_9_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_9_V_V_U_vld_out;
    sc_signal< sc_lv<16> > layer11_out_s_10_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_10_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_10_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_10_V_V_U_vld_out;
    sc_signal< sc_lv<16> > layer11_out_s_11_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_11_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_11_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_11_V_V_U_vld_out;
    sc_signal< sc_lv<16> > layer11_out_s_12_V_V_TDATA_int;
    sc_signal< sc_logic > layer11_out_s_12_V_V_TVALID_int;
    sc_signal< sc_logic > layer11_out_s_12_V_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_layer11_out_s_12_V_V_U_vld_out;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<7> ap_const_lv7_78;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state5();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_io();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_io();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_i_fu_365_p2();
    void thread_icmp_ln218_fu_359_p2();
    void thread_layer11_out_0_address0();
    void thread_layer11_out_0_ce0();
    void thread_layer11_out_10_address0();
    void thread_layer11_out_10_ce0();
    void thread_layer11_out_11_address0();
    void thread_layer11_out_11_ce0();
    void thread_layer11_out_12_address0();
    void thread_layer11_out_12_ce0();
    void thread_layer11_out_1_address0();
    void thread_layer11_out_1_ce0();
    void thread_layer11_out_2_address0();
    void thread_layer11_out_2_ce0();
    void thread_layer11_out_3_address0();
    void thread_layer11_out_3_ce0();
    void thread_layer11_out_4_address0();
    void thread_layer11_out_4_ce0();
    void thread_layer11_out_5_address0();
    void thread_layer11_out_5_ce0();
    void thread_layer11_out_6_address0();
    void thread_layer11_out_6_ce0();
    void thread_layer11_out_7_address0();
    void thread_layer11_out_7_ce0();
    void thread_layer11_out_8_address0();
    void thread_layer11_out_8_ce0();
    void thread_layer11_out_9_address0();
    void thread_layer11_out_9_ce0();
    void thread_layer11_out_s_0_V_V_TDATA_blk_n();
    void thread_layer11_out_s_0_V_V_TDATA_int();
    void thread_layer11_out_s_0_V_V_TVALID();
    void thread_layer11_out_s_0_V_V_TVALID_int();
    void thread_layer11_out_s_10_V_V_TDATA_blk_n();
    void thread_layer11_out_s_10_V_V_TDATA_int();
    void thread_layer11_out_s_10_V_V_TVALID();
    void thread_layer11_out_s_10_V_V_TVALID_int();
    void thread_layer11_out_s_11_V_V_TDATA_blk_n();
    void thread_layer11_out_s_11_V_V_TDATA_int();
    void thread_layer11_out_s_11_V_V_TVALID();
    void thread_layer11_out_s_11_V_V_TVALID_int();
    void thread_layer11_out_s_12_V_V_TDATA_blk_n();
    void thread_layer11_out_s_12_V_V_TDATA_int();
    void thread_layer11_out_s_12_V_V_TVALID();
    void thread_layer11_out_s_12_V_V_TVALID_int();
    void thread_layer11_out_s_1_V_V_TDATA_blk_n();
    void thread_layer11_out_s_1_V_V_TDATA_int();
    void thread_layer11_out_s_1_V_V_TVALID();
    void thread_layer11_out_s_1_V_V_TVALID_int();
    void thread_layer11_out_s_2_V_V_TDATA_blk_n();
    void thread_layer11_out_s_2_V_V_TDATA_int();
    void thread_layer11_out_s_2_V_V_TVALID();
    void thread_layer11_out_s_2_V_V_TVALID_int();
    void thread_layer11_out_s_3_V_V_TDATA_blk_n();
    void thread_layer11_out_s_3_V_V_TDATA_int();
    void thread_layer11_out_s_3_V_V_TVALID();
    void thread_layer11_out_s_3_V_V_TVALID_int();
    void thread_layer11_out_s_4_V_V_TDATA_blk_n();
    void thread_layer11_out_s_4_V_V_TDATA_int();
    void thread_layer11_out_s_4_V_V_TVALID();
    void thread_layer11_out_s_4_V_V_TVALID_int();
    void thread_layer11_out_s_5_V_V_TDATA_blk_n();
    void thread_layer11_out_s_5_V_V_TDATA_int();
    void thread_layer11_out_s_5_V_V_TVALID();
    void thread_layer11_out_s_5_V_V_TVALID_int();
    void thread_layer11_out_s_6_V_V_TDATA_blk_n();
    void thread_layer11_out_s_6_V_V_TDATA_int();
    void thread_layer11_out_s_6_V_V_TVALID();
    void thread_layer11_out_s_6_V_V_TVALID_int();
    void thread_layer11_out_s_7_V_V_TDATA_blk_n();
    void thread_layer11_out_s_7_V_V_TDATA_int();
    void thread_layer11_out_s_7_V_V_TVALID();
    void thread_layer11_out_s_7_V_V_TVALID_int();
    void thread_layer11_out_s_8_V_V_TDATA_blk_n();
    void thread_layer11_out_s_8_V_V_TDATA_int();
    void thread_layer11_out_s_8_V_V_TVALID();
    void thread_layer11_out_s_8_V_V_TVALID_int();
    void thread_layer11_out_s_9_V_V_TDATA_blk_n();
    void thread_layer11_out_s_9_V_V_TDATA_int();
    void thread_layer11_out_s_9_V_V_TVALID();
    void thread_layer11_out_s_9_V_V_TVALID_int();
    void thread_zext_ln224_fu_371_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif