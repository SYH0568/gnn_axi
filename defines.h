#include "ap_int.h"
#include "ap_fixed.h"
typedef ap_fixed<14,7> input_t;
typedef ap_fixed<14,7> layer2_t;
typedef ap_fixed<14,7> input3_t;
typedef ap_uint<14> input4_t;
typedef ap_uint<14> layer5_t;
typedef ap_uint<14> layer6_t;
typedef ap_fixed<14,7> layer7_t;
typedef ap_fixed<14,7> layer8_t;
typedef ap_fixed<14,7> layer9_t;
typedef ap_fixed<14,7> layer10_t;
typedef ap_fixed<14,7> layer11_t;
typedef ap_fixed<14,7> model_default_t;

#define N_EDGE 1560
#define LAYER10_OUT_DIM 3
#define TWO 2
#define N_NODE 660
#define NODE_DIM 3
#define LAYER9_OUT_DIM 4
#define EDGE_DIM 4
#define LAYER11_OUT_DIM 1
#define LAYER7_OUT_DIM 4
#define N_NODE_LAYER 60
#define N_EDGE_LAYER 120
#define PAR_FACTOR 1
#define N_NODE_GROUP 11
#define N_EDGE_GROUP 13
