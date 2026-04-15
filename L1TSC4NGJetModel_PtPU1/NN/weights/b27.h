//Numpy array shape [16]
//Min -2.000000000000
//Max 3.609375000000
//Number of zeros 0

#ifndef B27_H_
#define B27_H_

namespace hls4ml_L1TSC4NGJetModel_PtPU1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias27_t b27[16];
#else
bias27_t b27[16] = {-2.000000, -0.640625, -1.578125, -0.734375, 0.546875, 1.453125, 1.875000, 2.437500, 1.687500, 2.843750, -1.156250, 2.781250, 3.062500, 2.734375, 0.500000, 3.609375};

#endif

#endif
}
