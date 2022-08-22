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
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_4994_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_4994_ap_ready.read())) {
            grp_sigmoid_fu_4994_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5001_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5001_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5001_ap_ready.read())) {
            grp_sigmoid_fu_5001_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5008_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5008_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5008_ap_ready.read())) {
            grp_sigmoid_fu_5008_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5015_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5015_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5015_ap_ready.read())) {
            grp_sigmoid_fu_5015_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5022_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5022_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5022_ap_ready.read())) {
            grp_sigmoid_fu_5022_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5029_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5029_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5029_ap_ready.read())) {
            grp_sigmoid_fu_5029_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5036_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5036_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5036_ap_ready.read())) {
            grp_sigmoid_fu_5036_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5043_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5043_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5043_ap_ready.read())) {
            grp_sigmoid_fu_5043_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5050_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5050_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5050_ap_ready.read())) {
            grp_sigmoid_fu_5050_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5057_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5057_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5057_ap_ready.read())) {
            grp_sigmoid_fu_5057_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5064_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5064_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5064_ap_ready.read())) {
            grp_sigmoid_fu_5064_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5071_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5071_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5071_ap_ready.read())) {
            grp_sigmoid_fu_5071_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5078_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5078_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5078_ap_ready.read())) {
            grp_sigmoid_fu_5078_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5085_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5085_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5085_ap_ready.read())) {
            grp_sigmoid_fu_5085_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5092_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5092_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5092_ap_ready.read())) {
            grp_sigmoid_fu_5092_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5099_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5099_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5099_ap_ready.read())) {
            grp_sigmoid_fu_5099_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5106_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5106_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5106_ap_ready.read())) {
            grp_sigmoid_fu_5106_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5113_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5113_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5113_ap_ready.read())) {
            grp_sigmoid_fu_5113_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5120_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5120_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5120_ap_ready.read())) {
            grp_sigmoid_fu_5120_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5127_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5127_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5127_ap_ready.read())) {
            grp_sigmoid_fu_5127_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5134_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5134_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5134_ap_ready.read())) {
            grp_sigmoid_fu_5134_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5141_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5141_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5141_ap_ready.read())) {
            grp_sigmoid_fu_5141_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5148_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5148_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5148_ap_ready.read())) {
            grp_sigmoid_fu_5148_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5155_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5155_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5155_ap_ready.read())) {
            grp_sigmoid_fu_5155_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5162_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5162_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5162_ap_ready.read())) {
            grp_sigmoid_fu_5162_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_sigmoid_fu_5169_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_sigmoid_fu_5169_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_sigmoid_fu_5169_ap_ready.read())) {
            grp_sigmoid_fu_5169_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        i_0_i74_0_reg_4619 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(icmp_ln450_fu_5176_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        i_0_i74_0_reg_4619 = add_ln450_fu_5248_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter8_reg.read(), ap_const_lv1_0))) {
        edge_update_0_V_10_reg_9093 = grp_dense_mult_3lyr_2_fu_4770_ap_return.read();
        edge_update_0_V_11_reg_9098 = grp_dense_mult_3lyr_2_fu_4784_ap_return.read();
        edge_update_0_V_12_reg_9103 = grp_dense_mult_3lyr_2_fu_4798_ap_return.read();
        edge_update_0_V_13_reg_9108 = grp_dense_mult_3lyr_2_fu_4812_ap_return.read();
        edge_update_0_V_14_reg_9113 = grp_dense_mult_3lyr_2_fu_4826_ap_return.read();
        edge_update_0_V_15_reg_9118 = grp_dense_mult_3lyr_2_fu_4840_ap_return.read();
        edge_update_0_V_16_reg_9123 = grp_dense_mult_3lyr_2_fu_4854_ap_return.read();
        edge_update_0_V_17_reg_9128 = grp_dense_mult_3lyr_2_fu_4868_ap_return.read();
        edge_update_0_V_18_reg_9133 = grp_dense_mult_3lyr_2_fu_4882_ap_return.read();
        edge_update_0_V_19_reg_9138 = grp_dense_mult_3lyr_2_fu_4896_ap_return.read();
        edge_update_0_V_1_reg_9048 = grp_dense_mult_3lyr_2_fu_4644_ap_return.read();
        edge_update_0_V_20_reg_9143 = grp_dense_mult_3lyr_2_fu_4910_ap_return.read();
        edge_update_0_V_21_reg_9148 = grp_dense_mult_3lyr_2_fu_4924_ap_return.read();
        edge_update_0_V_22_reg_9153 = grp_dense_mult_3lyr_2_fu_4938_ap_return.read();
        edge_update_0_V_23_reg_9158 = grp_dense_mult_3lyr_2_fu_4952_ap_return.read();
        edge_update_0_V_24_reg_9163 = grp_dense_mult_3lyr_2_fu_4966_ap_return.read();
        edge_update_0_V_25_reg_9168 = grp_dense_mult_3lyr_2_fu_4980_ap_return.read();
        edge_update_0_V_2_reg_9053 = grp_dense_mult_3lyr_2_fu_4658_ap_return.read();
        edge_update_0_V_3_reg_9058 = grp_dense_mult_3lyr_2_fu_4672_ap_return.read();
        edge_update_0_V_4_reg_9063 = grp_dense_mult_3lyr_2_fu_4686_ap_return.read();
        edge_update_0_V_5_reg_9068 = grp_dense_mult_3lyr_2_fu_4700_ap_return.read();
        edge_update_0_V_6_reg_9073 = grp_dense_mult_3lyr_2_fu_4714_ap_return.read();
        edge_update_0_V_7_reg_9078 = grp_dense_mult_3lyr_2_fu_4728_ap_return.read();
        edge_update_0_V_8_reg_9083 = grp_dense_mult_3lyr_2_fu_4742_ap_return.read();
        edge_update_0_V_9_reg_9088 = grp_dense_mult_3lyr_2_fu_4756_ap_return.read();
        edge_update_0_V_reg_9043 = grp_dense_mult_3lyr_2_fu_4630_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln450_reg_6036 = icmp_ln450_fu_5176_p2.read();
        icmp_ln450_reg_6036_pp0_iter1_reg = icmp_ln450_reg_6036.read();
        zext_ln459_1_reg_6239_pp0_iter1_reg = zext_ln459_1_reg_6239.read();
        zext_ln459_reg_6040_pp0_iter1_reg = zext_ln459_reg_6040.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        icmp_ln450_reg_6036_pp0_iter10_reg = icmp_ln450_reg_6036_pp0_iter9_reg.read();
        icmp_ln450_reg_6036_pp0_iter2_reg = icmp_ln450_reg_6036_pp0_iter1_reg.read();
        icmp_ln450_reg_6036_pp0_iter3_reg = icmp_ln450_reg_6036_pp0_iter2_reg.read();
        icmp_ln450_reg_6036_pp0_iter4_reg = icmp_ln450_reg_6036_pp0_iter3_reg.read();
        icmp_ln450_reg_6036_pp0_iter5_reg = icmp_ln450_reg_6036_pp0_iter4_reg.read();
        icmp_ln450_reg_6036_pp0_iter6_reg = icmp_ln450_reg_6036_pp0_iter5_reg.read();
        icmp_ln450_reg_6036_pp0_iter7_reg = icmp_ln450_reg_6036_pp0_iter6_reg.read();
        icmp_ln450_reg_6036_pp0_iter8_reg = icmp_ln450_reg_6036_pp0_iter7_reg.read();
        icmp_ln450_reg_6036_pp0_iter9_reg = icmp_ln450_reg_6036_pp0_iter8_reg.read();
        zext_ln459_1_reg_6239_pp0_iter10_reg = zext_ln459_1_reg_6239_pp0_iter9_reg.read();
        zext_ln459_1_reg_6239_pp0_iter2_reg = zext_ln459_1_reg_6239_pp0_iter1_reg.read();
        zext_ln459_1_reg_6239_pp0_iter3_reg = zext_ln459_1_reg_6239_pp0_iter2_reg.read();
        zext_ln459_1_reg_6239_pp0_iter4_reg = zext_ln459_1_reg_6239_pp0_iter3_reg.read();
        zext_ln459_1_reg_6239_pp0_iter5_reg = zext_ln459_1_reg_6239_pp0_iter4_reg.read();
        zext_ln459_1_reg_6239_pp0_iter6_reg = zext_ln459_1_reg_6239_pp0_iter5_reg.read();
        zext_ln459_1_reg_6239_pp0_iter7_reg = zext_ln459_1_reg_6239_pp0_iter6_reg.read();
        zext_ln459_1_reg_6239_pp0_iter8_reg = zext_ln459_1_reg_6239_pp0_iter7_reg.read();
        zext_ln459_1_reg_6239_pp0_iter9_reg = zext_ln459_1_reg_6239_pp0_iter8_reg.read();
        zext_ln459_reg_6040_pp0_iter10_reg = zext_ln459_reg_6040_pp0_iter9_reg.read();
        zext_ln459_reg_6040_pp0_iter2_reg = zext_ln459_reg_6040_pp0_iter1_reg.read();
        zext_ln459_reg_6040_pp0_iter3_reg = zext_ln459_reg_6040_pp0_iter2_reg.read();
        zext_ln459_reg_6040_pp0_iter4_reg = zext_ln459_reg_6040_pp0_iter3_reg.read();
        zext_ln459_reg_6040_pp0_iter5_reg = zext_ln459_reg_6040_pp0_iter4_reg.read();
        zext_ln459_reg_6040_pp0_iter6_reg = zext_ln459_reg_6040_pp0_iter5_reg.read();
        zext_ln459_reg_6040_pp0_iter7_reg = zext_ln459_reg_6040_pp0_iter6_reg.read();
        zext_ln459_reg_6040_pp0_iter8_reg = zext_ln459_reg_6040_pp0_iter7_reg.read();
        zext_ln459_reg_6040_pp0_iter9_reg = zext_ln459_reg_6040_pp0_iter8_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(icmp_ln450_reg_6036_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        phi_input_0_V_36_reg_7818 = node_attr_1D_r_mat_1_0_0_V_q0.read();
        phi_input_0_V_37_reg_7868 = node_attr_1D_r_mat_2_0_0_V_q0.read();
        phi_input_0_V_38_reg_7918 = node_attr_1D_r_mat_3_0_0_V_q0.read();
        phi_input_0_V_39_reg_7968 = node_attr_1D_r_mat_4_0_0_V_q0.read();
        phi_input_0_V_40_reg_8018 = node_attr_1D_r_mat_5_0_0_V_q0.read();
        phi_input_0_V_41_reg_8068 = node_attr_1D_r_mat_6_0_0_V_q0.read();
        phi_input_0_V_42_reg_8118 = node_attr_1D_r_mat_7_0_0_V_q0.read();
        phi_input_0_V_43_reg_8168 = node_attr_1D_r_mat_8_0_0_V_q0.read();
        phi_input_0_V_44_reg_8218 = node_attr_1D_r_mat_9_0_0_V_q0.read();
        phi_input_0_V_45_reg_8268 = node_attr_1D_r_mat_10_0_0_V_q0.read();
        phi_input_0_V_46_reg_8318 = node_attr_1D_r_mat_11_0_0_V_q0.read();
        phi_input_0_V_47_reg_8368 = node_attr_1D_r_mat_12_0_0_V_q0.read();
        phi_input_0_V_48_reg_8418 = node_attr_1D_r_mat_0_0_0_V_q1.read();
        phi_input_0_V_49_reg_8468 = node_attr_1D_r_mat_1_0_0_V_q1.read();
        phi_input_0_V_50_reg_8518 = node_attr_1D_r_mat_2_0_0_V_q1.read();
        phi_input_0_V_51_reg_8568 = node_attr_1D_r_mat_3_0_0_V_q1.read();
        phi_input_0_V_52_reg_8618 = node_attr_1D_r_mat_4_0_0_V_q1.read();
        phi_input_0_V_53_reg_8668 = node_attr_1D_r_mat_5_0_0_V_q1.read();
        phi_input_0_V_54_reg_8718 = node_attr_1D_r_mat_6_0_0_V_q1.read();
        phi_input_0_V_55_reg_8768 = node_attr_1D_r_mat_7_0_0_V_q1.read();
        phi_input_0_V_56_reg_8818 = node_attr_1D_r_mat_8_0_0_V_q1.read();
        phi_input_0_V_57_reg_8868 = node_attr_1D_r_mat_9_0_0_V_q1.read();
        phi_input_0_V_58_reg_8918 = node_attr_1D_r_mat_10_0_0_V_q1.read();
        phi_input_0_V_59_reg_8968 = node_attr_1D_r_mat_11_0_0_V_q1.read();
        phi_input_0_V_60_reg_9018 = node_attr_1D_r_mat_12_0_0_V_q1.read();
        phi_input_0_V_reg_7768 = node_attr_1D_r_mat_0_0_0_V_q0.read();
        phi_input_1_V_36_reg_7828 = node_attr_1D_r_mat_1_1_0_V_q0.read();
        phi_input_1_V_37_reg_7878 = node_attr_1D_r_mat_2_1_0_V_q0.read();
        phi_input_1_V_38_reg_7928 = node_attr_1D_r_mat_3_1_0_V_q0.read();
        phi_input_1_V_39_reg_7978 = node_attr_1D_r_mat_4_1_0_V_q0.read();
        phi_input_1_V_40_reg_8028 = node_attr_1D_r_mat_5_1_0_V_q0.read();
        phi_input_1_V_41_reg_8078 = node_attr_1D_r_mat_6_1_0_V_q0.read();
        phi_input_1_V_42_reg_8128 = node_attr_1D_r_mat_7_1_0_V_q0.read();
        phi_input_1_V_43_reg_8178 = node_attr_1D_r_mat_8_1_0_V_q0.read();
        phi_input_1_V_44_reg_8228 = node_attr_1D_r_mat_9_1_0_V_q0.read();
        phi_input_1_V_45_reg_8278 = node_attr_1D_r_mat_10_1_0_V_q0.read();
        phi_input_1_V_46_reg_8328 = node_attr_1D_r_mat_11_1_0_V_q0.read();
        phi_input_1_V_47_reg_8378 = node_attr_1D_r_mat_12_1_0_V_q0.read();
        phi_input_1_V_48_reg_8428 = node_attr_1D_r_mat_0_1_0_V_q1.read();
        phi_input_1_V_49_reg_8478 = node_attr_1D_r_mat_1_1_0_V_q1.read();
        phi_input_1_V_50_reg_8528 = node_attr_1D_r_mat_2_1_0_V_q1.read();
        phi_input_1_V_51_reg_8578 = node_attr_1D_r_mat_3_1_0_V_q1.read();
        phi_input_1_V_52_reg_8628 = node_attr_1D_r_mat_4_1_0_V_q1.read();
        phi_input_1_V_53_reg_8678 = node_attr_1D_r_mat_5_1_0_V_q1.read();
        phi_input_1_V_54_reg_8728 = node_attr_1D_r_mat_6_1_0_V_q1.read();
        phi_input_1_V_55_reg_8778 = node_attr_1D_r_mat_7_1_0_V_q1.read();
        phi_input_1_V_56_reg_8828 = node_attr_1D_r_mat_8_1_0_V_q1.read();
        phi_input_1_V_57_reg_8878 = node_attr_1D_r_mat_9_1_0_V_q1.read();
        phi_input_1_V_58_reg_8928 = node_attr_1D_r_mat_10_1_0_V_q1.read();
        phi_input_1_V_59_reg_8978 = node_attr_1D_r_mat_11_1_0_V_q1.read();
        phi_input_1_V_60_reg_9028 = node_attr_1D_r_mat_12_1_0_V_q1.read();
        phi_input_1_V_reg_7778 = node_attr_1D_r_mat_0_1_0_V_q0.read();
        phi_input_2_V_36_reg_7838 = node_attr_1D_r_mat_1_2_0_V_q0.read();
        phi_input_2_V_37_reg_7888 = node_attr_1D_r_mat_2_2_0_V_q0.read();
        phi_input_2_V_38_reg_7938 = node_attr_1D_r_mat_3_2_0_V_q0.read();
        phi_input_2_V_39_reg_7988 = node_attr_1D_r_mat_4_2_0_V_q0.read();
        phi_input_2_V_40_reg_8038 = node_attr_1D_r_mat_5_2_0_V_q0.read();
        phi_input_2_V_41_reg_8088 = node_attr_1D_r_mat_6_2_0_V_q0.read();
        phi_input_2_V_42_reg_8138 = node_attr_1D_r_mat_7_2_0_V_q0.read();
        phi_input_2_V_43_reg_8188 = node_attr_1D_r_mat_8_2_0_V_q0.read();
        phi_input_2_V_44_reg_8238 = node_attr_1D_r_mat_9_2_0_V_q0.read();
        phi_input_2_V_45_reg_8288 = node_attr_1D_r_mat_10_2_0_V_q0.read();
        phi_input_2_V_46_reg_8338 = node_attr_1D_r_mat_11_2_0_V_q0.read();
        phi_input_2_V_47_reg_8388 = node_attr_1D_r_mat_12_2_0_V_q0.read();
        phi_input_2_V_48_reg_8438 = node_attr_1D_r_mat_0_2_0_V_q1.read();
        phi_input_2_V_49_reg_8488 = node_attr_1D_r_mat_1_2_0_V_q1.read();
        phi_input_2_V_50_reg_8538 = node_attr_1D_r_mat_2_2_0_V_q1.read();
        phi_input_2_V_51_reg_8588 = node_attr_1D_r_mat_3_2_0_V_q1.read();
        phi_input_2_V_52_reg_8638 = node_attr_1D_r_mat_4_2_0_V_q1.read();
        phi_input_2_V_53_reg_8688 = node_attr_1D_r_mat_5_2_0_V_q1.read();
        phi_input_2_V_54_reg_8738 = node_attr_1D_r_mat_6_2_0_V_q1.read();
        phi_input_2_V_55_reg_8788 = node_attr_1D_r_mat_7_2_0_V_q1.read();
        phi_input_2_V_56_reg_8838 = node_attr_1D_r_mat_8_2_0_V_q1.read();
        phi_input_2_V_57_reg_8888 = node_attr_1D_r_mat_9_2_0_V_q1.read();
        phi_input_2_V_58_reg_8938 = node_attr_1D_r_mat_10_2_0_V_q1.read();
        phi_input_2_V_59_reg_8988 = node_attr_1D_r_mat_11_2_0_V_q1.read();
        phi_input_2_V_60_reg_9038 = node_attr_1D_r_mat_12_2_0_V_q1.read();
        phi_input_2_V_reg_7788 = node_attr_1D_r_mat_0_2_0_V_q0.read();
        phi_input_3_V_35_reg_7813 = node_attr_1D_s_mat_1_0_0_V_q0.read();
        phi_input_3_V_36_reg_7863 = node_attr_1D_s_mat_2_0_0_V_q0.read();
        phi_input_3_V_37_reg_7913 = node_attr_1D_s_mat_3_0_0_V_q0.read();
        phi_input_3_V_38_reg_7963 = node_attr_1D_s_mat_4_0_0_V_q0.read();
        phi_input_3_V_39_reg_8013 = node_attr_1D_s_mat_5_0_0_V_q0.read();
        phi_input_3_V_40_reg_8063 = node_attr_1D_s_mat_6_0_0_V_q0.read();
        phi_input_3_V_41_reg_8113 = node_attr_1D_s_mat_7_0_0_V_q0.read();
        phi_input_3_V_42_reg_8163 = node_attr_1D_s_mat_8_0_0_V_q0.read();
        phi_input_3_V_43_reg_8213 = node_attr_1D_s_mat_9_0_0_V_q0.read();
        phi_input_3_V_44_reg_8263 = node_attr_1D_s_mat_10_0_0_V_q0.read();
        phi_input_3_V_45_reg_8313 = node_attr_1D_s_mat_11_0_0_V_q0.read();
        phi_input_3_V_46_reg_8363 = node_attr_1D_s_mat_12_0_0_V_q0.read();
        phi_input_3_V_47_reg_8413 = node_attr_1D_s_mat_0_0_0_V_q1.read();
        phi_input_3_V_48_reg_8463 = node_attr_1D_s_mat_1_0_0_V_q1.read();
        phi_input_3_V_49_reg_8513 = node_attr_1D_s_mat_2_0_0_V_q1.read();
        phi_input_3_V_50_reg_8563 = node_attr_1D_s_mat_3_0_0_V_q1.read();
        phi_input_3_V_51_reg_8613 = node_attr_1D_s_mat_4_0_0_V_q1.read();
        phi_input_3_V_52_reg_8663 = node_attr_1D_s_mat_5_0_0_V_q1.read();
        phi_input_3_V_53_reg_8713 = node_attr_1D_s_mat_6_0_0_V_q1.read();
        phi_input_3_V_54_reg_8763 = node_attr_1D_s_mat_7_0_0_V_q1.read();
        phi_input_3_V_55_reg_8813 = node_attr_1D_s_mat_8_0_0_V_q1.read();
        phi_input_3_V_56_reg_8863 = node_attr_1D_s_mat_9_0_0_V_q1.read();
        phi_input_3_V_57_reg_8913 = node_attr_1D_s_mat_10_0_0_V_q1.read();
        phi_input_3_V_58_reg_8963 = node_attr_1D_s_mat_11_0_0_V_q1.read();
        phi_input_3_V_59_reg_9013 = node_attr_1D_s_mat_12_0_0_V_q1.read();
        phi_input_3_V_reg_7763 = node_attr_1D_s_mat_0_0_0_V_q0.read();
        phi_input_4_V_35_reg_7823 = node_attr_1D_s_mat_1_1_0_V_q0.read();
        phi_input_4_V_36_reg_7873 = node_attr_1D_s_mat_2_1_0_V_q0.read();
        phi_input_4_V_37_reg_7923 = node_attr_1D_s_mat_3_1_0_V_q0.read();
        phi_input_4_V_38_reg_7973 = node_attr_1D_s_mat_4_1_0_V_q0.read();
        phi_input_4_V_39_reg_8023 = node_attr_1D_s_mat_5_1_0_V_q0.read();
        phi_input_4_V_40_reg_8073 = node_attr_1D_s_mat_6_1_0_V_q0.read();
        phi_input_4_V_41_reg_8123 = node_attr_1D_s_mat_7_1_0_V_q0.read();
        phi_input_4_V_42_reg_8173 = node_attr_1D_s_mat_8_1_0_V_q0.read();
        phi_input_4_V_43_reg_8223 = node_attr_1D_s_mat_9_1_0_V_q0.read();
        phi_input_4_V_44_reg_8273 = node_attr_1D_s_mat_10_1_0_V_q0.read();
        phi_input_4_V_45_reg_8323 = node_attr_1D_s_mat_11_1_0_V_q0.read();
        phi_input_4_V_46_reg_8373 = node_attr_1D_s_mat_12_1_0_V_q0.read();
        phi_input_4_V_47_reg_8423 = node_attr_1D_s_mat_0_1_0_V_q1.read();
        phi_input_4_V_48_reg_8473 = node_attr_1D_s_mat_1_1_0_V_q1.read();
        phi_input_4_V_49_reg_8523 = node_attr_1D_s_mat_2_1_0_V_q1.read();
        phi_input_4_V_50_reg_8573 = node_attr_1D_s_mat_3_1_0_V_q1.read();
        phi_input_4_V_51_reg_8623 = node_attr_1D_s_mat_4_1_0_V_q1.read();
        phi_input_4_V_52_reg_8673 = node_attr_1D_s_mat_5_1_0_V_q1.read();
        phi_input_4_V_53_reg_8723 = node_attr_1D_s_mat_6_1_0_V_q1.read();
        phi_input_4_V_54_reg_8773 = node_attr_1D_s_mat_7_1_0_V_q1.read();
        phi_input_4_V_55_reg_8823 = node_attr_1D_s_mat_8_1_0_V_q1.read();
        phi_input_4_V_56_reg_8873 = node_attr_1D_s_mat_9_1_0_V_q1.read();
        phi_input_4_V_57_reg_8923 = node_attr_1D_s_mat_10_1_0_V_q1.read();
        phi_input_4_V_58_reg_8973 = node_attr_1D_s_mat_11_1_0_V_q1.read();
        phi_input_4_V_59_reg_9023 = node_attr_1D_s_mat_12_1_0_V_q1.read();
        phi_input_4_V_reg_7773 = node_attr_1D_s_mat_0_1_0_V_q0.read();
        phi_input_5_V_35_reg_7833 = node_attr_1D_s_mat_1_2_0_V_q0.read();
        phi_input_5_V_36_reg_7883 = node_attr_1D_s_mat_2_2_0_V_q0.read();
        phi_input_5_V_37_reg_7933 = node_attr_1D_s_mat_3_2_0_V_q0.read();
        phi_input_5_V_38_reg_7983 = node_attr_1D_s_mat_4_2_0_V_q0.read();
        phi_input_5_V_39_reg_8033 = node_attr_1D_s_mat_5_2_0_V_q0.read();
        phi_input_5_V_40_reg_8083 = node_attr_1D_s_mat_6_2_0_V_q0.read();
        phi_input_5_V_41_reg_8133 = node_attr_1D_s_mat_7_2_0_V_q0.read();
        phi_input_5_V_42_reg_8183 = node_attr_1D_s_mat_8_2_0_V_q0.read();
        phi_input_5_V_43_reg_8233 = node_attr_1D_s_mat_9_2_0_V_q0.read();
        phi_input_5_V_44_reg_8283 = node_attr_1D_s_mat_10_2_0_V_q0.read();
        phi_input_5_V_45_reg_8333 = node_attr_1D_s_mat_11_2_0_V_q0.read();
        phi_input_5_V_46_reg_8383 = node_attr_1D_s_mat_12_2_0_V_q0.read();
        phi_input_5_V_47_reg_8433 = node_attr_1D_s_mat_0_2_0_V_q1.read();
        phi_input_5_V_48_reg_8483 = node_attr_1D_s_mat_1_2_0_V_q1.read();
        phi_input_5_V_49_reg_8533 = node_attr_1D_s_mat_2_2_0_V_q1.read();
        phi_input_5_V_50_reg_8583 = node_attr_1D_s_mat_3_2_0_V_q1.read();
        phi_input_5_V_51_reg_8633 = node_attr_1D_s_mat_4_2_0_V_q1.read();
        phi_input_5_V_52_reg_8683 = node_attr_1D_s_mat_5_2_0_V_q1.read();
        phi_input_5_V_53_reg_8733 = node_attr_1D_s_mat_6_2_0_V_q1.read();
        phi_input_5_V_54_reg_8783 = node_attr_1D_s_mat_7_2_0_V_q1.read();
        phi_input_5_V_55_reg_8833 = node_attr_1D_s_mat_8_2_0_V_q1.read();
        phi_input_5_V_56_reg_8883 = node_attr_1D_s_mat_9_2_0_V_q1.read();
        phi_input_5_V_57_reg_8933 = node_attr_1D_s_mat_10_2_0_V_q1.read();
        phi_input_5_V_58_reg_8983 = node_attr_1D_s_mat_11_2_0_V_q1.read();
        phi_input_5_V_59_reg_9033 = node_attr_1D_s_mat_12_2_0_V_q1.read();
        phi_input_5_V_reg_7783 = node_attr_1D_s_mat_0_2_0_V_q0.read();
        phi_input_6_V_35_reg_7793 = layer7_out_cpy2_V_1_0_q0.read();
        phi_input_6_V_36_reg_7843 = layer7_out_cpy2_V_2_0_q0.read();
        phi_input_6_V_37_reg_7893 = layer7_out_cpy2_V_3_0_q0.read();
        phi_input_6_V_38_reg_7943 = layer7_out_cpy2_V_4_0_q0.read();
        phi_input_6_V_39_reg_7993 = layer7_out_cpy2_V_5_0_q0.read();
        phi_input_6_V_40_reg_8043 = layer7_out_cpy2_V_6_0_q0.read();
        phi_input_6_V_41_reg_8093 = layer7_out_cpy2_V_7_0_q0.read();
        phi_input_6_V_42_reg_8143 = layer7_out_cpy2_V_8_0_q0.read();
        phi_input_6_V_43_reg_8193 = layer7_out_cpy2_V_9_0_q0.read();
        phi_input_6_V_44_reg_8243 = layer7_out_cpy2_V_10_0_q0.read();
        phi_input_6_V_45_reg_8293 = layer7_out_cpy2_V_11_0_q0.read();
        phi_input_6_V_46_reg_8343 = layer7_out_cpy2_V_12_0_q0.read();
        phi_input_6_V_47_reg_8393 = layer7_out_cpy2_V_0_0_q1.read();
        phi_input_6_V_48_reg_8443 = layer7_out_cpy2_V_1_0_q1.read();
        phi_input_6_V_49_reg_8493 = layer7_out_cpy2_V_2_0_q1.read();
        phi_input_6_V_50_reg_8543 = layer7_out_cpy2_V_3_0_q1.read();
        phi_input_6_V_51_reg_8593 = layer7_out_cpy2_V_4_0_q1.read();
        phi_input_6_V_52_reg_8643 = layer7_out_cpy2_V_5_0_q1.read();
        phi_input_6_V_53_reg_8693 = layer7_out_cpy2_V_6_0_q1.read();
        phi_input_6_V_54_reg_8743 = layer7_out_cpy2_V_7_0_q1.read();
        phi_input_6_V_55_reg_8793 = layer7_out_cpy2_V_8_0_q1.read();
        phi_input_6_V_56_reg_8843 = layer7_out_cpy2_V_9_0_q1.read();
        phi_input_6_V_57_reg_8893 = layer7_out_cpy2_V_10_0_q1.read();
        phi_input_6_V_58_reg_8943 = layer7_out_cpy2_V_11_0_q1.read();
        phi_input_6_V_59_reg_8993 = layer7_out_cpy2_V_12_0_q1.read();
        phi_input_6_V_reg_7743 = layer7_out_cpy2_V_0_0_q0.read();
        phi_input_7_V_26_reg_7798 = layer7_out_cpy2_V_1_1_q0.read();
        phi_input_7_V_27_reg_7848 = layer7_out_cpy2_V_2_1_q0.read();
        phi_input_7_V_28_reg_7898 = layer7_out_cpy2_V_3_1_q0.read();
        phi_input_7_V_29_reg_7948 = layer7_out_cpy2_V_4_1_q0.read();
        phi_input_7_V_30_reg_7998 = layer7_out_cpy2_V_5_1_q0.read();
        phi_input_7_V_31_reg_8048 = layer7_out_cpy2_V_6_1_q0.read();
        phi_input_7_V_32_reg_8098 = layer7_out_cpy2_V_7_1_q0.read();
        phi_input_7_V_33_reg_8148 = layer7_out_cpy2_V_8_1_q0.read();
        phi_input_7_V_34_reg_8198 = layer7_out_cpy2_V_9_1_q0.read();
        phi_input_7_V_35_reg_8248 = layer7_out_cpy2_V_10_1_q0.read();
        phi_input_7_V_36_reg_8298 = layer7_out_cpy2_V_11_1_q0.read();
        phi_input_7_V_37_reg_8348 = layer7_out_cpy2_V_12_1_q0.read();
        phi_input_7_V_38_reg_8398 = layer7_out_cpy2_V_0_1_q1.read();
        phi_input_7_V_39_reg_8448 = layer7_out_cpy2_V_1_1_q1.read();
        phi_input_7_V_40_reg_8498 = layer7_out_cpy2_V_2_1_q1.read();
        phi_input_7_V_41_reg_8548 = layer7_out_cpy2_V_3_1_q1.read();
        phi_input_7_V_42_reg_8598 = layer7_out_cpy2_V_4_1_q1.read();
        phi_input_7_V_43_reg_8648 = layer7_out_cpy2_V_5_1_q1.read();
        phi_input_7_V_44_reg_8698 = layer7_out_cpy2_V_6_1_q1.read();
        phi_input_7_V_45_reg_8748 = layer7_out_cpy2_V_7_1_q1.read();
        phi_input_7_V_46_reg_8798 = layer7_out_cpy2_V_8_1_q1.read();
        phi_input_7_V_47_reg_8848 = layer7_out_cpy2_V_9_1_q1.read();
        phi_input_7_V_48_reg_8898 = layer7_out_cpy2_V_10_1_q1.read();
        phi_input_7_V_49_reg_8948 = layer7_out_cpy2_V_11_1_q1.read();
        phi_input_7_V_50_reg_8998 = layer7_out_cpy2_V_12_1_q1.read();
        phi_input_7_V_reg_7748 = layer7_out_cpy2_V_0_1_q0.read();
        phi_input_8_V_26_reg_7803 = layer7_out_cpy2_V_1_2_q0.read();
        phi_input_8_V_27_reg_7853 = layer7_out_cpy2_V_2_2_q0.read();
        phi_input_8_V_28_reg_7903 = layer7_out_cpy2_V_3_2_q0.read();
        phi_input_8_V_29_reg_7953 = layer7_out_cpy2_V_4_2_q0.read();
        phi_input_8_V_30_reg_8003 = layer7_out_cpy2_V_5_2_q0.read();
        phi_input_8_V_31_reg_8053 = layer7_out_cpy2_V_6_2_q0.read();
        phi_input_8_V_32_reg_8103 = layer7_out_cpy2_V_7_2_q0.read();
        phi_input_8_V_33_reg_8153 = layer7_out_cpy2_V_8_2_q0.read();
        phi_input_8_V_34_reg_8203 = layer7_out_cpy2_V_9_2_q0.read();
        phi_input_8_V_35_reg_8253 = layer7_out_cpy2_V_10_2_q0.read();
        phi_input_8_V_36_reg_8303 = layer7_out_cpy2_V_11_2_q0.read();
        phi_input_8_V_37_reg_8353 = layer7_out_cpy2_V_12_2_q0.read();
        phi_input_8_V_38_reg_8403 = layer7_out_cpy2_V_0_2_q1.read();
        phi_input_8_V_39_reg_8453 = layer7_out_cpy2_V_1_2_q1.read();
        phi_input_8_V_40_reg_8503 = layer7_out_cpy2_V_2_2_q1.read();
        phi_input_8_V_41_reg_8553 = layer7_out_cpy2_V_3_2_q1.read();
        phi_input_8_V_42_reg_8603 = layer7_out_cpy2_V_4_2_q1.read();
        phi_input_8_V_43_reg_8653 = layer7_out_cpy2_V_5_2_q1.read();
        phi_input_8_V_44_reg_8703 = layer7_out_cpy2_V_6_2_q1.read();
        phi_input_8_V_45_reg_8753 = layer7_out_cpy2_V_7_2_q1.read();
        phi_input_8_V_46_reg_8803 = layer7_out_cpy2_V_8_2_q1.read();
        phi_input_8_V_47_reg_8853 = layer7_out_cpy2_V_9_2_q1.read();
        phi_input_8_V_48_reg_8903 = layer7_out_cpy2_V_10_2_q1.read();
        phi_input_8_V_49_reg_8953 = layer7_out_cpy2_V_11_2_q1.read();
        phi_input_8_V_50_reg_9003 = layer7_out_cpy2_V_12_2_q1.read();
        phi_input_8_V_reg_7753 = layer7_out_cpy2_V_0_2_q0.read();
        phi_input_9_V_26_reg_7808 = layer7_out_cpy2_V_1_3_q0.read();
        phi_input_9_V_27_reg_7858 = layer7_out_cpy2_V_2_3_q0.read();
        phi_input_9_V_28_reg_7908 = layer7_out_cpy2_V_3_3_q0.read();
        phi_input_9_V_29_reg_7958 = layer7_out_cpy2_V_4_3_q0.read();
        phi_input_9_V_30_reg_8008 = layer7_out_cpy2_V_5_3_q0.read();
        phi_input_9_V_31_reg_8058 = layer7_out_cpy2_V_6_3_q0.read();
        phi_input_9_V_32_reg_8108 = layer7_out_cpy2_V_7_3_q0.read();
        phi_input_9_V_33_reg_8158 = layer7_out_cpy2_V_8_3_q0.read();
        phi_input_9_V_34_reg_8208 = layer7_out_cpy2_V_9_3_q0.read();
        phi_input_9_V_35_reg_8258 = layer7_out_cpy2_V_10_3_q0.read();
        phi_input_9_V_36_reg_8308 = layer7_out_cpy2_V_11_3_q0.read();
        phi_input_9_V_37_reg_8358 = layer7_out_cpy2_V_12_3_q0.read();
        phi_input_9_V_38_reg_8408 = layer7_out_cpy2_V_0_3_q1.read();
        phi_input_9_V_39_reg_8458 = layer7_out_cpy2_V_1_3_q1.read();
        phi_input_9_V_40_reg_8508 = layer7_out_cpy2_V_2_3_q1.read();
        phi_input_9_V_41_reg_8558 = layer7_out_cpy2_V_3_3_q1.read();
        phi_input_9_V_42_reg_8608 = layer7_out_cpy2_V_4_3_q1.read();
        phi_input_9_V_43_reg_8658 = layer7_out_cpy2_V_5_3_q1.read();
        phi_input_9_V_44_reg_8708 = layer7_out_cpy2_V_6_3_q1.read();
        phi_input_9_V_45_reg_8758 = layer7_out_cpy2_V_7_3_q1.read();
        phi_input_9_V_46_reg_8808 = layer7_out_cpy2_V_8_3_q1.read();
        phi_input_9_V_47_reg_8858 = layer7_out_cpy2_V_9_3_q1.read();
        phi_input_9_V_48_reg_8908 = layer7_out_cpy2_V_10_3_q1.read();
        phi_input_9_V_49_reg_8958 = layer7_out_cpy2_V_11_3_q1.read();
        phi_input_9_V_50_reg_9008 = layer7_out_cpy2_V_12_3_q1.read();
        phi_input_9_V_reg_7758 = layer7_out_cpy2_V_0_3_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln450_fu_5176_p2.read(), ap_const_lv1_0))) {
        zext_ln459_1_reg_6239 = zext_ln459_1_fu_5218_p1.read();
        zext_ln459_reg_6040 = zext_ln459_fu_5182_p1.read();
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
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter10.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln450_fu_5176_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter10.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln450_fu_5176_p2.read(), ap_const_lv1_1) && 
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

