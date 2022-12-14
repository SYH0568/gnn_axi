//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <iostream>
#include "hls_stream.h"
#include "example.h"
#include "defines.h"
//hls-fpga-machine-learning insert numbers

//hls-fpga-machine-learning insert layer-precision

#include "weights/R1_w0.h"
#include "weights/R1_w1.h"
#include "weights/R1_w2.h"
#include "weights/R1_w3.h"
#include "weights/R1_b0.h"
#include "weights/R1_b1.h"
#include "weights/R1_b2.h"
#include "weights/R1_b3.h"
#include "weights/O_w0.h"
#include "weights/O_w1.h"
#include "weights/O_w2.h"
#include "weights/O_w3.h"
#include "weights/O_b0.h"
#include "weights/O_b1.h"
#include "weights/O_b2.h"
#include "weights/O_b3.h"
#include "weights/R2_w0.h"
#include "weights/R2_w1.h"
#include "weights/R2_w2.h"
#include "weights/R2_w3.h"
#include "weights/R2_b0.h"
#include "weights/R2_b1.h"
#include "weights/R2_b2.h"
#include "weights/R2_b3.h"

//#include "parameters.h"
void example(
    hls::stream<input_t> node_attr_mat_s[N_NODE_GROUP],hls::stream<input3_t> edge_attr_mat_s[N_EDGE_GROUP*EDGE_DIM], hls::stream<input4_t> edge_index_mat_s[N_EDGE_GROUP*TWO],
    hls::stream<layer11_t> layer11_out_s[N_EDGE_GROUP*LAYER11_OUT_DIM],
    unsigned short &const_size_in_1, unsigned short &const_size_in_2, unsigned short &const_size_in_3,
    unsigned short &const_size_out_1
){

    #pragma HLS DATAFLOW //doesn't recognize macros
    int n_edge = N_EDGE;
    int n_node = N_NODE;
    int two = TWO*PAR_FACTOR;
    int node_dim = NODE_DIM*PAR_FACTOR;
    int layer7_out_dim = LAYER7_OUT_DIM*PAR_FACTOR;
    int edge_dim = EDGE_DIM*PAR_FACTOR;
    int layer11_out_dim = LAYER11_OUT_DIM*PAR_FACTOR;
    int layer10_out_dim = LAYER10_OUT_DIM*PAR_FACTOR;
    int layer9_out_dim = LAYER9_OUT_DIM*PAR_FACTOR;
    int par_factor = PAR_FACTOR;
    layer11_t layer11_out[N_EDGE_GROUP][N_EDGE_LAYER*LAYER11_OUT_DIM];
    input_t node_attr[N_NODE_GROUP][N_NODE_LAYER*NODE_DIM];
    input3_t edge_attr[N_EDGE_GROUP][N_EDGE_LAYER*EDGE_DIM];
    input4_t edge_index[N_EDGE_GROUP][N_EDGE_LAYER*TWO];
    //hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_PARTITION variable=node_attr complete dim=1
    #pragma HLS ARRAY_PARTITION variable=node_attr cyclic factor=node_dim dim=2
    #pragma HLS ARRAY_PARTITION variable=edge_attr complete dim=1
    #pragma HLS ARRAY_PARTITION variable=edge_attr cyclic factor=edge_dim dim=2
    #pragma HLS ARRAY_PARTITION variable=edge_index complete dim=1    
    #pragma HLS ARRAY_PARTITION variable=edge_index cyclic factor=two dim=2
        
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=1    
    #pragma HLS ARRAY_PARTITION variable=layer11_out cyclic factor=layer11_out_dim dim=2
    #pragma HLS INTERFACE axis port=node_attr_s
    #pragma HLS INTERFACE axis port=edge_attr_s
    #pragma HLS INTERFACE axis port=edge_index_s
    #pragma HLS INTERFACE axis port=layer11_out_s
    
    //#pragma HLS DATAFLOW 

    const_size_in_1 = N_NODE*NODE_DIM;
    const_size_in_2 = N_EDGE*EDGE_DIM;
    const_size_in_3 = N_EDGE*TWO;
    const_size_out_1 = N_EDGE*LAYER11_OUT_DIM;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        load_weights_from_txt<model_default_t, 80>(R1_w0, "R1_w0.txt");
        load_weights_from_txt<model_default_t, 64>(R1_w1, "R1_w1.txt");
        load_weights_from_txt<model_default_t, 32>(R1_w2, "R1_w2.txt");
        load_weights_from_txt<model_default_t, 32>(R1_w3, "R1_w3.txt");
        load_weights_from_txt<model_default_t, 8>(R1_b0, "R1_b0.txt");
        load_weights_from_txt<model_default_t, 8>(R1_b1, "R1_b1.txt");
        load_weights_from_txt<model_default_t, 4>(R1_b2, "R1_b2.txt");
        load_weights_from_txt<model_default_t, 4>(R1_b3, "R1_b3.txt");
        load_weights_from_txt<model_default_t, 56>(O_w0, "O_w0.txt");
        load_weights_from_txt<model_default_t, 64>(O_w1, "O_w1.txt");
        load_weights_from_txt<model_default_t, 24>(O_w2, "O_w2.txt");
        load_weights_from_txt<model_default_t, 24>(O_w3, "O_w3.txt");
        load_weights_from_txt<model_default_t, 8>(O_b0, "O_b0.txt");
        load_weights_from_txt<model_default_t, 8>(O_b1, "O_b1.txt");
        load_weights_from_txt<model_default_t, 3>(O_b2, "O_b2.txt");
        load_weights_from_txt<model_default_t, 3>(O_b3, "O_b3.txt");
        load_weights_from_txt<model_default_t, 80>(R2_w0, "R2_w0.txt");
        load_weights_from_txt<model_default_t, 64>(R2_w1, "R2_w1.txt");
        load_weights_from_txt<model_default_t, 8>(R2_w2, "R2_w2.txt");
        load_weights_from_txt<model_default_t, 8>(R2_w3, "R2_w3.txt");
        load_weights_from_txt<model_default_t, 8>(R2_b0, "R2_b0.txt");
        load_weights_from_txt<model_default_t, 8>(R2_b1, "R2_b1.txt");
        load_weights_from_txt<model_default_t, 1>(R2_b2, "R2_b2.txt");
        load_weights_from_txt<model_default_t, 1>(R2_b3, "R2_b3.txt");
        loaded_weights = true;
    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************
        for (unsigned i = 0; i < N_NODE_LAYER; i++) {
            #pragma HLS PIPELINE
    for (unsigned j = 0; j < N_NODE_GROUP; j++) {
        #pragma HLS UNROLL
      for (unsigned k = 0; k < NODE_DIM; k++) {
        #pragma HLS UNROLL

            node_attr[j][i*NODE_DIM+k]=node_attr_mat_s[j*NODE_DIM+k].read();
        }
      }
    }
        for (unsigned i = 0; i < N_EDGE_LAYER; i++) {
            #pragma HLS PIPELINE
    for (unsigned j = 0; j < N_EDGE_GROUP; j++) {
        #pragma HLS UNROLL
      for (unsigned k = 0; k < EDGE_DIM; k++) {
        #pragma HLS UNROLL

            edge_attr[j][i*EDGE_DIM+k]=edge_attr_mat_s[j*EDGE_DIM+k].read();
        }
      }
    }
    for (unsigned i = 0; i < N_EDGE_LAYER; i++) {
            #pragma HLS PIPELINE
    for (unsigned j = 0; j < N_EDGE_GROUP; j++) {
        #pragma HLS UNROLL
      for (unsigned k = 0; k < TWO; k++) {
        #pragma HLS UNROLL
            edge_index[j][i*TWO+k]=edge_index_mat_s[j*TWO+k].read();
        }
      }
    }   
    input_t node_attr_cpy1[N_NODE_GROUP][N_NODE_LAYER*NODE_DIM];
    #pragma HLS ARRAY_PARTITION variable=node_attr_cpy1 complete dim=1
    #pragma HLS ARRAY_PARTITION variable=node_attr_cpy1 cyclic factor=node_dim dim=2
    input_t node_attr_cpy2[N_NODE_GROUP][N_NODE_LAYER*NODE_DIM];
    #pragma HLS ARRAY_PARTITION variable=node_attr_cpy2 complete dim=1
    #pragma HLS ARRAY_PARTITION variable=node_attr_cpy2 cyclic factor=node_dim dim=2
    clone_vector<input_t,PAR_FACTOR, N_NODE_GROUP,N_NODE_LAYER,NODE_DIM>(node_attr, node_attr_cpy1, node_attr_cpy2); // node_attr_clone_0

    input4_t edge_index_cpy1[N_EDGE_GROUP][N_EDGE_LAYER*TWO];
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy1 complete dim=1    
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy1 cyclic factor=two dim=2
    input4_t edge_index_cpy2[N_EDGE_GROUP][N_EDGE_LAYER*TWO];
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy2 complete dim=1    
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy2 cyclic factor=two dim=2
    clone_vector<input4_t,PAR_FACTOR, N_EDGE_GROUP,N_EDGE_LAYER,TWO>(edge_index, edge_index_cpy1, edge_index_cpy2); // edge_index_clone_0  

    input4_t edge_index_cpy3[N_EDGE_GROUP][N_EDGE_LAYER*TWO];
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy3 complete dim=1    
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy3 cyclic factor=two*2 dim=2
    input4_t edge_index_cpy4[N_EDGE_GROUP][N_EDGE_LAYER*TWO];
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy4 complete dim=1    
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy4 cyclic factor=two dim=2
    clone_vector<input4_t,PAR_FACTOR, N_EDGE_GROUP,N_EDGE_LAYER,TWO>(edge_index_cpy1, edge_index_cpy3, edge_index_cpy4); // edge_index_clone_0  
    
    layer7_t layer7_out[N_EDGE_GROUP][N_EDGE_LAYER*LAYER7_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer7_out  complete dim=1
    #pragma HLS ARRAY_PARTITION variable=layer7_out cyclic factor=layer7_out_dim dim=2

    layer9_t layer9_out[N_NODE_GROUP][N_NODE_LAYER*LAYER9_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer9_out complete dim=1    
    #pragma HLS ARRAY_PARTITION variable=layer9_out cyclic factor=layer7_out_dim dim=2


    layer10_t layer10_out[N_NODE_GROUP][N_NODE_LAYER*LAYER10_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer10_out complete dim=1    
    #pragma HLS ARRAY_PARTITION variable=layer10_out cyclic factor=layer10_out_dim dim=2

   
    edgeblock<input_t,input3_t, input4_t, layer7_t,model_default_t,PAR_FACTOR,N_NODE_GROUP,N_EDGE_GROUP,N_NODE_LAYER,N_EDGE_LAYER,NODE_DIM,EDGE_DIM,LAYER7_OUT_DIM,false,true>(node_attr_cpy1, edge_attr, edge_index_cpy2, layer7_out, R1_w0, R1_b0, R1_w1, R1_b1, R1_w2, R1_b2, R1_w3, R1_b3); // R1

    layer8_t layer7_out_cpy1[N_EDGE_GROUP][N_EDGE_LAYER*LAYER7_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer7_out_cpy1  complete dim=1
    #pragma HLS ARRAY_PARTITION variable=layer7_out_cpy1 cyclic factor=layer7_out_dim*2 dim=2    

    layer8_t layer7_out_cpy2[N_EDGE_GROUP][N_EDGE_LAYER*LAYER7_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer7_out_cpy2  complete dim=1
    #pragma HLS ARRAY_PARTITION variable=layer7_out_cpy2 cyclic factor=layer7_out_dim dim=2  
    clone_vector<layer7_t,PAR_FACTOR, N_EDGE_GROUP,N_EDGE_LAYER,LAYER7_OUT_DIM>(layer7_out, layer7_out_cpy1, layer7_out_cpy2);
    
    edge_aggregate<layer7_t, input4_t, layer9_t,PAR_FACTOR,N_NODE_GROUP,N_EDGE_GROUP,N_NODE_LAYER,N_EDGE_LAYER,NODE_DIM,EDGE_DIM>(layer7_out_cpy1, edge_index_cpy3, layer9_out);

    nodeblock<input_t,layer9_t, layer10_t,model_default_t,PAR_FACTOR,N_NODE_GROUP,N_EDGE_GROUP,N_NODE_LAYER,N_EDGE_LAYER,NODE_DIM,EDGE_DIM,LAYER10_OUT_DIM,false,true>(node_attr_cpy2, layer9_out, layer10_out, O_w0, O_b0, O_w1, O_b1, O_w2, O_b2, O_w3, O_b3);

    
    edgeblock< layer10_t,layer7_t,input4_t, layer11_t,model_default_t,PAR_FACTOR,N_NODE_GROUP,N_EDGE_GROUP,N_NODE_LAYER,N_EDGE_LAYER,LAYER10_OUT_DIM,LAYER7_OUT_DIM,LAYER11_OUT_DIM,true,true>(layer10_out, layer7_out_cpy2, edge_index_cpy4, layer11_out, R2_w0, R2_b0, R2_w1, R2_b1, R2_w2, R2_b2, R2_w3, R2_b3); // R1
        for (unsigned i = 0; i < N_EDGE_LAYER; i++) {
            #pragma HLS PIPELINE    
    for (unsigned j = 0; j < N_EDGE_GROUP; j++) {
        #pragma HLS UNROLL
      for (unsigned k = 0; k < LAYER11_OUT_DIM; k++) {
        #pragma HLS UNROLL
            layer11_out_s[j*LAYER11_OUT_DIM+k].write(layer11_out[j][i*LAYER11_OUT_DIM+k]);
        }
      }
    }       
    // for(int i=0;i<N_EDGE_GROUP;i++){
    //     for(int j=0;j<N_EDGE_LAYER*LAYER7_OUT_DIM;j++){
    //         std::cout<<layer7_out[i][j]<<" ";
    // }}

    /*
    layer2_t node_attr_cpy1[N_NODE*NODE_DIM];
    #pragma HLS ARRAY_PARTITION variable=node_attr_cpy1 cyclic factor=node_dim dim=1
    layer2_t node_attr_cpy2[N_NODE*NODE_DIM];
    #pragma HLS ARRAY_PARTITION variable=node_attr_cpy2 cyclic factor=node_dim dim=1
    clone_vector<input_t, N_NODE,NODE_DIM,PAR_FACTOR>(node_attr, node_attr_cpy1, node_attr_cpy2); // node_attr_clone_0

    layer5_t edge_index_cpy1[N_EDGE*TWO];
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy1 cyclic factor=two dim=1
    layer5_t edge_index_cpy2[N_EDGE*TWO];
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy2 cyclic factor=two dim=1
    clone_vector<input4_t, N_EDGE,TWO,PAR_FACTOR>(edge_index, edge_index_cpy1, edge_index_cpy2); // edge_index_clone_0

    layer6_t edge_index_cpy3[N_EDGE*TWO];
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy3 cyclic factor=two dim=1
    layer6_t edge_index_cpy4[N_EDGE*TWO];
    #pragma HLS ARRAY_PARTITION variable=edge_index_cpy4 cyclic factor=two dim=1
    clone_vector<layer5_t, N_EDGE,TWO,PAR_FACTOR>(edge_index_cpy1, edge_index_cpy3, edge_index_cpy4); // edge_index_clone_1
  
    
    layer7_t layer7_out[N_EDGE*LAYER7_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer7_out cyclic factor=layer7_out_dim dim=1
    layer9_t layer9_out[N_NODE*LAYER9_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer9_out cyclic factor=layer9_out_dim dim=1
    
    layer10_t layer10_out[N_NODE*LAYER10_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer10_out cyclic factor=layer10_out_dim dim=1

    //layer11_t layer11_out_tmp[N_EDGE*LAYER10_OUT_DIM];
    //#pragma HLS ARRAY_PARTITION variable=layer10_out cyclic factor=layer11_out_dim dim=2    
    edgeblock<input3_t, input4_t, layer7_t,N_NODE,N_EDGE,NODE_DIM,EDGE_DIM,LAYER7_OUT_DIM,PAR_FACTOR,0,0,false>(node_attr_cpy1,node_attr, edge_attr, edge_index_cpy2, layer7_out, R1_w0, R1_b0, R1_w1, R1_b1, R1_w2, R1_b2, R1_w3, R1_b3); // R1
    layer8_t layer7_out_cpy1[N_EDGE*LAYER7_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer7_out_cpy1 cyclic factor=layer7_out_dim dim=1
    layer8_t layer7_out_cpy2[N_EDGE*LAYER7_OUT_DIM];
    #pragma HLS ARRAY_PARTITION variable=layer7_out_cpy2 cyclic factor=layer7_out_dim dim=1
    clone_vector<layer7_t, N_EDGE,LAYER7_OUT_DIM,PAR_FACTOR>(layer7_out, layer7_out_cpy1, layer7_out_cpy2);
    edge_aggregate<input3_t, input4_t, layer9_t,N_NODE,N_EDGE,NODE_DIM,EDGE_DIM,PAR_FACTOR>(layer7_out_cpy1, edge_index_cpy3, layer9_out);


    nodeblock<input_t, layer10_t, N_NODE,NODE_DIM,EDGE_DIM,LAYER10_OUT_DIM,PAR_FACTOR>(node_attr_cpy2, layer9_out, layer10_out, O_w0, O_b0, O_w1, O_b1, O_w2, O_b2, O_w3, O_b3);

    
    edgeblock< layer7_t,input4_t, layer11_t,N_NODE,N_EDGE,LAYER10_OUT_DIM,LAYER7_OUT_DIM,LAYER11_OUT_DIM,PAR_FACTOR,0,0,true>(layer10_out,layer10_out, layer7_out_cpy2, edge_index_cpy4, layer11_out, R2_w0, R2_b0, R2_w1, R2_b1, R2_w2, R2_b2, R2_w3, R2_b3); // R1
 */

}
