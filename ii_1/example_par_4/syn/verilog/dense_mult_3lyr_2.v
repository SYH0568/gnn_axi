// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dense_mult_3lyr_2 (
        ap_clk,
        ap_rst,
        data_0_V_read,
        data_1_V_read,
        data_2_V_read,
        data_3_V_read,
        data_4_V_read,
        data_5_V_read,
        data_6_V_read,
        data_7_V_read,
        data_8_V_read,
        data_9_V_read,
        ap_return
);


input   ap_clk;
input   ap_rst;
input  [13:0] data_0_V_read;
input  [13:0] data_1_V_read;
input  [13:0] data_2_V_read;
input  [13:0] data_3_V_read;
input  [13:0] data_4_V_read;
input  [13:0] data_5_V_read;
input  [13:0] data_6_V_read;
input  [13:0] data_7_V_read;
input  [13:0] data_8_V_read;
input  [13:0] data_9_V_read;
output  [13:0] ap_return;

reg   [13:0] data0_0_V_reg_577;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
wire    ap_block_state6_pp0_stage0_iter5;
wire    ap_block_pp0_stage0_11001;
reg   [13:0] data0_1_V_reg_582;
reg   [13:0] data0_2_V_reg_587;
reg   [13:0] data0_3_V_reg_592;
reg   [13:0] data0_4_V_reg_597;
reg   [13:0] data0_5_V_reg_602;
reg   [13:0] data0_6_V_reg_607;
reg   [13:0] data0_7_V_reg_612;
reg   [13:0] data1_logits_0_V_reg_617;
reg   [13:0] data1_logits_1_V_reg_622;
reg   [13:0] data1_logits_2_V_reg_627;
reg   [13:0] data1_logits_3_V_reg_632;
reg   [13:0] data1_logits_4_V_reg_637;
reg   [13:0] data1_logits_5_V_reg_642;
reg   [13:0] data1_logits_6_V_reg_647;
reg   [13:0] data1_logits_7_V_reg_652;
wire   [13:0] add_ln703_fu_489_p2;
reg   [13:0] add_ln703_reg_657;
wire   [13:0] add_ln703_285_fu_495_p2;
reg   [13:0] add_ln703_285_reg_662;
wire   [13:0] add_ln703_290_fu_527_p2;
reg   [13:0] add_ln703_290_reg_667;
wire   [13:0] grp_dense_resource_0_0_3_fu_130_ap_return_0;
wire   [13:0] grp_dense_resource_0_0_3_fu_130_ap_return_1;
wire   [13:0] grp_dense_resource_0_0_3_fu_130_ap_return_2;
wire   [13:0] grp_dense_resource_0_0_3_fu_130_ap_return_3;
wire   [13:0] grp_dense_resource_0_0_3_fu_130_ap_return_4;
wire   [13:0] grp_dense_resource_0_0_3_fu_130_ap_return_5;
wire   [13:0] grp_dense_resource_0_0_3_fu_130_ap_return_6;
wire   [13:0] grp_dense_resource_0_0_3_fu_130_ap_return_7;
reg    grp_dense_resource_0_0_3_fu_130_ap_ce;
wire    ap_block_state1_pp0_stage0_iter0_ignore_call10;
wire    ap_block_state2_pp0_stage0_iter1_ignore_call10;
wire    ap_block_state3_pp0_stage0_iter2_ignore_call10;
wire    ap_block_state4_pp0_stage0_iter3_ignore_call10;
wire    ap_block_state5_pp0_stage0_iter4_ignore_call10;
wire    ap_block_state6_pp0_stage0_iter5_ignore_call10;
wire    ap_block_pp0_stage0_11001_ignoreCallOp17;
wire   [13:0] grp_dense_resource_0_0_fu_154_ap_return_0;
wire   [13:0] grp_dense_resource_0_0_fu_154_ap_return_1;
wire   [13:0] grp_dense_resource_0_0_fu_154_ap_return_2;
wire   [13:0] grp_dense_resource_0_0_fu_154_ap_return_3;
wire   [13:0] grp_dense_resource_0_0_fu_154_ap_return_4;
wire   [13:0] grp_dense_resource_0_0_fu_154_ap_return_5;
wire   [13:0] grp_dense_resource_0_0_fu_154_ap_return_6;
wire   [13:0] grp_dense_resource_0_0_fu_154_ap_return_7;
reg    grp_dense_resource_0_0_fu_154_ap_ce;
wire    ap_block_state1_pp0_stage0_iter0_ignore_call28;
wire    ap_block_state2_pp0_stage0_iter1_ignore_call28;
wire    ap_block_state3_pp0_stage0_iter2_ignore_call28;
wire    ap_block_state4_pp0_stage0_iter3_ignore_call28;
wire    ap_block_state5_pp0_stage0_iter4_ignore_call28;
wire    ap_block_state6_pp0_stage0_iter5_ignore_call28;
wire    ap_block_pp0_stage0_11001_ignoreCallOp36;
wire    call_ret1_relu_fu_166_ap_ready;
wire   [13:0] call_ret1_relu_fu_166_ap_return_0;
wire   [13:0] call_ret1_relu_fu_166_ap_return_1;
wire   [13:0] call_ret1_relu_fu_166_ap_return_2;
wire   [13:0] call_ret1_relu_fu_166_ap_return_3;
wire   [13:0] call_ret1_relu_fu_166_ap_return_4;
wire   [13:0] call_ret1_relu_fu_166_ap_return_5;
wire   [13:0] call_ret1_relu_fu_166_ap_return_6;
wire   [13:0] call_ret1_relu_fu_166_ap_return_7;
wire    call_ret_relu_fu_178_ap_ready;
wire  signed [13:0] call_ret_relu_fu_178_ap_return_0;
wire  signed [13:0] call_ret_relu_fu_178_ap_return_1;
wire  signed [13:0] call_ret_relu_fu_178_ap_return_2;
wire  signed [13:0] call_ret_relu_fu_178_ap_return_3;
wire   [13:0] call_ret_relu_fu_178_ap_return_4;
wire  signed [13:0] call_ret_relu_fu_178_ap_return_5;
wire   [13:0] call_ret_relu_fu_178_ap_return_6;
wire   [13:0] call_ret_relu_fu_178_ap_return_7;
wire    ap_block_pp0_stage0;
wire  signed [19:0] mul_ln1118_fu_542_p2;
wire   [12:0] trunc_ln_fu_330_p4;
wire  signed [20:0] mul_ln1118_122_fu_549_p2;
wire  signed [20:0] mul_ln1118_123_fu_556_p2;
wire  signed [20:0] mul_ln1118_124_fu_563_p2;
wire  signed [13:0] sext_ln1118_222_fu_382_p0;
wire  signed [13:0] shl_ln_fu_386_p1;
wire   [20:0] shl_ln_fu_386_p3;
wire   [20:0] sub_ln1118_fu_394_p2;
wire  signed [20:0] sext_ln1118_222_fu_382_p1;
wire   [20:0] sub_ln1118_102_fu_400_p2;
wire  signed [20:0] mul_ln1118_125_fu_570_p2;
wire  signed [13:0] mul_ln1118_126_fu_433_p0;
wire   [18:0] mul_ln1118_126_fu_433_p2;
wire   [11:0] tmp_fu_439_p4;
wire  signed [13:0] sext_ln1118_225_fu_453_p0;
wire  signed [13:0] shl_ln1118_s_fu_457_p1;
wire   [16:0] shl_ln1118_s_fu_457_p3;
wire  signed [17:0] sext_ln1118_226_fu_465_p1;
wire  signed [17:0] sext_ln1118_225_fu_453_p1;
wire   [17:0] add_ln1118_fu_469_p2;
wire   [10:0] tmp_46_fu_475_p4;
wire  signed [13:0] sext_ln708_fu_339_p1;
wire   [13:0] trunc_ln708_s_fu_347_p4;
wire   [13:0] trunc_ln708_193_fu_360_p4;
wire   [13:0] trunc_ln708_194_fu_373_p4;
wire   [13:0] trunc_ln708_195_fu_406_p4;
wire   [13:0] trunc_ln708_196_fu_420_p4;
wire  signed [11:0] sext_ln703_fu_485_p1;
wire   [11:0] add_ln703_288_fu_507_p2;
wire  signed [12:0] sext_ln703_38_fu_513_p1;
wire  signed [12:0] sext_ln1118_227_fu_449_p1;
wire   [12:0] add_ln703_289_fu_517_p2;
wire  signed [13:0] sext_ln703_39_fu_523_p1;
wire   [13:0] add_ln703_287_fu_501_p2;
wire   [13:0] add_ln703_286_fu_533_p2;
wire   [5:0] mul_ln1118_fu_542_p1;
wire  signed [6:0] mul_ln1118_122_fu_549_p1;
wire  signed [7:0] mul_ln1118_123_fu_556_p1;
wire   [6:0] mul_ln1118_124_fu_563_p1;
wire  signed [6:0] mul_ln1118_125_fu_570_p1;
reg   [13:0] data_0_V_read_int_reg;
reg   [13:0] data_1_V_read_int_reg;
reg   [13:0] data_2_V_read_int_reg;
reg   [13:0] data_3_V_read_int_reg;
reg   [13:0] data_4_V_read_int_reg;
reg   [13:0] data_5_V_read_int_reg;
reg   [13:0] data_6_V_read_int_reg;
reg   [13:0] data_7_V_read_int_reg;
reg   [13:0] data_8_V_read_int_reg;
reg   [13:0] data_9_V_read_int_reg;

dense_resource_0_0_3 grp_dense_resource_0_0_3_fu_130(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .data_0_V_read(data_0_V_read_int_reg),
    .data_1_V_read(data_1_V_read_int_reg),
    .data_2_V_read(data_2_V_read_int_reg),
    .data_3_V_read(data_3_V_read_int_reg),
    .data_4_V_read(data_4_V_read_int_reg),
    .data_5_V_read(data_5_V_read_int_reg),
    .data_6_V_read(data_6_V_read_int_reg),
    .data_7_V_read(data_7_V_read_int_reg),
    .data_8_V_read(data_8_V_read_int_reg),
    .data_9_V_read(data_9_V_read_int_reg),
    .ap_return_0(grp_dense_resource_0_0_3_fu_130_ap_return_0),
    .ap_return_1(grp_dense_resource_0_0_3_fu_130_ap_return_1),
    .ap_return_2(grp_dense_resource_0_0_3_fu_130_ap_return_2),
    .ap_return_3(grp_dense_resource_0_0_3_fu_130_ap_return_3),
    .ap_return_4(grp_dense_resource_0_0_3_fu_130_ap_return_4),
    .ap_return_5(grp_dense_resource_0_0_3_fu_130_ap_return_5),
    .ap_return_6(grp_dense_resource_0_0_3_fu_130_ap_return_6),
    .ap_return_7(grp_dense_resource_0_0_3_fu_130_ap_return_7),
    .ap_ce(grp_dense_resource_0_0_3_fu_130_ap_ce)
);

dense_resource_0_0 grp_dense_resource_0_0_fu_154(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .data_0_V_read(data0_0_V_reg_577),
    .data_1_V_read(data0_1_V_reg_582),
    .data_2_V_read(data0_2_V_reg_587),
    .data_3_V_read(data0_3_V_reg_592),
    .data_4_V_read(data0_4_V_reg_597),
    .data_5_V_read(data0_5_V_reg_602),
    .data_6_V_read(data0_6_V_reg_607),
    .data_7_V_read(data0_7_V_reg_612),
    .ap_return_0(grp_dense_resource_0_0_fu_154_ap_return_0),
    .ap_return_1(grp_dense_resource_0_0_fu_154_ap_return_1),
    .ap_return_2(grp_dense_resource_0_0_fu_154_ap_return_2),
    .ap_return_3(grp_dense_resource_0_0_fu_154_ap_return_3),
    .ap_return_4(grp_dense_resource_0_0_fu_154_ap_return_4),
    .ap_return_5(grp_dense_resource_0_0_fu_154_ap_return_5),
    .ap_return_6(grp_dense_resource_0_0_fu_154_ap_return_6),
    .ap_return_7(grp_dense_resource_0_0_fu_154_ap_return_7),
    .ap_ce(grp_dense_resource_0_0_fu_154_ap_ce)
);

relu call_ret1_relu_fu_166(
    .ap_ready(call_ret1_relu_fu_166_ap_ready),
    .data_0_V_read(grp_dense_resource_0_0_3_fu_130_ap_return_0),
    .data_1_V_read(grp_dense_resource_0_0_3_fu_130_ap_return_1),
    .data_2_V_read(grp_dense_resource_0_0_3_fu_130_ap_return_2),
    .data_3_V_read(grp_dense_resource_0_0_3_fu_130_ap_return_3),
    .data_4_V_read(grp_dense_resource_0_0_3_fu_130_ap_return_4),
    .data_5_V_read(grp_dense_resource_0_0_3_fu_130_ap_return_5),
    .data_6_V_read(grp_dense_resource_0_0_3_fu_130_ap_return_6),
    .data_7_V_read(grp_dense_resource_0_0_3_fu_130_ap_return_7),
    .ap_return_0(call_ret1_relu_fu_166_ap_return_0),
    .ap_return_1(call_ret1_relu_fu_166_ap_return_1),
    .ap_return_2(call_ret1_relu_fu_166_ap_return_2),
    .ap_return_3(call_ret1_relu_fu_166_ap_return_3),
    .ap_return_4(call_ret1_relu_fu_166_ap_return_4),
    .ap_return_5(call_ret1_relu_fu_166_ap_return_5),
    .ap_return_6(call_ret1_relu_fu_166_ap_return_6),
    .ap_return_7(call_ret1_relu_fu_166_ap_return_7)
);

relu call_ret_relu_fu_178(
    .ap_ready(call_ret_relu_fu_178_ap_ready),
    .data_0_V_read(data1_logits_0_V_reg_617),
    .data_1_V_read(data1_logits_1_V_reg_622),
    .data_2_V_read(data1_logits_2_V_reg_627),
    .data_3_V_read(data1_logits_3_V_reg_632),
    .data_4_V_read(data1_logits_4_V_reg_637),
    .data_5_V_read(data1_logits_5_V_reg_642),
    .data_6_V_read(data1_logits_6_V_reg_647),
    .data_7_V_read(data1_logits_7_V_reg_652),
    .ap_return_0(call_ret_relu_fu_178_ap_return_0),
    .ap_return_1(call_ret_relu_fu_178_ap_return_1),
    .ap_return_2(call_ret_relu_fu_178_ap_return_2),
    .ap_return_3(call_ret_relu_fu_178_ap_return_3),
    .ap_return_4(call_ret_relu_fu_178_ap_return_4),
    .ap_return_5(call_ret_relu_fu_178_ap_return_5),
    .ap_return_6(call_ret_relu_fu_178_ap_return_6),
    .ap_return_7(call_ret_relu_fu_178_ap_return_7)
);

example_mul_mul_1tde #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 6 ),
    .dout_WIDTH( 20 ))
example_mul_mul_1tde_U1933(
    .din0(call_ret_relu_fu_178_ap_return_0),
    .din1(mul_ln1118_fu_542_p1),
    .dout(mul_ln1118_fu_542_p2)
);

example_mul_mul_1ocq #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1ocq_U1934(
    .din0(call_ret_relu_fu_178_ap_return_1),
    .din1(mul_ln1118_122_fu_549_p1),
    .dout(mul_ln1118_122_fu_549_p2)
);

example_mul_mul_1sc4 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1sc4_U1935(
    .din0(call_ret_relu_fu_178_ap_return_2),
    .din1(mul_ln1118_123_fu_556_p1),
    .dout(mul_ln1118_123_fu_556_p2)
);

example_mul_mul_1ncg #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1ncg_U1936(
    .din0(call_ret_relu_fu_178_ap_return_3),
    .din1(mul_ln1118_124_fu_563_p1),
    .dout(mul_ln1118_124_fu_563_p2)
);

example_mul_mul_1ocq #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1ocq_U1937(
    .din0(call_ret_relu_fu_178_ap_return_5),
    .din1(mul_ln1118_125_fu_570_p1),
    .dout(mul_ln1118_125_fu_570_p2)
);

always @ (posedge ap_clk) begin
    data_0_V_read_int_reg <= data_0_V_read;
end

always @ (posedge ap_clk) begin
    data_1_V_read_int_reg <= data_1_V_read;
end

always @ (posedge ap_clk) begin
    data_2_V_read_int_reg <= data_2_V_read;
end

always @ (posedge ap_clk) begin
    data_3_V_read_int_reg <= data_3_V_read;
end

always @ (posedge ap_clk) begin
    data_4_V_read_int_reg <= data_4_V_read;
end

always @ (posedge ap_clk) begin
    data_5_V_read_int_reg <= data_5_V_read;
end

always @ (posedge ap_clk) begin
    data_6_V_read_int_reg <= data_6_V_read;
end

always @ (posedge ap_clk) begin
    data_7_V_read_int_reg <= data_7_V_read;
end

always @ (posedge ap_clk) begin
    data_8_V_read_int_reg <= data_8_V_read;
end

always @ (posedge ap_clk) begin
    data_9_V_read_int_reg <= data_9_V_read;
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        add_ln703_285_reg_662 <= add_ln703_285_fu_495_p2;
        add_ln703_290_reg_667 <= add_ln703_290_fu_527_p2;
        add_ln703_reg_657 <= add_ln703_fu_489_p2;
        data0_0_V_reg_577 <= call_ret1_relu_fu_166_ap_return_0;
        data0_1_V_reg_582 <= call_ret1_relu_fu_166_ap_return_1;
        data0_2_V_reg_587 <= call_ret1_relu_fu_166_ap_return_2;
        data0_3_V_reg_592 <= call_ret1_relu_fu_166_ap_return_3;
        data0_4_V_reg_597 <= call_ret1_relu_fu_166_ap_return_4;
        data0_5_V_reg_602 <= call_ret1_relu_fu_166_ap_return_5;
        data0_6_V_reg_607 <= call_ret1_relu_fu_166_ap_return_6;
        data0_7_V_reg_612 <= call_ret1_relu_fu_166_ap_return_7;
        data1_logits_0_V_reg_617 <= grp_dense_resource_0_0_fu_154_ap_return_0;
        data1_logits_1_V_reg_622 <= grp_dense_resource_0_0_fu_154_ap_return_1;
        data1_logits_2_V_reg_627 <= grp_dense_resource_0_0_fu_154_ap_return_2;
        data1_logits_3_V_reg_632 <= grp_dense_resource_0_0_fu_154_ap_return_3;
        data1_logits_4_V_reg_637 <= grp_dense_resource_0_0_fu_154_ap_return_4;
        data1_logits_5_V_reg_642 <= grp_dense_resource_0_0_fu_154_ap_return_5;
        data1_logits_6_V_reg_647 <= grp_dense_resource_0_0_fu_154_ap_return_6;
        data1_logits_7_V_reg_652 <= grp_dense_resource_0_0_fu_154_ap_return_7;
    end
end

always @ (*) begin
    if ((1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp17)) begin
        grp_dense_resource_0_0_3_fu_130_ap_ce = 1'b1;
    end else begin
        grp_dense_resource_0_0_3_fu_130_ap_ce = 1'b0;
    end
end

always @ (*) begin
    if ((1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp36)) begin
        grp_dense_resource_0_0_fu_154_ap_ce = 1'b1;
    end else begin
        grp_dense_resource_0_0_fu_154_ap_ce = 1'b0;
    end
end

assign add_ln1118_fu_469_p2 = ($signed(sext_ln1118_226_fu_465_p1) + $signed(sext_ln1118_225_fu_453_p1));

assign add_ln703_285_fu_495_p2 = (trunc_ln708_193_fu_360_p4 + trunc_ln708_194_fu_373_p4);

assign add_ln703_286_fu_533_p2 = (add_ln703_285_reg_662 + add_ln703_reg_657);

assign add_ln703_287_fu_501_p2 = (trunc_ln708_195_fu_406_p4 + trunc_ln708_196_fu_420_p4);

assign add_ln703_288_fu_507_p2 = ($signed(sext_ln703_fu_485_p1) + $signed(12'd4065));

assign add_ln703_289_fu_517_p2 = ($signed(sext_ln703_38_fu_513_p1) + $signed(sext_ln1118_227_fu_449_p1));

assign add_ln703_290_fu_527_p2 = ($signed(sext_ln703_39_fu_523_p1) + $signed(add_ln703_287_fu_501_p2));

assign add_ln703_fu_489_p2 = ($signed(sext_ln708_fu_339_p1) + $signed(trunc_ln708_s_fu_347_p4));

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001_ignoreCallOp17 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001_ignoreCallOp36 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_return = (add_ln703_290_reg_667 + add_ln703_286_fu_533_p2);

assign mul_ln1118_122_fu_549_p1 = 21'd2097098;

assign mul_ln1118_123_fu_556_p1 = 21'd2097053;

assign mul_ln1118_124_fu_563_p1 = 21'd57;

assign mul_ln1118_125_fu_570_p1 = 21'd2097099;

assign mul_ln1118_126_fu_433_p0 = call_ret_relu_fu_178_ap_return_6;

assign mul_ln1118_126_fu_433_p2 = ($signed(mul_ln1118_126_fu_433_p0) * $signed(-'hD));

assign mul_ln1118_fu_542_p1 = 20'd26;

assign sext_ln1118_222_fu_382_p0 = call_ret_relu_fu_178_ap_return_4;

assign sext_ln1118_222_fu_382_p1 = sext_ln1118_222_fu_382_p0;

assign sext_ln1118_225_fu_453_p0 = call_ret_relu_fu_178_ap_return_7;

assign sext_ln1118_225_fu_453_p1 = sext_ln1118_225_fu_453_p0;

assign sext_ln1118_226_fu_465_p1 = $signed(shl_ln1118_s_fu_457_p3);

assign sext_ln1118_227_fu_449_p1 = $signed(tmp_fu_439_p4);

assign sext_ln703_38_fu_513_p1 = $signed(add_ln703_288_fu_507_p2);

assign sext_ln703_39_fu_523_p1 = $signed(add_ln703_289_fu_517_p2);

assign sext_ln703_fu_485_p1 = $signed(tmp_46_fu_475_p4);

assign sext_ln708_fu_339_p1 = $signed(trunc_ln_fu_330_p4);

assign shl_ln1118_s_fu_457_p1 = call_ret_relu_fu_178_ap_return_7;

assign shl_ln1118_s_fu_457_p3 = {{shl_ln1118_s_fu_457_p1}, {3'd0}};

assign shl_ln_fu_386_p1 = call_ret_relu_fu_178_ap_return_4;

assign shl_ln_fu_386_p3 = {{shl_ln_fu_386_p1}, {7'd0}};

assign sub_ln1118_102_fu_400_p2 = ($signed(sub_ln1118_fu_394_p2) - $signed(sext_ln1118_222_fu_382_p1));

assign sub_ln1118_fu_394_p2 = (21'd0 - shl_ln_fu_386_p3);

assign tmp_46_fu_475_p4 = {{add_ln1118_fu_469_p2[17:7]}};

assign tmp_fu_439_p4 = {{mul_ln1118_126_fu_433_p2[18:7]}};

assign trunc_ln708_193_fu_360_p4 = {{mul_ln1118_123_fu_556_p2[20:7]}};

assign trunc_ln708_194_fu_373_p4 = {{mul_ln1118_124_fu_563_p2[20:7]}};

assign trunc_ln708_195_fu_406_p4 = {{sub_ln1118_102_fu_400_p2[20:7]}};

assign trunc_ln708_196_fu_420_p4 = {{mul_ln1118_125_fu_570_p2[20:7]}};

assign trunc_ln708_s_fu_347_p4 = {{mul_ln1118_122_fu_549_p2[20:7]}};

assign trunc_ln_fu_330_p4 = {{mul_ln1118_fu_542_p2[19:7]}};

endmodule //dense_mult_3lyr_2
