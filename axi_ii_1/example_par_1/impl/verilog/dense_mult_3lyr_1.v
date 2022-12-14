// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dense_mult_3lyr_1 (
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
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3
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
output  [13:0] ap_return_0;
output  [13:0] ap_return_1;
output  [13:0] ap_return_2;
output  [13:0] ap_return_3;

reg   [13:0] data0_logits_0_V_reg_290;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
wire    ap_block_state6_pp0_stage0_iter5;
wire    ap_block_state7_pp0_stage0_iter6;
wire    ap_block_state8_pp0_stage0_iter7;
wire    ap_block_pp0_stage0_11001;
reg   [13:0] data0_logits_1_V_reg_295;
reg   [13:0] data0_logits_2_V_reg_300;
reg   [13:0] data0_logits_3_V_reg_305;
reg   [13:0] data0_logits_4_V_reg_310;
reg   [13:0] data0_logits_5_V_reg_315;
reg   [13:0] data0_logits_6_V_reg_320;
reg   [13:0] data0_logits_7_V_reg_325;
reg   [13:0] data0_0_V_reg_330;
reg   [13:0] data0_1_V_reg_335;
reg   [13:0] data0_2_V_reg_340;
reg   [13:0] data0_3_V_reg_345;
reg   [13:0] data0_4_V_reg_350;
reg   [13:0] data0_5_V_reg_355;
reg   [13:0] data0_6_V_reg_360;
reg   [13:0] data0_7_V_reg_365;
reg   [13:0] data1_logits_0_V_reg_370;
reg   [13:0] data1_logits_1_V_reg_375;
reg   [13:0] data1_logits_2_V_reg_380;
reg   [13:0] data1_logits_3_V_reg_385;
reg   [13:0] data1_logits_4_V_reg_390;
reg   [13:0] data1_logits_5_V_reg_395;
reg   [13:0] data1_logits_6_V_reg_400;
reg   [13:0] data1_logits_7_V_reg_405;
reg   [13:0] data1_0_V_reg_410;
reg   [13:0] data1_1_V_reg_415;
reg   [13:0] data1_2_V_reg_420;
reg   [13:0] data1_3_V_reg_425;
reg   [13:0] data1_4_V_reg_430;
reg   [13:0] data1_5_V_reg_435;
reg   [13:0] data1_6_V_reg_440;
reg   [13:0] data1_7_V_reg_445;
wire   [13:0] grp_dense_resource_1_0_1_fu_90_ap_return_0;
wire   [13:0] grp_dense_resource_1_0_1_fu_90_ap_return_1;
wire   [13:0] grp_dense_resource_1_0_1_fu_90_ap_return_2;
wire   [13:0] grp_dense_resource_1_0_1_fu_90_ap_return_3;
wire   [13:0] grp_dense_resource_1_0_1_fu_90_ap_return_4;
wire   [13:0] grp_dense_resource_1_0_1_fu_90_ap_return_5;
wire   [13:0] grp_dense_resource_1_0_1_fu_90_ap_return_6;
wire   [13:0] grp_dense_resource_1_0_1_fu_90_ap_return_7;
reg    grp_dense_resource_1_0_1_fu_90_ap_ce;
wire    ap_block_state1_pp0_stage0_iter0_ignore_call10;
wire    ap_block_state2_pp0_stage0_iter1_ignore_call10;
wire    ap_block_state3_pp0_stage0_iter2_ignore_call10;
wire    ap_block_state4_pp0_stage0_iter3_ignore_call10;
wire    ap_block_state5_pp0_stage0_iter4_ignore_call10;
wire    ap_block_state6_pp0_stage0_iter5_ignore_call10;
wire    ap_block_state7_pp0_stage0_iter6_ignore_call10;
wire    ap_block_state8_pp0_stage0_iter7_ignore_call10;
wire    ap_block_pp0_stage0_11001_ignoreCallOp19;
wire   [13:0] grp_dense_resource_2_0_fu_114_ap_return_0;
wire   [13:0] grp_dense_resource_2_0_fu_114_ap_return_1;
wire   [13:0] grp_dense_resource_2_0_fu_114_ap_return_2;
wire   [13:0] grp_dense_resource_2_0_fu_114_ap_return_3;
wire   [13:0] grp_dense_resource_2_0_fu_114_ap_return_4;
wire   [13:0] grp_dense_resource_2_0_fu_114_ap_return_5;
wire   [13:0] grp_dense_resource_2_0_fu_114_ap_return_6;
wire   [13:0] grp_dense_resource_2_0_fu_114_ap_return_7;
reg    grp_dense_resource_2_0_fu_114_ap_ce;
wire    ap_block_state1_pp0_stage0_iter0_ignore_call28;
wire    ap_block_state2_pp0_stage0_iter1_ignore_call28;
wire    ap_block_state3_pp0_stage0_iter2_ignore_call28;
wire    ap_block_state4_pp0_stage0_iter3_ignore_call28;
wire    ap_block_state5_pp0_stage0_iter4_ignore_call28;
wire    ap_block_state6_pp0_stage0_iter5_ignore_call28;
wire    ap_block_state7_pp0_stage0_iter6_ignore_call28;
wire    ap_block_state8_pp0_stage0_iter7_ignore_call28;
wire    ap_block_pp0_stage0_11001_ignoreCallOp38;
wire   [13:0] grp_dense_resource_0_0_1_fu_126_ap_return_0;
wire   [13:0] grp_dense_resource_0_0_1_fu_126_ap_return_1;
wire   [13:0] grp_dense_resource_0_0_1_fu_126_ap_return_2;
wire   [13:0] grp_dense_resource_0_0_1_fu_126_ap_return_3;
reg    grp_dense_resource_0_0_1_fu_126_ap_ce;
wire    ap_block_state1_pp0_stage0_iter0_ignore_call46;
wire    ap_block_state2_pp0_stage0_iter1_ignore_call46;
wire    ap_block_state3_pp0_stage0_iter2_ignore_call46;
wire    ap_block_state4_pp0_stage0_iter3_ignore_call46;
wire    ap_block_state5_pp0_stage0_iter4_ignore_call46;
wire    ap_block_state6_pp0_stage0_iter5_ignore_call46;
wire    ap_block_state7_pp0_stage0_iter6_ignore_call46;
wire    ap_block_state8_pp0_stage0_iter7_ignore_call46;
wire    ap_block_pp0_stage0_11001_ignoreCallOp57;
wire    call_ret6_relu_fu_138_ap_ready;
wire   [13:0] call_ret6_relu_fu_138_ap_return_0;
wire   [13:0] call_ret6_relu_fu_138_ap_return_1;
wire   [13:0] call_ret6_relu_fu_138_ap_return_2;
wire   [13:0] call_ret6_relu_fu_138_ap_return_3;
wire   [13:0] call_ret6_relu_fu_138_ap_return_4;
wire   [13:0] call_ret6_relu_fu_138_ap_return_5;
wire   [13:0] call_ret6_relu_fu_138_ap_return_6;
wire   [13:0] call_ret6_relu_fu_138_ap_return_7;
wire    call_ret_relu_fu_150_ap_ready;
wire   [13:0] call_ret_relu_fu_150_ap_return_0;
wire   [13:0] call_ret_relu_fu_150_ap_return_1;
wire   [13:0] call_ret_relu_fu_150_ap_return_2;
wire   [13:0] call_ret_relu_fu_150_ap_return_3;
wire   [13:0] call_ret_relu_fu_150_ap_return_4;
wire   [13:0] call_ret_relu_fu_150_ap_return_5;
wire   [13:0] call_ret_relu_fu_150_ap_return_6;
wire   [13:0] call_ret_relu_fu_150_ap_return_7;
wire    ap_block_pp0_stage0;
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

dense_resource_1_0_1 grp_dense_resource_1_0_1_fu_90(
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
    .ap_return_0(grp_dense_resource_1_0_1_fu_90_ap_return_0),
    .ap_return_1(grp_dense_resource_1_0_1_fu_90_ap_return_1),
    .ap_return_2(grp_dense_resource_1_0_1_fu_90_ap_return_2),
    .ap_return_3(grp_dense_resource_1_0_1_fu_90_ap_return_3),
    .ap_return_4(grp_dense_resource_1_0_1_fu_90_ap_return_4),
    .ap_return_5(grp_dense_resource_1_0_1_fu_90_ap_return_5),
    .ap_return_6(grp_dense_resource_1_0_1_fu_90_ap_return_6),
    .ap_return_7(grp_dense_resource_1_0_1_fu_90_ap_return_7),
    .ap_ce(grp_dense_resource_1_0_1_fu_90_ap_ce)
);

dense_resource_2_0 grp_dense_resource_2_0_fu_114(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .data_0_V_read(data0_0_V_reg_330),
    .data_1_V_read(data0_1_V_reg_335),
    .data_2_V_read(data0_2_V_reg_340),
    .data_3_V_read(data0_3_V_reg_345),
    .data_4_V_read(data0_4_V_reg_350),
    .data_5_V_read(data0_5_V_reg_355),
    .data_6_V_read(data0_6_V_reg_360),
    .data_7_V_read(data0_7_V_reg_365),
    .ap_return_0(grp_dense_resource_2_0_fu_114_ap_return_0),
    .ap_return_1(grp_dense_resource_2_0_fu_114_ap_return_1),
    .ap_return_2(grp_dense_resource_2_0_fu_114_ap_return_2),
    .ap_return_3(grp_dense_resource_2_0_fu_114_ap_return_3),
    .ap_return_4(grp_dense_resource_2_0_fu_114_ap_return_4),
    .ap_return_5(grp_dense_resource_2_0_fu_114_ap_return_5),
    .ap_return_6(grp_dense_resource_2_0_fu_114_ap_return_6),
    .ap_return_7(grp_dense_resource_2_0_fu_114_ap_return_7),
    .ap_ce(grp_dense_resource_2_0_fu_114_ap_ce)
);

dense_resource_0_0_1 grp_dense_resource_0_0_1_fu_126(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .data_0_V_read(data1_0_V_reg_410),
    .data_1_V_read(data1_1_V_reg_415),
    .data_2_V_read(data1_2_V_reg_420),
    .data_3_V_read(data1_3_V_reg_425),
    .data_4_V_read(data1_4_V_reg_430),
    .data_5_V_read(data1_5_V_reg_435),
    .data_6_V_read(data1_6_V_reg_440),
    .data_7_V_read(data1_7_V_reg_445),
    .ap_return_0(grp_dense_resource_0_0_1_fu_126_ap_return_0),
    .ap_return_1(grp_dense_resource_0_0_1_fu_126_ap_return_1),
    .ap_return_2(grp_dense_resource_0_0_1_fu_126_ap_return_2),
    .ap_return_3(grp_dense_resource_0_0_1_fu_126_ap_return_3),
    .ap_ce(grp_dense_resource_0_0_1_fu_126_ap_ce)
);

relu call_ret6_relu_fu_138(
    .ap_ready(call_ret6_relu_fu_138_ap_ready),
    .data_0_V_read(data0_logits_0_V_reg_290),
    .data_1_V_read(data0_logits_1_V_reg_295),
    .data_2_V_read(data0_logits_2_V_reg_300),
    .data_3_V_read(data0_logits_3_V_reg_305),
    .data_4_V_read(data0_logits_4_V_reg_310),
    .data_5_V_read(data0_logits_5_V_reg_315),
    .data_6_V_read(data0_logits_6_V_reg_320),
    .data_7_V_read(data0_logits_7_V_reg_325),
    .ap_return_0(call_ret6_relu_fu_138_ap_return_0),
    .ap_return_1(call_ret6_relu_fu_138_ap_return_1),
    .ap_return_2(call_ret6_relu_fu_138_ap_return_2),
    .ap_return_3(call_ret6_relu_fu_138_ap_return_3),
    .ap_return_4(call_ret6_relu_fu_138_ap_return_4),
    .ap_return_5(call_ret6_relu_fu_138_ap_return_5),
    .ap_return_6(call_ret6_relu_fu_138_ap_return_6),
    .ap_return_7(call_ret6_relu_fu_138_ap_return_7)
);

relu call_ret_relu_fu_150(
    .ap_ready(call_ret_relu_fu_150_ap_ready),
    .data_0_V_read(data1_logits_0_V_reg_370),
    .data_1_V_read(data1_logits_1_V_reg_375),
    .data_2_V_read(data1_logits_2_V_reg_380),
    .data_3_V_read(data1_logits_3_V_reg_385),
    .data_4_V_read(data1_logits_4_V_reg_390),
    .data_5_V_read(data1_logits_5_V_reg_395),
    .data_6_V_read(data1_logits_6_V_reg_400),
    .data_7_V_read(data1_logits_7_V_reg_405),
    .ap_return_0(call_ret_relu_fu_150_ap_return_0),
    .ap_return_1(call_ret_relu_fu_150_ap_return_1),
    .ap_return_2(call_ret_relu_fu_150_ap_return_2),
    .ap_return_3(call_ret_relu_fu_150_ap_return_3),
    .ap_return_4(call_ret_relu_fu_150_ap_return_4),
    .ap_return_5(call_ret_relu_fu_150_ap_return_5),
    .ap_return_6(call_ret_relu_fu_150_ap_return_6),
    .ap_return_7(call_ret_relu_fu_150_ap_return_7)
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
        data0_0_V_reg_330 <= call_ret6_relu_fu_138_ap_return_0;
        data0_1_V_reg_335 <= call_ret6_relu_fu_138_ap_return_1;
        data0_2_V_reg_340 <= call_ret6_relu_fu_138_ap_return_2;
        data0_3_V_reg_345 <= call_ret6_relu_fu_138_ap_return_3;
        data0_4_V_reg_350 <= call_ret6_relu_fu_138_ap_return_4;
        data0_5_V_reg_355 <= call_ret6_relu_fu_138_ap_return_5;
        data0_6_V_reg_360 <= call_ret6_relu_fu_138_ap_return_6;
        data0_7_V_reg_365 <= call_ret6_relu_fu_138_ap_return_7;
        data0_logits_0_V_reg_290 <= grp_dense_resource_1_0_1_fu_90_ap_return_0;
        data0_logits_1_V_reg_295 <= grp_dense_resource_1_0_1_fu_90_ap_return_1;
        data0_logits_2_V_reg_300 <= grp_dense_resource_1_0_1_fu_90_ap_return_2;
        data0_logits_3_V_reg_305 <= grp_dense_resource_1_0_1_fu_90_ap_return_3;
        data0_logits_4_V_reg_310 <= grp_dense_resource_1_0_1_fu_90_ap_return_4;
        data0_logits_5_V_reg_315 <= grp_dense_resource_1_0_1_fu_90_ap_return_5;
        data0_logits_6_V_reg_320 <= grp_dense_resource_1_0_1_fu_90_ap_return_6;
        data0_logits_7_V_reg_325 <= grp_dense_resource_1_0_1_fu_90_ap_return_7;
        data1_0_V_reg_410 <= call_ret_relu_fu_150_ap_return_0;
        data1_1_V_reg_415 <= call_ret_relu_fu_150_ap_return_1;
        data1_2_V_reg_420 <= call_ret_relu_fu_150_ap_return_2;
        data1_3_V_reg_425 <= call_ret_relu_fu_150_ap_return_3;
        data1_4_V_reg_430 <= call_ret_relu_fu_150_ap_return_4;
        data1_5_V_reg_435 <= call_ret_relu_fu_150_ap_return_5;
        data1_6_V_reg_440 <= call_ret_relu_fu_150_ap_return_6;
        data1_7_V_reg_445 <= call_ret_relu_fu_150_ap_return_7;
        data1_logits_0_V_reg_370 <= grp_dense_resource_2_0_fu_114_ap_return_0;
        data1_logits_1_V_reg_375 <= grp_dense_resource_2_0_fu_114_ap_return_1;
        data1_logits_2_V_reg_380 <= grp_dense_resource_2_0_fu_114_ap_return_2;
        data1_logits_3_V_reg_385 <= grp_dense_resource_2_0_fu_114_ap_return_3;
        data1_logits_4_V_reg_390 <= grp_dense_resource_2_0_fu_114_ap_return_4;
        data1_logits_5_V_reg_395 <= grp_dense_resource_2_0_fu_114_ap_return_5;
        data1_logits_6_V_reg_400 <= grp_dense_resource_2_0_fu_114_ap_return_6;
        data1_logits_7_V_reg_405 <= grp_dense_resource_2_0_fu_114_ap_return_7;
    end
end

always @ (*) begin
    if ((1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp57)) begin
        grp_dense_resource_0_0_1_fu_126_ap_ce = 1'b1;
    end else begin
        grp_dense_resource_0_0_1_fu_126_ap_ce = 1'b0;
    end
end

always @ (*) begin
    if ((1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp19)) begin
        grp_dense_resource_1_0_1_fu_90_ap_ce = 1'b1;
    end else begin
        grp_dense_resource_1_0_1_fu_90_ap_ce = 1'b0;
    end
end

always @ (*) begin
    if ((1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp38)) begin
        grp_dense_resource_2_0_fu_114_ap_ce = 1'b1;
    end else begin
        grp_dense_resource_2_0_fu_114_ap_ce = 1'b0;
    end
end

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001_ignoreCallOp19 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001_ignoreCallOp38 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001_ignoreCallOp57 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0_ignore_call46 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1_ignore_call46 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2_ignore_call46 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3_ignore_call46 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4_ignore_call46 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5_ignore_call46 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6_ignore_call46 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter7 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter7_ignore_call10 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter7_ignore_call28 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter7_ignore_call46 = ~(1'b1 == 1'b1);

assign ap_return_0 = grp_dense_resource_0_0_1_fu_126_ap_return_0;

assign ap_return_1 = grp_dense_resource_0_0_1_fu_126_ap_return_1;

assign ap_return_2 = grp_dense_resource_0_0_1_fu_126_ap_return_2;

assign ap_return_3 = grp_dense_resource_0_0_1_fu_126_ap_return_3;

endmodule //dense_mult_3lyr_1
