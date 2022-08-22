// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_HH_
#define _relu_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct relu : public sc_module {
    // Port declarations 17
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<14> > data_0_V_read;
    sc_in< sc_lv<14> > data_1_V_read;
    sc_in< sc_lv<14> > data_2_V_read;
    sc_in< sc_lv<14> > data_3_V_read;
    sc_in< sc_lv<14> > data_4_V_read;
    sc_in< sc_lv<14> > data_5_V_read;
    sc_in< sc_lv<14> > data_6_V_read;
    sc_in< sc_lv<14> > data_7_V_read;
    sc_out< sc_lv<14> > ap_return_0;
    sc_out< sc_lv<14> > ap_return_1;
    sc_out< sc_lv<14> > ap_return_2;
    sc_out< sc_lv<14> > ap_return_3;
    sc_out< sc_lv<14> > ap_return_4;
    sc_out< sc_lv<14> > ap_return_5;
    sc_out< sc_lv<14> > ap_return_6;
    sc_out< sc_lv<14> > ap_return_7;


    // Module declarations
    relu(sc_module_name name);
    SC_HAS_PROCESS(relu);

    ~relu();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<1> > icmp_ln1494_fu_82_p2;
    sc_signal< sc_lv<13> > trunc_ln296_fu_88_p1;
    sc_signal< sc_lv<13> > select_ln296_fu_92_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_1_fu_104_p2;
    sc_signal< sc_lv<13> > trunc_ln296_1_fu_110_p1;
    sc_signal< sc_lv<13> > select_ln296_1_fu_114_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_2_fu_126_p2;
    sc_signal< sc_lv<13> > trunc_ln296_2_fu_132_p1;
    sc_signal< sc_lv<13> > select_ln296_2_fu_136_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_3_fu_148_p2;
    sc_signal< sc_lv<13> > trunc_ln296_3_fu_154_p1;
    sc_signal< sc_lv<13> > select_ln296_3_fu_158_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_4_fu_170_p2;
    sc_signal< sc_lv<13> > trunc_ln296_4_fu_176_p1;
    sc_signal< sc_lv<13> > select_ln296_4_fu_180_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_5_fu_192_p2;
    sc_signal< sc_lv<13> > trunc_ln296_5_fu_198_p1;
    sc_signal< sc_lv<13> > select_ln296_5_fu_202_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_6_fu_214_p2;
    sc_signal< sc_lv<13> > trunc_ln296_6_fu_220_p1;
    sc_signal< sc_lv<13> > select_ln296_6_fu_224_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_7_fu_236_p2;
    sc_signal< sc_lv<13> > trunc_ln296_7_fu_242_p1;
    sc_signal< sc_lv<13> > select_ln296_7_fu_246_p3;
    sc_signal< sc_lv<14> > zext_ln296_fu_100_p1;
    sc_signal< sc_lv<14> > zext_ln296_1_fu_122_p1;
    sc_signal< sc_lv<14> > zext_ln296_2_fu_144_p1;
    sc_signal< sc_lv<14> > zext_ln296_3_fu_166_p1;
    sc_signal< sc_lv<14> > zext_ln296_4_fu_188_p1;
    sc_signal< sc_lv<14> > zext_ln296_5_fu_210_p1;
    sc_signal< sc_lv<14> > zext_ln296_6_fu_232_p1;
    sc_signal< sc_lv<14> > zext_ln296_7_fu_254_p1;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_icmp_ln1494_1_fu_104_p2();
    void thread_icmp_ln1494_2_fu_126_p2();
    void thread_icmp_ln1494_3_fu_148_p2();
    void thread_icmp_ln1494_4_fu_170_p2();
    void thread_icmp_ln1494_5_fu_192_p2();
    void thread_icmp_ln1494_6_fu_214_p2();
    void thread_icmp_ln1494_7_fu_236_p2();
    void thread_icmp_ln1494_fu_82_p2();
    void thread_select_ln296_1_fu_114_p3();
    void thread_select_ln296_2_fu_136_p3();
    void thread_select_ln296_3_fu_158_p3();
    void thread_select_ln296_4_fu_180_p3();
    void thread_select_ln296_5_fu_202_p3();
    void thread_select_ln296_6_fu_224_p3();
    void thread_select_ln296_7_fu_246_p3();
    void thread_select_ln296_fu_92_p3();
    void thread_trunc_ln296_1_fu_110_p1();
    void thread_trunc_ln296_2_fu_132_p1();
    void thread_trunc_ln296_3_fu_154_p1();
    void thread_trunc_ln296_4_fu_176_p1();
    void thread_trunc_ln296_5_fu_198_p1();
    void thread_trunc_ln296_6_fu_220_p1();
    void thread_trunc_ln296_7_fu_242_p1();
    void thread_trunc_ln296_fu_88_p1();
    void thread_zext_ln296_1_fu_122_p1();
    void thread_zext_ln296_2_fu_144_p1();
    void thread_zext_ln296_3_fu_166_p1();
    void thread_zext_ln296_4_fu_188_p1();
    void thread_zext_ln296_5_fu_210_p1();
    void thread_zext_ln296_6_fu_232_p1();
    void thread_zext_ln296_7_fu_254_p1();
    void thread_zext_ln296_fu_100_p1();
};

}

using namespace ap_rtl;

#endif