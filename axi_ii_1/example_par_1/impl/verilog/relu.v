// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module relu (
        ap_ready,
        data_0_V_read,
        data_1_V_read,
        data_2_V_read,
        data_3_V_read,
        data_4_V_read,
        data_5_V_read,
        data_6_V_read,
        data_7_V_read,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5,
        ap_return_6,
        ap_return_7
);


output   ap_ready;
input  [13:0] data_0_V_read;
input  [13:0] data_1_V_read;
input  [13:0] data_2_V_read;
input  [13:0] data_3_V_read;
input  [13:0] data_4_V_read;
input  [13:0] data_5_V_read;
input  [13:0] data_6_V_read;
input  [13:0] data_7_V_read;
output  [13:0] ap_return_0;
output  [13:0] ap_return_1;
output  [13:0] ap_return_2;
output  [13:0] ap_return_3;
output  [13:0] ap_return_4;
output  [13:0] ap_return_5;
output  [13:0] ap_return_6;
output  [13:0] ap_return_7;

wire   [0:0] icmp_ln1494_fu_82_p2;
wire   [12:0] trunc_ln296_fu_88_p1;
wire   [12:0] select_ln296_fu_92_p3;
wire   [0:0] icmp_ln1494_1_fu_104_p2;
wire   [12:0] trunc_ln296_1_fu_110_p1;
wire   [12:0] select_ln296_1_fu_114_p3;
wire   [0:0] icmp_ln1494_2_fu_126_p2;
wire   [12:0] trunc_ln296_2_fu_132_p1;
wire   [12:0] select_ln296_2_fu_136_p3;
wire   [0:0] icmp_ln1494_3_fu_148_p2;
wire   [12:0] trunc_ln296_3_fu_154_p1;
wire   [12:0] select_ln296_3_fu_158_p3;
wire   [0:0] icmp_ln1494_4_fu_170_p2;
wire   [12:0] trunc_ln296_4_fu_176_p1;
wire   [12:0] select_ln296_4_fu_180_p3;
wire   [0:0] icmp_ln1494_5_fu_192_p2;
wire   [12:0] trunc_ln296_5_fu_198_p1;
wire   [12:0] select_ln296_5_fu_202_p3;
wire   [0:0] icmp_ln1494_6_fu_214_p2;
wire   [12:0] trunc_ln296_6_fu_220_p1;
wire   [12:0] select_ln296_6_fu_224_p3;
wire   [0:0] icmp_ln1494_7_fu_236_p2;
wire   [12:0] trunc_ln296_7_fu_242_p1;
wire   [12:0] select_ln296_7_fu_246_p3;
wire   [13:0] zext_ln296_fu_100_p1;
wire   [13:0] zext_ln296_1_fu_122_p1;
wire   [13:0] zext_ln296_2_fu_144_p1;
wire   [13:0] zext_ln296_3_fu_166_p1;
wire   [13:0] zext_ln296_4_fu_188_p1;
wire   [13:0] zext_ln296_5_fu_210_p1;
wire   [13:0] zext_ln296_6_fu_232_p1;
wire   [13:0] zext_ln296_7_fu_254_p1;

assign ap_ready = 1'b1;

assign ap_return_0 = zext_ln296_fu_100_p1;

assign ap_return_1 = zext_ln296_1_fu_122_p1;

assign ap_return_2 = zext_ln296_2_fu_144_p1;

assign ap_return_3 = zext_ln296_3_fu_166_p1;

assign ap_return_4 = zext_ln296_4_fu_188_p1;

assign ap_return_5 = zext_ln296_5_fu_210_p1;

assign ap_return_6 = zext_ln296_6_fu_232_p1;

assign ap_return_7 = zext_ln296_7_fu_254_p1;

assign icmp_ln1494_1_fu_104_p2 = (($signed(data_1_V_read) > $signed(14'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_2_fu_126_p2 = (($signed(data_2_V_read) > $signed(14'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_3_fu_148_p2 = (($signed(data_3_V_read) > $signed(14'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_4_fu_170_p2 = (($signed(data_4_V_read) > $signed(14'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_5_fu_192_p2 = (($signed(data_5_V_read) > $signed(14'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_6_fu_214_p2 = (($signed(data_6_V_read) > $signed(14'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_7_fu_236_p2 = (($signed(data_7_V_read) > $signed(14'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_fu_82_p2 = (($signed(data_0_V_read) > $signed(14'd0)) ? 1'b1 : 1'b0);

assign select_ln296_1_fu_114_p3 = ((icmp_ln1494_1_fu_104_p2[0:0] === 1'b1) ? trunc_ln296_1_fu_110_p1 : 13'd0);

assign select_ln296_2_fu_136_p3 = ((icmp_ln1494_2_fu_126_p2[0:0] === 1'b1) ? trunc_ln296_2_fu_132_p1 : 13'd0);

assign select_ln296_3_fu_158_p3 = ((icmp_ln1494_3_fu_148_p2[0:0] === 1'b1) ? trunc_ln296_3_fu_154_p1 : 13'd0);

assign select_ln296_4_fu_180_p3 = ((icmp_ln1494_4_fu_170_p2[0:0] === 1'b1) ? trunc_ln296_4_fu_176_p1 : 13'd0);

assign select_ln296_5_fu_202_p3 = ((icmp_ln1494_5_fu_192_p2[0:0] === 1'b1) ? trunc_ln296_5_fu_198_p1 : 13'd0);

assign select_ln296_6_fu_224_p3 = ((icmp_ln1494_6_fu_214_p2[0:0] === 1'b1) ? trunc_ln296_6_fu_220_p1 : 13'd0);

assign select_ln296_7_fu_246_p3 = ((icmp_ln1494_7_fu_236_p2[0:0] === 1'b1) ? trunc_ln296_7_fu_242_p1 : 13'd0);

assign select_ln296_fu_92_p3 = ((icmp_ln1494_fu_82_p2[0:0] === 1'b1) ? trunc_ln296_fu_88_p1 : 13'd0);

assign trunc_ln296_1_fu_110_p1 = data_1_V_read[12:0];

assign trunc_ln296_2_fu_132_p1 = data_2_V_read[12:0];

assign trunc_ln296_3_fu_154_p1 = data_3_V_read[12:0];

assign trunc_ln296_4_fu_176_p1 = data_4_V_read[12:0];

assign trunc_ln296_5_fu_198_p1 = data_5_V_read[12:0];

assign trunc_ln296_6_fu_220_p1 = data_6_V_read[12:0];

assign trunc_ln296_7_fu_242_p1 = data_7_V_read[12:0];

assign trunc_ln296_fu_88_p1 = data_0_V_read[12:0];

assign zext_ln296_1_fu_122_p1 = select_ln296_1_fu_114_p3;

assign zext_ln296_2_fu_144_p1 = select_ln296_2_fu_136_p3;

assign zext_ln296_3_fu_166_p1 = select_ln296_3_fu_158_p3;

assign zext_ln296_4_fu_188_p1 = select_ln296_4_fu_180_p3;

assign zext_ln296_5_fu_210_p1 = select_ln296_5_fu_202_p3;

assign zext_ln296_6_fu_232_p1 = select_ln296_6_fu_224_p3;

assign zext_ln296_7_fu_254_p1 = select_ln296_7_fu_246_p3;

assign zext_ln296_fu_100_p1 = select_ln296_fu_92_p3;

endmodule //relu
