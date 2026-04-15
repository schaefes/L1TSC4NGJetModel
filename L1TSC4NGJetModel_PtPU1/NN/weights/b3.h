//Numpy array shape [10]
//Min -0.125000000000
//Max 0.421875000000
//Number of zeros 0

#ifndef B3_H_
#define B3_H_

namespace hls4ml_L1TSC4NGJetModel_PtPU1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias3_t b3[10];
#else
bias3_t b3[10] = {0.140625, 0.203125, 0.250000, 0.250000, 0.421875, 0.015625, -0.125000, 0.078125, 0.046875, 0.390625};

#endif

#endif
}
