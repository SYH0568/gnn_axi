#include "example.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void example::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, Block_proc_U0_ap_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()))) {
        Block_proc_U0_ap_ready_count = (!Block_proc_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Block_proc_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, Block_proc_U0_ap_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()))) {
        Block_proc_U0_ap_ready_count = (!Block_proc_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Block_proc_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, Loop_edge_compute_lo_1_U0_ap_ready.read()))) {
        Loop_edge_compute_lo_1_U0_ap_ready_count = (!Loop_edge_compute_lo_1_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Loop_edge_compute_lo_1_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Loop_edge_compute_lo_1_U0_ap_ready.read()))) {
        Loop_edge_compute_lo_1_U0_ap_ready_count = (!Loop_edge_compute_lo_1_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Loop_edge_compute_lo_1_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Block_proc_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Block_proc_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Block_proc_U0_ap_ready = ap_sync_Block_proc_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Loop_edge_compute_lo_1_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Loop_edge_compute_lo_1_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Loop_edge_compute_lo_1_U0_ap_ready = ap_sync_Loop_edge_compute_lo_1_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_0 = ap_sync_channel_write_edge_attr_aggr_0_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_0_1 = ap_sync_channel_write_edge_attr_aggr_0_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_0_2 = ap_sync_channel_write_edge_attr_aggr_0_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_0_3 = ap_sync_channel_write_edge_attr_aggr_0_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_1 = ap_sync_channel_write_edge_attr_aggr_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_1_1 = ap_sync_channel_write_edge_attr_aggr_0_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_1_2 = ap_sync_channel_write_edge_attr_aggr_0_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_1_3 = ap_sync_channel_write_edge_attr_aggr_0_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_2 = ap_sync_channel_write_edge_attr_aggr_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_2_1 = ap_sync_channel_write_edge_attr_aggr_0_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_2_2 = ap_sync_channel_write_edge_attr_aggr_0_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_2_3 = ap_sync_channel_write_edge_attr_aggr_0_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_3 = ap_sync_channel_write_edge_attr_aggr_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_3_1 = ap_sync_channel_write_edge_attr_aggr_0_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_3_2 = ap_sync_channel_write_edge_attr_aggr_0_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_0_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_0_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_0_3_3 = ap_sync_channel_write_edge_attr_aggr_0_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_0 = ap_sync_channel_write_edge_attr_aggr_10_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_0_1 = ap_sync_channel_write_edge_attr_aggr_10_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_0_2 = ap_sync_channel_write_edge_attr_aggr_10_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_0_3 = ap_sync_channel_write_edge_attr_aggr_10_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_1 = ap_sync_channel_write_edge_attr_aggr_10_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_1_1 = ap_sync_channel_write_edge_attr_aggr_10_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_1_2 = ap_sync_channel_write_edge_attr_aggr_10_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_1_3 = ap_sync_channel_write_edge_attr_aggr_10_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_2 = ap_sync_channel_write_edge_attr_aggr_10_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_2_1 = ap_sync_channel_write_edge_attr_aggr_10_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_2_2 = ap_sync_channel_write_edge_attr_aggr_10_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_2_3 = ap_sync_channel_write_edge_attr_aggr_10_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_3 = ap_sync_channel_write_edge_attr_aggr_10_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_3_1 = ap_sync_channel_write_edge_attr_aggr_10_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_3_2 = ap_sync_channel_write_edge_attr_aggr_10_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_10_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_10_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_10_3_3 = ap_sync_channel_write_edge_attr_aggr_10_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_0 = ap_sync_channel_write_edge_attr_aggr_11_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_0_1 = ap_sync_channel_write_edge_attr_aggr_11_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_0_2 = ap_sync_channel_write_edge_attr_aggr_11_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_0_3 = ap_sync_channel_write_edge_attr_aggr_11_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_1 = ap_sync_channel_write_edge_attr_aggr_11_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_1_1 = ap_sync_channel_write_edge_attr_aggr_11_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_1_2 = ap_sync_channel_write_edge_attr_aggr_11_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_1_3 = ap_sync_channel_write_edge_attr_aggr_11_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_2 = ap_sync_channel_write_edge_attr_aggr_11_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_2_1 = ap_sync_channel_write_edge_attr_aggr_11_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_2_2 = ap_sync_channel_write_edge_attr_aggr_11_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_2_3 = ap_sync_channel_write_edge_attr_aggr_11_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_3 = ap_sync_channel_write_edge_attr_aggr_11_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_3_1 = ap_sync_channel_write_edge_attr_aggr_11_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_3_2 = ap_sync_channel_write_edge_attr_aggr_11_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_11_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_11_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_11_3_3 = ap_sync_channel_write_edge_attr_aggr_11_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_0 = ap_sync_channel_write_edge_attr_aggr_12_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_0_1 = ap_sync_channel_write_edge_attr_aggr_12_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_0_2 = ap_sync_channel_write_edge_attr_aggr_12_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_0_3 = ap_sync_channel_write_edge_attr_aggr_12_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_1 = ap_sync_channel_write_edge_attr_aggr_12_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_1_1 = ap_sync_channel_write_edge_attr_aggr_12_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_1_2 = ap_sync_channel_write_edge_attr_aggr_12_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_1_3 = ap_sync_channel_write_edge_attr_aggr_12_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_2 = ap_sync_channel_write_edge_attr_aggr_12_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_2_1 = ap_sync_channel_write_edge_attr_aggr_12_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_2_2 = ap_sync_channel_write_edge_attr_aggr_12_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_2_3 = ap_sync_channel_write_edge_attr_aggr_12_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_3 = ap_sync_channel_write_edge_attr_aggr_12_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_3_1 = ap_sync_channel_write_edge_attr_aggr_12_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_3_2 = ap_sync_channel_write_edge_attr_aggr_12_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_12_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_12_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_12_3_3 = ap_sync_channel_write_edge_attr_aggr_12_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_0 = ap_sync_channel_write_edge_attr_aggr_1_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_0_1 = ap_sync_channel_write_edge_attr_aggr_1_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_0_2 = ap_sync_channel_write_edge_attr_aggr_1_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_0_3 = ap_sync_channel_write_edge_attr_aggr_1_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_1 = ap_sync_channel_write_edge_attr_aggr_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_1_1 = ap_sync_channel_write_edge_attr_aggr_1_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_1_2 = ap_sync_channel_write_edge_attr_aggr_1_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_1_3 = ap_sync_channel_write_edge_attr_aggr_1_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_2 = ap_sync_channel_write_edge_attr_aggr_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_2_1 = ap_sync_channel_write_edge_attr_aggr_1_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_2_2 = ap_sync_channel_write_edge_attr_aggr_1_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_2_3 = ap_sync_channel_write_edge_attr_aggr_1_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_3 = ap_sync_channel_write_edge_attr_aggr_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_3_1 = ap_sync_channel_write_edge_attr_aggr_1_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_3_2 = ap_sync_channel_write_edge_attr_aggr_1_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_1_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_1_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_1_3_3 = ap_sync_channel_write_edge_attr_aggr_1_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_0 = ap_sync_channel_write_edge_attr_aggr_2_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_0_1 = ap_sync_channel_write_edge_attr_aggr_2_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_0_2 = ap_sync_channel_write_edge_attr_aggr_2_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_0_3 = ap_sync_channel_write_edge_attr_aggr_2_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_1 = ap_sync_channel_write_edge_attr_aggr_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_1_1 = ap_sync_channel_write_edge_attr_aggr_2_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_1_2 = ap_sync_channel_write_edge_attr_aggr_2_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_1_3 = ap_sync_channel_write_edge_attr_aggr_2_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_2 = ap_sync_channel_write_edge_attr_aggr_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_2_1 = ap_sync_channel_write_edge_attr_aggr_2_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_2_2 = ap_sync_channel_write_edge_attr_aggr_2_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_2_3 = ap_sync_channel_write_edge_attr_aggr_2_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_3 = ap_sync_channel_write_edge_attr_aggr_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_3_1 = ap_sync_channel_write_edge_attr_aggr_2_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_3_2 = ap_sync_channel_write_edge_attr_aggr_2_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_2_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_2_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_2_3_3 = ap_sync_channel_write_edge_attr_aggr_2_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_0 = ap_sync_channel_write_edge_attr_aggr_3_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_0_1 = ap_sync_channel_write_edge_attr_aggr_3_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_0_2 = ap_sync_channel_write_edge_attr_aggr_3_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_0_3 = ap_sync_channel_write_edge_attr_aggr_3_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_1 = ap_sync_channel_write_edge_attr_aggr_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_1_1 = ap_sync_channel_write_edge_attr_aggr_3_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_1_2 = ap_sync_channel_write_edge_attr_aggr_3_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_1_3 = ap_sync_channel_write_edge_attr_aggr_3_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_2 = ap_sync_channel_write_edge_attr_aggr_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_2_1 = ap_sync_channel_write_edge_attr_aggr_3_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_2_2 = ap_sync_channel_write_edge_attr_aggr_3_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_2_3 = ap_sync_channel_write_edge_attr_aggr_3_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_3 = ap_sync_channel_write_edge_attr_aggr_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_3_1 = ap_sync_channel_write_edge_attr_aggr_3_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_3_2 = ap_sync_channel_write_edge_attr_aggr_3_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_3_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_3_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_3_3_3 = ap_sync_channel_write_edge_attr_aggr_3_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_0 = ap_sync_channel_write_edge_attr_aggr_4_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_0_1 = ap_sync_channel_write_edge_attr_aggr_4_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_0_2 = ap_sync_channel_write_edge_attr_aggr_4_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_0_3 = ap_sync_channel_write_edge_attr_aggr_4_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_1 = ap_sync_channel_write_edge_attr_aggr_4_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_1_1 = ap_sync_channel_write_edge_attr_aggr_4_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_1_2 = ap_sync_channel_write_edge_attr_aggr_4_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_1_3 = ap_sync_channel_write_edge_attr_aggr_4_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_2 = ap_sync_channel_write_edge_attr_aggr_4_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_2_1 = ap_sync_channel_write_edge_attr_aggr_4_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_2_2 = ap_sync_channel_write_edge_attr_aggr_4_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_2_3 = ap_sync_channel_write_edge_attr_aggr_4_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_3 = ap_sync_channel_write_edge_attr_aggr_4_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_3_1 = ap_sync_channel_write_edge_attr_aggr_4_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_3_2 = ap_sync_channel_write_edge_attr_aggr_4_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_4_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_4_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_4_3_3 = ap_sync_channel_write_edge_attr_aggr_4_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_0 = ap_sync_channel_write_edge_attr_aggr_5_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_0_1 = ap_sync_channel_write_edge_attr_aggr_5_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_0_2 = ap_sync_channel_write_edge_attr_aggr_5_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_0_3 = ap_sync_channel_write_edge_attr_aggr_5_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_1 = ap_sync_channel_write_edge_attr_aggr_5_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_1_1 = ap_sync_channel_write_edge_attr_aggr_5_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_1_2 = ap_sync_channel_write_edge_attr_aggr_5_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_1_3 = ap_sync_channel_write_edge_attr_aggr_5_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_2 = ap_sync_channel_write_edge_attr_aggr_5_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_2_1 = ap_sync_channel_write_edge_attr_aggr_5_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_2_2 = ap_sync_channel_write_edge_attr_aggr_5_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_2_3 = ap_sync_channel_write_edge_attr_aggr_5_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_3 = ap_sync_channel_write_edge_attr_aggr_5_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_3_1 = ap_sync_channel_write_edge_attr_aggr_5_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_3_2 = ap_sync_channel_write_edge_attr_aggr_5_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_5_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_5_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_5_3_3 = ap_sync_channel_write_edge_attr_aggr_5_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_0 = ap_sync_channel_write_edge_attr_aggr_6_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_0_1 = ap_sync_channel_write_edge_attr_aggr_6_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_0_2 = ap_sync_channel_write_edge_attr_aggr_6_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_0_3 = ap_sync_channel_write_edge_attr_aggr_6_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_1 = ap_sync_channel_write_edge_attr_aggr_6_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_1_1 = ap_sync_channel_write_edge_attr_aggr_6_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_1_2 = ap_sync_channel_write_edge_attr_aggr_6_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_1_3 = ap_sync_channel_write_edge_attr_aggr_6_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_2 = ap_sync_channel_write_edge_attr_aggr_6_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_2_1 = ap_sync_channel_write_edge_attr_aggr_6_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_2_2 = ap_sync_channel_write_edge_attr_aggr_6_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_2_3 = ap_sync_channel_write_edge_attr_aggr_6_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_3 = ap_sync_channel_write_edge_attr_aggr_6_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_3_1 = ap_sync_channel_write_edge_attr_aggr_6_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_3_2 = ap_sync_channel_write_edge_attr_aggr_6_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_6_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_6_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_6_3_3 = ap_sync_channel_write_edge_attr_aggr_6_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_0 = ap_sync_channel_write_edge_attr_aggr_7_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_0_1 = ap_sync_channel_write_edge_attr_aggr_7_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_0_2 = ap_sync_channel_write_edge_attr_aggr_7_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_0_3 = ap_sync_channel_write_edge_attr_aggr_7_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_1 = ap_sync_channel_write_edge_attr_aggr_7_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_1_1 = ap_sync_channel_write_edge_attr_aggr_7_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_1_2 = ap_sync_channel_write_edge_attr_aggr_7_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_1_3 = ap_sync_channel_write_edge_attr_aggr_7_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_2 = ap_sync_channel_write_edge_attr_aggr_7_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_2_1 = ap_sync_channel_write_edge_attr_aggr_7_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_2_2 = ap_sync_channel_write_edge_attr_aggr_7_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_2_3 = ap_sync_channel_write_edge_attr_aggr_7_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_3 = ap_sync_channel_write_edge_attr_aggr_7_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_3_1 = ap_sync_channel_write_edge_attr_aggr_7_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_3_2 = ap_sync_channel_write_edge_attr_aggr_7_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_7_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_7_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_7_3_3 = ap_sync_channel_write_edge_attr_aggr_7_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_0 = ap_sync_channel_write_edge_attr_aggr_8_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_0_1 = ap_sync_channel_write_edge_attr_aggr_8_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_0_2 = ap_sync_channel_write_edge_attr_aggr_8_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_0_3 = ap_sync_channel_write_edge_attr_aggr_8_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_1 = ap_sync_channel_write_edge_attr_aggr_8_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_1_1 = ap_sync_channel_write_edge_attr_aggr_8_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_1_2 = ap_sync_channel_write_edge_attr_aggr_8_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_1_3 = ap_sync_channel_write_edge_attr_aggr_8_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_2 = ap_sync_channel_write_edge_attr_aggr_8_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_2_1 = ap_sync_channel_write_edge_attr_aggr_8_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_2_2 = ap_sync_channel_write_edge_attr_aggr_8_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_2_3 = ap_sync_channel_write_edge_attr_aggr_8_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_3 = ap_sync_channel_write_edge_attr_aggr_8_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_3_1 = ap_sync_channel_write_edge_attr_aggr_8_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_3_2 = ap_sync_channel_write_edge_attr_aggr_8_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_8_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_8_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_8_3_3 = ap_sync_channel_write_edge_attr_aggr_8_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_0 = ap_sync_channel_write_edge_attr_aggr_9_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_0_1 = ap_sync_channel_write_edge_attr_aggr_9_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_0_2 = ap_sync_channel_write_edge_attr_aggr_9_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_0_3 = ap_sync_channel_write_edge_attr_aggr_9_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_1 = ap_sync_channel_write_edge_attr_aggr_9_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_1_1 = ap_sync_channel_write_edge_attr_aggr_9_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_1_2 = ap_sync_channel_write_edge_attr_aggr_9_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_1_3 = ap_sync_channel_write_edge_attr_aggr_9_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_2 = ap_sync_channel_write_edge_attr_aggr_9_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_2_1 = ap_sync_channel_write_edge_attr_aggr_9_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_2_2 = ap_sync_channel_write_edge_attr_aggr_9_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_2_3 = ap_sync_channel_write_edge_attr_aggr_9_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_3 = ap_sync_channel_write_edge_attr_aggr_9_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_3_1 = ap_sync_channel_write_edge_attr_aggr_9_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_3_2 = ap_sync_channel_write_edge_attr_aggr_9_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_attr_aggr_9_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_fetch_loop_proc_U0_ap_done.read() & 
             Loop_fetch_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_attr_aggr_9_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_attr_aggr_9_3_3 = ap_sync_channel_write_edge_attr_aggr_9_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_0 = ap_sync_channel_write_edge_index_cpy1_0_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_0_1 = ap_sync_channel_write_edge_index_cpy1_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_1 = ap_sync_channel_write_edge_index_cpy1_10_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_10_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_10_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_10_s = ap_sync_channel_write_edge_index_cpy1_10_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_1 = ap_sync_channel_write_edge_index_cpy1_11_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_11_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_11_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_11_s = ap_sync_channel_write_edge_index_cpy1_11_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_1 = ap_sync_channel_write_edge_index_cpy1_12_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_12_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_12_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_12_s = ap_sync_channel_write_edge_index_cpy1_12_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_0 = ap_sync_channel_write_edge_index_cpy1_1_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_1_1 = ap_sync_channel_write_edge_index_cpy1_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_0 = ap_sync_channel_write_edge_index_cpy1_2_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_2_1 = ap_sync_channel_write_edge_index_cpy1_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_0 = ap_sync_channel_write_edge_index_cpy1_3_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_3_1 = ap_sync_channel_write_edge_index_cpy1_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_0 = ap_sync_channel_write_edge_index_cpy1_4_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_4_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_4_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_4_1 = ap_sync_channel_write_edge_index_cpy1_4_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_0 = ap_sync_channel_write_edge_index_cpy1_5_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_5_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_5_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_5_1 = ap_sync_channel_write_edge_index_cpy1_5_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_0 = ap_sync_channel_write_edge_index_cpy1_6_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_6_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_6_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_6_1 = ap_sync_channel_write_edge_index_cpy1_6_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_0 = ap_sync_channel_write_edge_index_cpy1_7_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_7_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_7_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_7_1 = ap_sync_channel_write_edge_index_cpy1_7_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_0 = ap_sync_channel_write_edge_index_cpy1_8_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_8_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_8_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_8_1 = ap_sync_channel_write_edge_index_cpy1_8_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_0 = ap_sync_channel_write_edge_index_cpy1_9_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy1_9_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy1_9_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy1_9_1 = ap_sync_channel_write_edge_index_cpy1_9_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_0_1 = ap_sync_channel_write_edge_index_cpy2_V_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_0_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_0_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_0_s = ap_sync_channel_write_edge_index_cpy2_V_0_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_10 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_10 = ap_sync_channel_write_edge_index_cpy2_V_10.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_10_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_10_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_10_1 = ap_sync_channel_write_edge_index_cpy2_V_10_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_11 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_11 = ap_sync_channel_write_edge_index_cpy2_V_11.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_11_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_11_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_11_1 = ap_sync_channel_write_edge_index_cpy2_V_11_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_12 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_12 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_12 = ap_sync_channel_write_edge_index_cpy2_V_12.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_12_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_12_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_12_1 = ap_sync_channel_write_edge_index_cpy2_V_12_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_1_1 = ap_sync_channel_write_edge_index_cpy2_V_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_1_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_1_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_1_s = ap_sync_channel_write_edge_index_cpy2_V_1_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_2_1 = ap_sync_channel_write_edge_index_cpy2_V_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_2_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_2_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_2_s = ap_sync_channel_write_edge_index_cpy2_V_2_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_3_1 = ap_sync_channel_write_edge_index_cpy2_V_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_3_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_3_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_3_s = ap_sync_channel_write_edge_index_cpy2_V_3_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_4_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_4_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_4_1 = ap_sync_channel_write_edge_index_cpy2_V_4_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_4_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_4_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_4_s = ap_sync_channel_write_edge_index_cpy2_V_4_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_5_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_5_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_5_1 = ap_sync_channel_write_edge_index_cpy2_V_5_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_5_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_5_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_5_s = ap_sync_channel_write_edge_index_cpy2_V_5_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_6_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_6_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_6_1 = ap_sync_channel_write_edge_index_cpy2_V_6_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_6_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_6_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_6_s = ap_sync_channel_write_edge_index_cpy2_V_6_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_7_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_7_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_7_1 = ap_sync_channel_write_edge_index_cpy2_V_7_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_7_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_7_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_7_s = ap_sync_channel_write_edge_index_cpy2_V_7_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_8_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_8_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_8_1 = ap_sync_channel_write_edge_index_cpy2_V_8_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_8_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_8_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_8_s = ap_sync_channel_write_edge_index_cpy2_V_8_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_9_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_9_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_9_1 = ap_sync_channel_write_edge_index_cpy2_V_9_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy2_V_9_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_1_U0_ap_done.read() & 
             clone_vector_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy2_V_9_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy2_V_9_s = ap_sync_channel_write_edge_index_cpy2_V_9_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_0_1 = ap_sync_channel_write_edge_index_cpy3_V_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_0_3 = ap_sync_channel_write_edge_index_cpy3_V_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_10_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_10_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_10_1 = ap_sync_channel_write_edge_index_cpy3_V_10_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_10_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_10_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_10_3 = ap_sync_channel_write_edge_index_cpy3_V_10_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_11_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_11_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_11_1 = ap_sync_channel_write_edge_index_cpy3_V_11_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_11_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_11_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_11_3 = ap_sync_channel_write_edge_index_cpy3_V_11_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_12_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_12_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_12_1 = ap_sync_channel_write_edge_index_cpy3_V_12_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_12_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_12_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_12_3 = ap_sync_channel_write_edge_index_cpy3_V_12_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_1_1 = ap_sync_channel_write_edge_index_cpy3_V_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_1_3 = ap_sync_channel_write_edge_index_cpy3_V_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_2_1 = ap_sync_channel_write_edge_index_cpy3_V_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_2_3 = ap_sync_channel_write_edge_index_cpy3_V_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_3_1 = ap_sync_channel_write_edge_index_cpy3_V_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_3_3 = ap_sync_channel_write_edge_index_cpy3_V_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_4_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_4_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_4_1 = ap_sync_channel_write_edge_index_cpy3_V_4_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_4_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_4_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_4_3 = ap_sync_channel_write_edge_index_cpy3_V_4_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_5_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_5_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_5_1 = ap_sync_channel_write_edge_index_cpy3_V_5_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_5_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_5_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_5_3 = ap_sync_channel_write_edge_index_cpy3_V_5_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_6_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_6_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_6_1 = ap_sync_channel_write_edge_index_cpy3_V_6_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_6_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_6_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_6_3 = ap_sync_channel_write_edge_index_cpy3_V_6_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_7_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_7_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_7_1 = ap_sync_channel_write_edge_index_cpy3_V_7_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_7_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_7_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_7_3 = ap_sync_channel_write_edge_index_cpy3_V_7_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_8_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_8_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_8_1 = ap_sync_channel_write_edge_index_cpy3_V_8_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_8_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_8_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_8_3 = ap_sync_channel_write_edge_index_cpy3_V_8_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_9_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_9_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_9_1 = ap_sync_channel_write_edge_index_cpy3_V_9_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy3_V_9_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy3_V_9_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy3_V_9_3 = ap_sync_channel_write_edge_index_cpy3_V_9_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_0_1 = ap_sync_channel_write_edge_index_cpy4_V_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_0_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_0_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_0_s = ap_sync_channel_write_edge_index_cpy4_V_0_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_10 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_10 = ap_sync_channel_write_edge_index_cpy4_V_10.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_10_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_10_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_10_1 = ap_sync_channel_write_edge_index_cpy4_V_10_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_11 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_11 = ap_sync_channel_write_edge_index_cpy4_V_11.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_11_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_11_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_11_1 = ap_sync_channel_write_edge_index_cpy4_V_11_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_12 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_12 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_12 = ap_sync_channel_write_edge_index_cpy4_V_12.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_12_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_12_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_12_1 = ap_sync_channel_write_edge_index_cpy4_V_12_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_1_1 = ap_sync_channel_write_edge_index_cpy4_V_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_1_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_1_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_1_s = ap_sync_channel_write_edge_index_cpy4_V_1_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_2_1 = ap_sync_channel_write_edge_index_cpy4_V_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_2_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_2_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_2_s = ap_sync_channel_write_edge_index_cpy4_V_2_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_3_1 = ap_sync_channel_write_edge_index_cpy4_V_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_3_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_3_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_3_s = ap_sync_channel_write_edge_index_cpy4_V_3_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_4_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_4_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_4_1 = ap_sync_channel_write_edge_index_cpy4_V_4_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_4_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_4_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_4_s = ap_sync_channel_write_edge_index_cpy4_V_4_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_5_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_5_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_5_1 = ap_sync_channel_write_edge_index_cpy4_V_5_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_5_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_5_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_5_s = ap_sync_channel_write_edge_index_cpy4_V_5_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_6_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_6_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_6_1 = ap_sync_channel_write_edge_index_cpy4_V_6_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_6_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_6_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_6_s = ap_sync_channel_write_edge_index_cpy4_V_6_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_7_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_7_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_7_1 = ap_sync_channel_write_edge_index_cpy4_V_7_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_7_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_7_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_7_s = ap_sync_channel_write_edge_index_cpy4_V_7_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_8_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_8_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_8_1 = ap_sync_channel_write_edge_index_cpy4_V_8_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_8_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_8_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_8_s = ap_sync_channel_write_edge_index_cpy4_V_8_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_9_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_9_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_9_1 = ap_sync_channel_write_edge_index_cpy4_V_9_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_edge_index_cpy4_V_9_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_U0_ap_done.read() & 
             clone_vector_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_edge_index_cpy4_V_9_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_edge_index_cpy4_V_9_s = ap_sync_channel_write_edge_index_cpy4_V_9_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_0_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_0_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_0_0_V = ap_sync_channel_write_layer10_out_0_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_0_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_0_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_0_1_V = ap_sync_channel_write_layer10_out_0_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_0_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_0_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_0_2_V = ap_sync_channel_write_layer10_out_0_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_10_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_10_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_10_0_V = ap_sync_channel_write_layer10_out_10_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_10_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_10_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_10_1_V = ap_sync_channel_write_layer10_out_10_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_10_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_10_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_10_2_V = ap_sync_channel_write_layer10_out_10_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_1_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_1_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_1_0_V = ap_sync_channel_write_layer10_out_1_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_1_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_1_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_1_1_V = ap_sync_channel_write_layer10_out_1_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_1_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_1_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_1_2_V = ap_sync_channel_write_layer10_out_1_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_2_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_2_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_2_0_V = ap_sync_channel_write_layer10_out_2_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_2_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_2_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_2_1_V = ap_sync_channel_write_layer10_out_2_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_2_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_2_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_2_2_V = ap_sync_channel_write_layer10_out_2_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_3_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_3_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_3_0_V = ap_sync_channel_write_layer10_out_3_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_3_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_3_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_3_1_V = ap_sync_channel_write_layer10_out_3_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_3_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_3_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_3_2_V = ap_sync_channel_write_layer10_out_3_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_4_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_4_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_4_0_V = ap_sync_channel_write_layer10_out_4_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_4_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_4_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_4_1_V = ap_sync_channel_write_layer10_out_4_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_4_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_4_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_4_2_V = ap_sync_channel_write_layer10_out_4_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_5_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_5_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_5_0_V = ap_sync_channel_write_layer10_out_5_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_5_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_5_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_5_1_V = ap_sync_channel_write_layer10_out_5_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_5_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_5_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_5_2_V = ap_sync_channel_write_layer10_out_5_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_6_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_6_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_6_0_V = ap_sync_channel_write_layer10_out_6_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_6_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_6_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_6_1_V = ap_sync_channel_write_layer10_out_6_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_6_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_6_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_6_2_V = ap_sync_channel_write_layer10_out_6_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_7_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_7_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_7_0_V = ap_sync_channel_write_layer10_out_7_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_7_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_7_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_7_1_V = ap_sync_channel_write_layer10_out_7_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_7_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_7_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_7_2_V = ap_sync_channel_write_layer10_out_7_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_8_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_8_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_8_0_V = ap_sync_channel_write_layer10_out_8_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_8_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_8_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_8_1_V = ap_sync_channel_write_layer10_out_8_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_8_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_8_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_8_2_V = ap_sync_channel_write_layer10_out_8_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_9_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_9_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_9_0_V = ap_sync_channel_write_layer10_out_9_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_9_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_9_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_9_1_V = ap_sync_channel_write_layer10_out_9_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_9_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_node_compute_lo_U0_ap_done.read() & 
             Loop_node_compute_lo_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_9_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_9_2_V = ap_sync_channel_write_layer10_out_9_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_0_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_0_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_0_0_V = ap_sync_channel_write_layer7_out_0_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_0_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_0_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_0_1_V = ap_sync_channel_write_layer7_out_0_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_0_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_0_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_0_2_V = ap_sync_channel_write_layer7_out_0_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_0_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_0_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_0_3_V = ap_sync_channel_write_layer7_out_0_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_10_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_10_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_10_0_V = ap_sync_channel_write_layer7_out_10_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_10_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_10_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_10_1_V = ap_sync_channel_write_layer7_out_10_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_10_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_10_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_10_2_V = ap_sync_channel_write_layer7_out_10_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_10_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_10_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_10_3_V = ap_sync_channel_write_layer7_out_10_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_11_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_11_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_11_0_V = ap_sync_channel_write_layer7_out_11_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_11_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_11_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_11_1_V = ap_sync_channel_write_layer7_out_11_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_11_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_11_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_11_2_V = ap_sync_channel_write_layer7_out_11_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_11_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_11_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_11_3_V = ap_sync_channel_write_layer7_out_11_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_12_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_12_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_12_0_V = ap_sync_channel_write_layer7_out_12_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_12_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_12_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_12_1_V = ap_sync_channel_write_layer7_out_12_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_12_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_12_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_12_2_V = ap_sync_channel_write_layer7_out_12_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_12_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_12_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_12_3_V = ap_sync_channel_write_layer7_out_12_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_1_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_1_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_1_0_V = ap_sync_channel_write_layer7_out_1_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_1_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_1_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_1_1_V = ap_sync_channel_write_layer7_out_1_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_1_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_1_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_1_2_V = ap_sync_channel_write_layer7_out_1_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_1_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_1_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_1_3_V = ap_sync_channel_write_layer7_out_1_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_2_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_2_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_2_0_V = ap_sync_channel_write_layer7_out_2_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_2_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_2_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_2_1_V = ap_sync_channel_write_layer7_out_2_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_2_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_2_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_2_2_V = ap_sync_channel_write_layer7_out_2_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_2_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_2_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_2_3_V = ap_sync_channel_write_layer7_out_2_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_3_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_3_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_3_0_V = ap_sync_channel_write_layer7_out_3_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_3_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_3_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_3_1_V = ap_sync_channel_write_layer7_out_3_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_3_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_3_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_3_2_V = ap_sync_channel_write_layer7_out_3_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_3_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_3_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_3_3_V = ap_sync_channel_write_layer7_out_3_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_4_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_4_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_4_0_V = ap_sync_channel_write_layer7_out_4_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_4_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_4_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_4_1_V = ap_sync_channel_write_layer7_out_4_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_4_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_4_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_4_2_V = ap_sync_channel_write_layer7_out_4_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_4_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_4_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_4_3_V = ap_sync_channel_write_layer7_out_4_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_5_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_5_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_5_0_V = ap_sync_channel_write_layer7_out_5_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_5_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_5_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_5_1_V = ap_sync_channel_write_layer7_out_5_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_5_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_5_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_5_2_V = ap_sync_channel_write_layer7_out_5_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_5_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_5_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_5_3_V = ap_sync_channel_write_layer7_out_5_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_6_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_6_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_6_0_V = ap_sync_channel_write_layer7_out_6_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_6_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_6_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_6_1_V = ap_sync_channel_write_layer7_out_6_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_6_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_6_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_6_2_V = ap_sync_channel_write_layer7_out_6_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_6_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_6_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_6_3_V = ap_sync_channel_write_layer7_out_6_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_7_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_7_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_7_0_V = ap_sync_channel_write_layer7_out_7_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_7_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_7_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_7_1_V = ap_sync_channel_write_layer7_out_7_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_7_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_7_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_7_2_V = ap_sync_channel_write_layer7_out_7_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_7_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_7_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_7_3_V = ap_sync_channel_write_layer7_out_7_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_8_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_8_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_8_0_V = ap_sync_channel_write_layer7_out_8_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_8_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_8_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_8_1_V = ap_sync_channel_write_layer7_out_8_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_8_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_8_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_8_2_V = ap_sync_channel_write_layer7_out_8_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_8_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_8_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_8_3_V = ap_sync_channel_write_layer7_out_8_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_9_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_9_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_9_0_V = ap_sync_channel_write_layer7_out_9_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_9_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_9_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_9_1_V = ap_sync_channel_write_layer7_out_9_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_9_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_9_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_9_2_V = ap_sync_channel_write_layer7_out_9_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_9_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_compute_lo_1_U0_ap_done.read() & 
             Loop_edge_compute_lo_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_9_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_9_3_V = ap_sync_channel_write_layer7_out_9_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_1 = ap_sync_channel_write_layer7_out_cpy1_V_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_2 = ap_sync_channel_write_layer7_out_cpy1_V_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_3 = ap_sync_channel_write_layer7_out_cpy1_V_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_0_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_4 = ap_sync_channel_write_layer7_out_cpy1_V_0_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_0_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_5 = ap_sync_channel_write_layer7_out_cpy1_V_0_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_0_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_6 = ap_sync_channel_write_layer7_out_cpy1_V_0_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_0_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_7 = ap_sync_channel_write_layer7_out_cpy1_V_0_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_0_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_0_s = ap_sync_channel_write_layer7_out_cpy1_V_0_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10 = ap_sync_channel_write_layer7_out_cpy1_V_10.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_10_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_1 = ap_sync_channel_write_layer7_out_cpy1_V_10_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_10_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_2 = ap_sync_channel_write_layer7_out_cpy1_V_10_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_10_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_3 = ap_sync_channel_write_layer7_out_cpy1_V_10_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_10_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_4 = ap_sync_channel_write_layer7_out_cpy1_V_10_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_10_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_5 = ap_sync_channel_write_layer7_out_cpy1_V_10_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_10_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_6 = ap_sync_channel_write_layer7_out_cpy1_V_10_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_10_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_10_7 = ap_sync_channel_write_layer7_out_cpy1_V_10_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11 = ap_sync_channel_write_layer7_out_cpy1_V_11.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_11_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_1 = ap_sync_channel_write_layer7_out_cpy1_V_11_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_11_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_2 = ap_sync_channel_write_layer7_out_cpy1_V_11_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_11_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_3 = ap_sync_channel_write_layer7_out_cpy1_V_11_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_11_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_4 = ap_sync_channel_write_layer7_out_cpy1_V_11_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_11_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_5 = ap_sync_channel_write_layer7_out_cpy1_V_11_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_11_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_6 = ap_sync_channel_write_layer7_out_cpy1_V_11_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_11_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_11_7 = ap_sync_channel_write_layer7_out_cpy1_V_11_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_12 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12 = ap_sync_channel_write_layer7_out_cpy1_V_12.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_12_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_1 = ap_sync_channel_write_layer7_out_cpy1_V_12_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_12_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_2 = ap_sync_channel_write_layer7_out_cpy1_V_12_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_12_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_3 = ap_sync_channel_write_layer7_out_cpy1_V_12_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_12_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_4 = ap_sync_channel_write_layer7_out_cpy1_V_12_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_12_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_5 = ap_sync_channel_write_layer7_out_cpy1_V_12_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_12_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_6 = ap_sync_channel_write_layer7_out_cpy1_V_12_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_12_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_12_7 = ap_sync_channel_write_layer7_out_cpy1_V_12_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_1 = ap_sync_channel_write_layer7_out_cpy1_V_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_2 = ap_sync_channel_write_layer7_out_cpy1_V_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_3 = ap_sync_channel_write_layer7_out_cpy1_V_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_1_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_4 = ap_sync_channel_write_layer7_out_cpy1_V_1_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_1_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_5 = ap_sync_channel_write_layer7_out_cpy1_V_1_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_1_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_6 = ap_sync_channel_write_layer7_out_cpy1_V_1_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_1_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_7 = ap_sync_channel_write_layer7_out_cpy1_V_1_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_1_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_1_s = ap_sync_channel_write_layer7_out_cpy1_V_1_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_1 = ap_sync_channel_write_layer7_out_cpy1_V_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_2 = ap_sync_channel_write_layer7_out_cpy1_V_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_3 = ap_sync_channel_write_layer7_out_cpy1_V_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_2_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_4 = ap_sync_channel_write_layer7_out_cpy1_V_2_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_2_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_5 = ap_sync_channel_write_layer7_out_cpy1_V_2_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_2_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_6 = ap_sync_channel_write_layer7_out_cpy1_V_2_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_2_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_7 = ap_sync_channel_write_layer7_out_cpy1_V_2_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_2_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_2_s = ap_sync_channel_write_layer7_out_cpy1_V_2_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_1 = ap_sync_channel_write_layer7_out_cpy1_V_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_2 = ap_sync_channel_write_layer7_out_cpy1_V_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_3 = ap_sync_channel_write_layer7_out_cpy1_V_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_3_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_4 = ap_sync_channel_write_layer7_out_cpy1_V_3_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_3_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_5 = ap_sync_channel_write_layer7_out_cpy1_V_3_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_3_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_6 = ap_sync_channel_write_layer7_out_cpy1_V_3_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_3_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_7 = ap_sync_channel_write_layer7_out_cpy1_V_3_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_3_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_3_s = ap_sync_channel_write_layer7_out_cpy1_V_3_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_4_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_1 = ap_sync_channel_write_layer7_out_cpy1_V_4_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_4_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_2 = ap_sync_channel_write_layer7_out_cpy1_V_4_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_4_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_3 = ap_sync_channel_write_layer7_out_cpy1_V_4_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_4_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_4 = ap_sync_channel_write_layer7_out_cpy1_V_4_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_4_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_5 = ap_sync_channel_write_layer7_out_cpy1_V_4_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_4_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_6 = ap_sync_channel_write_layer7_out_cpy1_V_4_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_4_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_7 = ap_sync_channel_write_layer7_out_cpy1_V_4_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_4_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_4_s = ap_sync_channel_write_layer7_out_cpy1_V_4_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_5_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_1 = ap_sync_channel_write_layer7_out_cpy1_V_5_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_5_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_2 = ap_sync_channel_write_layer7_out_cpy1_V_5_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_5_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_3 = ap_sync_channel_write_layer7_out_cpy1_V_5_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_5_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_4 = ap_sync_channel_write_layer7_out_cpy1_V_5_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_5_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_5 = ap_sync_channel_write_layer7_out_cpy1_V_5_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_5_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_6 = ap_sync_channel_write_layer7_out_cpy1_V_5_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_5_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_7 = ap_sync_channel_write_layer7_out_cpy1_V_5_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_5_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_5_s = ap_sync_channel_write_layer7_out_cpy1_V_5_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_6_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_1 = ap_sync_channel_write_layer7_out_cpy1_V_6_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_6_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_2 = ap_sync_channel_write_layer7_out_cpy1_V_6_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_6_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_3 = ap_sync_channel_write_layer7_out_cpy1_V_6_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_6_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_4 = ap_sync_channel_write_layer7_out_cpy1_V_6_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_6_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_5 = ap_sync_channel_write_layer7_out_cpy1_V_6_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_6_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_6 = ap_sync_channel_write_layer7_out_cpy1_V_6_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_6_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_7 = ap_sync_channel_write_layer7_out_cpy1_V_6_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_6_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_6_s = ap_sync_channel_write_layer7_out_cpy1_V_6_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_7_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_1 = ap_sync_channel_write_layer7_out_cpy1_V_7_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_7_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_2 = ap_sync_channel_write_layer7_out_cpy1_V_7_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_7_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_3 = ap_sync_channel_write_layer7_out_cpy1_V_7_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_7_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_4 = ap_sync_channel_write_layer7_out_cpy1_V_7_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_7_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_5 = ap_sync_channel_write_layer7_out_cpy1_V_7_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_7_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_6 = ap_sync_channel_write_layer7_out_cpy1_V_7_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_7_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_7 = ap_sync_channel_write_layer7_out_cpy1_V_7_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_7_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_7_s = ap_sync_channel_write_layer7_out_cpy1_V_7_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_8_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_1 = ap_sync_channel_write_layer7_out_cpy1_V_8_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_8_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_2 = ap_sync_channel_write_layer7_out_cpy1_V_8_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_8_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_3 = ap_sync_channel_write_layer7_out_cpy1_V_8_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_8_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_4 = ap_sync_channel_write_layer7_out_cpy1_V_8_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_8_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_5 = ap_sync_channel_write_layer7_out_cpy1_V_8_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_8_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_6 = ap_sync_channel_write_layer7_out_cpy1_V_8_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_8_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_7 = ap_sync_channel_write_layer7_out_cpy1_V_8_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_8_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_8_s = ap_sync_channel_write_layer7_out_cpy1_V_8_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_9_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_1 = ap_sync_channel_write_layer7_out_cpy1_V_9_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_9_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_2 = ap_sync_channel_write_layer7_out_cpy1_V_9_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_9_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_3 = ap_sync_channel_write_layer7_out_cpy1_V_9_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_9_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_4 = ap_sync_channel_write_layer7_out_cpy1_V_9_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_9_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_5 = ap_sync_channel_write_layer7_out_cpy1_V_9_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_9_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_6 = ap_sync_channel_write_layer7_out_cpy1_V_9_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_9_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_7 = ap_sync_channel_write_layer7_out_cpy1_V_9_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy1_V_9_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy1_V_9_s = ap_sync_channel_write_layer7_out_cpy1_V_9_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_0_1 = ap_sync_channel_write_layer7_out_cpy2_V_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_0_2 = ap_sync_channel_write_layer7_out_cpy2_V_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_0_3 = ap_sync_channel_write_layer7_out_cpy2_V_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_0_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_0_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_0_s = ap_sync_channel_write_layer7_out_cpy2_V_0_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_10 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_10 = ap_sync_channel_write_layer7_out_cpy2_V_10.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_10_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_10_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_10_1 = ap_sync_channel_write_layer7_out_cpy2_V_10_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_10_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_10_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_10_2 = ap_sync_channel_write_layer7_out_cpy2_V_10_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_10_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_10_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_10_3 = ap_sync_channel_write_layer7_out_cpy2_V_10_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_11 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_11 = ap_sync_channel_write_layer7_out_cpy2_V_11.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_11_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_11_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_11_1 = ap_sync_channel_write_layer7_out_cpy2_V_11_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_11_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_11_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_11_2 = ap_sync_channel_write_layer7_out_cpy2_V_11_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_11_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_11_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_11_3 = ap_sync_channel_write_layer7_out_cpy2_V_11_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_12 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_12 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_12 = ap_sync_channel_write_layer7_out_cpy2_V_12.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_12_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_12_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_12_1 = ap_sync_channel_write_layer7_out_cpy2_V_12_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_12_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_12_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_12_2 = ap_sync_channel_write_layer7_out_cpy2_V_12_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_12_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_12_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_12_3 = ap_sync_channel_write_layer7_out_cpy2_V_12_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_1_1 = ap_sync_channel_write_layer7_out_cpy2_V_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_1_2 = ap_sync_channel_write_layer7_out_cpy2_V_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_1_3 = ap_sync_channel_write_layer7_out_cpy2_V_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_1_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_1_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_1_s = ap_sync_channel_write_layer7_out_cpy2_V_1_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_2_1 = ap_sync_channel_write_layer7_out_cpy2_V_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_2_2 = ap_sync_channel_write_layer7_out_cpy2_V_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_2_3 = ap_sync_channel_write_layer7_out_cpy2_V_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_2_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_2_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_2_s = ap_sync_channel_write_layer7_out_cpy2_V_2_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_3_1 = ap_sync_channel_write_layer7_out_cpy2_V_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_3_2 = ap_sync_channel_write_layer7_out_cpy2_V_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_3_3 = ap_sync_channel_write_layer7_out_cpy2_V_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_3_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_3_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_3_s = ap_sync_channel_write_layer7_out_cpy2_V_3_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_4_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_4_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_4_1 = ap_sync_channel_write_layer7_out_cpy2_V_4_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_4_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_4_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_4_2 = ap_sync_channel_write_layer7_out_cpy2_V_4_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_4_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_4_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_4_3 = ap_sync_channel_write_layer7_out_cpy2_V_4_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_4_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_4_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_4_s = ap_sync_channel_write_layer7_out_cpy2_V_4_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_5_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_5_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_5_1 = ap_sync_channel_write_layer7_out_cpy2_V_5_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_5_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_5_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_5_2 = ap_sync_channel_write_layer7_out_cpy2_V_5_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_5_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_5_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_5_3 = ap_sync_channel_write_layer7_out_cpy2_V_5_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_5_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_5_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_5_s = ap_sync_channel_write_layer7_out_cpy2_V_5_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_6_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_6_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_6_1 = ap_sync_channel_write_layer7_out_cpy2_V_6_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_6_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_6_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_6_2 = ap_sync_channel_write_layer7_out_cpy2_V_6_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_6_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_6_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_6_3 = ap_sync_channel_write_layer7_out_cpy2_V_6_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_6_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_6_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_6_s = ap_sync_channel_write_layer7_out_cpy2_V_6_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_7_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_7_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_7_1 = ap_sync_channel_write_layer7_out_cpy2_V_7_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_7_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_7_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_7_2 = ap_sync_channel_write_layer7_out_cpy2_V_7_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_7_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_7_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_7_3 = ap_sync_channel_write_layer7_out_cpy2_V_7_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_7_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_7_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_7_s = ap_sync_channel_write_layer7_out_cpy2_V_7_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_8_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_8_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_8_1 = ap_sync_channel_write_layer7_out_cpy2_V_8_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_8_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_8_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_8_2 = ap_sync_channel_write_layer7_out_cpy2_V_8_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_8_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_8_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_8_3 = ap_sync_channel_write_layer7_out_cpy2_V_8_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_8_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_8_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_8_s = ap_sync_channel_write_layer7_out_cpy2_V_8_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_9_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_9_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_9_1 = ap_sync_channel_write_layer7_out_cpy2_V_9_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_9_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_9_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_9_2 = ap_sync_channel_write_layer7_out_cpy2_V_9_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_9_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_9_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_9_3 = ap_sync_channel_write_layer7_out_cpy2_V_9_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_cpy2_V_9_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_2_U0_ap_done.read() & 
             clone_vector_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_9_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_cpy2_V_9_s = ap_sync_channel_write_layer7_out_cpy2_V_9_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_10_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_10_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_10_0_V = ap_sync_channel_write_layer9_out_10_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_10_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_10_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_10_1_V = ap_sync_channel_write_layer9_out_10_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_10_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_10_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_10_2_V = ap_sync_channel_write_layer9_out_10_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_10_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_10_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_10_3_V = ap_sync_channel_write_layer9_out_10_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_1_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_1_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_1_0_V = ap_sync_channel_write_layer9_out_1_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_1_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_1_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_1_1_V = ap_sync_channel_write_layer9_out_1_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_1_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_1_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_1_2_V = ap_sync_channel_write_layer9_out_1_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_1_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_1_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_1_3_V = ap_sync_channel_write_layer9_out_1_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_2_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_2_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_2_0_V = ap_sync_channel_write_layer9_out_2_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_2_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_2_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_2_1_V = ap_sync_channel_write_layer9_out_2_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_2_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_2_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_2_2_V = ap_sync_channel_write_layer9_out_2_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_2_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_2_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_2_3_V = ap_sync_channel_write_layer9_out_2_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_3_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_3_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_3_0_V = ap_sync_channel_write_layer9_out_3_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_3_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_3_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_3_1_V = ap_sync_channel_write_layer9_out_3_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_3_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_3_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_3_2_V = ap_sync_channel_write_layer9_out_3_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_3_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_3_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_3_3_V = ap_sync_channel_write_layer9_out_3_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_4_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_4_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_4_0_V = ap_sync_channel_write_layer9_out_4_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_4_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_4_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_4_1_V = ap_sync_channel_write_layer9_out_4_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_4_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_4_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_4_2_V = ap_sync_channel_write_layer9_out_4_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_4_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_4_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_4_3_V = ap_sync_channel_write_layer9_out_4_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_5_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_5_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_5_0_V = ap_sync_channel_write_layer9_out_5_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_5_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_5_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_5_1_V = ap_sync_channel_write_layer9_out_5_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_5_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_5_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_5_2_V = ap_sync_channel_write_layer9_out_5_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_5_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_5_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_5_3_V = ap_sync_channel_write_layer9_out_5_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_6_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_6_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_6_0_V = ap_sync_channel_write_layer9_out_6_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_6_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_6_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_6_1_V = ap_sync_channel_write_layer9_out_6_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_6_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_6_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_6_2_V = ap_sync_channel_write_layer9_out_6_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_6_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_6_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_6_3_V = ap_sync_channel_write_layer9_out_6_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_7_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_7_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_7_0_V = ap_sync_channel_write_layer9_out_7_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_7_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_7_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_7_1_V = ap_sync_channel_write_layer9_out_7_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_7_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_7_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_7_2_V = ap_sync_channel_write_layer9_out_7_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_7_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_7_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_7_3_V = ap_sync_channel_write_layer9_out_7_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_8_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_8_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_8_0_V = ap_sync_channel_write_layer9_out_8_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_8_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_8_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_8_1_V = ap_sync_channel_write_layer9_out_8_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_8_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_8_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_8_2_V = ap_sync_channel_write_layer9_out_8_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_8_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_8_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_8_3_V = ap_sync_channel_write_layer9_out_8_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_9_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_9_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_9_0_V = ap_sync_channel_write_layer9_out_9_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_9_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_9_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_9_1_V = ap_sync_channel_write_layer9_out_9_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_9_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_9_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_9_2_V = ap_sync_channel_write_layer9_out_9_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_9_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_out_loop_proc_U0_ap_done.read() & 
             Loop_out_loop_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_9_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_9_3_V = ap_sync_channel_write_layer9_out_9_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_0 = ap_sync_channel_write_node_attr_1D_r_mat_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_0_1 = ap_sync_channel_write_node_attr_1D_r_mat_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_0_2 = ap_sync_channel_write_node_attr_1D_r_mat_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_0_3 = ap_sync_channel_write_node_attr_1D_r_mat_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_0_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_0_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_0_4 = ap_sync_channel_write_node_attr_1D_r_mat_0_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_0_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_0_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_0_5 = ap_sync_channel_write_node_attr_1D_r_mat_0_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1 = ap_sync_channel_write_node_attr_1D_r_mat_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_1 = ap_sync_channel_write_node_attr_1D_r_mat_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_10 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_10 = ap_sync_channel_write_node_attr_1D_r_mat_1_10.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_11 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_11 = ap_sync_channel_write_node_attr_1D_r_mat_1_11.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_12 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_12 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_12 = ap_sync_channel_write_node_attr_1D_r_mat_1_12.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_13 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_13 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_13 = ap_sync_channel_write_node_attr_1D_r_mat_1_13.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_14 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_14 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_14 = ap_sync_channel_write_node_attr_1D_r_mat_1_14.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_15 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_15 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_15 = ap_sync_channel_write_node_attr_1D_r_mat_1_15.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_16 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_16 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_16 = ap_sync_channel_write_node_attr_1D_r_mat_1_16.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_17 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_17 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_17 = ap_sync_channel_write_node_attr_1D_r_mat_1_17.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_18 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_18 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_18 = ap_sync_channel_write_node_attr_1D_r_mat_1_18.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_19 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_19 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_19 = ap_sync_channel_write_node_attr_1D_r_mat_1_19.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_2 = ap_sync_channel_write_node_attr_1D_r_mat_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_20 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_20 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_20 = ap_sync_channel_write_node_attr_1D_r_mat_1_20.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_21 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_21 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_21 = ap_sync_channel_write_node_attr_1D_r_mat_1_21.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_22 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_22 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_22 = ap_sync_channel_write_node_attr_1D_r_mat_1_22.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_23 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_23 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_23 = ap_sync_channel_write_node_attr_1D_r_mat_1_23.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_3 = ap_sync_channel_write_node_attr_1D_r_mat_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_4 = ap_sync_channel_write_node_attr_1D_r_mat_1_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_5 = ap_sync_channel_write_node_attr_1D_r_mat_1_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_6 = ap_sync_channel_write_node_attr_1D_r_mat_1_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_7 = ap_sync_channel_write_node_attr_1D_r_mat_1_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_8 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_8 = ap_sync_channel_write_node_attr_1D_r_mat_1_8.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_1_9 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_9 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_1_9 = ap_sync_channel_write_node_attr_1D_r_mat_1_9.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_2 = ap_sync_channel_write_node_attr_1D_r_mat_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_2_1 = ap_sync_channel_write_node_attr_1D_r_mat_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_2_2 = ap_sync_channel_write_node_attr_1D_r_mat_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_2_3 = ap_sync_channel_write_node_attr_1D_r_mat_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_2_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_2_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_2_4 = ap_sync_channel_write_node_attr_1D_r_mat_2_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_2_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_2_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_2_5 = ap_sync_channel_write_node_attr_1D_r_mat_2_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_3 = ap_sync_channel_write_node_attr_1D_r_mat_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_3_1 = ap_sync_channel_write_node_attr_1D_r_mat_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_3_2 = ap_sync_channel_write_node_attr_1D_r_mat_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_3_3 = ap_sync_channel_write_node_attr_1D_r_mat_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_3_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_3_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_3_4 = ap_sync_channel_write_node_attr_1D_r_mat_3_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_3_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_3_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_3_5 = ap_sync_channel_write_node_attr_1D_r_mat_3_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_4 = ap_sync_channel_write_node_attr_1D_r_mat_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_4_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_4_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_4_1 = ap_sync_channel_write_node_attr_1D_r_mat_4_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_4_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_4_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_4_2 = ap_sync_channel_write_node_attr_1D_r_mat_4_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_4_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_4_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_4_3 = ap_sync_channel_write_node_attr_1D_r_mat_4_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_4_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_4_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_4_4 = ap_sync_channel_write_node_attr_1D_r_mat_4_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_4_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_4_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_4_5 = ap_sync_channel_write_node_attr_1D_r_mat_4_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_5 = ap_sync_channel_write_node_attr_1D_r_mat_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_5_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_5_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_5_1 = ap_sync_channel_write_node_attr_1D_r_mat_5_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_5_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_5_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_5_2 = ap_sync_channel_write_node_attr_1D_r_mat_5_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_5_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_5_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_5_3 = ap_sync_channel_write_node_attr_1D_r_mat_5_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_5_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_5_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_5_4 = ap_sync_channel_write_node_attr_1D_r_mat_5_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_5_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_5_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_5_5 = ap_sync_channel_write_node_attr_1D_r_mat_5_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_6 = ap_sync_channel_write_node_attr_1D_r_mat_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_6_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_6_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_6_1 = ap_sync_channel_write_node_attr_1D_r_mat_6_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_6_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_6_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_6_2 = ap_sync_channel_write_node_attr_1D_r_mat_6_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_6_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_6_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_6_3 = ap_sync_channel_write_node_attr_1D_r_mat_6_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_6_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_6_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_6_4 = ap_sync_channel_write_node_attr_1D_r_mat_6_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_6_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_6_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_6_5 = ap_sync_channel_write_node_attr_1D_r_mat_6_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_7 = ap_sync_channel_write_node_attr_1D_r_mat_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_7_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_7_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_7_1 = ap_sync_channel_write_node_attr_1D_r_mat_7_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_7_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_7_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_7_2 = ap_sync_channel_write_node_attr_1D_r_mat_7_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_7_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_7_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_7_3 = ap_sync_channel_write_node_attr_1D_r_mat_7_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_7_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_7_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_7_4 = ap_sync_channel_write_node_attr_1D_r_mat_7_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_7_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_7_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_7_5 = ap_sync_channel_write_node_attr_1D_r_mat_7_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_8 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_8 = ap_sync_channel_write_node_attr_1D_r_mat_8.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_8_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_8_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_8_1 = ap_sync_channel_write_node_attr_1D_r_mat_8_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_8_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_8_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_8_2 = ap_sync_channel_write_node_attr_1D_r_mat_8_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_8_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_8_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_8_3 = ap_sync_channel_write_node_attr_1D_r_mat_8_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_8_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_8_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_8_4 = ap_sync_channel_write_node_attr_1D_r_mat_8_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_8_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_8_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_8_5 = ap_sync_channel_write_node_attr_1D_r_mat_8_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_9 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_9 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_9 = ap_sync_channel_write_node_attr_1D_r_mat_9.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_9_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_9_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_9_1 = ap_sync_channel_write_node_attr_1D_r_mat_9_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_9_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_9_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_9_2 = ap_sync_channel_write_node_attr_1D_r_mat_9_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_9_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_9_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_9_3 = ap_sync_channel_write_node_attr_1D_r_mat_9_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_9_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_9_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_9_4 = ap_sync_channel_write_node_attr_1D_r_mat_9_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_r_mat_9_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_9_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_r_mat_9_5 = ap_sync_channel_write_node_attr_1D_r_mat_9_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_0 = ap_sync_channel_write_node_attr_1D_s_mat_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_0_1 = ap_sync_channel_write_node_attr_1D_s_mat_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_0_2 = ap_sync_channel_write_node_attr_1D_s_mat_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_0_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_0_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_0_3 = ap_sync_channel_write_node_attr_1D_s_mat_0_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_0_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_0_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_0_4 = ap_sync_channel_write_node_attr_1D_s_mat_0_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_0_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_0_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_0_5 = ap_sync_channel_write_node_attr_1D_s_mat_0_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1 = ap_sync_channel_write_node_attr_1D_s_mat_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_1 = ap_sync_channel_write_node_attr_1D_s_mat_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_10 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_10 = ap_sync_channel_write_node_attr_1D_s_mat_1_10.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_11 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_11 = ap_sync_channel_write_node_attr_1D_s_mat_1_11.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_12 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_12 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_12 = ap_sync_channel_write_node_attr_1D_s_mat_1_12.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_13 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_13 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_13 = ap_sync_channel_write_node_attr_1D_s_mat_1_13.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_14 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_14 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_14 = ap_sync_channel_write_node_attr_1D_s_mat_1_14.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_15 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_15 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_15 = ap_sync_channel_write_node_attr_1D_s_mat_1_15.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_16 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_16 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_16 = ap_sync_channel_write_node_attr_1D_s_mat_1_16.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_17 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_17 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_17 = ap_sync_channel_write_node_attr_1D_s_mat_1_17.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_18 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_18 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_18 = ap_sync_channel_write_node_attr_1D_s_mat_1_18.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_19 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_19 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_19 = ap_sync_channel_write_node_attr_1D_s_mat_1_19.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_2 = ap_sync_channel_write_node_attr_1D_s_mat_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_20 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_20 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_20 = ap_sync_channel_write_node_attr_1D_s_mat_1_20.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_21 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_21 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_21 = ap_sync_channel_write_node_attr_1D_s_mat_1_21.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_22 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_22 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_22 = ap_sync_channel_write_node_attr_1D_s_mat_1_22.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_23 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_23 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_23 = ap_sync_channel_write_node_attr_1D_s_mat_1_23.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_3 = ap_sync_channel_write_node_attr_1D_s_mat_1_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_4 = ap_sync_channel_write_node_attr_1D_s_mat_1_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_5 = ap_sync_channel_write_node_attr_1D_s_mat_1_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_6 = ap_sync_channel_write_node_attr_1D_s_mat_1_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_7 = ap_sync_channel_write_node_attr_1D_s_mat_1_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_8 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_8 = ap_sync_channel_write_node_attr_1D_s_mat_1_8.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_1_9 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_9 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_1_9 = ap_sync_channel_write_node_attr_1D_s_mat_1_9.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_2 = ap_sync_channel_write_node_attr_1D_s_mat_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_2_1 = ap_sync_channel_write_node_attr_1D_s_mat_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_2_2 = ap_sync_channel_write_node_attr_1D_s_mat_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_2_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_2_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_2_3 = ap_sync_channel_write_node_attr_1D_s_mat_2_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_2_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_2_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_2_4 = ap_sync_channel_write_node_attr_1D_s_mat_2_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_2_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_2_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_2_5 = ap_sync_channel_write_node_attr_1D_s_mat_2_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_3 = ap_sync_channel_write_node_attr_1D_s_mat_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_3_1 = ap_sync_channel_write_node_attr_1D_s_mat_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_3_2 = ap_sync_channel_write_node_attr_1D_s_mat_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_3_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_3_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_3_3 = ap_sync_channel_write_node_attr_1D_s_mat_3_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_3_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_3_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_3_4 = ap_sync_channel_write_node_attr_1D_s_mat_3_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_3_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_3_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_3_5 = ap_sync_channel_write_node_attr_1D_s_mat_3_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_4 = ap_sync_channel_write_node_attr_1D_s_mat_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_4_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_4_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_4_1 = ap_sync_channel_write_node_attr_1D_s_mat_4_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_4_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_4_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_4_2 = ap_sync_channel_write_node_attr_1D_s_mat_4_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_4_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_4_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_4_3 = ap_sync_channel_write_node_attr_1D_s_mat_4_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_4_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_4_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_4_4 = ap_sync_channel_write_node_attr_1D_s_mat_4_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_4_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_4_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_4_5 = ap_sync_channel_write_node_attr_1D_s_mat_4_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_5 = ap_sync_channel_write_node_attr_1D_s_mat_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_5_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_5_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_5_1 = ap_sync_channel_write_node_attr_1D_s_mat_5_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_5_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_5_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_5_2 = ap_sync_channel_write_node_attr_1D_s_mat_5_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_5_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_5_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_5_3 = ap_sync_channel_write_node_attr_1D_s_mat_5_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_5_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_5_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_5_4 = ap_sync_channel_write_node_attr_1D_s_mat_5_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_5_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_5_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_5_5 = ap_sync_channel_write_node_attr_1D_s_mat_5_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_6 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_6 = ap_sync_channel_write_node_attr_1D_s_mat_6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_6_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_6_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_6_1 = ap_sync_channel_write_node_attr_1D_s_mat_6_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_6_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_6_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_6_2 = ap_sync_channel_write_node_attr_1D_s_mat_6_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_6_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_6_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_6_3 = ap_sync_channel_write_node_attr_1D_s_mat_6_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_6_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_6_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_6_4 = ap_sync_channel_write_node_attr_1D_s_mat_6_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_6_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_6_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_6_5 = ap_sync_channel_write_node_attr_1D_s_mat_6_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_7 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_7 = ap_sync_channel_write_node_attr_1D_s_mat_7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_7_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_7_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_7_1 = ap_sync_channel_write_node_attr_1D_s_mat_7_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_7_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_7_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_7_2 = ap_sync_channel_write_node_attr_1D_s_mat_7_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_7_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_7_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_7_3 = ap_sync_channel_write_node_attr_1D_s_mat_7_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_7_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_7_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_7_4 = ap_sync_channel_write_node_attr_1D_s_mat_7_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_7_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_7_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_7_5 = ap_sync_channel_write_node_attr_1D_s_mat_7_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_8 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_8 = ap_sync_channel_write_node_attr_1D_s_mat_8.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_8_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_8_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_8_1 = ap_sync_channel_write_node_attr_1D_s_mat_8_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_8_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_8_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_8_2 = ap_sync_channel_write_node_attr_1D_s_mat_8_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_8_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_8_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_8_3 = ap_sync_channel_write_node_attr_1D_s_mat_8_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_8_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_8_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_8_4 = ap_sync_channel_write_node_attr_1D_s_mat_8_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_8_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_8_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_8_5 = ap_sync_channel_write_node_attr_1D_s_mat_8_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_9 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_9 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_9 = ap_sync_channel_write_node_attr_1D_s_mat_9.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_9_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_9_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_9_1 = ap_sync_channel_write_node_attr_1D_s_mat_9_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_9_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_U0_ap_done.read() & 
             Loop_edge_choose_ver_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_9_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_9_2 = ap_sync_channel_write_node_attr_1D_s_mat_9_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_9_3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_9_3 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_9_3 = ap_sync_channel_write_node_attr_1D_s_mat_9_3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_9_4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_9_4 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_9_4 = ap_sync_channel_write_node_attr_1D_s_mat_9_4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_1D_s_mat_9_5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_edge_choose_ver_1_U0_ap_done.read() & 
             Loop_edge_choose_ver_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_9_5 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_1D_s_mat_9_5 = ap_sync_channel_write_node_attr_1D_s_mat_9_5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_0_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_0_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_0_0 = ap_sync_channel_write_node_attr_cpy1_V_0_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_0_1 = ap_sync_channel_write_node_attr_cpy1_V_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_0_2 = ap_sync_channel_write_node_attr_cpy1_V_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_10_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_10_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_10_1 = ap_sync_channel_write_node_attr_cpy1_V_10_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_10_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_10_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_10_2 = ap_sync_channel_write_node_attr_cpy1_V_10_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_10_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_10_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_10_s = ap_sync_channel_write_node_attr_cpy1_V_10_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_1_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_1_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_1_0 = ap_sync_channel_write_node_attr_cpy1_V_1_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_1_1 = ap_sync_channel_write_node_attr_cpy1_V_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_1_2 = ap_sync_channel_write_node_attr_cpy1_V_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_2_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_2_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_2_0 = ap_sync_channel_write_node_attr_cpy1_V_2_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_2_1 = ap_sync_channel_write_node_attr_cpy1_V_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_2_2 = ap_sync_channel_write_node_attr_cpy1_V_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_3_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_3_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_3_0 = ap_sync_channel_write_node_attr_cpy1_V_3_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_3_1 = ap_sync_channel_write_node_attr_cpy1_V_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_3_2 = ap_sync_channel_write_node_attr_cpy1_V_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_4_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_4_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_4_0 = ap_sync_channel_write_node_attr_cpy1_V_4_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_4_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_4_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_4_1 = ap_sync_channel_write_node_attr_cpy1_V_4_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_4_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_4_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_4_2 = ap_sync_channel_write_node_attr_cpy1_V_4_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_5_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_5_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_5_0 = ap_sync_channel_write_node_attr_cpy1_V_5_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_5_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_5_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_5_1 = ap_sync_channel_write_node_attr_cpy1_V_5_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_5_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_5_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_5_2 = ap_sync_channel_write_node_attr_cpy1_V_5_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_6_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_6_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_6_0 = ap_sync_channel_write_node_attr_cpy1_V_6_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_6_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_6_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_6_1 = ap_sync_channel_write_node_attr_cpy1_V_6_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_6_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_6_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_6_2 = ap_sync_channel_write_node_attr_cpy1_V_6_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_7_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_7_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_7_0 = ap_sync_channel_write_node_attr_cpy1_V_7_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_7_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_7_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_7_1 = ap_sync_channel_write_node_attr_cpy1_V_7_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_7_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_7_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_7_2 = ap_sync_channel_write_node_attr_cpy1_V_7_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_8_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_8_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_8_0 = ap_sync_channel_write_node_attr_cpy1_V_8_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_8_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_8_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_8_1 = ap_sync_channel_write_node_attr_cpy1_V_8_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_8_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_8_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_8_2 = ap_sync_channel_write_node_attr_cpy1_V_8_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_9_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_9_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_9_0 = ap_sync_channel_write_node_attr_cpy1_V_9_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_9_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_9_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_9_1 = ap_sync_channel_write_node_attr_cpy1_V_9_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy1_V_9_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy1_V_9_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy1_V_9_2 = ap_sync_channel_write_node_attr_cpy1_V_9_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_0_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_0_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_0_0 = ap_sync_channel_write_node_attr_cpy2_V_0_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_0_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_0_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_0_1 = ap_sync_channel_write_node_attr_cpy2_V_0_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_0_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_0_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_0_2 = ap_sync_channel_write_node_attr_cpy2_V_0_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_10_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_10_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_10_1 = ap_sync_channel_write_node_attr_cpy2_V_10_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_10_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_10_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_10_2 = ap_sync_channel_write_node_attr_cpy2_V_10_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_10_s = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_10_s = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_10_s = ap_sync_channel_write_node_attr_cpy2_V_10_s.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_1_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_1_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_1_0 = ap_sync_channel_write_node_attr_cpy2_V_1_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_1_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_1_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_1_1 = ap_sync_channel_write_node_attr_cpy2_V_1_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_1_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_1_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_1_2 = ap_sync_channel_write_node_attr_cpy2_V_1_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_2_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_2_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_2_0 = ap_sync_channel_write_node_attr_cpy2_V_2_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_2_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_2_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_2_1 = ap_sync_channel_write_node_attr_cpy2_V_2_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_2_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_2_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_2_2 = ap_sync_channel_write_node_attr_cpy2_V_2_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_3_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_3_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_3_0 = ap_sync_channel_write_node_attr_cpy2_V_3_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_3_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_3_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_3_1 = ap_sync_channel_write_node_attr_cpy2_V_3_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_3_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_3_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_3_2 = ap_sync_channel_write_node_attr_cpy2_V_3_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_4_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_4_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_4_0 = ap_sync_channel_write_node_attr_cpy2_V_4_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_4_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_4_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_4_1 = ap_sync_channel_write_node_attr_cpy2_V_4_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_4_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_4_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_4_2 = ap_sync_channel_write_node_attr_cpy2_V_4_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_5_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_5_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_5_0 = ap_sync_channel_write_node_attr_cpy2_V_5_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_5_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_5_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_5_1 = ap_sync_channel_write_node_attr_cpy2_V_5_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_5_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_5_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_5_2 = ap_sync_channel_write_node_attr_cpy2_V_5_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_6_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_6_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_6_0 = ap_sync_channel_write_node_attr_cpy2_V_6_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_6_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_6_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_6_1 = ap_sync_channel_write_node_attr_cpy2_V_6_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_6_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_6_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_6_2 = ap_sync_channel_write_node_attr_cpy2_V_6_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_7_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_7_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_7_0 = ap_sync_channel_write_node_attr_cpy2_V_7_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_7_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_7_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_7_1 = ap_sync_channel_write_node_attr_cpy2_V_7_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_7_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_7_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_7_2 = ap_sync_channel_write_node_attr_cpy2_V_7_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_8_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_8_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_8_0 = ap_sync_channel_write_node_attr_cpy2_V_8_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_8_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_8_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_8_1 = ap_sync_channel_write_node_attr_cpy2_V_8_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_8_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_8_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_8_2 = ap_sync_channel_write_node_attr_cpy2_V_8_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_9_0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_9_0 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_9_0 = ap_sync_channel_write_node_attr_cpy2_V_9_0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_9_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_9_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_9_1 = ap_sync_channel_write_node_attr_cpy2_V_9_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_node_attr_cpy2_V_9_2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (clone_vector_3_U0_ap_done.read() & 
             clone_vector_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_node_attr_cpy2_V_9_2 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_node_attr_cpy2_V_9_2 = ap_sync_channel_write_node_attr_cpy2_V_9_2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_clone_vector_1_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_clone_vector_1_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_clone_vector_1_U0_ap_ready = ap_sync_clone_vector_1_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_clone_vector_3_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_clone_vector_3_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_clone_vector_3_U0_ap_ready = ap_sync_clone_vector_3_U0_ap_ready.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, clone_vector_1_U0_ap_ready.read()))) {
        clone_vector_1_U0_ap_ready_count = (!clone_vector_1_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(clone_vector_1_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, clone_vector_1_U0_ap_ready.read()))) {
        clone_vector_1_U0_ap_ready_count = (!clone_vector_1_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(clone_vector_1_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, clone_vector_3_U0_ap_ready.read()))) {
        clone_vector_3_U0_ap_ready_count = (!clone_vector_3_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(clone_vector_3_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, clone_vector_3_U0_ap_ready.read()))) {
        clone_vector_3_U0_ap_ready_count = (!clone_vector_3_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(clone_vector_3_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
}

}

