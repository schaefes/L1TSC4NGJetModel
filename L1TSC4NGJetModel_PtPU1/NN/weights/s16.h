//Numpy array shape [2]
//Min 0.004147243220
//Max 0.488976329565
//Number of zeros 0

#ifndef S16_H_
#define S16_H_

namespace hls4ml_L1TSC4NGJetModel_PtPU1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
norm_jet_features_scale_t s16[2];
#else
norm_jet_features_scale_t s16[2] = {0.4889763295650482, 0.0041472432203591};

#endif

#endif
}
