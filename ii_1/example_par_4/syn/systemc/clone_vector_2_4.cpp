#include "clone_vector_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void clone_vector_2::thread_OUT2_8_3_V_address0() {
    OUT2_8_3_V_address0 =  (sc_lv<7>) (zext_ln203_reg_4872.read());
}

void clone_vector_2::thread_OUT2_8_3_V_address1() {
    OUT2_8_3_V_address1 =  (sc_lv<7>) (zext_ln203_2_reg_5193.read());
}

void clone_vector_2::thread_OUT2_8_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OUT2_8_3_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_8_3_V_ce0 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_8_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OUT2_8_3_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_8_3_V_ce1 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_8_3_V_d0() {
    OUT2_8_3_V_d0 = IN_8_3_V_q0.read();
}

void clone_vector_2::thread_OUT2_8_3_V_d1() {
    OUT2_8_3_V_d1 = IN_8_3_V_q1.read();
}

void clone_vector_2::thread_OUT2_8_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln109_reg_4868.read(), ap_const_lv1_0))) {
        OUT2_8_3_V_we0 = ap_const_logic_1;
    } else {
        OUT2_8_3_V_we0 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_8_3_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln109_reg_4868.read(), ap_const_lv1_0))) {
        OUT2_8_3_V_we1 = ap_const_logic_1;
    } else {
        OUT2_8_3_V_we1 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_0_V_address0() {
    OUT2_9_0_V_address0 =  (sc_lv<7>) (zext_ln203_reg_4872.read());
}

void clone_vector_2::thread_OUT2_9_0_V_address1() {
    OUT2_9_0_V_address1 =  (sc_lv<7>) (zext_ln203_2_reg_5193.read());
}

void clone_vector_2::thread_OUT2_9_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OUT2_9_0_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_9_0_V_ce0 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OUT2_9_0_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_9_0_V_ce1 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_0_V_d0() {
    OUT2_9_0_V_d0 = IN_9_0_V_q0.read();
}

void clone_vector_2::thread_OUT2_9_0_V_d1() {
    OUT2_9_0_V_d1 = IN_9_0_V_q1.read();
}

void clone_vector_2::thread_OUT2_9_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln109_reg_4868.read(), ap_const_lv1_0))) {
        OUT2_9_0_V_we0 = ap_const_logic_1;
    } else {
        OUT2_9_0_V_we0 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_0_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln109_reg_4868.read(), ap_const_lv1_0))) {
        OUT2_9_0_V_we1 = ap_const_logic_1;
    } else {
        OUT2_9_0_V_we1 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_1_V_address0() {
    OUT2_9_1_V_address0 =  (sc_lv<7>) (zext_ln203_reg_4872.read());
}

void clone_vector_2::thread_OUT2_9_1_V_address1() {
    OUT2_9_1_V_address1 =  (sc_lv<7>) (zext_ln203_2_reg_5193.read());
}

void clone_vector_2::thread_OUT2_9_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OUT2_9_1_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_9_1_V_ce0 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OUT2_9_1_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_9_1_V_ce1 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_1_V_d0() {
    OUT2_9_1_V_d0 = IN_9_1_V_q0.read();
}

void clone_vector_2::thread_OUT2_9_1_V_d1() {
    OUT2_9_1_V_d1 = IN_9_1_V_q1.read();
}

void clone_vector_2::thread_OUT2_9_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln109_reg_4868.read(), ap_const_lv1_0))) {
        OUT2_9_1_V_we0 = ap_const_logic_1;
    } else {
        OUT2_9_1_V_we0 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_1_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln109_reg_4868.read(), ap_const_lv1_0))) {
        OUT2_9_1_V_we1 = ap_const_logic_1;
    } else {
        OUT2_9_1_V_we1 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_2_V_address0() {
    OUT2_9_2_V_address0 =  (sc_lv<7>) (zext_ln203_reg_4872.read());
}

void clone_vector_2::thread_OUT2_9_2_V_address1() {
    OUT2_9_2_V_address1 =  (sc_lv<7>) (zext_ln203_2_reg_5193.read());
}

void clone_vector_2::thread_OUT2_9_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OUT2_9_2_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_9_2_V_ce0 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OUT2_9_2_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_9_2_V_ce1 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_2_V_d0() {
    OUT2_9_2_V_d0 = IN_9_2_V_q0.read();
}

void clone_vector_2::thread_OUT2_9_2_V_d1() {
    OUT2_9_2_V_d1 = IN_9_2_V_q1.read();
}

void clone_vector_2::thread_OUT2_9_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln109_reg_4868.read(), ap_const_lv1_0))) {
        OUT2_9_2_V_we0 = ap_const_logic_1;
    } else {
        OUT2_9_2_V_we0 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_2_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln109_reg_4868.read(), ap_const_lv1_0))) {
        OUT2_9_2_V_we1 = ap_const_logic_1;
    } else {
        OUT2_9_2_V_we1 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_3_V_address0() {
    OUT2_9_3_V_address0 =  (sc_lv<7>) (zext_ln203_reg_4872.read());
}

void clone_vector_2::thread_OUT2_9_3_V_address1() {
    OUT2_9_3_V_address1 =  (sc_lv<7>) (zext_ln203_2_reg_5193.read());
}

void clone_vector_2::thread_OUT2_9_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OUT2_9_3_V_ce0 = ap_const_logic_1;
    } else {
        OUT2_9_3_V_ce0 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OUT2_9_3_V_ce1 = ap_const_logic_1;
    } else {
        OUT2_9_3_V_ce1 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_3_V_d0() {
    OUT2_9_3_V_d0 = IN_9_3_V_q0.read();
}

void clone_vector_2::thread_OUT2_9_3_V_d1() {
    OUT2_9_3_V_d1 = IN_9_3_V_q1.read();
}

void clone_vector_2::thread_OUT2_9_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln109_reg_4868.read(), ap_const_lv1_0))) {
        OUT2_9_3_V_we0 = ap_const_logic_1;
    } else {
        OUT2_9_3_V_we0 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_OUT2_9_3_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln109_reg_4868.read(), ap_const_lv1_0))) {
        OUT2_9_3_V_we1 = ap_const_logic_1;
    } else {
        OUT2_9_3_V_we1 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_add_ln109_fu_4755_p2() {
    add_ln109_fu_4755_p2 = (!j_0_0_reg_4610.read().is_01() || !ap_const_lv7_2.is_01())? sc_lv<7>(): (sc_biguint<7>(j_0_0_reg_4610.read()) + sc_biguint<7>(ap_const_lv7_2));
}

void clone_vector_2::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void clone_vector_2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void clone_vector_2::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[2];
}

void clone_vector_2::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void clone_vector_2::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void clone_vector_2::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void clone_vector_2::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void clone_vector_2::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void clone_vector_2::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void clone_vector_2::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln109_fu_4621_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void clone_vector_2::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void clone_vector_2::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void clone_vector_2::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void clone_vector_2::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void clone_vector_2::thread_icmp_ln109_fu_4621_p2() {
    icmp_ln109_fu_4621_p2 = (!j_0_0_reg_4610.read().is_01() || !ap_const_lv7_78.is_01())? sc_lv<1>(): sc_lv<1>(j_0_0_reg_4610.read() == ap_const_lv7_78);
}

void clone_vector_2::thread_or_ln203_fu_4693_p2() {
    or_ln203_fu_4693_p2 = (j_0_0_reg_4610.read() | ap_const_lv7_1);
}

void clone_vector_2::thread_zext_ln203_1_fu_4761_p1() {
    zext_ln203_1_fu_4761_p1 = esl_zext<64,6>(trunc_ln_reg_4933.read());
}

void clone_vector_2::thread_zext_ln203_2_fu_4699_p1() {
    zext_ln203_2_fu_4699_p1 = esl_zext<64,7>(or_ln203_fu_4693_p2.read());
}

void clone_vector_2::thread_zext_ln203_fu_4627_p1() {
    zext_ln203_fu_4627_p1 = esl_zext<64,7>(j_0_0_reg_4610.read());
}

}

