#include "Loop_fetch_loop_proc.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_2_reg_39079.read())))) {
        edge_attr_aggr_1_0_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_1_fu_33516_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_54_fu_23977_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_0_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_0_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_0_1_V_address1 =  (sc_lv<6>) (zext_ln544_55_fu_25561_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_0_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_0_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_0_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_0_1_V_d0 = agg_p_1_1_0_V_fu_766.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_0_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_0_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_0_1_V_d1 = agg_p_1_1_0_V_fu_766.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_0_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_0_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_2_reg_39079.read())))) {
        edge_attr_aggr_1_0_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_1_fu_33516_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_54_fu_23977_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_0_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_0_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_0_2_V_address1 =  (sc_lv<6>) (zext_ln544_55_fu_25561_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_0_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_0_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_0_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_0_2_V_d0 = agg_p_1_2_0_V_fu_750.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_0_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_0_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_0_2_V_d1 = agg_p_1_2_0_V_fu_750.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_0_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_0_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_2_reg_39079.read())))) {
        edge_attr_aggr_1_0_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_1_fu_33516_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_54_fu_23977_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_0_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_0_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_0_3_V_address1 =  (sc_lv<6>) (zext_ln544_55_fu_25561_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_0_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_0_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_0_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_0_3_V_d0 = agg_p_1_3_0_V_fu_854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_0_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_0_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_0_3_V_d1 = agg_p_1_3_0_V_fu_854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_0_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_0_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_0_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_2_reg_39079.read())))) {
        edge_attr_aggr_1_0_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_0_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_14_fu_33620_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_80_fu_24341_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_1_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_1_0_V_address1 =  (sc_lv<6>) (zext_ln544_81_fu_27589_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_1_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_1_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_1_0_V_d0 = agg_p_1_0_1_V_fu_778.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_1_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_1_0_V_d1 = agg_p_1_0_1_V_fu_778.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_1_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_28_reg_40132.read())))) {
        edge_attr_aggr_1_1_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_14_fu_33620_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_80_fu_24341_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_1_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_1_1_V_address1 =  (sc_lv<6>) (zext_ln544_81_fu_27589_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_1_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_1_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_1_1_V_d0 = agg_p_1_1_1_V_fu_762.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_1_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_1_1_V_d1 = agg_p_1_1_1_V_fu_762.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_1_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_28_reg_40132.read())))) {
        edge_attr_aggr_1_1_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_14_fu_33620_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_80_fu_24341_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_1_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_1_2_V_address1 =  (sc_lv<6>) (zext_ln544_81_fu_27589_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_1_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_1_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_1_2_V_d0 = agg_p_1_2_1_V_fu_746.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_1_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_1_2_V_d1 = agg_p_1_2_1_V_fu_746.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_1_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_28_reg_40132.read())))) {
        edge_attr_aggr_1_1_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_14_fu_33620_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_80_fu_24341_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_1_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_1_3_V_address1 =  (sc_lv<6>) (zext_ln544_81_fu_27589_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_1_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_1_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_1_3_V_d0 = agg_p_1_3_1_V_fu_858.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_1_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_1_3_V_d1 = agg_p_1_3_1_V_fu_858.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_1_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_1_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_1_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_28_reg_40132.read())))) {
        edge_attr_aggr_1_1_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_1_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_27_fu_33724_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_106_fu_24705_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_2_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_2_0_V_address1 =  (sc_lv<6>) (zext_ln544_107_fu_29617_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_2_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_2_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_2_0_V_d0 = agg_p_1_0_2_V_fu_774.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_2_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_2_0_V_d1 = agg_p_1_0_2_V_fu_774.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_2_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_54_reg_41185.read())))) {
        edge_attr_aggr_1_2_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_27_fu_33724_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_106_fu_24705_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_2_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_2_1_V_address1 =  (sc_lv<6>) (zext_ln544_107_fu_29617_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_2_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_2_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_2_1_V_d0 = agg_p_1_1_2_V_fu_758.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_2_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_2_1_V_d1 = agg_p_1_1_2_V_fu_758.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_2_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_54_reg_41185.read())))) {
        edge_attr_aggr_1_2_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_27_fu_33724_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_106_fu_24705_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_2_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_2_2_V_address1 =  (sc_lv<6>) (zext_ln544_107_fu_29617_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_2_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_2_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_2_2_V_d0 = agg_p_1_2_2_V_fu_742.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_2_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_2_2_V_d1 = agg_p_1_2_2_V_fu_742.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_2_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_54_reg_41185.read())))) {
        edge_attr_aggr_1_2_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_27_fu_33724_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_106_fu_24705_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_2_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_2_3_V_address1 =  (sc_lv<6>) (zext_ln544_107_fu_29617_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_2_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_2_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_2_3_V_d0 = agg_p_1_3_2_V_fu_862.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_2_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_2_3_V_d1 = agg_p_1_3_2_V_fu_862.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_2_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_2_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_2_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_54_reg_41185.read())))) {
        edge_attr_aggr_1_2_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_2_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_40_fu_33828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_132_fu_25069_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_3_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_3_0_V_address1 =  (sc_lv<6>) (zext_ln544_133_fu_31645_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_3_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_3_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_3_0_V_d0 = agg_p_1_0_3_V_fu_770.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_3_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_3_0_V_d1 = agg_p_1_0_3_V_fu_770.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_3_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_80_reg_42238.read())))) {
        edge_attr_aggr_1_3_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_40_fu_33828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_132_fu_25069_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_3_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_3_1_V_address1 =  (sc_lv<6>) (zext_ln544_133_fu_31645_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_3_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_3_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_3_1_V_d0 = agg_p_1_1_3_V_fu_754.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_3_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_3_1_V_d1 = agg_p_1_1_3_V_fu_754.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_3_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_80_reg_42238.read())))) {
        edge_attr_aggr_1_3_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_40_fu_33828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_132_fu_25069_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_3_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_3_2_V_address1 =  (sc_lv<6>) (zext_ln544_133_fu_31645_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_3_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_3_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_3_2_V_d0 = agg_p_1_2_3_V_fu_850.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_3_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_3_2_V_d1 = agg_p_1_2_3_V_fu_850.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_3_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_80_reg_42238.read())))) {
        edge_attr_aggr_1_3_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_40_fu_33828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_132_fu_25069_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_1_3_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_3_3_V_address1 =  (sc_lv<6>) (zext_ln544_133_fu_31645_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_1_3_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_1_3_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_1_3_3_V_d0 = agg_p_1_3_3_V_fu_866.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_3_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_1_3_3_V_d1 = agg_p_1_3_3_V_fu_866.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_1_3_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_1_3_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_1_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_1_3_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_80_reg_42238.read())))) {
        edge_attr_aggr_1_3_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_1_3_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_2_fu_33524_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_56_fu_24005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_0_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_0_0_V_address1 =  (sc_lv<6>) (zext_ln544_57_fu_25717_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_0_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_0_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_0_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_0_0_V_d0 = agg_p_2_0_0_V_fu_870.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_0_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_0_0_V_d1 = agg_p_2_0_0_V_fu_870.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_0_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_0_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_4_reg_39160.read())))) {
        edge_attr_aggr_2_0_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_2_fu_33524_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_56_fu_24005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_0_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_0_1_V_address1 =  (sc_lv<6>) (zext_ln544_57_fu_25717_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_0_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_0_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_0_1_V_d0 = agg_p_2_1_0_V_fu_886.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_0_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_0_1_V_d1 = agg_p_2_1_0_V_fu_886.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_0_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_4_reg_39160.read())))) {
        edge_attr_aggr_2_0_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_2_fu_33524_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_56_fu_24005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_0_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_0_2_V_address1 =  (sc_lv<6>) (zext_ln544_57_fu_25717_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_0_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_0_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_0_2_V_d0 = agg_p_2_2_0_V_fu_902.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_0_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_0_2_V_d1 = agg_p_2_2_0_V_fu_902.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_0_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_4_reg_39160.read())))) {
        edge_attr_aggr_2_0_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_2_fu_33524_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_56_fu_24005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_0_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_0_3_V_address1 =  (sc_lv<6>) (zext_ln544_57_fu_25717_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_0_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_0_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_0_3_V_d0 = agg_p_2_3_0_V_fu_918.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_0_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_0_3_V_d1 = agg_p_2_3_0_V_fu_918.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_0_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_0_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_0_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_4_reg_39160.read())))) {
        edge_attr_aggr_2_0_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_0_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_15_fu_33628_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_82_fu_24369_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_1_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_1_0_V_address1 =  (sc_lv<6>) (zext_ln544_83_fu_27745_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_1_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_1_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_1_0_V_d0 = agg_p_2_0_1_V_fu_874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_1_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_1_0_V_d1 = agg_p_2_0_1_V_fu_874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_1_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_30_reg_40213.read())))) {
        edge_attr_aggr_2_1_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_15_fu_33628_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_82_fu_24369_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_1_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_1_1_V_address1 =  (sc_lv<6>) (zext_ln544_83_fu_27745_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_1_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_1_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_1_1_V_d0 = agg_p_2_1_1_V_fu_890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_1_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_1_1_V_d1 = agg_p_2_1_1_V_fu_890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_1_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_30_reg_40213.read())))) {
        edge_attr_aggr_2_1_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_15_fu_33628_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_82_fu_24369_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_1_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_1_2_V_address1 =  (sc_lv<6>) (zext_ln544_83_fu_27745_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_1_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_1_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_1_2_V_d0 = agg_p_2_2_1_V_fu_906.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_1_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_1_2_V_d1 = agg_p_2_2_1_V_fu_906.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_1_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_30_reg_40213.read())))) {
        edge_attr_aggr_2_1_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_15_fu_33628_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_82_fu_24369_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_1_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_1_3_V_address1 =  (sc_lv<6>) (zext_ln544_83_fu_27745_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_1_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_1_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_1_3_V_d0 = agg_p_2_3_1_V_fu_922.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_1_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_1_3_V_d1 = agg_p_2_3_1_V_fu_922.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_1_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_1_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_1_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_30_reg_40213.read())))) {
        edge_attr_aggr_2_1_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_1_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_28_fu_33732_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_108_fu_24733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_2_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_2_0_V_address1 =  (sc_lv<6>) (zext_ln544_109_fu_29773_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_2_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_2_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_2_0_V_d0 = agg_p_2_0_2_V_fu_878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_2_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_2_0_V_d1 = agg_p_2_0_2_V_fu_878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_2_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_56_reg_41266.read())))) {
        edge_attr_aggr_2_2_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_28_fu_33732_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_108_fu_24733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_2_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_2_1_V_address1 =  (sc_lv<6>) (zext_ln544_109_fu_29773_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_2_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_2_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_2_1_V_d0 = agg_p_2_1_2_V_fu_894.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_2_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_2_1_V_d1 = agg_p_2_1_2_V_fu_894.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_2_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_56_reg_41266.read())))) {
        edge_attr_aggr_2_2_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_28_fu_33732_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_108_fu_24733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_2_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_2_2_V_address1 =  (sc_lv<6>) (zext_ln544_109_fu_29773_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_2_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_2_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_2_2_V_d0 = agg_p_2_2_2_V_fu_910.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_2_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_2_2_V_d1 = agg_p_2_2_2_V_fu_910.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_2_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_56_reg_41266.read())))) {
        edge_attr_aggr_2_2_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_28_fu_33732_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_108_fu_24733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_2_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_2_3_V_address1 =  (sc_lv<6>) (zext_ln544_109_fu_29773_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_2_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_2_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_2_3_V_d0 = agg_p_2_3_2_V_fu_926.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_2_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_2_3_V_d1 = agg_p_2_3_2_V_fu_926.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_2_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_2_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_2_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_56_reg_41266.read())))) {
        edge_attr_aggr_2_2_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_2_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_41_fu_33836_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_134_fu_25097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_3_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_3_0_V_address1 =  (sc_lv<6>) (zext_ln544_135_fu_31801_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_3_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_3_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_3_0_V_d0 = agg_p_2_0_3_V_fu_882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_3_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_3_0_V_d1 = agg_p_2_0_3_V_fu_882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_3_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_82_reg_42319.read())))) {
        edge_attr_aggr_2_3_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_41_fu_33836_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_134_fu_25097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_3_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_3_1_V_address1 =  (sc_lv<6>) (zext_ln544_135_fu_31801_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_3_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_3_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_3_1_V_d0 = agg_p_2_1_3_V_fu_898.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_3_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_3_1_V_d1 = agg_p_2_1_3_V_fu_898.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_3_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_82_reg_42319.read())))) {
        edge_attr_aggr_2_3_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_41_fu_33836_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_134_fu_25097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_3_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_3_2_V_address1 =  (sc_lv<6>) (zext_ln544_135_fu_31801_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_3_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_3_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_3_2_V_d0 = agg_p_2_2_3_V_fu_914.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_3_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_3_2_V_d1 = agg_p_2_2_3_V_fu_914.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_3_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_82_reg_42319.read())))) {
        edge_attr_aggr_2_3_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_41_fu_33836_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_134_fu_25097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_2_3_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_3_3_V_address1 =  (sc_lv<6>) (zext_ln544_135_fu_31801_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_2_3_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_2_3_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_2_3_3_V_d0 = agg_p_2_3_3_V_fu_930.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_3_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_2_3_3_V_d1 = agg_p_2_3_3_V_fu_930.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_2_3_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_2_3_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_2_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_2_3_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_82_reg_42319.read())))) {
        edge_attr_aggr_2_3_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_2_3_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_3_fu_33532_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_58_fu_24033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_0_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_0_0_V_address1 =  (sc_lv<6>) (zext_ln544_59_fu_25873_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_0_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_0_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_0_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_0_0_V_d0 = agg_p_3_0_0_V_fu_934.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_0_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_0_0_V_d1 = agg_p_3_0_0_V_fu_934.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_0_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_0_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_6_reg_39241.read())))) {
        edge_attr_aggr_3_0_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_3_fu_33532_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_58_fu_24033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_0_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_0_1_V_address1 =  (sc_lv<6>) (zext_ln544_59_fu_25873_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_0_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_0_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_0_1_V_d0 = agg_p_3_1_0_V_fu_950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_0_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_0_1_V_d1 = agg_p_3_1_0_V_fu_950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_0_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_6_reg_39241.read())))) {
        edge_attr_aggr_3_0_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_3_fu_33532_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_58_fu_24033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_0_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_0_2_V_address1 =  (sc_lv<6>) (zext_ln544_59_fu_25873_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_0_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_0_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_0_2_V_d0 = agg_p_3_2_0_V_fu_966.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_0_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_0_2_V_d1 = agg_p_3_2_0_V_fu_966.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_0_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_6_reg_39241.read())))) {
        edge_attr_aggr_3_0_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_3_fu_33532_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_58_fu_24033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_0_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_0_3_V_address1 =  (sc_lv<6>) (zext_ln544_59_fu_25873_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_0_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_0_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_0_3_V_d0 = agg_p_3_3_0_V_fu_982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_0_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_0_3_V_d1 = agg_p_3_3_0_V_fu_982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_0_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_0_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_0_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_6_reg_39241.read())))) {
        edge_attr_aggr_3_0_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_0_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_16_fu_33636_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_84_fu_24397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_1_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_1_0_V_address1 =  (sc_lv<6>) (zext_ln544_85_fu_27901_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_1_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_1_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_1_0_V_d0 = agg_p_3_0_1_V_fu_938.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_1_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_1_0_V_d1 = agg_p_3_0_1_V_fu_938.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_1_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_32_reg_40294.read())))) {
        edge_attr_aggr_3_1_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_16_fu_33636_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_84_fu_24397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_1_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_1_1_V_address1 =  (sc_lv<6>) (zext_ln544_85_fu_27901_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_1_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_1_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_1_1_V_d0 = agg_p_3_1_1_V_fu_954.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_1_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_1_1_V_d1 = agg_p_3_1_1_V_fu_954.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_1_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_32_reg_40294.read())))) {
        edge_attr_aggr_3_1_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_16_fu_33636_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_84_fu_24397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_1_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_1_2_V_address1 =  (sc_lv<6>) (zext_ln544_85_fu_27901_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_1_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_1_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_1_2_V_d0 = agg_p_3_2_1_V_fu_970.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_1_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_1_2_V_d1 = agg_p_3_2_1_V_fu_970.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_1_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_32_reg_40294.read())))) {
        edge_attr_aggr_3_1_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_16_fu_33636_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_84_fu_24397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_1_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_1_3_V_address1 =  (sc_lv<6>) (zext_ln544_85_fu_27901_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_1_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_1_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_1_3_V_d0 = agg_p_3_3_1_V_fu_986.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_1_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_1_3_V_d1 = agg_p_3_3_1_V_fu_986.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_1_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_1_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_1_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_32_reg_40294.read())))) {
        edge_attr_aggr_3_1_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_1_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_29_fu_33740_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_110_fu_24761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_2_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_2_0_V_address1 =  (sc_lv<6>) (zext_ln544_111_fu_29929_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_2_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_2_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_2_0_V_d0 = agg_p_3_0_2_V_fu_942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_2_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_2_0_V_d1 = agg_p_3_0_2_V_fu_942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_2_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_58_reg_41347.read())))) {
        edge_attr_aggr_3_2_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_29_fu_33740_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_110_fu_24761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_2_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_2_1_V_address1 =  (sc_lv<6>) (zext_ln544_111_fu_29929_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_2_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_2_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_2_1_V_d0 = agg_p_3_1_2_V_fu_958.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_2_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_2_1_V_d1 = agg_p_3_1_2_V_fu_958.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_2_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_58_reg_41347.read())))) {
        edge_attr_aggr_3_2_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_29_fu_33740_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_110_fu_24761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_2_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_2_2_V_address1 =  (sc_lv<6>) (zext_ln544_111_fu_29929_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_2_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_2_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_2_2_V_d0 = agg_p_3_2_2_V_fu_974.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_2_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_2_2_V_d1 = agg_p_3_2_2_V_fu_974.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_2_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_58_reg_41347.read())))) {
        edge_attr_aggr_3_2_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_29_fu_33740_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_110_fu_24761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_2_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_2_3_V_address1 =  (sc_lv<6>) (zext_ln544_111_fu_29929_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_2_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_2_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_2_3_V_d0 = agg_p_3_3_2_V_fu_990.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_2_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_2_3_V_d1 = agg_p_3_3_2_V_fu_990.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_2_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_2_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_2_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_58_reg_41347.read())))) {
        edge_attr_aggr_3_2_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_2_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_42_fu_33844_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_136_fu_25125_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_3_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_3_0_V_address1 =  (sc_lv<6>) (zext_ln544_137_fu_31957_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_3_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_3_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_3_0_V_d0 = agg_p_3_0_3_V_fu_946.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_3_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_3_0_V_d1 = agg_p_3_0_3_V_fu_946.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_3_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_84_reg_42400.read())))) {
        edge_attr_aggr_3_3_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_42_fu_33844_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_136_fu_25125_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_3_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_3_1_V_address1 =  (sc_lv<6>) (zext_ln544_137_fu_31957_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_3_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_3_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_3_1_V_d0 = agg_p_3_1_3_V_fu_962.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_3_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_3_1_V_d1 = agg_p_3_1_3_V_fu_962.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_3_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_84_reg_42400.read())))) {
        edge_attr_aggr_3_3_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_42_fu_33844_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_136_fu_25125_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_3_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_3_2_V_address1 =  (sc_lv<6>) (zext_ln544_137_fu_31957_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_3_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_3_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_3_2_V_d0 = agg_p_3_2_3_V_fu_978.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_3_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_3_2_V_d1 = agg_p_3_2_3_V_fu_978.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_3_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_84_reg_42400.read())))) {
        edge_attr_aggr_3_3_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_42_fu_33844_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_136_fu_25125_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_3_3_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_3_3_V_address1 =  (sc_lv<6>) (zext_ln544_137_fu_31957_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_3_3_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_3_3_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_3_3_3_V_d0 = agg_p_3_3_3_V_fu_994.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_3_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_3_3_3_V_d1 = agg_p_3_3_3_V_fu_994.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_3_3_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_3_3_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_3_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_3_3_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_84_reg_42400.read())))) {
        edge_attr_aggr_3_3_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_3_3_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_4_fu_33540_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_60_fu_24061_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_0_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_0_0_V_address1 =  (sc_lv<6>) (zext_ln544_61_fu_26029_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_0_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_0_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_0_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_0_0_V_d0 = agg_p_4_0_0_V_fu_998.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_0_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_0_0_V_d1 = agg_p_4_0_0_V_fu_998.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_0_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_0_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_8_reg_39322.read())))) {
        edge_attr_aggr_4_0_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_4_fu_33540_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_60_fu_24061_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_0_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_0_1_V_address1 =  (sc_lv<6>) (zext_ln544_61_fu_26029_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_0_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_0_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_0_1_V_d0 = agg_p_4_1_0_V_fu_1014.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_0_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_0_1_V_d1 = agg_p_4_1_0_V_fu_1014.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_0_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_8_reg_39322.read())))) {
        edge_attr_aggr_4_0_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_4_fu_33540_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_60_fu_24061_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_0_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_0_2_V_address1 =  (sc_lv<6>) (zext_ln544_61_fu_26029_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_0_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_0_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_0_2_V_d0 = agg_p_4_2_0_V_fu_1030.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_0_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_0_2_V_d1 = agg_p_4_2_0_V_fu_1030.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_0_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_8_reg_39322.read())))) {
        edge_attr_aggr_4_0_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_4_fu_33540_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_60_fu_24061_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_0_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_0_3_V_address1 =  (sc_lv<6>) (zext_ln544_61_fu_26029_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_0_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_0_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_0_3_V_d0 = agg_p_4_3_0_V_fu_1046.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_0_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_0_3_V_d1 = agg_p_4_3_0_V_fu_1046.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_0_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_0_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_0_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_8_reg_39322.read())))) {
        edge_attr_aggr_4_0_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_0_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_17_fu_33644_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_86_fu_24425_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_1_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_1_0_V_address1 =  (sc_lv<6>) (zext_ln544_87_fu_28057_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_1_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_1_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_1_0_V_d0 = agg_p_4_0_1_V_fu_1002.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_1_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_1_0_V_d1 = agg_p_4_0_1_V_fu_1002.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_1_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_34_reg_40375.read())))) {
        edge_attr_aggr_4_1_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_17_fu_33644_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_86_fu_24425_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_1_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_1_1_V_address1 =  (sc_lv<6>) (zext_ln544_87_fu_28057_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_1_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_1_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_1_1_V_d0 = agg_p_4_1_1_V_fu_1018.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_1_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_1_1_V_d1 = agg_p_4_1_1_V_fu_1018.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_1_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_34_reg_40375.read())))) {
        edge_attr_aggr_4_1_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_17_fu_33644_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_86_fu_24425_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_1_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_1_2_V_address1 =  (sc_lv<6>) (zext_ln544_87_fu_28057_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_1_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_1_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_1_2_V_d0 = agg_p_4_2_1_V_fu_1034.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_1_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_1_2_V_d1 = agg_p_4_2_1_V_fu_1034.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_1_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_34_reg_40375.read())))) {
        edge_attr_aggr_4_1_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_17_fu_33644_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_86_fu_24425_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_1_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_1_3_V_address1 =  (sc_lv<6>) (zext_ln544_87_fu_28057_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_1_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_1_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_1_3_V_d0 = agg_p_4_3_1_V_fu_1050.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_1_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_1_3_V_d1 = agg_p_4_3_1_V_fu_1050.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_1_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_1_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_1_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_34_reg_40375.read())))) {
        edge_attr_aggr_4_1_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_1_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_30_fu_33748_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_112_fu_24789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_2_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_2_0_V_address1 =  (sc_lv<6>) (zext_ln544_113_fu_30085_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_2_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_2_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_2_0_V_d0 = agg_p_4_0_2_V_fu_1006.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_2_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_2_0_V_d1 = agg_p_4_0_2_V_fu_1006.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_2_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_60_reg_41428.read())))) {
        edge_attr_aggr_4_2_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_30_fu_33748_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_112_fu_24789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_2_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_2_1_V_address1 =  (sc_lv<6>) (zext_ln544_113_fu_30085_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_2_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_2_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_2_1_V_d0 = agg_p_4_1_2_V_fu_1022.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_2_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_2_1_V_d1 = agg_p_4_1_2_V_fu_1022.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_2_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_60_reg_41428.read())))) {
        edge_attr_aggr_4_2_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_30_fu_33748_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_112_fu_24789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_2_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_2_2_V_address1 =  (sc_lv<6>) (zext_ln544_113_fu_30085_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_2_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_2_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_2_2_V_d0 = agg_p_4_2_2_V_fu_1038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_2_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_2_2_V_d1 = agg_p_4_2_2_V_fu_1038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_2_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_60_reg_41428.read())))) {
        edge_attr_aggr_4_2_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_30_fu_33748_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_112_fu_24789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_2_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_2_3_V_address1 =  (sc_lv<6>) (zext_ln544_113_fu_30085_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_2_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_2_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_2_3_V_d0 = agg_p_4_3_2_V_fu_1054.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_2_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_2_3_V_d1 = agg_p_4_3_2_V_fu_1054.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_2_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_2_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_2_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_60_reg_41428.read())))) {
        edge_attr_aggr_4_2_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_2_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_43_fu_33852_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_138_fu_25153_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_3_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_3_0_V_address1 =  (sc_lv<6>) (zext_ln544_139_fu_32113_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_3_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_3_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_3_0_V_d0 = agg_p_4_0_3_V_fu_1010.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_3_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_3_0_V_d1 = agg_p_4_0_3_V_fu_1010.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_3_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_86_reg_42481.read())))) {
        edge_attr_aggr_4_3_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_43_fu_33852_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_138_fu_25153_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_3_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_3_1_V_address1 =  (sc_lv<6>) (zext_ln544_139_fu_32113_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_3_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_3_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_3_1_V_d0 = agg_p_4_1_3_V_fu_1026.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_3_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_3_1_V_d1 = agg_p_4_1_3_V_fu_1026.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_3_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_86_reg_42481.read())))) {
        edge_attr_aggr_4_3_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_43_fu_33852_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_138_fu_25153_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_3_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_3_2_V_address1 =  (sc_lv<6>) (zext_ln544_139_fu_32113_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_3_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_3_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_3_2_V_d0 = agg_p_4_2_3_V_fu_1042.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_3_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_3_2_V_d1 = agg_p_4_2_3_V_fu_1042.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_3_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_86_reg_42481.read())))) {
        edge_attr_aggr_4_3_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_43_fu_33852_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_138_fu_25153_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_4_3_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_3_3_V_address1 =  (sc_lv<6>) (zext_ln544_139_fu_32113_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_4_3_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_4_3_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_4_3_3_V_d0 = agg_p_4_3_3_V_fu_1058.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_3_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_4_3_3_V_d1 = agg_p_4_3_3_V_fu_1058.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_4_3_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_4_3_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_4_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_4_3_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_86_reg_42481.read())))) {
        edge_attr_aggr_4_3_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_4_3_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_5_fu_33548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_62_fu_24089_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_0_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_0_0_V_address1 =  (sc_lv<6>) (zext_ln544_63_fu_26185_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_0_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_0_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_0_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_0_0_V_d0 = agg_p_5_0_0_V_fu_1062.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_0_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_0_0_V_d1 = agg_p_5_0_0_V_fu_1062.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_0_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_0_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_10_reg_39403.read())))) {
        edge_attr_aggr_5_0_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_5_fu_33548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_62_fu_24089_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_0_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_0_1_V_address1 =  (sc_lv<6>) (zext_ln544_63_fu_26185_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_0_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_0_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_0_1_V_d0 = agg_p_5_1_0_V_fu_1078.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_0_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_0_1_V_d1 = agg_p_5_1_0_V_fu_1078.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_0_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_10_reg_39403.read())))) {
        edge_attr_aggr_5_0_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_5_fu_33548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_62_fu_24089_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_0_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_0_2_V_address1 =  (sc_lv<6>) (zext_ln544_63_fu_26185_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_0_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_0_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_0_2_V_d0 = agg_p_5_2_0_V_fu_1094.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_0_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_0_2_V_d1 = agg_p_5_2_0_V_fu_1094.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_0_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_10_reg_39403.read())))) {
        edge_attr_aggr_5_0_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_5_fu_33548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_62_fu_24089_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_0_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_0_3_V_address1 =  (sc_lv<6>) (zext_ln544_63_fu_26185_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_0_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_0_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_0_3_V_d0 = agg_p_5_3_0_V_fu_1110.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_0_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_0_3_V_d1 = agg_p_5_3_0_V_fu_1110.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_0_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_0_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_0_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_10_reg_39403.read())))) {
        edge_attr_aggr_5_0_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_0_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_18_fu_33652_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_88_fu_24453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_1_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_1_0_V_address1 =  (sc_lv<6>) (zext_ln544_89_fu_28213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_1_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_1_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_1_0_V_d0 = agg_p_5_0_1_V_fu_1066.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_1_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_1_0_V_d1 = agg_p_5_0_1_V_fu_1066.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_1_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_36_reg_40456.read())))) {
        edge_attr_aggr_5_1_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_18_fu_33652_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_88_fu_24453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_1_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_1_1_V_address1 =  (sc_lv<6>) (zext_ln544_89_fu_28213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_1_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_1_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_1_1_V_d0 = agg_p_5_1_1_V_fu_1082.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_1_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_1_1_V_d1 = agg_p_5_1_1_V_fu_1082.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_1_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_36_reg_40456.read())))) {
        edge_attr_aggr_5_1_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_18_fu_33652_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_88_fu_24453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_1_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_1_2_V_address1 =  (sc_lv<6>) (zext_ln544_89_fu_28213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_1_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_1_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_1_2_V_d0 = agg_p_5_2_1_V_fu_1098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_1_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_1_2_V_d1 = agg_p_5_2_1_V_fu_1098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_1_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_36_reg_40456.read())))) {
        edge_attr_aggr_5_1_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_18_fu_33652_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_88_fu_24453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_1_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_1_3_V_address1 =  (sc_lv<6>) (zext_ln544_89_fu_28213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_1_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_1_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_1_3_V_d0 = agg_p_5_3_1_V_fu_1114.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_1_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_1_3_V_d1 = agg_p_5_3_1_V_fu_1114.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_1_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_1_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_1_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_36_reg_40456.read())))) {
        edge_attr_aggr_5_1_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_1_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_31_fu_33756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_114_fu_24817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_2_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_2_0_V_address1 =  (sc_lv<6>) (zext_ln544_115_fu_30241_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_2_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_2_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_2_0_V_d0 = agg_p_5_0_2_V_fu_1070.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_2_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_2_0_V_d1 = agg_p_5_0_2_V_fu_1070.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_2_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_62_reg_41509.read())))) {
        edge_attr_aggr_5_2_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_31_fu_33756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_114_fu_24817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_2_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_2_1_V_address1 =  (sc_lv<6>) (zext_ln544_115_fu_30241_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_2_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_2_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_2_1_V_d0 = agg_p_5_1_2_V_fu_1086.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_2_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_2_1_V_d1 = agg_p_5_1_2_V_fu_1086.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_2_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_62_reg_41509.read())))) {
        edge_attr_aggr_5_2_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_31_fu_33756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_114_fu_24817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_2_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_2_2_V_address1 =  (sc_lv<6>) (zext_ln544_115_fu_30241_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_2_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_2_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_2_2_V_d0 = agg_p_5_2_2_V_fu_1102.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_2_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_2_2_V_d1 = agg_p_5_2_2_V_fu_1102.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_2_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_62_reg_41509.read())))) {
        edge_attr_aggr_5_2_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_31_fu_33756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_114_fu_24817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_2_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_2_3_V_address1 =  (sc_lv<6>) (zext_ln544_115_fu_30241_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_2_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_2_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_2_3_V_d0 = agg_p_5_3_2_V_fu_1118.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_2_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_2_3_V_d1 = agg_p_5_3_2_V_fu_1118.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_2_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_2_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_2_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_62_reg_41509.read())))) {
        edge_attr_aggr_5_2_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_2_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_44_fu_33860_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_140_fu_25181_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_3_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_3_0_V_address1 =  (sc_lv<6>) (zext_ln544_141_fu_32269_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_3_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_3_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_3_0_V_d0 = agg_p_5_0_3_V_fu_1074.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_3_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_3_0_V_d1 = agg_p_5_0_3_V_fu_1074.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_3_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_88_reg_42562.read())))) {
        edge_attr_aggr_5_3_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_44_fu_33860_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_140_fu_25181_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_3_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_3_1_V_address1 =  (sc_lv<6>) (zext_ln544_141_fu_32269_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_3_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_3_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_3_1_V_d0 = agg_p_5_1_3_V_fu_1090.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_3_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_3_1_V_d1 = agg_p_5_1_3_V_fu_1090.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_3_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_88_reg_42562.read())))) {
        edge_attr_aggr_5_3_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_44_fu_33860_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_140_fu_25181_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_3_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_3_2_V_address1 =  (sc_lv<6>) (zext_ln544_141_fu_32269_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_3_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_3_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_3_2_V_d0 = agg_p_5_2_3_V_fu_1106.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_3_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_3_2_V_d1 = agg_p_5_2_3_V_fu_1106.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_3_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_88_reg_42562.read())))) {
        edge_attr_aggr_5_3_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_44_fu_33860_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_140_fu_25181_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_5_3_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_3_3_V_address1 =  (sc_lv<6>) (zext_ln544_141_fu_32269_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_5_3_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_5_3_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_5_3_3_V_d0 = agg_p_5_3_3_V_fu_1122.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_3_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_5_3_3_V_d1 = agg_p_5_3_3_V_fu_1122.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_5_3_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_5_3_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_5_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_5_3_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_88_reg_42562.read())))) {
        edge_attr_aggr_5_3_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_5_3_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_6_fu_33556_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_64_fu_24117_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_0_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_0_0_V_address1 =  (sc_lv<6>) (zext_ln544_65_fu_26341_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_0_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_0_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_0_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_0_0_V_d0 = agg_p_6_0_0_V_fu_1126.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_0_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_0_0_V_d1 = agg_p_6_0_0_V_fu_1126.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_0_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_0_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_12_reg_39484.read())))) {
        edge_attr_aggr_6_0_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_6_fu_33556_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_64_fu_24117_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_0_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_0_1_V_address1 =  (sc_lv<6>) (zext_ln544_65_fu_26341_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_0_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_0_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_0_1_V_d0 = agg_p_6_1_0_V_fu_1142.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_0_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_0_1_V_d1 = agg_p_6_1_0_V_fu_1142.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_0_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_12_reg_39484.read())))) {
        edge_attr_aggr_6_0_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_6_fu_33556_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_64_fu_24117_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_0_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_0_2_V_address1 =  (sc_lv<6>) (zext_ln544_65_fu_26341_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_0_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_0_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_0_2_V_d0 = agg_p_6_2_0_V_fu_1158.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_0_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_0_2_V_d1 = agg_p_6_2_0_V_fu_1158.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_0_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_12_reg_39484.read())))) {
        edge_attr_aggr_6_0_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_6_fu_33556_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_64_fu_24117_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_0_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_0_3_V_address1 =  (sc_lv<6>) (zext_ln544_65_fu_26341_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_0_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_0_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_0_3_V_d0 = agg_p_6_3_0_V_fu_1174.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_0_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_0_3_V_d1 = agg_p_6_3_0_V_fu_1174.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_0_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_0_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_0_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_12_reg_39484.read())))) {
        edge_attr_aggr_6_0_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_0_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_19_fu_33660_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_90_fu_24481_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_1_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_1_0_V_address1 =  (sc_lv<6>) (zext_ln544_91_fu_28369_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_1_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_1_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_1_0_V_d0 = agg_p_6_0_1_V_fu_1130.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_1_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_1_0_V_d1 = agg_p_6_0_1_V_fu_1130.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_1_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_38_reg_40537.read())))) {
        edge_attr_aggr_6_1_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_19_fu_33660_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_90_fu_24481_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_1_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_1_1_V_address1 =  (sc_lv<6>) (zext_ln544_91_fu_28369_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_1_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_1_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_1_1_V_d0 = agg_p_6_1_1_V_fu_1146.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_1_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_1_1_V_d1 = agg_p_6_1_1_V_fu_1146.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_1_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_38_reg_40537.read())))) {
        edge_attr_aggr_6_1_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_19_fu_33660_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_90_fu_24481_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_1_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_1_2_V_address1 =  (sc_lv<6>) (zext_ln544_91_fu_28369_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_1_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_1_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_1_2_V_d0 = agg_p_6_2_1_V_fu_1162.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_1_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_1_2_V_d1 = agg_p_6_2_1_V_fu_1162.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_1_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_38_reg_40537.read())))) {
        edge_attr_aggr_6_1_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_19_fu_33660_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_90_fu_24481_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_1_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_1_3_V_address1 =  (sc_lv<6>) (zext_ln544_91_fu_28369_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_1_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_1_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_1_3_V_d0 = agg_p_6_3_1_V_fu_1178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_1_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_1_3_V_d1 = agg_p_6_3_1_V_fu_1178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_1_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_1_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_1_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_38_reg_40537.read())))) {
        edge_attr_aggr_6_1_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_1_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_32_fu_33764_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_116_fu_24845_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_2_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_2_0_V_address1 =  (sc_lv<6>) (zext_ln544_117_fu_30397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_2_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_2_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_2_0_V_d0 = agg_p_6_0_2_V_fu_1134.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_2_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_2_0_V_d1 = agg_p_6_0_2_V_fu_1134.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_2_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_64_reg_41590.read())))) {
        edge_attr_aggr_6_2_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_32_fu_33764_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_116_fu_24845_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_2_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_2_1_V_address1 =  (sc_lv<6>) (zext_ln544_117_fu_30397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_2_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_2_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_2_1_V_d0 = agg_p_6_1_2_V_fu_1150.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_2_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_2_1_V_d1 = agg_p_6_1_2_V_fu_1150.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_2_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_64_reg_41590.read())))) {
        edge_attr_aggr_6_2_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_32_fu_33764_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_116_fu_24845_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_2_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_2_2_V_address1 =  (sc_lv<6>) (zext_ln544_117_fu_30397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_2_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_2_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_2_2_V_d0 = agg_p_6_2_2_V_fu_1166.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_2_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_2_2_V_d1 = agg_p_6_2_2_V_fu_1166.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_2_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_64_reg_41590.read())))) {
        edge_attr_aggr_6_2_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_32_fu_33764_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_116_fu_24845_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_2_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_2_3_V_address1 =  (sc_lv<6>) (zext_ln544_117_fu_30397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_2_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_2_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_2_3_V_d0 = agg_p_6_3_2_V_fu_1182.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_2_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_2_3_V_d1 = agg_p_6_3_2_V_fu_1182.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_2_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_2_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_2_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_64_reg_41590.read())))) {
        edge_attr_aggr_6_2_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_2_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_45_fu_33868_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_142_fu_25209_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_3_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_3_0_V_address1 =  (sc_lv<6>) (zext_ln544_143_fu_32425_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_3_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_3_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_3_0_V_d0 = agg_p_6_0_3_V_fu_1138.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_3_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_3_0_V_d1 = agg_p_6_0_3_V_fu_1138.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_3_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_90_reg_42643.read())))) {
        edge_attr_aggr_6_3_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_45_fu_33868_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_142_fu_25209_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_3_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_3_1_V_address1 =  (sc_lv<6>) (zext_ln544_143_fu_32425_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_3_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_3_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_3_1_V_d0 = agg_p_6_1_3_V_fu_1154.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_3_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_3_1_V_d1 = agg_p_6_1_3_V_fu_1154.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_3_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_90_reg_42643.read())))) {
        edge_attr_aggr_6_3_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_45_fu_33868_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_142_fu_25209_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_3_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_3_2_V_address1 =  (sc_lv<6>) (zext_ln544_143_fu_32425_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_3_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_3_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_3_2_V_d0 = agg_p_6_2_3_V_fu_1170.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_3_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_3_2_V_d1 = agg_p_6_2_3_V_fu_1170.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_3_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_90_reg_42643.read())))) {
        edge_attr_aggr_6_3_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_45_fu_33868_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_142_fu_25209_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_6_3_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_3_3_V_address1 =  (sc_lv<6>) (zext_ln544_143_fu_32425_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_6_3_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_6_3_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_6_3_3_V_d0 = agg_p_6_3_3_V_fu_1186.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_3_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_6_3_3_V_d1 = agg_p_6_3_3_V_fu_1186.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_6_3_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_6_3_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_6_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_6_3_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_90_reg_42643.read())))) {
        edge_attr_aggr_6_3_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_6_3_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_7_fu_33564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_66_fu_24145_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_0_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_0_0_V_address1 =  (sc_lv<6>) (zext_ln544_67_fu_26497_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_0_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_0_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_0_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_0_0_V_d0 = agg_p_7_0_0_V_fu_1190.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_0_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_0_0_V_d1 = agg_p_7_0_0_V_fu_1190.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_0_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_0_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_14_reg_39565.read())))) {
        edge_attr_aggr_7_0_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_7_fu_33564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_66_fu_24145_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_0_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_0_1_V_address1 =  (sc_lv<6>) (zext_ln544_67_fu_26497_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_0_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_0_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_0_1_V_d0 = agg_p_7_1_0_V_fu_1206.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_0_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_0_1_V_d1 = agg_p_7_1_0_V_fu_1206.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_0_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_14_reg_39565.read())))) {
        edge_attr_aggr_7_0_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_7_fu_33564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_66_fu_24145_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_0_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_0_2_V_address1 =  (sc_lv<6>) (zext_ln544_67_fu_26497_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_0_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_0_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_0_2_V_d0 = agg_p_7_2_0_V_fu_1222.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_0_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_0_2_V_d1 = agg_p_7_2_0_V_fu_1222.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_0_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_14_reg_39565.read())))) {
        edge_attr_aggr_7_0_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_7_fu_33564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_66_fu_24145_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_0_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_0_3_V_address1 =  (sc_lv<6>) (zext_ln544_67_fu_26497_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_0_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_0_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_0_3_V_d0 = agg_p_7_3_0_V_fu_1238.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_0_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_0_3_V_d1 = agg_p_7_3_0_V_fu_1238.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_0_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_0_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_0_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_14_reg_39565.read())))) {
        edge_attr_aggr_7_0_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_0_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_20_fu_33668_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_92_fu_24509_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_1_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_1_0_V_address1 =  (sc_lv<6>) (zext_ln544_93_fu_28525_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_1_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_1_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_1_0_V_d0 = agg_p_7_0_1_V_fu_1194.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_1_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_1_0_V_d1 = agg_p_7_0_1_V_fu_1194.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_1_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_40_reg_40618.read())))) {
        edge_attr_aggr_7_1_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_20_fu_33668_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_92_fu_24509_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_1_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_1_1_V_address1 =  (sc_lv<6>) (zext_ln544_93_fu_28525_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_1_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_1_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_1_1_V_d0 = agg_p_7_1_1_V_fu_1210.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_1_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_1_1_V_d1 = agg_p_7_1_1_V_fu_1210.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_1_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_40_reg_40618.read())))) {
        edge_attr_aggr_7_1_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_20_fu_33668_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_92_fu_24509_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_1_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_1_2_V_address1 =  (sc_lv<6>) (zext_ln544_93_fu_28525_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_1_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_1_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_1_2_V_d0 = agg_p_7_2_1_V_fu_1226.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_1_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_1_2_V_d1 = agg_p_7_2_1_V_fu_1226.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_1_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_40_reg_40618.read())))) {
        edge_attr_aggr_7_1_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_20_fu_33668_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_92_fu_24509_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_1_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_1_3_V_address1 =  (sc_lv<6>) (zext_ln544_93_fu_28525_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_1_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_1_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_1_3_V_d0 = agg_p_7_3_1_V_fu_1242.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_1_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_1_3_V_d1 = agg_p_7_3_1_V_fu_1242.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_1_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_1_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_1_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_40_reg_40618.read())))) {
        edge_attr_aggr_7_1_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_1_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_33_fu_33772_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_118_fu_24873_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_2_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_2_0_V_address1 =  (sc_lv<6>) (zext_ln544_119_fu_30553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_2_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_2_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_2_0_V_d0 = agg_p_7_0_2_V_fu_1198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_2_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_2_0_V_d1 = agg_p_7_0_2_V_fu_1198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_2_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_66_reg_41671.read())))) {
        edge_attr_aggr_7_2_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_33_fu_33772_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_118_fu_24873_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_2_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_2_1_V_address1 =  (sc_lv<6>) (zext_ln544_119_fu_30553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_2_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_2_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_2_1_V_d0 = agg_p_7_1_2_V_fu_1214.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_2_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_2_1_V_d1 = agg_p_7_1_2_V_fu_1214.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_2_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_66_reg_41671.read())))) {
        edge_attr_aggr_7_2_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_33_fu_33772_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_118_fu_24873_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_2_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_2_2_V_address1 =  (sc_lv<6>) (zext_ln544_119_fu_30553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_2_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_2_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_2_2_V_d0 = agg_p_7_2_2_V_fu_1230.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_2_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_2_2_V_d1 = agg_p_7_2_2_V_fu_1230.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_2_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_66_reg_41671.read())))) {
        edge_attr_aggr_7_2_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_33_fu_33772_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_118_fu_24873_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_2_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_2_3_V_address1 =  (sc_lv<6>) (zext_ln544_119_fu_30553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_2_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_2_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_2_3_V_d0 = agg_p_7_3_2_V_fu_1246.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_2_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_2_3_V_d1 = agg_p_7_3_2_V_fu_1246.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_2_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_2_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_2_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_66_reg_41671.read())))) {
        edge_attr_aggr_7_2_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_2_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_46_fu_33876_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_144_fu_25237_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_3_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_3_0_V_address1 =  (sc_lv<6>) (zext_ln544_145_fu_32581_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_3_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_3_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_3_0_V_d0 = agg_p_7_0_3_V_fu_1202.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_3_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_3_0_V_d1 = agg_p_7_0_3_V_fu_1202.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_3_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_92_reg_42724.read())))) {
        edge_attr_aggr_7_3_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_46_fu_33876_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_144_fu_25237_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_3_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_3_1_V_address1 =  (sc_lv<6>) (zext_ln544_145_fu_32581_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_3_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_3_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_3_1_V_d0 = agg_p_7_1_3_V_fu_1218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_3_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_3_1_V_d1 = agg_p_7_1_3_V_fu_1218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_3_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_92_reg_42724.read())))) {
        edge_attr_aggr_7_3_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_46_fu_33876_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_3_2_V_address0 =  (sc_lv<6>) (zext_ln544_144_fu_25237_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_3_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_3_2_V_address1 =  (sc_lv<6>) (zext_ln544_145_fu_32581_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_3_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_3_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_3_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_3_2_V_d0 = agg_p_7_2_3_V_fu_1234.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_3_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_3_2_V_d1 = agg_p_7_2_3_V_fu_1234.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_3_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_3_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_92_reg_42724.read())))) {
        edge_attr_aggr_7_3_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_46_fu_33876_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_3_3_V_address0 =  (sc_lv<6>) (zext_ln544_144_fu_25237_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_7_3_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_3_3_V_address1 =  (sc_lv<6>) (zext_ln544_145_fu_32581_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_7_3_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_3_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_7_3_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_7_3_3_V_d0 = agg_p_7_3_3_V_fu_1250.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_3_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_7_3_3_V_d1 = agg_p_7_3_3_V_fu_1250.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_7_3_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_7_3_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_7_3_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_7_3_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_92_reg_42724.read())))) {
        edge_attr_aggr_7_3_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_7_3_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_8_fu_33572_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_0_V_address0 =  (sc_lv<6>) (zext_ln544_68_fu_24173_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_0_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_0_V_address1 =  (sc_lv<6>) (zext_ln544_69_fu_26653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_0_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_0_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_0_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_0_0_V_d0 = agg_p_8_0_0_V_fu_1254.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_0_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_0_V_d1 = agg_p_8_0_0_V_fu_1254.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_0_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_0_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_16_reg_39646.read())))) {
        edge_attr_aggr_8_0_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_8_fu_33572_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_1_V_address0 =  (sc_lv<6>) (zext_ln544_68_fu_24173_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_0_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_1_V_address1 =  (sc_lv<6>) (zext_ln544_69_fu_26653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_0_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_0_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_0_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_0_1_V_d0 = agg_p_8_1_0_V_fu_1270.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_0_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_1_V_d1 = agg_p_8_1_0_V_fu_1270.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_0_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_0_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_16_reg_39646.read())))) {
        edge_attr_aggr_8_0_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_8_fu_33572_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_2_V_address0 =  (sc_lv<6>) (zext_ln544_68_fu_24173_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_0_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_2_V_address1 =  (sc_lv<6>) (zext_ln544_69_fu_26653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_0_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_0_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_0_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_0_2_V_d0 = agg_p_8_2_0_V_fu_1286.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_0_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_2_V_d1 = agg_p_8_2_0_V_fu_1286.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_0_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_0_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_16_reg_39646.read())))) {
        edge_attr_aggr_8_0_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_8_fu_33572_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_3_V_address0 =  (sc_lv<6>) (zext_ln544_68_fu_24173_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_0_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_3_V_address1 =  (sc_lv<6>) (zext_ln544_69_fu_26653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_0_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_0_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_0_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_0_3_V_d0 = agg_p_8_3_0_V_fu_1302.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_0_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_0_3_V_d1 = agg_p_8_3_0_V_fu_1302.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_0_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_0_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_0_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_0_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_16_reg_39646.read())))) {
        edge_attr_aggr_8_0_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_0_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_21_fu_33676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_0_V_address0 =  (sc_lv<6>) (zext_ln544_94_fu_24537_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_1_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_0_V_address1 =  (sc_lv<6>) (zext_ln544_95_fu_28681_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_1_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_1_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_1_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_1_0_V_d0 = agg_p_8_0_1_V_fu_1258.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_1_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_0_V_d1 = agg_p_8_0_1_V_fu_1258.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_1_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_1_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_42_reg_40699.read())))) {
        edge_attr_aggr_8_1_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_21_fu_33676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_1_V_address0 =  (sc_lv<6>) (zext_ln544_94_fu_24537_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_1_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_1_V_address1 =  (sc_lv<6>) (zext_ln544_95_fu_28681_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_1_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_1_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_1_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_1_1_V_d0 = agg_p_8_1_1_V_fu_1274.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_1_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_1_V_d1 = agg_p_8_1_1_V_fu_1274.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_1_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_1_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_42_reg_40699.read())))) {
        edge_attr_aggr_8_1_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_21_fu_33676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_2_V_address0 =  (sc_lv<6>) (zext_ln544_94_fu_24537_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_1_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_2_V_address1 =  (sc_lv<6>) (zext_ln544_95_fu_28681_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_1_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_1_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_1_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_1_2_V_d0 = agg_p_8_2_1_V_fu_1290.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_1_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_2_V_d1 = agg_p_8_2_1_V_fu_1290.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_1_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_1_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_42_reg_40699.read())))) {
        edge_attr_aggr_8_1_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_21_fu_33676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_3_V_address0 =  (sc_lv<6>) (zext_ln544_94_fu_24537_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_1_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_3_V_address1 =  (sc_lv<6>) (zext_ln544_95_fu_28681_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_1_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_1_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_1_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_1_3_V_d0 = agg_p_8_3_1_V_fu_1306.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_1_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_1_3_V_d1 = agg_p_8_3_1_V_fu_1306.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_1_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_1_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_1_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_1_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_42_reg_40699.read())))) {
        edge_attr_aggr_8_1_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_1_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_34_fu_33780_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_0_V_address0 =  (sc_lv<6>) (zext_ln544_120_fu_24901_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_2_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_0_V_address1 =  (sc_lv<6>) (zext_ln544_121_fu_30709_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_2_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_2_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_2_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_2_0_V_d0 = agg_p_8_0_2_V_fu_1262.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_2_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_0_V_d1 = agg_p_8_0_2_V_fu_1262.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_2_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_2_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_68_reg_41752.read())))) {
        edge_attr_aggr_8_2_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_34_fu_33780_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_1_V_address0 =  (sc_lv<6>) (zext_ln544_120_fu_24901_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_2_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_1_V_address1 =  (sc_lv<6>) (zext_ln544_121_fu_30709_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_2_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_2_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_2_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_2_1_V_d0 = agg_p_8_1_2_V_fu_1278.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_2_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_1_V_d1 = agg_p_8_1_2_V_fu_1278.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_2_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_2_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_1_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_68_reg_41752.read())))) {
        edge_attr_aggr_8_2_1_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_1_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_34_fu_33780_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_2_V_address0 =  (sc_lv<6>) (zext_ln544_120_fu_24901_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_2_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_2_2_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_2_V_address1 =  (sc_lv<6>) (zext_ln544_121_fu_30709_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_2_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_2_2_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_2_2_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_2_2_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_2_2_V_d0 = agg_p_8_2_2_V_fu_1294.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_2_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_2_2_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_2_V_d1 = agg_p_8_2_2_V_fu_1294.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_2_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_2_2_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_2_2_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_2_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_68_reg_41752.read())))) {
        edge_attr_aggr_8_2_2_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_2_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_34_fu_33780_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_3_V_address0 =  (sc_lv<6>) (zext_ln544_120_fu_24901_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_3_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_2_3_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_3_V_address1 =  (sc_lv<6>) (zext_ln544_121_fu_30709_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_3_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_2_3_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_2_3_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_2_3_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_2_3_V_d0 = agg_p_8_3_2_V_fu_1310.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_3_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_2_3_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_2_3_V_d1 = agg_p_8_3_2_V_fu_1310.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_2_3_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_2_3_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_2_3_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_3_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_2_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_68_reg_41752.read())))) {
        edge_attr_aggr_8_2_3_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_2_3_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_47_fu_33884_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_0_V_address0 =  (sc_lv<6>) (zext_ln544_146_fu_25265_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_0_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_3_0_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_0_V_address1 =  (sc_lv<6>) (zext_ln544_147_fu_32737_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_0_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_3_0_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_3_0_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_0_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_3_0_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_0_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_3_0_V_d0 = agg_p_8_0_3_V_fu_1266.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_0_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_3_0_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_0_V_d1 = agg_p_8_0_3_V_fu_1266.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_0_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_3_0_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_3_0_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_0_V_we0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln879_94_reg_42805.read())))) {
        edge_attr_aggr_8_3_0_V_we1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_0_V_we1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_47_fu_33884_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_1_V_address0 =  (sc_lv<6>) (zext_ln544_146_fu_25265_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_1_V_address0 =  (sc_lv<6>) (zext_ln616_fu_20920_p1.read());
    } else {
        edge_attr_aggr_8_3_1_V_address0 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_1_V_address1 =  (sc_lv<6>) (zext_ln544_147_fu_32737_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_1_V_address1 =  (sc_lv<6>) (zext_ln616_1_fu_21138_p1.read());
    } else {
        edge_attr_aggr_8_3_1_V_address1 = "XXXXXX";
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_3_1_V_ce0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_1_V_ce0 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        edge_attr_aggr_8_3_1_V_ce1 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_1_V_ce1 = ap_const_logic_0;
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        edge_attr_aggr_8_3_1_V_d0 = agg_p_8_1_3_V_fu_1282.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_1_V_d0 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_3_1_V_d0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        edge_attr_aggr_8_3_1_V_d1 = agg_p_8_1_3_V_fu_1282.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        edge_attr_aggr_8_3_1_V_d1 = ap_const_lv14_0;
    } else {
        edge_attr_aggr_8_3_1_V_d1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void Loop_fetch_loop_proc::thread_edge_attr_aggr_8_3_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln606_fu_20914_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        edge_attr_aggr_8_3_1_V_we0 = ap_const_logic_1;
    } else {
        edge_attr_aggr_8_3_1_V_we0 = ap_const_logic_0;
    }
}

}

