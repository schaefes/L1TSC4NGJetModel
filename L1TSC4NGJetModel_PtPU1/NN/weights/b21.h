//Numpy array shape [16]
//Min -1.390625000000
//Max 1.140625000000
//Number of zeros 0

#ifndef B21_H_
#define B21_H_

namespace hls4ml_L1TSC4NGJetModel_PtPU1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias21_t b21[16];
#else
bias21_t b21[16] = {0.015625, -0.703125, -0.312500, -0.500000, -1.390625, 0.796875, 0.765625, -1.375000, -0.140625, 0.609375, 1.140625, -0.765625, 0.703125, 0.546875, 0.515625, 0.937500};

#endif

#endif
}
