//Numpy array shape [1, 10, 1]
//Min -0.515625000000
//Max 0.421875000000
//Number of zeros 1

#ifndef W9_H_
#define W9_H_

namespace hls4ml_L1TSC4NGJetModel_PtPU1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
weight9_t w9[10];
#else
weight9_t w9[10] = {0.000000, 0.156250, 0.343750, 0.281250, -0.125000, 0.218750, -0.453125, -0.515625, 0.421875, -0.359375};

#endif

#endif
}
