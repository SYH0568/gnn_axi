// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dense_resource_0_0_1 (
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
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_ce
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
output  [13:0] ap_return_0;
output  [13:0] ap_return_1;
output  [13:0] ap_return_2;
output  [13:0] ap_return_3;
input   ap_ce;

reg[13:0] ap_return_0;
reg[13:0] ap_return_1;
reg[13:0] ap_return_2;
reg[13:0] ap_return_3;

reg  signed [13:0] data_7_V_read_4_reg_1117;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
reg  signed [13:0] data_6_V_read_4_reg_1123;
reg  signed [13:0] data_5_V_read_6_reg_1130;
reg  signed [13:0] data_4_V_read_7_reg_1136;
wire   [13:0] add_ln703_189_fu_279_p2;
reg   [13:0] add_ln703_189_reg_1143;
wire   [13:0] add_ln703_192_fu_295_p2;
reg   [13:0] add_ln703_192_reg_1148;
wire   [13:0] add_ln703_197_fu_398_p2;
reg   [13:0] add_ln703_197_reg_1153;
wire   [13:0] add_ln703_200_fu_410_p2;
reg   [13:0] add_ln703_200_reg_1158;
reg   [6:0] trunc_ln708_136_reg_1163;
wire   [13:0] add_ln703_205_fu_543_p2;
reg   [13:0] add_ln703_205_reg_1168;
wire   [13:0] add_ln703_212_fu_632_p2;
reg   [13:0] add_ln703_212_reg_1173;
wire  signed [13:0] sext_ln1118_fu_164_p0;
wire    ap_block_pp0_stage0;
wire  signed [19:0] mul_ln1118_fu_1005_p2;
wire   [12:0] trunc_ln_fu_172_p4;
wire  signed [13:0] sext_ln1118_149_fu_185_p0;
wire  signed [13:0] sext_ln1118_150_fu_189_p0;
wire  signed [20:0] mul_ln1118_52_fu_1012_p2;
wire  signed [13:0] sext_ln1118_151_fu_202_p0;
wire  signed [13:0] sext_ln1118_152_fu_206_p0;
wire  signed [20:0] mul_ln1118_53_fu_1019_p2;
wire  signed [13:0] sext_ln1118_153_fu_219_p0;
wire  signed [19:0] mul_ln1118_54_fu_1026_p2;
wire   [12:0] trunc_ln708_126_fu_223_p4;
wire  signed [13:0] sext_ln1118_157_fu_236_p0;
wire  signed [20:0] mul_ln1118_57_fu_1033_p2;
wire  signed [13:0] tmp_44_fu_253_p1;
wire   [11:0] tmp_44_fu_253_p4;
wire   [13:0] trunc_ln708_64_fu_193_p4;
wire  signed [13:0] sext_ln708_fu_181_p1;
wire  signed [13:0] sext_ln708_104_fu_232_p1;
wire   [13:0] trunc_ln708_65_fu_210_p4;
wire   [13:0] add_ln703_fu_267_p2;
wire   [13:0] add_ln703_188_fu_273_p2;
wire  signed [12:0] sext_ln703_34_fu_263_p1;
wire   [12:0] add_ln703_191_fu_285_p2;
wire   [13:0] trunc_ln708_69_fu_240_p4;
wire  signed [13:0] sext_ln703_35_fu_291_p1;
wire  signed [20:0] mul_ln1118_58_fu_1040_p2;
wire  signed [20:0] mul_ln1118_59_fu_1047_p2;
wire  signed [13:0] shl_ln_fu_319_p1;
wire   [15:0] shl_ln_fu_319_p3;
wire  signed [16:0] sext_ln1118_152_fu_206_p1;
wire  signed [16:0] sext_ln1118_159_fu_327_p1;
wire   [16:0] add_ln1118_fu_331_p2;
wire   [9:0] trunc_ln708_130_fu_337_p4;
wire  signed [19:0] mul_ln1118_60_fu_1054_p2;
wire   [12:0] trunc_ln708_131_fu_351_p4;
wire  signed [20:0] mul_ln1118_61_fu_1061_p2;
wire  signed [19:0] mul_ln1118_62_fu_1068_p2;
wire   [12:0] trunc_ln708_134_fu_373_p4;
wire   [13:0] trunc_ln708_72_fu_310_p4;
wire   [13:0] trunc_ln708_71_fu_301_p4;
wire  signed [13:0] sext_ln708_111_fu_360_p1;
wire  signed [13:0] sext_ln708_110_fu_347_p1;
wire   [13:0] add_ln703_195_fu_386_p2;
wire   [13:0] add_ln703_196_fu_392_p2;
wire  signed [13:0] sext_ln708_114_fu_382_p1;
wire   [13:0] trunc_ln708_77_fu_364_p4;
wire   [13:0] add_ln703_199_fu_404_p2;
wire  signed [20:0] mul_ln1118_63_fu_1075_p2;
wire  signed [13:0] shl_ln1118_82_fu_425_p1;
wire   [15:0] shl_ln1118_82_fu_425_p3;
wire  signed [16:0] sext_ln1118_162_fu_433_p1;
wire   [16:0] sub_ln1118_70_fu_437_p2;
wire  signed [16:0] sext_ln1118_150_fu_189_p1;
wire   [16:0] sub_ln1118_71_fu_443_p2;
wire   [9:0] trunc_ln708_135_fu_449_p4;
wire  signed [13:0] trunc_ln708_136_fu_463_p1;
wire  signed [13:0] shl_ln1118_83_fu_473_p1;
wire   [18:0] shl_ln1118_83_fu_473_p3;
wire  signed [13:0] shl_ln1118_84_fu_485_p1;
wire   [16:0] shl_ln1118_84_fu_485_p3;
wire  signed [19:0] sext_ln1118_164_fu_481_p1;
wire  signed [19:0] sext_ln1118_165_fu_493_p1;
wire   [19:0] sub_ln1118_72_fu_497_p2;
wire   [12:0] trunc_ln708_137_fu_503_p4;
wire  signed [13:0] trunc_ln708_138_fu_517_p1;
wire   [7:0] trunc_ln708_138_fu_517_p4;
wire  signed [13:0] sext_ln708_115_fu_459_p1;
wire   [13:0] trunc_ln708_79_fu_416_p4;
wire  signed [13:0] sext_ln708_117_fu_527_p1;
wire  signed [13:0] sext_ln708_116_fu_513_p1;
wire   [13:0] add_ln703_203_fu_531_p2;
wire   [13:0] add_ln703_204_fu_537_p2;
wire  signed [20:0] mul_ln1118_65_fu_1082_p2;
wire  signed [13:0] shl_ln1118_86_fu_558_p1;
wire   [19:0] shl_ln1118_86_fu_558_p3;
wire  signed [13:0] shl_ln1118_87_fu_570_p1;
wire   [16:0] shl_ln1118_87_fu_570_p3;
wire  signed [20:0] sext_ln1118_168_fu_566_p1;
wire  signed [20:0] sext_ln1118_169_fu_578_p1;
wire   [20:0] add_ln1118_13_fu_582_p2;
wire  signed [20:0] mul_ln1118_66_fu_1089_p2;
wire  signed [19:0] mul_ln1118_67_fu_1096_p2;
wire   [12:0] trunc_ln708_141_fu_607_p4;
wire   [13:0] trunc_ln708_88_fu_588_p4;
wire   [13:0] trunc_ln708_87_fu_549_p4;
wire  signed [13:0] sext_ln708_120_fu_616_p1;
wire   [13:0] trunc_ln708_89_fu_598_p4;
wire   [13:0] add_ln703_210_fu_620_p2;
wire   [13:0] add_ln703_211_fu_626_p2;
wire   [16:0] tmp_fu_644_p3;
wire  signed [17:0] sext_ln1118_155_fu_641_p1;
wire  signed [17:0] sext_ln1118_216_fu_651_p1;
wire   [17:0] sub_ln1118_99_fu_655_p2;
wire   [10:0] trunc_ln708_127_fu_661_p4;
wire  signed [19:0] mul_ln1118_56_fu_1103_p2;
wire   [12:0] trunc_ln708_128_fu_678_p4;
wire  signed [13:0] sext_ln708_106_fu_687_p1;
wire  signed [13:0] sext_ln708_105_fu_671_p1;
wire   [13:0] add_ln703_190_fu_694_p2;
wire   [13:0] add_ln703_193_fu_700_p2;
wire   [17:0] sub_ln1118_fu_710_p2;
wire   [10:0] trunc_ln708_132_fu_716_p4;
wire   [18:0] shl_ln1118_81_fu_730_p3;
wire  signed [19:0] sext_ln1118_161_fu_737_p1;
wire  signed [19:0] sext_ln1118_156_fu_675_p1;
wire   [19:0] sub_ln1118_69_fu_741_p2;
wire   [12:0] trunc_ln708_133_fu_747_p4;
wire  signed [13:0] sext_ln708_113_fu_757_p1;
wire  signed [13:0] sext_ln708_112_fu_726_p1;
wire   [13:0] add_ln703_198_fu_761_p2;
wire   [13:0] add_ln703_201_fu_767_p2;
wire  signed [19:0] mul_ln1118_64_fu_1110_p2;
wire   [12:0] trunc_ln708_139_fu_780_p4;
wire  signed [15:0] shl_ln1118_85_fu_793_p3;
wire  signed [16:0] sext_ln1118_167_fu_804_p1;
wire   [16:0] sub_ln1118_73_fu_808_p2;
wire   [9:0] trunc_ln708_140_fu_814_p4;
wire  signed [13:0] sext_ln708_119_fu_824_p1;
wire  signed [13:0] sext_ln708_118_fu_789_p1;
wire  signed [7:0] sext_ln1118_163_fu_777_p1;
wire   [7:0] add_ln703_207_fu_834_p2;
wire   [13:0] add_ln703_206_fu_828_p2;
wire  signed [13:0] sext_ln703_fu_840_p1;
wire   [13:0] add_ln703_208_fu_844_p2;
wire  signed [13:0] mul_ln1118_68_fu_855_p0;
wire   [18:0] mul_ln1118_68_fu_855_p2;
wire   [11:0] trunc_ln708_142_fu_861_p4;
wire   [18:0] shl_ln1118_88_fu_875_p3;
wire   [15:0] shl_ln1118_89_fu_886_p3;
wire  signed [19:0] sext_ln1118_170_fu_882_p1;
wire  signed [19:0] sext_ln1118_171_fu_893_p1;
wire   [19:0] sub_ln1118_74_fu_897_p2;
wire   [12:0] trunc_ln708_143_fu_903_p4;
wire   [17:0] shl_ln1118_90_fu_917_p3;
wire  signed [18:0] sext_ln1118_166_fu_800_p1;
wire  signed [18:0] sext_ln1118_172_fu_924_p1;
wire   [18:0] sub_ln1118_75_fu_928_p2;
wire   [11:0] tmp_45_fu_934_p4;
wire  signed [13:0] sext_ln708_121_fu_871_p1;
wire  signed [12:0] sext_ln703_36_fu_944_p1;
wire   [12:0] add_ln703_214_fu_954_p2;
wire  signed [13:0] sext_ln708_122_fu_913_p1;
wire  signed [13:0] sext_ln703_37_fu_960_p1;
wire   [13:0] add_ln703_213_fu_948_p2;
wire   [13:0] add_ln703_215_fu_964_p2;
wire   [13:0] add_ln703_216_fu_970_p2;
wire   [13:0] add_ln703_273_fu_705_p2;
wire   [13:0] add_ln703_274_fu_772_p2;
wire   [13:0] add_ln703_275_fu_850_p2;
wire   [13:0] add_ln703_276_fu_976_p2;
wire   [5:0] mul_ln1118_fu_1005_p1;
wire  signed [13:0] mul_ln1118_52_fu_1012_p0;
wire  signed [20:0] sext_ln1118_149_fu_185_p1;
wire  signed [9:0] mul_ln1118_52_fu_1012_p1;
wire  signed [13:0] mul_ln1118_53_fu_1019_p0;
wire  signed [20:0] sext_ln1118_151_fu_202_p1;
wire   [6:0] mul_ln1118_53_fu_1019_p1;
wire  signed [13:0] mul_ln1118_54_fu_1026_p0;
wire  signed [19:0] sext_ln1118_153_fu_219_p1;
wire   [5:0] mul_ln1118_54_fu_1026_p1;
wire  signed [13:0] mul_ln1118_57_fu_1033_p0;
wire  signed [20:0] sext_ln1118_157_fu_236_p1;
wire  signed [9:0] mul_ln1118_57_fu_1033_p1;
wire  signed [13:0] mul_ln1118_58_fu_1040_p0;
wire  signed [20:0] sext_ln1118_fu_164_p1;
wire  signed [6:0] mul_ln1118_58_fu_1040_p1;
wire  signed [13:0] mul_ln1118_59_fu_1047_p0;
wire   [10:0] mul_ln1118_59_fu_1047_p1;
wire  signed [13:0] mul_ln1118_60_fu_1054_p0;
wire   [5:0] mul_ln1118_60_fu_1054_p1;
wire  signed [13:0] mul_ln1118_61_fu_1061_p0;
wire   [9:0] mul_ln1118_61_fu_1061_p1;
wire   [5:0] mul_ln1118_62_fu_1068_p1;
wire  signed [13:0] mul_ln1118_63_fu_1075_p0;
wire   [7:0] mul_ln1118_63_fu_1075_p1;
wire  signed [13:0] mul_ln1118_65_fu_1082_p0;
wire  signed [7:0] mul_ln1118_65_fu_1082_p1;
wire  signed [13:0] mul_ln1118_66_fu_1089_p0;
wire  signed [7:0] mul_ln1118_66_fu_1089_p1;
wire  signed [13:0] mul_ln1118_67_fu_1096_p0;
wire  signed [5:0] mul_ln1118_67_fu_1096_p1;
wire  signed [13:0] mul_ln1118_56_fu_1103_p0;
wire  signed [5:0] mul_ln1118_56_fu_1103_p1;
wire  signed [5:0] mul_ln1118_64_fu_1110_p1;
reg    ap_ce_reg;
reg   [13:0] ap_return_0_int_reg;
reg   [13:0] ap_return_1_int_reg;
reg   [13:0] ap_return_2_int_reg;
reg   [13:0] ap_return_3_int_reg;

example_mul_mul_1tde #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 6 ),
    .dout_WIDTH( 20 ))
example_mul_mul_1tde_U674(
    .din0(data_0_V_read),
    .din1(mul_ln1118_fu_1005_p1),
    .dout(mul_ln1118_fu_1005_p2)
);

example_mul_mul_1mb6 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 10 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1mb6_U675(
    .din0(mul_ln1118_52_fu_1012_p0),
    .din1(mul_ln1118_52_fu_1012_p1),
    .dout(mul_ln1118_52_fu_1012_p2)
);

example_mul_mul_1ncg #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1ncg_U676(
    .din0(mul_ln1118_53_fu_1019_p0),
    .din1(mul_ln1118_53_fu_1019_p1),
    .dout(mul_ln1118_53_fu_1019_p2)
);

example_mul_mul_1tde #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 6 ),
    .dout_WIDTH( 20 ))
example_mul_mul_1tde_U677(
    .din0(mul_ln1118_54_fu_1026_p0),
    .din1(mul_ln1118_54_fu_1026_p1),
    .dout(mul_ln1118_54_fu_1026_p2)
);

example_mul_mul_1mb6 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 10 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1mb6_U678(
    .din0(mul_ln1118_57_fu_1033_p0),
    .din1(mul_ln1118_57_fu_1033_p1),
    .dout(mul_ln1118_57_fu_1033_p2)
);

example_mul_mul_1ocq #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 7 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1ocq_U679(
    .din0(mul_ln1118_58_fu_1040_p0),
    .din1(mul_ln1118_58_fu_1040_p1),
    .dout(mul_ln1118_58_fu_1040_p2)
);

example_mul_mul_1vdy #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 11 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1vdy_U680(
    .din0(mul_ln1118_59_fu_1047_p0),
    .din1(mul_ln1118_59_fu_1047_p1),
    .dout(mul_ln1118_59_fu_1047_p2)
);

example_mul_mul_1tde #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 6 ),
    .dout_WIDTH( 20 ))
example_mul_mul_1tde_U681(
    .din0(mul_ln1118_60_fu_1054_p0),
    .din1(mul_ln1118_60_fu_1054_p1),
    .dout(mul_ln1118_60_fu_1054_p2)
);

example_mul_mul_1pcA #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 10 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1pcA_U682(
    .din0(mul_ln1118_61_fu_1061_p0),
    .din1(mul_ln1118_61_fu_1061_p1),
    .dout(mul_ln1118_61_fu_1061_p2)
);

example_mul_mul_1tde #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 6 ),
    .dout_WIDTH( 20 ))
example_mul_mul_1tde_U683(
    .din0(data_7_V_read),
    .din1(mul_ln1118_62_fu_1068_p1),
    .dout(mul_ln1118_62_fu_1068_p2)
);

example_mul_mul_1wdI #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1wdI_U684(
    .din0(mul_ln1118_63_fu_1075_p0),
    .din1(mul_ln1118_63_fu_1075_p1),
    .dout(mul_ln1118_63_fu_1075_p2)
);

example_mul_mul_1sc4 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1sc4_U685(
    .din0(mul_ln1118_65_fu_1082_p0),
    .din1(mul_ln1118_65_fu_1082_p1),
    .dout(mul_ln1118_65_fu_1082_p2)
);

example_mul_mul_1sc4 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 21 ))
example_mul_mul_1sc4_U686(
    .din0(mul_ln1118_66_fu_1089_p0),
    .din1(mul_ln1118_66_fu_1089_p1),
    .dout(mul_ln1118_66_fu_1089_p2)
);

example_mul_mul_1rcU #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 6 ),
    .dout_WIDTH( 20 ))
example_mul_mul_1rcU_U687(
    .din0(mul_ln1118_67_fu_1096_p0),
    .din1(mul_ln1118_67_fu_1096_p1),
    .dout(mul_ln1118_67_fu_1096_p2)
);

example_mul_mul_1rcU #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 6 ),
    .dout_WIDTH( 20 ))
example_mul_mul_1rcU_U688(
    .din0(mul_ln1118_56_fu_1103_p0),
    .din1(mul_ln1118_56_fu_1103_p1),
    .dout(mul_ln1118_56_fu_1103_p2)
);

example_mul_mul_1rcU #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 6 ),
    .dout_WIDTH( 20 ))
example_mul_mul_1rcU_U689(
    .din0(data_6_V_read_4_reg_1123),
    .din1(mul_ln1118_64_fu_1110_p1),
    .dout(mul_ln1118_64_fu_1110_p2)
);

always @ (posedge ap_clk) begin
    ap_ce_reg <= ap_ce;
end

always @ (posedge ap_clk) begin
    if (((1'b1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln703_189_reg_1143 <= add_ln703_189_fu_279_p2;
        add_ln703_192_reg_1148 <= add_ln703_192_fu_295_p2;
        add_ln703_197_reg_1153 <= add_ln703_197_fu_398_p2;
        add_ln703_200_reg_1158 <= add_ln703_200_fu_410_p2;
        add_ln703_205_reg_1168 <= add_ln703_205_fu_543_p2;
        add_ln703_212_reg_1173 <= add_ln703_212_fu_632_p2;
        data_4_V_read_7_reg_1136 <= data_4_V_read;
        data_5_V_read_6_reg_1130 <= data_5_V_read;
        data_6_V_read_4_reg_1123 <= data_6_V_read;
        data_7_V_read_4_reg_1117 <= data_7_V_read;
        trunc_ln708_136_reg_1163 <= {{trunc_ln708_136_fu_463_p1[13:7]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        ap_return_0_int_reg <= add_ln703_273_fu_705_p2;
        ap_return_1_int_reg <= add_ln703_274_fu_772_p2;
        ap_return_2_int_reg <= add_ln703_275_fu_850_p2;
        ap_return_3_int_reg <= add_ln703_276_fu_976_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_0 = ap_return_0_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_0 = add_ln703_273_fu_705_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_1 = ap_return_1_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_1 = add_ln703_274_fu_772_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_2 = ap_return_2_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_2 = add_ln703_275_fu_850_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_3 = ap_return_3_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_3 = add_ln703_276_fu_976_p2;
    end
end

assign add_ln1118_13_fu_582_p2 = ($signed(sext_ln1118_168_fu_566_p1) + $signed(sext_ln1118_169_fu_578_p1));

assign add_ln1118_fu_331_p2 = ($signed(sext_ln1118_152_fu_206_p1) + $signed(sext_ln1118_159_fu_327_p1));

assign add_ln703_188_fu_273_p2 = ($signed(sext_ln708_104_fu_232_p1) + $signed(trunc_ln708_65_fu_210_p4));

assign add_ln703_189_fu_279_p2 = (add_ln703_fu_267_p2 + add_ln703_188_fu_273_p2);

assign add_ln703_190_fu_694_p2 = ($signed(sext_ln708_106_fu_687_p1) + $signed(sext_ln708_105_fu_671_p1));

assign add_ln703_191_fu_285_p2 = ($signed(sext_ln703_34_fu_263_p1) + $signed(13'd8159));

assign add_ln703_192_fu_295_p2 = ($signed(trunc_ln708_69_fu_240_p4) + $signed(sext_ln703_35_fu_291_p1));

assign add_ln703_193_fu_700_p2 = (add_ln703_190_fu_694_p2 + add_ln703_192_reg_1148);

assign add_ln703_195_fu_386_p2 = (trunc_ln708_72_fu_310_p4 + trunc_ln708_71_fu_301_p4);

assign add_ln703_196_fu_392_p2 = ($signed(sext_ln708_111_fu_360_p1) + $signed(sext_ln708_110_fu_347_p1));

assign add_ln703_197_fu_398_p2 = (add_ln703_195_fu_386_p2 + add_ln703_196_fu_392_p2);

assign add_ln703_198_fu_761_p2 = ($signed(sext_ln708_113_fu_757_p1) + $signed(sext_ln708_112_fu_726_p1));

assign add_ln703_199_fu_404_p2 = ($signed(sext_ln708_114_fu_382_p1) + $signed(14'd16350));

assign add_ln703_200_fu_410_p2 = (trunc_ln708_77_fu_364_p4 + add_ln703_199_fu_404_p2);

assign add_ln703_201_fu_767_p2 = (add_ln703_198_fu_761_p2 + add_ln703_200_reg_1158);

assign add_ln703_203_fu_531_p2 = ($signed(sext_ln708_115_fu_459_p1) + $signed(trunc_ln708_79_fu_416_p4));

assign add_ln703_204_fu_537_p2 = ($signed(sext_ln708_117_fu_527_p1) + $signed(sext_ln708_116_fu_513_p1));

assign add_ln703_205_fu_543_p2 = (add_ln703_203_fu_531_p2 + add_ln703_204_fu_537_p2);

assign add_ln703_206_fu_828_p2 = ($signed(sext_ln708_119_fu_824_p1) + $signed(sext_ln708_118_fu_789_p1));

assign add_ln703_207_fu_834_p2 = ($signed(sext_ln1118_163_fu_777_p1) + $signed(8'd51));

assign add_ln703_208_fu_844_p2 = ($signed(add_ln703_206_fu_828_p2) + $signed(sext_ln703_fu_840_p1));

assign add_ln703_210_fu_620_p2 = (trunc_ln708_88_fu_588_p4 + trunc_ln708_87_fu_549_p4);

assign add_ln703_211_fu_626_p2 = ($signed(sext_ln708_120_fu_616_p1) + $signed(trunc_ln708_89_fu_598_p4));

assign add_ln703_212_fu_632_p2 = (add_ln703_210_fu_620_p2 + add_ln703_211_fu_626_p2);

assign add_ln703_213_fu_948_p2 = ($signed(sext_ln708_106_fu_687_p1) + $signed(sext_ln708_121_fu_871_p1));

assign add_ln703_214_fu_954_p2 = ($signed(sext_ln703_36_fu_944_p1) + $signed(13'd8155));

assign add_ln703_215_fu_964_p2 = ($signed(sext_ln708_122_fu_913_p1) + $signed(sext_ln703_37_fu_960_p1));

assign add_ln703_216_fu_970_p2 = (add_ln703_213_fu_948_p2 + add_ln703_215_fu_964_p2);

assign add_ln703_273_fu_705_p2 = (add_ln703_189_reg_1143 + add_ln703_193_fu_700_p2);

assign add_ln703_274_fu_772_p2 = (add_ln703_197_reg_1153 + add_ln703_201_fu_767_p2);

assign add_ln703_275_fu_850_p2 = (add_ln703_205_reg_1168 + add_ln703_208_fu_844_p2);

assign add_ln703_276_fu_976_p2 = (add_ln703_212_reg_1173 + add_ln703_216_fu_970_p2);

assign add_ln703_fu_267_p2 = ($signed(trunc_ln708_64_fu_193_p4) + $signed(sext_ln708_fu_181_p1));

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign mul_ln1118_52_fu_1012_p0 = sext_ln1118_149_fu_185_p1;

assign mul_ln1118_52_fu_1012_p1 = 21'd2096645;

assign mul_ln1118_53_fu_1019_p0 = sext_ln1118_151_fu_202_p1;

assign mul_ln1118_53_fu_1019_p1 = 21'd42;

assign mul_ln1118_54_fu_1026_p0 = sext_ln1118_153_fu_219_p1;

assign mul_ln1118_54_fu_1026_p1 = 20'd19;

assign mul_ln1118_56_fu_1103_p0 = sext_ln1118_156_fu_675_p1;

assign mul_ln1118_56_fu_1103_p1 = 20'd1048555;

assign mul_ln1118_57_fu_1033_p0 = sext_ln1118_157_fu_236_p1;

assign mul_ln1118_57_fu_1033_p1 = 21'd2096868;

assign mul_ln1118_58_fu_1040_p0 = sext_ln1118_fu_164_p1;

assign mul_ln1118_58_fu_1040_p1 = 21'd2097107;

assign mul_ln1118_59_fu_1047_p0 = sext_ln1118_149_fu_185_p1;

assign mul_ln1118_59_fu_1047_p1 = 21'd695;

assign mul_ln1118_60_fu_1054_p0 = sext_ln1118_153_fu_219_p1;

assign mul_ln1118_60_fu_1054_p1 = 20'd22;

assign mul_ln1118_61_fu_1061_p0 = sext_ln1118_157_fu_236_p1;

assign mul_ln1118_61_fu_1061_p1 = 21'd344;

assign mul_ln1118_62_fu_1068_p1 = 20'd19;

assign mul_ln1118_63_fu_1075_p0 = sext_ln1118_fu_164_p1;

assign mul_ln1118_63_fu_1075_p1 = 21'd87;

assign mul_ln1118_64_fu_1110_p1 = 20'd1048547;

assign mul_ln1118_65_fu_1082_p0 = sext_ln1118_fu_164_p1;

assign mul_ln1118_65_fu_1082_p1 = 21'd2097043;

assign mul_ln1118_66_fu_1089_p0 = sext_ln1118_151_fu_202_p1;

assign mul_ln1118_66_fu_1089_p1 = 21'd2097077;

assign mul_ln1118_67_fu_1096_p0 = sext_ln1118_153_fu_219_p1;

assign mul_ln1118_67_fu_1096_p1 = 20'd1048551;

assign mul_ln1118_68_fu_855_p0 = data_4_V_read_7_reg_1136;

assign mul_ln1118_68_fu_855_p2 = ($signed(mul_ln1118_68_fu_855_p0) * $signed(-'hD));

assign mul_ln1118_fu_1005_p1 = 20'd23;

assign sext_ln1118_149_fu_185_p0 = data_1_V_read;

assign sext_ln1118_149_fu_185_p1 = sext_ln1118_149_fu_185_p0;

assign sext_ln1118_150_fu_189_p0 = data_1_V_read;

assign sext_ln1118_150_fu_189_p1 = sext_ln1118_150_fu_189_p0;

assign sext_ln1118_151_fu_202_p0 = data_2_V_read;

assign sext_ln1118_151_fu_202_p1 = sext_ln1118_151_fu_202_p0;

assign sext_ln1118_152_fu_206_p0 = data_2_V_read;

assign sext_ln1118_152_fu_206_p1 = sext_ln1118_152_fu_206_p0;

assign sext_ln1118_153_fu_219_p0 = data_3_V_read;

assign sext_ln1118_153_fu_219_p1 = sext_ln1118_153_fu_219_p0;

assign sext_ln1118_155_fu_641_p1 = data_4_V_read_7_reg_1136;

assign sext_ln1118_156_fu_675_p1 = data_5_V_read_6_reg_1130;

assign sext_ln1118_157_fu_236_p0 = data_6_V_read;

assign sext_ln1118_157_fu_236_p1 = sext_ln1118_157_fu_236_p0;

assign sext_ln1118_159_fu_327_p1 = $signed(shl_ln_fu_319_p3);

assign sext_ln1118_161_fu_737_p1 = $signed(shl_ln1118_81_fu_730_p3);

assign sext_ln1118_162_fu_433_p1 = $signed(shl_ln1118_82_fu_425_p3);

assign sext_ln1118_163_fu_777_p1 = $signed(trunc_ln708_136_reg_1163);

assign sext_ln1118_164_fu_481_p1 = $signed(shl_ln1118_83_fu_473_p3);

assign sext_ln1118_165_fu_493_p1 = $signed(shl_ln1118_84_fu_485_p3);

assign sext_ln1118_166_fu_800_p1 = shl_ln1118_85_fu_793_p3;

assign sext_ln1118_167_fu_804_p1 = shl_ln1118_85_fu_793_p3;

assign sext_ln1118_168_fu_566_p1 = $signed(shl_ln1118_86_fu_558_p3);

assign sext_ln1118_169_fu_578_p1 = $signed(shl_ln1118_87_fu_570_p3);

assign sext_ln1118_170_fu_882_p1 = $signed(shl_ln1118_88_fu_875_p3);

assign sext_ln1118_171_fu_893_p1 = $signed(shl_ln1118_89_fu_886_p3);

assign sext_ln1118_172_fu_924_p1 = $signed(shl_ln1118_90_fu_917_p3);

assign sext_ln1118_216_fu_651_p1 = $signed(tmp_fu_644_p3);

assign sext_ln1118_fu_164_p0 = data_0_V_read;

assign sext_ln1118_fu_164_p1 = sext_ln1118_fu_164_p0;

assign sext_ln703_34_fu_263_p1 = $signed(tmp_44_fu_253_p4);

assign sext_ln703_35_fu_291_p1 = $signed(add_ln703_191_fu_285_p2);

assign sext_ln703_36_fu_944_p1 = $signed(tmp_45_fu_934_p4);

assign sext_ln703_37_fu_960_p1 = $signed(add_ln703_214_fu_954_p2);

assign sext_ln703_fu_840_p1 = $signed(add_ln703_207_fu_834_p2);

assign sext_ln708_104_fu_232_p1 = $signed(trunc_ln708_126_fu_223_p4);

assign sext_ln708_105_fu_671_p1 = $signed(trunc_ln708_127_fu_661_p4);

assign sext_ln708_106_fu_687_p1 = $signed(trunc_ln708_128_fu_678_p4);

assign sext_ln708_110_fu_347_p1 = $signed(trunc_ln708_130_fu_337_p4);

assign sext_ln708_111_fu_360_p1 = $signed(trunc_ln708_131_fu_351_p4);

assign sext_ln708_112_fu_726_p1 = $signed(trunc_ln708_132_fu_716_p4);

assign sext_ln708_113_fu_757_p1 = $signed(trunc_ln708_133_fu_747_p4);

assign sext_ln708_114_fu_382_p1 = $signed(trunc_ln708_134_fu_373_p4);

assign sext_ln708_115_fu_459_p1 = $signed(trunc_ln708_135_fu_449_p4);

assign sext_ln708_116_fu_513_p1 = $signed(trunc_ln708_137_fu_503_p4);

assign sext_ln708_117_fu_527_p1 = $signed(trunc_ln708_138_fu_517_p4);

assign sext_ln708_118_fu_789_p1 = $signed(trunc_ln708_139_fu_780_p4);

assign sext_ln708_119_fu_824_p1 = $signed(trunc_ln708_140_fu_814_p4);

assign sext_ln708_120_fu_616_p1 = $signed(trunc_ln708_141_fu_607_p4);

assign sext_ln708_121_fu_871_p1 = $signed(trunc_ln708_142_fu_861_p4);

assign sext_ln708_122_fu_913_p1 = $signed(trunc_ln708_143_fu_903_p4);

assign sext_ln708_fu_181_p1 = $signed(trunc_ln_fu_172_p4);

assign shl_ln1118_81_fu_730_p3 = {{data_5_V_read_6_reg_1130}, {5'd0}};

assign shl_ln1118_82_fu_425_p1 = data_1_V_read;

assign shl_ln1118_82_fu_425_p3 = {{shl_ln1118_82_fu_425_p1}, {2'd0}};

assign shl_ln1118_83_fu_473_p1 = data_3_V_read;

assign shl_ln1118_83_fu_473_p3 = {{shl_ln1118_83_fu_473_p1}, {5'd0}};

assign shl_ln1118_84_fu_485_p1 = data_3_V_read;

assign shl_ln1118_84_fu_485_p3 = {{shl_ln1118_84_fu_485_p1}, {3'd0}};

assign shl_ln1118_85_fu_793_p3 = {{data_7_V_read_4_reg_1117}, {2'd0}};

assign shl_ln1118_86_fu_558_p1 = data_1_V_read;

assign shl_ln1118_86_fu_558_p3 = {{shl_ln1118_86_fu_558_p1}, {6'd0}};

assign shl_ln1118_87_fu_570_p1 = data_1_V_read;

assign shl_ln1118_87_fu_570_p3 = {{shl_ln1118_87_fu_570_p1}, {3'd0}};

assign shl_ln1118_88_fu_875_p3 = {{data_6_V_read_4_reg_1123}, {5'd0}};

assign shl_ln1118_89_fu_886_p3 = {{data_6_V_read_4_reg_1123}, {2'd0}};

assign shl_ln1118_90_fu_917_p3 = {{data_7_V_read_4_reg_1117}, {4'd0}};

assign shl_ln_fu_319_p1 = data_2_V_read;

assign shl_ln_fu_319_p3 = {{shl_ln_fu_319_p1}, {2'd0}};

assign sub_ln1118_69_fu_741_p2 = ($signed(sext_ln1118_161_fu_737_p1) - $signed(sext_ln1118_156_fu_675_p1));

assign sub_ln1118_70_fu_437_p2 = ($signed(17'd0) - $signed(sext_ln1118_162_fu_433_p1));

assign sub_ln1118_71_fu_443_p2 = ($signed(sub_ln1118_70_fu_437_p2) - $signed(sext_ln1118_150_fu_189_p1));

assign sub_ln1118_72_fu_497_p2 = ($signed(sext_ln1118_164_fu_481_p1) - $signed(sext_ln1118_165_fu_493_p1));

assign sub_ln1118_73_fu_808_p2 = ($signed(17'd0) - $signed(sext_ln1118_167_fu_804_p1));

assign sub_ln1118_74_fu_897_p2 = ($signed(sext_ln1118_170_fu_882_p1) - $signed(sext_ln1118_171_fu_893_p1));

assign sub_ln1118_75_fu_928_p2 = ($signed(sext_ln1118_166_fu_800_p1) - $signed(sext_ln1118_172_fu_924_p1));

assign sub_ln1118_99_fu_655_p2 = ($signed(sext_ln1118_155_fu_641_p1) - $signed(sext_ln1118_216_fu_651_p1));

assign sub_ln1118_fu_710_p2 = ($signed(sext_ln1118_216_fu_651_p1) - $signed(sext_ln1118_155_fu_641_p1));

assign tmp_44_fu_253_p1 = data_7_V_read;

assign tmp_44_fu_253_p4 = {{tmp_44_fu_253_p1[13:2]}};

assign tmp_45_fu_934_p4 = {{sub_ln1118_75_fu_928_p2[18:7]}};

assign tmp_fu_644_p3 = {{data_4_V_read_7_reg_1136}, {3'd0}};

assign trunc_ln708_126_fu_223_p4 = {{mul_ln1118_54_fu_1026_p2[19:7]}};

assign trunc_ln708_127_fu_661_p4 = {{sub_ln1118_99_fu_655_p2[17:7]}};

assign trunc_ln708_128_fu_678_p4 = {{mul_ln1118_56_fu_1103_p2[19:7]}};

assign trunc_ln708_130_fu_337_p4 = {{add_ln1118_fu_331_p2[16:7]}};

assign trunc_ln708_131_fu_351_p4 = {{mul_ln1118_60_fu_1054_p2[19:7]}};

assign trunc_ln708_132_fu_716_p4 = {{sub_ln1118_fu_710_p2[17:7]}};

assign trunc_ln708_133_fu_747_p4 = {{sub_ln1118_69_fu_741_p2[19:7]}};

assign trunc_ln708_134_fu_373_p4 = {{mul_ln1118_62_fu_1068_p2[19:7]}};

assign trunc_ln708_135_fu_449_p4 = {{sub_ln1118_71_fu_443_p2[16:7]}};

assign trunc_ln708_136_fu_463_p1 = data_2_V_read;

assign trunc_ln708_137_fu_503_p4 = {{sub_ln1118_72_fu_497_p2[19:7]}};

assign trunc_ln708_138_fu_517_p1 = data_5_V_read;

assign trunc_ln708_138_fu_517_p4 = {{trunc_ln708_138_fu_517_p1[13:6]}};

assign trunc_ln708_139_fu_780_p4 = {{mul_ln1118_64_fu_1110_p2[19:7]}};

assign trunc_ln708_140_fu_814_p4 = {{sub_ln1118_73_fu_808_p2[16:7]}};

assign trunc_ln708_141_fu_607_p4 = {{mul_ln1118_67_fu_1096_p2[19:7]}};

assign trunc_ln708_142_fu_861_p4 = {{mul_ln1118_68_fu_855_p2[18:7]}};

assign trunc_ln708_143_fu_903_p4 = {{sub_ln1118_74_fu_897_p2[19:7]}};

assign trunc_ln708_64_fu_193_p4 = {{mul_ln1118_52_fu_1012_p2[20:7]}};

assign trunc_ln708_65_fu_210_p4 = {{mul_ln1118_53_fu_1019_p2[20:7]}};

assign trunc_ln708_69_fu_240_p4 = {{mul_ln1118_57_fu_1033_p2[20:7]}};

assign trunc_ln708_71_fu_301_p4 = {{mul_ln1118_58_fu_1040_p2[20:7]}};

assign trunc_ln708_72_fu_310_p4 = {{mul_ln1118_59_fu_1047_p2[20:7]}};

assign trunc_ln708_77_fu_364_p4 = {{mul_ln1118_61_fu_1061_p2[20:7]}};

assign trunc_ln708_79_fu_416_p4 = {{mul_ln1118_63_fu_1075_p2[20:7]}};

assign trunc_ln708_87_fu_549_p4 = {{mul_ln1118_65_fu_1082_p2[20:7]}};

assign trunc_ln708_88_fu_588_p4 = {{add_ln1118_13_fu_582_p2[20:7]}};

assign trunc_ln708_89_fu_598_p4 = {{mul_ln1118_66_fu_1089_p2[20:7]}};

assign trunc_ln_fu_172_p4 = {{mul_ln1118_fu_1005_p2[19:7]}};

endmodule //dense_resource_0_0_1
