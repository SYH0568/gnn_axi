#include "hls_stream.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <vector>
#include <fstream>
template<class data_T, size_t SIZE>
void fill_zero(data_T data[SIZE]) {
    std::fill_n(data, SIZE, 0.);
}
template<class src_T, class dst_T, size_t OFFSET, size_t SIZE>
void copy_data(std::vector<src_T> src, dst_T dst[SIZE]) {
    typename std::vector<src_T>::const_iterator in_begin = src.cbegin() + OFFSET;
    typename std::vector<src_T>::const_iterator in_end = in_begin + SIZE;
    std::copy(in_begin, in_end, dst);
}