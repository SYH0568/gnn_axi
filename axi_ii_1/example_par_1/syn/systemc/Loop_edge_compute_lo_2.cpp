#include "Loop_edge_compute_lo.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Loop_edge_compute_lo::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter10 = ap_enable_reg_pp0_iter9.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter11 = ap_enable_reg_pp0_iter10.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter11 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter6 = ap_enable_reg_pp0_iter5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter7 = ap_enable_reg_pp0_iter6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter8 = ap_enable_reg_pp0_iter7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter9 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter9 = ap_enable_reg_pp0_iter8.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_4994_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_4994_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_4994_ap_ready.read())) {
            grp_sigmoid_fu_4994_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5002_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5002_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5002_ap_ready.read())) {
            grp_sigmoid_fu_5002_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5010_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5010_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5010_ap_ready.read())) {
            grp_sigmoid_fu_5010_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5018_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5018_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5018_ap_ready.read())) {
            grp_sigmoid_fu_5018_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5026_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5026_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5026_ap_ready.read())) {
            grp_sigmoid_fu_5026_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5034_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5034_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5034_ap_ready.read())) {
            grp_sigmoid_fu_5034_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5042_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5042_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5042_ap_ready.read())) {
            grp_sigmoid_fu_5042_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5050_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5050_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5050_ap_ready.read())) {
            grp_sigmoid_fu_5050_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5058_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5058_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5058_ap_ready.read())) {
            grp_sigmoid_fu_5058_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5066_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5066_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5066_ap_ready.read())) {
            grp_sigmoid_fu_5066_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5074_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5074_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5074_ap_ready.read())) {
            grp_sigmoid_fu_5074_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5082_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5082_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5082_ap_ready.read())) {
            grp_sigmoid_fu_5082_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5090_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5090_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5090_ap_ready.read())) {
            grp_sigmoid_fu_5090_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5098_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5098_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5098_ap_ready.read())) {
            grp_sigmoid_fu_5098_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5106_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5106_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5106_ap_ready.read())) {
            grp_sigmoid_fu_5106_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5114_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5114_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5114_ap_ready.read())) {
            grp_sigmoid_fu_5114_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5122_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5122_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5122_ap_ready.read())) {
            grp_sigmoid_fu_5122_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5130_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5130_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5130_ap_ready.read())) {
            grp_sigmoid_fu_5130_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5138_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5138_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5138_ap_ready.read())) {
            grp_sigmoid_fu_5138_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5146_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5146_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5146_ap_ready.read())) {
            grp_sigmoid_fu_5146_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5154_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5154_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5154_ap_ready.read())) {
            grp_sigmoid_fu_5154_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5162_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5162_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5162_ap_ready.read())) {
            grp_sigmoid_fu_5162_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5170_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5170_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5170_ap_ready.read())) {
            grp_sigmoid_fu_5170_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5178_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5178_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5178_ap_ready.read())) {
            grp_sigmoid_fu_5178_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5186_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5186_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5186_ap_ready.read())) {
            grp_sigmoid_fu_5186_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5194_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5194_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5194_ap_ready.read())) {
            grp_sigmoid_fu_5194_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        i_0_i136_0_reg_4619 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(icmp_ln450_fu_5202_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        i_0_i136_0_reg_4619 = add_ln450_fu_5274_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter8_reg.read(), ap_const_lv1_0))) {
        edge_update_0_V_10_reg_8989 = grp_dense_mult_3lyr_2_fu_4770_ap_return.read();
        edge_update_0_V_11_reg_8994 = grp_dense_mult_3lyr_2_fu_4784_ap_return.read();
        edge_update_0_V_12_reg_8999 = grp_dense_mult_3lyr_2_fu_4798_ap_return.read();
        edge_update_0_V_13_reg_9004 = grp_dense_mult_3lyr_2_fu_4812_ap_return.read();
        edge_update_0_V_14_reg_9009 = grp_dense_mult_3lyr_2_fu_4826_ap_return.read();
        edge_update_0_V_15_reg_9014 = grp_dense_mult_3lyr_2_fu_4840_ap_return.read();
        edge_update_0_V_16_reg_9019 = grp_dense_mult_3lyr_2_fu_4854_ap_return.read();
        edge_update_0_V_17_reg_9024 = grp_dense_mult_3lyr_2_fu_4868_ap_return.read();
        edge_update_0_V_18_reg_9029 = grp_dense_mult_3lyr_2_fu_4882_ap_return.read();
        edge_update_0_V_19_reg_9034 = grp_dense_mult_3lyr_2_fu_4896_ap_return.read();
        edge_update_0_V_1_reg_8944 = grp_dense_mult_3lyr_2_fu_4644_ap_return.read();
        edge_update_0_V_20_reg_9039 = grp_dense_mult_3lyr_2_fu_4910_ap_return.read();
        edge_update_0_V_21_reg_9044 = grp_dense_mult_3lyr_2_fu_4924_ap_return.read();
        edge_update_0_V_22_reg_9049 = grp_dense_mult_3lyr_2_fu_4938_ap_return.read();
        edge_update_0_V_23_reg_9054 = grp_dense_mult_3lyr_2_fu_4952_ap_return.read();
        edge_update_0_V_24_reg_9059 = grp_dense_mult_3lyr_2_fu_4966_ap_return.read();
        edge_update_0_V_25_reg_9064 = grp_dense_mult_3lyr_2_fu_4980_ap_return.read();
        edge_update_0_V_2_reg_8949 = grp_dense_mult_3lyr_2_fu_4658_ap_return.read();
        edge_update_0_V_3_reg_8954 = grp_dense_mult_3lyr_2_fu_4672_ap_return.read();
        edge_update_0_V_4_reg_8959 = grp_dense_mult_3lyr_2_fu_4686_ap_return.read();
        edge_update_0_V_5_reg_8964 = grp_dense_mult_3lyr_2_fu_4700_ap_return.read();
        edge_update_0_V_6_reg_8969 = grp_dense_mult_3lyr_2_fu_4714_ap_return.read();
        edge_update_0_V_7_reg_8974 = grp_dense_mult_3lyr_2_fu_4728_ap_return.read();
        edge_update_0_V_8_reg_8979 = grp_dense_mult_3lyr_2_fu_4742_ap_return.read();
        edge_update_0_V_9_reg_8984 = grp_dense_mult_3lyr_2_fu_4756_ap_return.read();
        edge_update_0_V_reg_8939 = grp_dense_mult_3lyr_2_fu_4630_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln450_reg_5932 = icmp_ln450_fu_5202_p2.read();
        icmp_ln450_reg_5932_pp0_iter1_reg = icmp_ln450_reg_5932.read();
        zext_ln459_1_reg_6135_pp0_iter1_reg = zext_ln459_1_reg_6135.read();
        zext_ln459_reg_5936_pp0_iter1_reg = zext_ln459_reg_5936.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        icmp_ln450_reg_5932_pp0_iter10_reg = icmp_ln450_reg_5932_pp0_iter9_reg.read();
        icmp_ln450_reg_5932_pp0_iter2_reg = icmp_ln450_reg_5932_pp0_iter1_reg.read();
        icmp_ln450_reg_5932_pp0_iter3_reg = icmp_ln450_reg_5932_pp0_iter2_reg.read();
        icmp_ln450_reg_5932_pp0_iter4_reg = icmp_ln450_reg_5932_pp0_iter3_reg.read();
        icmp_ln450_reg_5932_pp0_iter5_reg = icmp_ln450_reg_5932_pp0_iter4_reg.read();
        icmp_ln450_reg_5932_pp0_iter6_reg = icmp_ln450_reg_5932_pp0_iter5_reg.read();
        icmp_ln450_reg_5932_pp0_iter7_reg = icmp_ln450_reg_5932_pp0_iter6_reg.read();
        icmp_ln450_reg_5932_pp0_iter8_reg = icmp_ln450_reg_5932_pp0_iter7_reg.read();
        icmp_ln450_reg_5932_pp0_iter9_reg = icmp_ln450_reg_5932_pp0_iter8_reg.read();
        zext_ln459_1_reg_6135_pp0_iter10_reg = zext_ln459_1_reg_6135_pp0_iter9_reg.read();
        zext_ln459_1_reg_6135_pp0_iter2_reg = zext_ln459_1_reg_6135_pp0_iter1_reg.read();
        zext_ln459_1_reg_6135_pp0_iter3_reg = zext_ln459_1_reg_6135_pp0_iter2_reg.read();
        zext_ln459_1_reg_6135_pp0_iter4_reg = zext_ln459_1_reg_6135_pp0_iter3_reg.read();
        zext_ln459_1_reg_6135_pp0_iter5_reg = zext_ln459_1_reg_6135_pp0_iter4_reg.read();
        zext_ln459_1_reg_6135_pp0_iter6_reg = zext_ln459_1_reg_6135_pp0_iter5_reg.read();
        zext_ln459_1_reg_6135_pp0_iter7_reg = zext_ln459_1_reg_6135_pp0_iter6_reg.read();
        zext_ln459_1_reg_6135_pp0_iter8_reg = zext_ln459_1_reg_6135_pp0_iter7_reg.read();
        zext_ln459_1_reg_6135_pp0_iter9_reg = zext_ln459_1_reg_6135_pp0_iter8_reg.read();
        zext_ln459_reg_5936_pp0_iter10_reg = zext_ln459_reg_5936_pp0_iter9_reg.read();
        zext_ln459_reg_5936_pp0_iter2_reg = zext_ln459_reg_5936_pp0_iter1_reg.read();
        zext_ln459_reg_5936_pp0_iter3_reg = zext_ln459_reg_5936_pp0_iter2_reg.read();
        zext_ln459_reg_5936_pp0_iter4_reg = zext_ln459_reg_5936_pp0_iter3_reg.read();
        zext_ln459_reg_5936_pp0_iter5_reg = zext_ln459_reg_5936_pp0_iter4_reg.read();
        zext_ln459_reg_5936_pp0_iter6_reg = zext_ln459_reg_5936_pp0_iter5_reg.read();
        zext_ln459_reg_5936_pp0_iter7_reg = zext_ln459_reg_5936_pp0_iter6_reg.read();
        zext_ln459_reg_5936_pp0_iter8_reg = zext_ln459_reg_5936_pp0_iter7_reg.read();
        zext_ln459_reg_5936_pp0_iter9_reg = zext_ln459_reg_5936_pp0_iter8_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(icmp_ln450_reg_5932_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        phi_input_0_V_36_reg_7714 = node_attr_1D_r_mat_1_0_0_V_q0.read();
        phi_input_0_V_37_reg_7764 = node_attr_1D_r_mat_2_0_0_V_q0.read();
        phi_input_0_V_38_reg_7814 = node_attr_1D_r_mat_3_0_0_V_q0.read();
        phi_input_0_V_39_reg_7864 = node_attr_1D_r_mat_4_0_0_V_q0.read();
        phi_input_0_V_40_reg_7914 = node_attr_1D_r_mat_5_0_0_V_q0.read();
        phi_input_0_V_41_reg_7964 = node_attr_1D_r_mat_6_0_0_V_q0.read();
        phi_input_0_V_42_reg_8014 = node_attr_1D_r_mat_7_0_0_V_q0.read();
        phi_input_0_V_43_reg_8064 = node_attr_1D_r_mat_8_0_0_V_q0.read();
        phi_input_0_V_44_reg_8114 = node_attr_1D_r_mat_9_0_0_V_q0.read();
        phi_input_0_V_45_reg_8164 = node_attr_1D_r_mat_10_0_0_V_q0.read();
        phi_input_0_V_46_reg_8214 = node_attr_1D_r_mat_11_0_0_V_q0.read();
        phi_input_0_V_47_reg_8264 = node_attr_1D_r_mat_12_0_0_V_q0.read();
        phi_input_0_V_48_reg_8314 = node_attr_1D_r_mat_0_0_0_V_q1.read();
        phi_input_0_V_49_reg_8364 = node_attr_1D_r_mat_1_0_0_V_q1.read();
        phi_input_0_V_50_reg_8414 = node_attr_1D_r_mat_2_0_0_V_q1.read();
        phi_input_0_V_51_reg_8464 = node_attr_1D_r_mat_3_0_0_V_q1.read();
        phi_input_0_V_52_reg_8514 = node_attr_1D_r_mat_4_0_0_V_q1.read();
        phi_input_0_V_53_reg_8564 = node_attr_1D_r_mat_5_0_0_V_q1.read();
        phi_input_0_V_54_reg_8614 = node_attr_1D_r_mat_6_0_0_V_q1.read();
        phi_input_0_V_55_reg_8664 = node_attr_1D_r_mat_7_0_0_V_q1.read();
        phi_input_0_V_56_reg_8714 = node_attr_1D_r_mat_8_0_0_V_q1.read();
        phi_input_0_V_57_reg_8764 = node_attr_1D_r_mat_9_0_0_V_q1.read();
        phi_input_0_V_58_reg_8814 = node_attr_1D_r_mat_10_0_0_V_q1.read();
        phi_input_0_V_59_reg_8864 = node_attr_1D_r_mat_11_0_0_V_q1.read();
        phi_input_0_V_60_reg_8914 = node_attr_1D_r_mat_12_0_0_V_q1.read();
        phi_input_0_V_reg_7664 = node_attr_1D_r_mat_0_0_0_V_q0.read();
        phi_input_1_V_36_reg_7724 = node_attr_1D_r_mat_1_1_0_V_q0.read();
        phi_input_1_V_37_reg_7774 = node_attr_1D_r_mat_2_1_0_V_q0.read();
        phi_input_1_V_38_reg_7824 = node_attr_1D_r_mat_3_1_0_V_q0.read();
        phi_input_1_V_39_reg_7874 = node_attr_1D_r_mat_4_1_0_V_q0.read();
        phi_input_1_V_40_reg_7924 = node_attr_1D_r_mat_5_1_0_V_q0.read();
        phi_input_1_V_41_reg_7974 = node_attr_1D_r_mat_6_1_0_V_q0.read();
        phi_input_1_V_42_reg_8024 = node_attr_1D_r_mat_7_1_0_V_q0.read();
        phi_input_1_V_43_reg_8074 = node_attr_1D_r_mat_8_1_0_V_q0.read();
        phi_input_1_V_44_reg_8124 = node_attr_1D_r_mat_9_1_0_V_q0.read();
        phi_input_1_V_45_reg_8174 = node_attr_1D_r_mat_10_1_0_V_q0.read();
        phi_input_1_V_46_reg_8224 = node_attr_1D_r_mat_11_1_0_V_q0.read();
        phi_input_1_V_47_reg_8274 = node_attr_1D_r_mat_12_1_0_V_q0.read();
        phi_input_1_V_48_reg_8324 = node_attr_1D_r_mat_0_1_0_V_q1.read();
        phi_input_1_V_49_reg_8374 = node_attr_1D_r_mat_1_1_0_V_q1.read();
        phi_input_1_V_50_reg_8424 = node_attr_1D_r_mat_2_1_0_V_q1.read();
        phi_input_1_V_51_reg_8474 = node_attr_1D_r_mat_3_1_0_V_q1.read();
        phi_input_1_V_52_reg_8524 = node_attr_1D_r_mat_4_1_0_V_q1.read();
        phi_input_1_V_53_reg_8574 = node_attr_1D_r_mat_5_1_0_V_q1.read();
        phi_input_1_V_54_reg_8624 = node_attr_1D_r_mat_6_1_0_V_q1.read();
        phi_input_1_V_55_reg_8674 = node_attr_1D_r_mat_7_1_0_V_q1.read();
        phi_input_1_V_56_reg_8724 = node_attr_1D_r_mat_8_1_0_V_q1.read();
        phi_input_1_V_57_reg_8774 = node_attr_1D_r_mat_9_1_0_V_q1.read();
        phi_input_1_V_58_reg_8824 = node_attr_1D_r_mat_10_1_0_V_q1.read();
        phi_input_1_V_59_reg_8874 = node_attr_1D_r_mat_11_1_0_V_q1.read();
        phi_input_1_V_60_reg_8924 = node_attr_1D_r_mat_12_1_0_V_q1.read();
        phi_input_1_V_reg_7674 = node_attr_1D_r_mat_0_1_0_V_q0.read();
        phi_input_2_V_36_reg_7734 = node_attr_1D_r_mat_1_2_0_V_q0.read();
        phi_input_2_V_37_reg_7784 = node_attr_1D_r_mat_2_2_0_V_q0.read();
        phi_input_2_V_38_reg_7834 = node_attr_1D_r_mat_3_2_0_V_q0.read();
        phi_input_2_V_39_reg_7884 = node_attr_1D_r_mat_4_2_0_V_q0.read();
        phi_input_2_V_40_reg_7934 = node_attr_1D_r_mat_5_2_0_V_q0.read();
        phi_input_2_V_41_reg_7984 = node_attr_1D_r_mat_6_2_0_V_q0.read();
        phi_input_2_V_42_reg_8034 = node_attr_1D_r_mat_7_2_0_V_q0.read();
        phi_input_2_V_43_reg_8084 = node_attr_1D_r_mat_8_2_0_V_q0.read();
        phi_input_2_V_44_reg_8134 = node_attr_1D_r_mat_9_2_0_V_q0.read();
        phi_input_2_V_45_reg_8184 = node_attr_1D_r_mat_10_2_0_V_q0.read();
        phi_input_2_V_46_reg_8234 = node_attr_1D_r_mat_11_2_0_V_q0.read();
        phi_input_2_V_47_reg_8284 = node_attr_1D_r_mat_12_2_0_V_q0.read();
        phi_input_2_V_48_reg_8334 = node_attr_1D_r_mat_0_2_0_V_q1.read();
        phi_input_2_V_49_reg_8384 = node_attr_1D_r_mat_1_2_0_V_q1.read();
        phi_input_2_V_50_reg_8434 = node_attr_1D_r_mat_2_2_0_V_q1.read();
        phi_input_2_V_51_reg_8484 = node_attr_1D_r_mat_3_2_0_V_q1.read();
        phi_input_2_V_52_reg_8534 = node_attr_1D_r_mat_4_2_0_V_q1.read();
        phi_input_2_V_53_reg_8584 = node_attr_1D_r_mat_5_2_0_V_q1.read();
        phi_input_2_V_54_reg_8634 = node_attr_1D_r_mat_6_2_0_V_q1.read();
        phi_input_2_V_55_reg_8684 = node_attr_1D_r_mat_7_2_0_V_q1.read();
        phi_input_2_V_56_reg_8734 = node_attr_1D_r_mat_8_2_0_V_q1.read();
        phi_input_2_V_57_reg_8784 = node_attr_1D_r_mat_9_2_0_V_q1.read();
        phi_input_2_V_58_reg_8834 = node_attr_1D_r_mat_10_2_0_V_q1.read();
        phi_input_2_V_59_reg_8884 = node_attr_1D_r_mat_11_2_0_V_q1.read();
        phi_input_2_V_60_reg_8934 = node_attr_1D_r_mat_12_2_0_V_q1.read();
        phi_input_2_V_reg_7684 = node_attr_1D_r_mat_0_2_0_V_q0.read();
        phi_input_3_V_35_reg_7709 = node_attr_1D_s_mat_1_0_0_V_q0.read();
        phi_input_3_V_36_reg_7759 = node_attr_1D_s_mat_2_0_0_V_q0.read();
        phi_input_3_V_37_reg_7809 = node_attr_1D_s_mat_3_0_0_V_q0.read();
        phi_input_3_V_38_reg_7859 = node_attr_1D_s_mat_4_0_0_V_q0.read();
        phi_input_3_V_39_reg_7909 = node_attr_1D_s_mat_5_0_0_V_q0.read();
        phi_input_3_V_40_reg_7959 = node_attr_1D_s_mat_6_0_0_V_q0.read();
        phi_input_3_V_41_reg_8009 = node_attr_1D_s_mat_7_0_0_V_q0.read();
        phi_input_3_V_42_reg_8059 = node_attr_1D_s_mat_8_0_0_V_q0.read();
        phi_input_3_V_43_reg_8109 = node_attr_1D_s_mat_9_0_0_V_q0.read();
        phi_input_3_V_44_reg_8159 = node_attr_1D_s_mat_10_0_0_V_q0.read();
        phi_input_3_V_45_reg_8209 = node_attr_1D_s_mat_11_0_0_V_q0.read();
        phi_input_3_V_46_reg_8259 = node_attr_1D_s_mat_12_0_0_V_q0.read();
        phi_input_3_V_47_reg_8309 = node_attr_1D_s_mat_0_0_0_V_q1.read();
        phi_input_3_V_48_reg_8359 = node_attr_1D_s_mat_1_0_0_V_q1.read();
        phi_input_3_V_49_reg_8409 = node_attr_1D_s_mat_2_0_0_V_q1.read();
        phi_input_3_V_50_reg_8459 = node_attr_1D_s_mat_3_0_0_V_q1.read();
        phi_input_3_V_51_reg_8509 = node_attr_1D_s_mat_4_0_0_V_q1.read();
        phi_input_3_V_52_reg_8559 = node_attr_1D_s_mat_5_0_0_V_q1.read();
        phi_input_3_V_53_reg_8609 = node_attr_1D_s_mat_6_0_0_V_q1.read();
        phi_input_3_V_54_reg_8659 = node_attr_1D_s_mat_7_0_0_V_q1.read();
        phi_input_3_V_55_reg_8709 = node_attr_1D_s_mat_8_0_0_V_q1.read();
        phi_input_3_V_56_reg_8759 = node_attr_1D_s_mat_9_0_0_V_q1.read();
        phi_input_3_V_57_reg_8809 = node_attr_1D_s_mat_10_0_0_V_q1.read();
        phi_input_3_V_58_reg_8859 = node_attr_1D_s_mat_11_0_0_V_q1.read();
        phi_input_3_V_59_reg_8909 = node_attr_1D_s_mat_12_0_0_V_q1.read();
        phi_input_3_V_reg_7659 = node_attr_1D_s_mat_0_0_0_V_q0.read();
        phi_input_4_V_35_reg_7719 = node_attr_1D_s_mat_1_1_0_V_q0.read();
        phi_input_4_V_36_reg_7769 = node_attr_1D_s_mat_2_1_0_V_q0.read();
        phi_input_4_V_37_reg_7819 = node_attr_1D_s_mat_3_1_0_V_q0.read();
        phi_input_4_V_38_reg_7869 = node_attr_1D_s_mat_4_1_0_V_q0.read();
        phi_input_4_V_39_reg_7919 = node_attr_1D_s_mat_5_1_0_V_q0.read();
        phi_input_4_V_40_reg_7969 = node_attr_1D_s_mat_6_1_0_V_q0.read();
        phi_input_4_V_41_reg_8019 = node_attr_1D_s_mat_7_1_0_V_q0.read();
        phi_input_4_V_42_reg_8069 = node_attr_1D_s_mat_8_1_0_V_q0.read();
        phi_input_4_V_43_reg_8119 = node_attr_1D_s_mat_9_1_0_V_q0.read();
        phi_input_4_V_44_reg_8169 = node_attr_1D_s_mat_10_1_0_V_q0.read();
        phi_input_4_V_45_reg_8219 = node_attr_1D_s_mat_11_1_0_V_q0.read();
        phi_input_4_V_46_reg_8269 = node_attr_1D_s_mat_12_1_0_V_q0.read();
        phi_input_4_V_47_reg_8319 = node_attr_1D_s_mat_0_1_0_V_q1.read();
        phi_input_4_V_48_reg_8369 = node_attr_1D_s_mat_1_1_0_V_q1.read();
        phi_input_4_V_49_reg_8419 = node_attr_1D_s_mat_2_1_0_V_q1.read();
        phi_input_4_V_50_reg_8469 = node_attr_1D_s_mat_3_1_0_V_q1.read();
        phi_input_4_V_51_reg_8519 = node_attr_1D_s_mat_4_1_0_V_q1.read();
        phi_input_4_V_52_reg_8569 = node_attr_1D_s_mat_5_1_0_V_q1.read();
        phi_input_4_V_53_reg_8619 = node_attr_1D_s_mat_6_1_0_V_q1.read();
        phi_input_4_V_54_reg_8669 = node_attr_1D_s_mat_7_1_0_V_q1.read();
        phi_input_4_V_55_reg_8719 = node_attr_1D_s_mat_8_1_0_V_q1.read();
        phi_input_4_V_56_reg_8769 = node_attr_1D_s_mat_9_1_0_V_q1.read();
        phi_input_4_V_57_reg_8819 = node_attr_1D_s_mat_10_1_0_V_q1.read();
        phi_input_4_V_58_reg_8869 = node_attr_1D_s_mat_11_1_0_V_q1.read();
        phi_input_4_V_59_reg_8919 = node_attr_1D_s_mat_12_1_0_V_q1.read();
        phi_input_4_V_reg_7669 = node_attr_1D_s_mat_0_1_0_V_q0.read();
        phi_input_5_V_35_reg_7729 = node_attr_1D_s_mat_1_2_0_V_q0.read();
        phi_input_5_V_36_reg_7779 = node_attr_1D_s_mat_2_2_0_V_q0.read();
        phi_input_5_V_37_reg_7829 = node_attr_1D_s_mat_3_2_0_V_q0.read();
        phi_input_5_V_38_reg_7879 = node_attr_1D_s_mat_4_2_0_V_q0.read();
        phi_input_5_V_39_reg_7929 = node_attr_1D_s_mat_5_2_0_V_q0.read();
        phi_input_5_V_40_reg_7979 = node_attr_1D_s_mat_6_2_0_V_q0.read();
        phi_input_5_V_41_reg_8029 = node_attr_1D_s_mat_7_2_0_V_q0.read();
        phi_input_5_V_42_reg_8079 = node_attr_1D_s_mat_8_2_0_V_q0.read();
        phi_input_5_V_43_reg_8129 = node_attr_1D_s_mat_9_2_0_V_q0.read();
        phi_input_5_V_44_reg_8179 = node_attr_1D_s_mat_10_2_0_V_q0.read();
        phi_input_5_V_45_reg_8229 = node_attr_1D_s_mat_11_2_0_V_q0.read();
        phi_input_5_V_46_reg_8279 = node_attr_1D_s_mat_12_2_0_V_q0.read();
        phi_input_5_V_47_reg_8329 = node_attr_1D_s_mat_0_2_0_V_q1.read();
        phi_input_5_V_48_reg_8379 = node_attr_1D_s_mat_1_2_0_V_q1.read();
        phi_input_5_V_49_reg_8429 = node_attr_1D_s_mat_2_2_0_V_q1.read();
        phi_input_5_V_50_reg_8479 = node_attr_1D_s_mat_3_2_0_V_q1.read();
        phi_input_5_V_51_reg_8529 = node_attr_1D_s_mat_4_2_0_V_q1.read();
        phi_input_5_V_52_reg_8579 = node_attr_1D_s_mat_5_2_0_V_q1.read();
        phi_input_5_V_53_reg_8629 = node_attr_1D_s_mat_6_2_0_V_q1.read();
        phi_input_5_V_54_reg_8679 = node_attr_1D_s_mat_7_2_0_V_q1.read();
        phi_input_5_V_55_reg_8729 = node_attr_1D_s_mat_8_2_0_V_q1.read();
        phi_input_5_V_56_reg_8779 = node_attr_1D_s_mat_9_2_0_V_q1.read();
        phi_input_5_V_57_reg_8829 = node_attr_1D_s_mat_10_2_0_V_q1.read();
        phi_input_5_V_58_reg_8879 = node_attr_1D_s_mat_11_2_0_V_q1.read();
        phi_input_5_V_59_reg_8929 = node_attr_1D_s_mat_12_2_0_V_q1.read();
        phi_input_5_V_reg_7679 = node_attr_1D_s_mat_0_2_0_V_q0.read();
        phi_input_6_V_35_reg_7689 = layer7_out_cpy2_V_1_0_q0.read();
        phi_input_6_V_36_reg_7739 = layer7_out_cpy2_V_2_0_q0.read();
        phi_input_6_V_37_reg_7789 = layer7_out_cpy2_V_3_0_q0.read();
        phi_input_6_V_38_reg_7839 = layer7_out_cpy2_V_4_0_q0.read();
        phi_input_6_V_39_reg_7889 = layer7_out_cpy2_V_5_0_q0.read();
        phi_input_6_V_40_reg_7939 = layer7_out_cpy2_V_6_0_q0.read();
        phi_input_6_V_41_reg_7989 = layer7_out_cpy2_V_7_0_q0.read();
        phi_input_6_V_42_reg_8039 = layer7_out_cpy2_V_8_0_q0.read();
        phi_input_6_V_43_reg_8089 = layer7_out_cpy2_V_9_0_q0.read();
        phi_input_6_V_44_reg_8139 = layer7_out_cpy2_V_10_0_q0.read();
        phi_input_6_V_45_reg_8189 = layer7_out_cpy2_V_11_0_q0.read();
        phi_input_6_V_46_reg_8239 = layer7_out_cpy2_V_12_0_q0.read();
        phi_input_6_V_47_reg_8289 = layer7_out_cpy2_V_0_0_q1.read();
        phi_input_6_V_48_reg_8339 = layer7_out_cpy2_V_1_0_q1.read();
        phi_input_6_V_49_reg_8389 = layer7_out_cpy2_V_2_0_q1.read();
        phi_input_6_V_50_reg_8439 = layer7_out_cpy2_V_3_0_q1.read();
        phi_input_6_V_51_reg_8489 = layer7_out_cpy2_V_4_0_q1.read();
        phi_input_6_V_52_reg_8539 = layer7_out_cpy2_V_5_0_q1.read();
        phi_input_6_V_53_reg_8589 = layer7_out_cpy2_V_6_0_q1.read();
        phi_input_6_V_54_reg_8639 = layer7_out_cpy2_V_7_0_q1.read();
        phi_input_6_V_55_reg_8689 = layer7_out_cpy2_V_8_0_q1.read();
        phi_input_6_V_56_reg_8739 = layer7_out_cpy2_V_9_0_q1.read();
        phi_input_6_V_57_reg_8789 = layer7_out_cpy2_V_10_0_q1.read();
        phi_input_6_V_58_reg_8839 = layer7_out_cpy2_V_11_0_q1.read();
        phi_input_6_V_59_reg_8889 = layer7_out_cpy2_V_12_0_q1.read();
        phi_input_6_V_reg_7639 = layer7_out_cpy2_V_0_0_q0.read();
        phi_input_7_V_26_reg_7694 = layer7_out_cpy2_V_1_1_q0.read();
        phi_input_7_V_27_reg_7744 = layer7_out_cpy2_V_2_1_q0.read();
        phi_input_7_V_28_reg_7794 = layer7_out_cpy2_V_3_1_q0.read();
        phi_input_7_V_29_reg_7844 = layer7_out_cpy2_V_4_1_q0.read();
        phi_input_7_V_30_reg_7894 = layer7_out_cpy2_V_5_1_q0.read();
        phi_input_7_V_31_reg_7944 = layer7_out_cpy2_V_6_1_q0.read();
        phi_input_7_V_32_reg_7994 = layer7_out_cpy2_V_7_1_q0.read();
        phi_input_7_V_33_reg_8044 = layer7_out_cpy2_V_8_1_q0.read();
        phi_input_7_V_34_reg_8094 = layer7_out_cpy2_V_9_1_q0.read();
        phi_input_7_V_35_reg_8144 = layer7_out_cpy2_V_10_1_q0.read();
        phi_input_7_V_36_reg_8194 = layer7_out_cpy2_V_11_1_q0.read();
        phi_input_7_V_37_reg_8244 = layer7_out_cpy2_V_12_1_q0.read();
        phi_input_7_V_38_reg_8294 = layer7_out_cpy2_V_0_1_q1.read();
        phi_input_7_V_39_reg_8344 = layer7_out_cpy2_V_1_1_q1.read();
        phi_input_7_V_40_reg_8394 = layer7_out_cpy2_V_2_1_q1.read();
        phi_input_7_V_41_reg_8444 = layer7_out_cpy2_V_3_1_q1.read();
        phi_input_7_V_42_reg_8494 = layer7_out_cpy2_V_4_1_q1.read();
        phi_input_7_V_43_reg_8544 = layer7_out_cpy2_V_5_1_q1.read();
        phi_input_7_V_44_reg_8594 = layer7_out_cpy2_V_6_1_q1.read();
        phi_input_7_V_45_reg_8644 = layer7_out_cpy2_V_7_1_q1.read();
        phi_input_7_V_46_reg_8694 = layer7_out_cpy2_V_8_1_q1.read();
        phi_input_7_V_47_reg_8744 = layer7_out_cpy2_V_9_1_q1.read();
        phi_input_7_V_48_reg_8794 = layer7_out_cpy2_V_10_1_q1.read();
        phi_input_7_V_49_reg_8844 = layer7_out_cpy2_V_11_1_q1.read();
        phi_input_7_V_50_reg_8894 = layer7_out_cpy2_V_12_1_q1.read();
        phi_input_7_V_reg_7644 = layer7_out_cpy2_V_0_1_q0.read();
        phi_input_8_V_26_reg_7699 = layer7_out_cpy2_V_1_2_q0.read();
        phi_input_8_V_27_reg_7749 = layer7_out_cpy2_V_2_2_q0.read();
        phi_input_8_V_28_reg_7799 = layer7_out_cpy2_V_3_2_q0.read();
        phi_input_8_V_29_reg_7849 = layer7_out_cpy2_V_4_2_q0.read();
        phi_input_8_V_30_reg_7899 = layer7_out_cpy2_V_5_2_q0.read();
        phi_input_8_V_31_reg_7949 = layer7_out_cpy2_V_6_2_q0.read();
        phi_input_8_V_32_reg_7999 = layer7_out_cpy2_V_7_2_q0.read();
        phi_input_8_V_33_reg_8049 = layer7_out_cpy2_V_8_2_q0.read();
        phi_input_8_V_34_reg_8099 = layer7_out_cpy2_V_9_2_q0.read();
        phi_input_8_V_35_reg_8149 = layer7_out_cpy2_V_10_2_q0.read();
        phi_input_8_V_36_reg_8199 = layer7_out_cpy2_V_11_2_q0.read();
        phi_input_8_V_37_reg_8249 = layer7_out_cpy2_V_12_2_q0.read();
        phi_input_8_V_38_reg_8299 = layer7_out_cpy2_V_0_2_q1.read();
        phi_input_8_V_39_reg_8349 = layer7_out_cpy2_V_1_2_q1.read();
        phi_input_8_V_40_reg_8399 = layer7_out_cpy2_V_2_2_q1.read();
        phi_input_8_V_41_reg_8449 = layer7_out_cpy2_V_3_2_q1.read();
        phi_input_8_V_42_reg_8499 = layer7_out_cpy2_V_4_2_q1.read();
        phi_input_8_V_43_reg_8549 = layer7_out_cpy2_V_5_2_q1.read();
        phi_input_8_V_44_reg_8599 = layer7_out_cpy2_V_6_2_q1.read();
        phi_input_8_V_45_reg_8649 = layer7_out_cpy2_V_7_2_q1.read();
        phi_input_8_V_46_reg_8699 = layer7_out_cpy2_V_8_2_q1.read();
        phi_input_8_V_47_reg_8749 = layer7_out_cpy2_V_9_2_q1.read();
        phi_input_8_V_48_reg_8799 = layer7_out_cpy2_V_10_2_q1.read();
        phi_input_8_V_49_reg_8849 = layer7_out_cpy2_V_11_2_q1.read();
        phi_input_8_V_50_reg_8899 = layer7_out_cpy2_V_12_2_q1.read();
        phi_input_8_V_reg_7649 = layer7_out_cpy2_V_0_2_q0.read();
        phi_input_9_V_26_reg_7704 = layer7_out_cpy2_V_1_3_q0.read();
        phi_input_9_V_27_reg_7754 = layer7_out_cpy2_V_2_3_q0.read();
        phi_input_9_V_28_reg_7804 = layer7_out_cpy2_V_3_3_q0.read();
        phi_input_9_V_29_reg_7854 = layer7_out_cpy2_V_4_3_q0.read();
        phi_input_9_V_30_reg_7904 = layer7_out_cpy2_V_5_3_q0.read();
        phi_input_9_V_31_reg_7954 = layer7_out_cpy2_V_6_3_q0.read();
        phi_input_9_V_32_reg_8004 = layer7_out_cpy2_V_7_3_q0.read();
        phi_input_9_V_33_reg_8054 = layer7_out_cpy2_V_8_3_q0.read();
        phi_input_9_V_34_reg_8104 = layer7_out_cpy2_V_9_3_q0.read();
        phi_input_9_V_35_reg_8154 = layer7_out_cpy2_V_10_3_q0.read();
        phi_input_9_V_36_reg_8204 = layer7_out_cpy2_V_11_3_q0.read();
        phi_input_9_V_37_reg_8254 = layer7_out_cpy2_V_12_3_q0.read();
        phi_input_9_V_38_reg_8304 = layer7_out_cpy2_V_0_3_q1.read();
        phi_input_9_V_39_reg_8354 = layer7_out_cpy2_V_1_3_q1.read();
        phi_input_9_V_40_reg_8404 = layer7_out_cpy2_V_2_3_q1.read();
        phi_input_9_V_41_reg_8454 = layer7_out_cpy2_V_3_3_q1.read();
        phi_input_9_V_42_reg_8504 = layer7_out_cpy2_V_4_3_q1.read();
        phi_input_9_V_43_reg_8554 = layer7_out_cpy2_V_5_3_q1.read();
        phi_input_9_V_44_reg_8604 = layer7_out_cpy2_V_6_3_q1.read();
        phi_input_9_V_45_reg_8654 = layer7_out_cpy2_V_7_3_q1.read();
        phi_input_9_V_46_reg_8704 = layer7_out_cpy2_V_8_3_q1.read();
        phi_input_9_V_47_reg_8754 = layer7_out_cpy2_V_9_3_q1.read();
        phi_input_9_V_48_reg_8804 = layer7_out_cpy2_V_10_3_q1.read();
        phi_input_9_V_49_reg_8854 = layer7_out_cpy2_V_11_3_q1.read();
        phi_input_9_V_50_reg_8904 = layer7_out_cpy2_V_12_3_q1.read();
        phi_input_9_V_reg_7654 = layer7_out_cpy2_V_0_3_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln450_fu_5202_p2.read(), ap_const_lv1_0))) {
        zext_ln459_1_reg_6135 = zext_ln459_1_fu_5244_p1.read();
        zext_ln459_reg_5936 = zext_ln459_fu_5208_p1.read();
    }
}

void Loop_edge_compute_lo::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter10.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln450_fu_5202_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter10.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln450_fu_5202_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state14;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<3>) ("XXX");
            break;
    }
}

}

