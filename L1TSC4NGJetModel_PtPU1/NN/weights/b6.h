//Numpy array shape [10]
//Min -1.781250000000
//Max 1.203125000000
//Number of zeros 0

#ifndef B6_H_
#define B6_H_

namespace hls4ml_L1TSC4NGJetModel_PtPU1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias6_t b6[10];
#else
bias6_t b6[10] = {0.953125, 0.046875, -0.281250, 0.171875, -0.078125, 1.203125, -1.781250, 0.187500, -0.671875, -0.796875};

#endif

#endif
}
