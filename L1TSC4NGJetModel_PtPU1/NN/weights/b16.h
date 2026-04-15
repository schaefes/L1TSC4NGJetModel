//Numpy array shape [2]
//Min -2.281609773636
//Max -0.956365704536
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

namespace hls4ml_L1TSC4NGJetModel_PtPU1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
norm_jet_features_bias_t b16[2];
#else
norm_jet_features_bias_t b16[2] = {-2.2816097736358643, -0.9563657045364380};

#endif

#endif
}
