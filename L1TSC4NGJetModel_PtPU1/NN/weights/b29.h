//Numpy array shape [16]
//Min -1.140625000000
//Max 1.046875000000
//Number of zeros 0

#ifndef B29_H_
#define B29_H_

namespace hls4ml_L1TSC4NGJetModel_PtPU1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias29_t b29[16];
#else
bias29_t b29[16] = {-0.125000, -0.265625, 0.421875, -0.234375, -0.062500, 0.609375, 0.109375, 0.640625, -1.140625, 0.281250, -0.062500, 0.656250, -0.062500, 1.046875, 0.593750, -0.015625};

#endif

#endif
}
