// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Loop_1_proc225_HH_
#define _Loop_1_proc225_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct Loop_1_proc225 : public sc_module {
    // Port declarations 149
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > node_attr_mat_s_V_V_address0;
    sc_out< sc_logic > node_attr_mat_s_V_V_ce0;
    sc_out< sc_logic > node_attr_mat_s_V_V_we0;
    sc_out< sc_lv<14> > node_attr_mat_s_V_V_d0;
    sc_in< sc_lv<14> > node_attr_mat_s_V_V_q0;
    sc_out< sc_lv<4> > node_attr_mat_s_V_V_address1;
    sc_out< sc_logic > node_attr_mat_s_V_V_ce1;
    sc_out< sc_logic > node_attr_mat_s_V_V_we1;
    sc_out< sc_lv<14> > node_attr_mat_s_V_V_d1;
    sc_in< sc_lv<14> > node_attr_mat_s_V_V_q1;
    sc_out< sc_lv<6> > node_attr_0_0_V_address0;
    sc_out< sc_logic > node_attr_0_0_V_ce0;
    sc_out< sc_logic > node_attr_0_0_V_we0;
    sc_out< sc_lv<14> > node_attr_0_0_V_d0;
    sc_out< sc_lv<6> > node_attr_0_1_V_address0;
    sc_out< sc_logic > node_attr_0_1_V_ce0;
    sc_out< sc_logic > node_attr_0_1_V_we0;
    sc_out< sc_lv<14> > node_attr_0_1_V_d0;
    sc_out< sc_lv<6> > node_attr_0_2_V_address0;
    sc_out< sc_logic > node_attr_0_2_V_ce0;
    sc_out< sc_logic > node_attr_0_2_V_we0;
    sc_out< sc_lv<14> > node_attr_0_2_V_d0;
    sc_out< sc_lv<6> > node_attr_1_0_V_address0;
    sc_out< sc_logic > node_attr_1_0_V_ce0;
    sc_out< sc_logic > node_attr_1_0_V_we0;
    sc_out< sc_lv<14> > node_attr_1_0_V_d0;
    sc_out< sc_lv<6> > node_attr_1_1_V_address0;
    sc_out< sc_logic > node_attr_1_1_V_ce0;
    sc_out< sc_logic > node_attr_1_1_V_we0;
    sc_out< sc_lv<14> > node_attr_1_1_V_d0;
    sc_out< sc_lv<6> > node_attr_1_2_V_address0;
    sc_out< sc_logic > node_attr_1_2_V_ce0;
    sc_out< sc_logic > node_attr_1_2_V_we0;
    sc_out< sc_lv<14> > node_attr_1_2_V_d0;
    sc_out< sc_lv<6> > node_attr_2_0_V_address0;
    sc_out< sc_logic > node_attr_2_0_V_ce0;
    sc_out< sc_logic > node_attr_2_0_V_we0;
    sc_out< sc_lv<14> > node_attr_2_0_V_d0;
    sc_out< sc_lv<6> > node_attr_2_1_V_address0;
    sc_out< sc_logic > node_attr_2_1_V_ce0;
    sc_out< sc_logic > node_attr_2_1_V_we0;
    sc_out< sc_lv<14> > node_attr_2_1_V_d0;
    sc_out< sc_lv<6> > node_attr_2_2_V_address0;
    sc_out< sc_logic > node_attr_2_2_V_ce0;
    sc_out< sc_logic > node_attr_2_2_V_we0;
    sc_out< sc_lv<14> > node_attr_2_2_V_d0;
    sc_out< sc_lv<6> > node_attr_3_0_V_address0;
    sc_out< sc_logic > node_attr_3_0_V_ce0;
    sc_out< sc_logic > node_attr_3_0_V_we0;
    sc_out< sc_lv<14> > node_attr_3_0_V_d0;
    sc_out< sc_lv<6> > node_attr_3_1_V_address0;
    sc_out< sc_logic > node_attr_3_1_V_ce0;
    sc_out< sc_logic > node_attr_3_1_V_we0;
    sc_out< sc_lv<14> > node_attr_3_1_V_d0;
    sc_out< sc_lv<6> > node_attr_3_2_V_address0;
    sc_out< sc_logic > node_attr_3_2_V_ce0;
    sc_out< sc_logic > node_attr_3_2_V_we0;
    sc_out< sc_lv<14> > node_attr_3_2_V_d0;
    sc_out< sc_lv<6> > node_attr_4_0_V_address0;
    sc_out< sc_logic > node_attr_4_0_V_ce0;
    sc_out< sc_logic > node_attr_4_0_V_we0;
    sc_out< sc_lv<14> > node_attr_4_0_V_d0;
    sc_out< sc_lv<6> > node_attr_4_1_V_address0;
    sc_out< sc_logic > node_attr_4_1_V_ce0;
    sc_out< sc_logic > node_attr_4_1_V_we0;
    sc_out< sc_lv<14> > node_attr_4_1_V_d0;
    sc_out< sc_lv<6> > node_attr_4_2_V_address0;
    sc_out< sc_logic > node_attr_4_2_V_ce0;
    sc_out< sc_logic > node_attr_4_2_V_we0;
    sc_out< sc_lv<14> > node_attr_4_2_V_d0;
    sc_out< sc_lv<6> > node_attr_5_0_V_address0;
    sc_out< sc_logic > node_attr_5_0_V_ce0;
    sc_out< sc_logic > node_attr_5_0_V_we0;
    sc_out< sc_lv<14> > node_attr_5_0_V_d0;
    sc_out< sc_lv<6> > node_attr_5_1_V_address0;
    sc_out< sc_logic > node_attr_5_1_V_ce0;
    sc_out< sc_logic > node_attr_5_1_V_we0;
    sc_out< sc_lv<14> > node_attr_5_1_V_d0;
    sc_out< sc_lv<6> > node_attr_5_2_V_address0;
    sc_out< sc_logic > node_attr_5_2_V_ce0;
    sc_out< sc_logic > node_attr_5_2_V_we0;
    sc_out< sc_lv<14> > node_attr_5_2_V_d0;
    sc_out< sc_lv<6> > node_attr_6_0_V_address0;
    sc_out< sc_logic > node_attr_6_0_V_ce0;
    sc_out< sc_logic > node_attr_6_0_V_we0;
    sc_out< sc_lv<14> > node_attr_6_0_V_d0;
    sc_out< sc_lv<6> > node_attr_6_1_V_address0;
    sc_out< sc_logic > node_attr_6_1_V_ce0;
    sc_out< sc_logic > node_attr_6_1_V_we0;
    sc_out< sc_lv<14> > node_attr_6_1_V_d0;
    sc_out< sc_lv<6> > node_attr_6_2_V_address0;
    sc_out< sc_logic > node_attr_6_2_V_ce0;
    sc_out< sc_logic > node_attr_6_2_V_we0;
    sc_out< sc_lv<14> > node_attr_6_2_V_d0;
    sc_out< sc_lv<6> > node_attr_7_0_V_address0;
    sc_out< sc_logic > node_attr_7_0_V_ce0;
    sc_out< sc_logic > node_attr_7_0_V_we0;
    sc_out< sc_lv<14> > node_attr_7_0_V_d0;
    sc_out< sc_lv<6> > node_attr_7_1_V_address0;
    sc_out< sc_logic > node_attr_7_1_V_ce0;
    sc_out< sc_logic > node_attr_7_1_V_we0;
    sc_out< sc_lv<14> > node_attr_7_1_V_d0;
    sc_out< sc_lv<6> > node_attr_7_2_V_address0;
    sc_out< sc_logic > node_attr_7_2_V_ce0;
    sc_out< sc_logic > node_attr_7_2_V_we0;
    sc_out< sc_lv<14> > node_attr_7_2_V_d0;
    sc_out< sc_lv<6> > node_attr_8_0_V_address0;
    sc_out< sc_logic > node_attr_8_0_V_ce0;
    sc_out< sc_logic > node_attr_8_0_V_we0;
    sc_out< sc_lv<14> > node_attr_8_0_V_d0;
    sc_out< sc_lv<6> > node_attr_8_1_V_address0;
    sc_out< sc_logic > node_attr_8_1_V_ce0;
    sc_out< sc_logic > node_attr_8_1_V_we0;
    sc_out< sc_lv<14> > node_attr_8_1_V_d0;
    sc_out< sc_lv<6> > node_attr_8_2_V_address0;
    sc_out< sc_logic > node_attr_8_2_V_ce0;
    sc_out< sc_logic > node_attr_8_2_V_we0;
    sc_out< sc_lv<14> > node_attr_8_2_V_d0;
    sc_out< sc_lv<6> > node_attr_9_0_V_address0;
    sc_out< sc_logic > node_attr_9_0_V_ce0;
    sc_out< sc_logic > node_attr_9_0_V_we0;
    sc_out< sc_lv<14> > node_attr_9_0_V_d0;
    sc_out< sc_lv<6> > node_attr_9_1_V_address0;
    sc_out< sc_logic > node_attr_9_1_V_ce0;
    sc_out< sc_logic > node_attr_9_1_V_we0;
    sc_out< sc_lv<14> > node_attr_9_1_V_d0;
    sc_out< sc_lv<6> > node_attr_9_2_V_address0;
    sc_out< sc_logic > node_attr_9_2_V_ce0;
    sc_out< sc_logic > node_attr_9_2_V_we0;
    sc_out< sc_lv<14> > node_attr_9_2_V_d0;
    sc_out< sc_lv<6> > node_attr_10_0_V_address0;
    sc_out< sc_logic > node_attr_10_0_V_ce0;
    sc_out< sc_logic > node_attr_10_0_V_we0;
    sc_out< sc_lv<14> > node_attr_10_0_V_d0;
    sc_out< sc_lv<6> > node_attr_10_1_V_address0;
    sc_out< sc_logic > node_attr_10_1_V_ce0;
    sc_out< sc_logic > node_attr_10_1_V_we0;
    sc_out< sc_lv<14> > node_attr_10_1_V_d0;
    sc_out< sc_lv<6> > node_attr_10_2_V_address0;
    sc_out< sc_logic > node_attr_10_2_V_ce0;
    sc_out< sc_logic > node_attr_10_2_V_we0;
    sc_out< sc_lv<14> > node_attr_10_2_V_d0;


    // Module declarations
    Loop_1_proc225(sc_module_name name);
    SC_HAS_PROCESS(Loop_1_proc225);

    ~Loop_1_proc225();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<6> > i_fu_1070_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > i_0_reg_1053;
    sc_signal< sc_lv<1> > icmp_ln131_fu_1064_p2;
    sc_signal< sc_lv<64> > zext_ln203_fu_1076_p1;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<64> ap_const_lv64_10;
    static const sc_lv<64> ap_const_lv64_11;
    static const sc_lv<64> ap_const_lv64_12;
    static const sc_lv<64> ap_const_lv64_13;
    static const sc_lv<64> ap_const_lv64_14;
    static const sc_lv<64> ap_const_lv64_15;
    static const sc_lv<64> ap_const_lv64_16;
    static const sc_lv<64> ap_const_lv64_17;
    static const sc_lv<64> ap_const_lv64_18;
    static const sc_lv<64> ap_const_lv64_19;
    static const sc_lv<64> ap_const_lv64_1A;
    static const sc_lv<64> ap_const_lv64_1B;
    static const sc_lv<64> ap_const_lv64_1C;
    static const sc_lv<64> ap_const_lv64_1D;
    static const sc_lv<64> ap_const_lv64_1E;
    static const sc_lv<64> ap_const_lv64_1F;
    static const sc_lv<64> ap_const_lv64_20;
    static const sc_lv<6> ap_const_lv6_3C;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<14> ap_const_lv14_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_i_fu_1070_p2();
    void thread_icmp_ln131_fu_1064_p2();
    void thread_node_attr_0_0_V_address0();
    void thread_node_attr_0_0_V_ce0();
    void thread_node_attr_0_0_V_d0();
    void thread_node_attr_0_0_V_we0();
    void thread_node_attr_0_1_V_address0();
    void thread_node_attr_0_1_V_ce0();
    void thread_node_attr_0_1_V_d0();
    void thread_node_attr_0_1_V_we0();
    void thread_node_attr_0_2_V_address0();
    void thread_node_attr_0_2_V_ce0();
    void thread_node_attr_0_2_V_d0();
    void thread_node_attr_0_2_V_we0();
    void thread_node_attr_10_0_V_address0();
    void thread_node_attr_10_0_V_ce0();
    void thread_node_attr_10_0_V_d0();
    void thread_node_attr_10_0_V_we0();
    void thread_node_attr_10_1_V_address0();
    void thread_node_attr_10_1_V_ce0();
    void thread_node_attr_10_1_V_d0();
    void thread_node_attr_10_1_V_we0();
    void thread_node_attr_10_2_V_address0();
    void thread_node_attr_10_2_V_ce0();
    void thread_node_attr_10_2_V_d0();
    void thread_node_attr_10_2_V_we0();
    void thread_node_attr_1_0_V_address0();
    void thread_node_attr_1_0_V_ce0();
    void thread_node_attr_1_0_V_d0();
    void thread_node_attr_1_0_V_we0();
    void thread_node_attr_1_1_V_address0();
    void thread_node_attr_1_1_V_ce0();
    void thread_node_attr_1_1_V_d0();
    void thread_node_attr_1_1_V_we0();
    void thread_node_attr_1_2_V_address0();
    void thread_node_attr_1_2_V_ce0();
    void thread_node_attr_1_2_V_d0();
    void thread_node_attr_1_2_V_we0();
    void thread_node_attr_2_0_V_address0();
    void thread_node_attr_2_0_V_ce0();
    void thread_node_attr_2_0_V_d0();
    void thread_node_attr_2_0_V_we0();
    void thread_node_attr_2_1_V_address0();
    void thread_node_attr_2_1_V_ce0();
    void thread_node_attr_2_1_V_d0();
    void thread_node_attr_2_1_V_we0();
    void thread_node_attr_2_2_V_address0();
    void thread_node_attr_2_2_V_ce0();
    void thread_node_attr_2_2_V_d0();
    void thread_node_attr_2_2_V_we0();
    void thread_node_attr_3_0_V_address0();
    void thread_node_attr_3_0_V_ce0();
    void thread_node_attr_3_0_V_d0();
    void thread_node_attr_3_0_V_we0();
    void thread_node_attr_3_1_V_address0();
    void thread_node_attr_3_1_V_ce0();
    void thread_node_attr_3_1_V_d0();
    void thread_node_attr_3_1_V_we0();
    void thread_node_attr_3_2_V_address0();
    void thread_node_attr_3_2_V_ce0();
    void thread_node_attr_3_2_V_d0();
    void thread_node_attr_3_2_V_we0();
    void thread_node_attr_4_0_V_address0();
    void thread_node_attr_4_0_V_ce0();
    void thread_node_attr_4_0_V_d0();
    void thread_node_attr_4_0_V_we0();
    void thread_node_attr_4_1_V_address0();
    void thread_node_attr_4_1_V_ce0();
    void thread_node_attr_4_1_V_d0();
    void thread_node_attr_4_1_V_we0();
    void thread_node_attr_4_2_V_address0();
    void thread_node_attr_4_2_V_ce0();
    void thread_node_attr_4_2_V_d0();
    void thread_node_attr_4_2_V_we0();
    void thread_node_attr_5_0_V_address0();
    void thread_node_attr_5_0_V_ce0();
    void thread_node_attr_5_0_V_d0();
    void thread_node_attr_5_0_V_we0();
    void thread_node_attr_5_1_V_address0();
    void thread_node_attr_5_1_V_ce0();
    void thread_node_attr_5_1_V_d0();
    void thread_node_attr_5_1_V_we0();
    void thread_node_attr_5_2_V_address0();
    void thread_node_attr_5_2_V_ce0();
    void thread_node_attr_5_2_V_d0();
    void thread_node_attr_5_2_V_we0();
    void thread_node_attr_6_0_V_address0();
    void thread_node_attr_6_0_V_ce0();
    void thread_node_attr_6_0_V_d0();
    void thread_node_attr_6_0_V_we0();
    void thread_node_attr_6_1_V_address0();
    void thread_node_attr_6_1_V_ce0();
    void thread_node_attr_6_1_V_d0();
    void thread_node_attr_6_1_V_we0();
    void thread_node_attr_6_2_V_address0();
    void thread_node_attr_6_2_V_ce0();
    void thread_node_attr_6_2_V_d0();
    void thread_node_attr_6_2_V_we0();
    void thread_node_attr_7_0_V_address0();
    void thread_node_attr_7_0_V_ce0();
    void thread_node_attr_7_0_V_d0();
    void thread_node_attr_7_0_V_we0();
    void thread_node_attr_7_1_V_address0();
    void thread_node_attr_7_1_V_ce0();
    void thread_node_attr_7_1_V_d0();
    void thread_node_attr_7_1_V_we0();
    void thread_node_attr_7_2_V_address0();
    void thread_node_attr_7_2_V_ce0();
    void thread_node_attr_7_2_V_d0();
    void thread_node_attr_7_2_V_we0();
    void thread_node_attr_8_0_V_address0();
    void thread_node_attr_8_0_V_ce0();
    void thread_node_attr_8_0_V_d0();
    void thread_node_attr_8_0_V_we0();
    void thread_node_attr_8_1_V_address0();
    void thread_node_attr_8_1_V_ce0();
    void thread_node_attr_8_1_V_d0();
    void thread_node_attr_8_1_V_we0();
    void thread_node_attr_8_2_V_address0();
    void thread_node_attr_8_2_V_ce0();
    void thread_node_attr_8_2_V_d0();
    void thread_node_attr_8_2_V_we0();
    void thread_node_attr_9_0_V_address0();
    void thread_node_attr_9_0_V_ce0();
    void thread_node_attr_9_0_V_d0();
    void thread_node_attr_9_0_V_we0();
    void thread_node_attr_9_1_V_address0();
    void thread_node_attr_9_1_V_ce0();
    void thread_node_attr_9_1_V_d0();
    void thread_node_attr_9_1_V_we0();
    void thread_node_attr_9_2_V_address0();
    void thread_node_attr_9_2_V_ce0();
    void thread_node_attr_9_2_V_d0();
    void thread_node_attr_9_2_V_we0();
    void thread_node_attr_mat_s_V_V_address0();
    void thread_node_attr_mat_s_V_V_address1();
    void thread_node_attr_mat_s_V_V_ce0();
    void thread_node_attr_mat_s_V_V_ce1();
    void thread_node_attr_mat_s_V_V_d0();
    void thread_node_attr_mat_s_V_V_d1();
    void thread_node_attr_mat_s_V_V_we0();
    void thread_node_attr_mat_s_V_V_we1();
    void thread_zext_ln203_fu_1076_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
