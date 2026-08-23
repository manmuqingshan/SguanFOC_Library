#ifndef __SGUAN_TRANSFER_H
#define __SGUAN_TRANSFER_H

#include "Sguan_Config.h"

// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__TRANSFER1_IN_STRUCT;

typedef struct{
    float Output;
}__TRANSFER1_OUT_STRUCT;

typedef struct{
    float T;

    float num0;
    float num1;

    float den0;
    float den1;

    uint8_t ReCalulate_Flag;
}__TRANSFER1_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__TRANSFER1_DATA_STRUCT;

typedef struct{
    __TRANSFER1_IN_STRUCT In;
    __TRANSFER1_OUT_STRUCT Out;
    __TRANSFER1_Params_STRUCT Params;
    __TRANSFER1_DATA_STRUCT Data;
}__TRANSFER1_STRUCT;

void Transfer_TRANSFER1_Loop(__TRANSFER1_STRUCT *transfer);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__TRANSFER2_IN_STRUCT;

typedef struct{
    float Output;
}__TRANSFER2_OUT_STRUCT;

typedef struct{
    float T;

    float num0;
    float num1;
    float num2;

    float den0;
    float den1;
    float den2;

    uint8_t ReCalulate_Flag;
}__TRANSFER2_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__TRANSFER2_DATA_STRUCT;

typedef struct{
    __TRANSFER2_IN_STRUCT In;
    __TRANSFER2_OUT_STRUCT Out;
    __TRANSFER2_Params_STRUCT Params;
    __TRANSFER2_DATA_STRUCT Data;
}__TRANSFER2_STRUCT;

void Transfer_TRANSFER2_Loop(__TRANSFER2_STRUCT *transfer);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__TRANSFER3_IN_STRUCT;

typedef struct{
    float Output;
}__TRANSFER3_OUT_STRUCT;

typedef struct{
    float T;

    float num0;
    float num1;
    float num2;
    float num3;

    float den0;
    float den1;
    float den2;
    float den3;

    uint8_t ReCalulate_Flag;
}__TRANSFER3_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__TRANSFER3_DATA_STRUCT;

typedef struct{
    __TRANSFER3_IN_STRUCT In;
    __TRANSFER3_OUT_STRUCT Out;
    __TRANSFER3_Params_STRUCT Params;
    __TRANSFER3_DATA_STRUCT Data;
}__TRANSFER3_STRUCT;

void Transfer_TRANSFER3_Loop(__TRANSFER3_STRUCT *transfer);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__TRANSFER4_IN_STRUCT;

typedef struct{
    float Output;
}__TRANSFER4_OUT_STRUCT;

typedef struct{
    float T;

    float num0;
    float num1;
    float num2;
    float num3;
    float num4;

    float den0;
    float den1;
    float den2;
    float den3;
    float den4;

    uint8_t ReCalulate_Flag;
}__TRANSFER4_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__TRANSFER4_DATA_STRUCT;

typedef struct{
    __TRANSFER4_IN_STRUCT In;
    __TRANSFER4_OUT_STRUCT Out;
    __TRANSFER4_Params_STRUCT Params;
    __TRANSFER4_DATA_STRUCT Data;
}__TRANSFER4_STRUCT;

void Transfer_TRANSFER4_Loop(__TRANSFER4_STRUCT *transfer);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__TRANSFER5_IN_STRUCT;

typedef struct{
    float Output;
}__TRANSFER5_OUT_STRUCT;

typedef struct{
    float T;

    float num0;
    float num1;
    float num2;
    float num3;
    float num4;
    float num5;

    float den0;
    float den1;
    float den2;
    float den3;
    float den4;
    float den5;

    uint8_t ReCalulate_Flag;
}__TRANSFER5_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__TRANSFER5_DATA_STRUCT;

typedef struct{
    __TRANSFER5_IN_STRUCT In;
    __TRANSFER5_OUT_STRUCT Out;
    __TRANSFER5_Params_STRUCT Params;
    __TRANSFER5_DATA_STRUCT Data;
}__TRANSFER5_STRUCT;

void Transfer_TRANSFER5_Loop(__TRANSFER5_STRUCT *transfer);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__INTEGRATOR_IN_STRUCT;

typedef struct{
    float Output;
}__INTEGRATOR_OUT_STRUCT;

typedef struct{
    float T;

    float num0;
    float num1;
    float num2;
    float num3;
    float num4;
    float num5;

    float den0;
    float den1;
    float den2;
    float den3;
    float den4;
    float den5;

    uint8_t ReCalulate_Flag;
}__INTEGRATOR_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__INTEGRATOR_DATA_STRUCT;

typedef struct{
    __INTEGRATOR_IN_STRUCT In;
    __INTEGRATOR_OUT_STRUCT Out;
    __INTEGRATOR_Params_STRUCT Params;
    __INTEGRATOR_DATA_STRUCT Data;
}__INTEGRATOR_STRUCT;

void Transfer_INTEGRATOR_Loop(__INTEGRATOR_STRUCT *integrator);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__DERIVATIVE_IN_STRUCT;

typedef struct{
    float Output;
}__DERIVATIVE_OUT_STRUCT;

typedef struct{
    float T;

    float num0;
    float num1;
    float num2;
    float num3;
    float num4;
    float num5;

    float den0;
    float den1;
    float den2;
    float den3;
    float den4;
    float den5;

    uint8_t ReCalulate_Flag;
}__DERIVATIVE_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__DERIVATIVE_DATA_STRUCT;

typedef struct{
    __DERIVATIVE_IN_STRUCT In;
    __DERIVATIVE_OUT_STRUCT Out;
    __DERIVATIVE_Params_STRUCT Params;
    __DERIVATIVE_DATA_STRUCT Data;
}__DERIVATIVE_STRUCT;

void Transfer_DERIVATIVE_Loop(__DERIVATIVE_STRUCT *derivative);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Ref;
    float Fbk;
}__LADRC1_IN_STRUCT;

typedef struct{
    float Output;
}__LADRC1_OUT_STRUCT;

typedef struct{
    float T;
    float Wc;

    float Kp;
    float Ki;
    float Kd;

    float OutMax;
    float OutMin;
    float IntMax;
    float IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__LADRC1_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__LADRC1_DATA_STRUCT;

typedef struct{
    __LADRC1_IN_STRUCT In;
    __LADRC1_OUT_STRUCT Out;
    __LADRC1_Params_STRUCT Params;
    __LADRC1_DATA_STRUCT Data;
}__LADRC1_STRUCT;

void Transfer_LADRC1_Loop(__LADRC1_STRUCT *ladrc);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Ref;
    float Fbk;
}__LADRC2_IN_STRUCT;

typedef struct{
    float Output;
}__LADRC2_OUT_STRUCT;

typedef struct{
    float T;
    float Wc;

    float Kp;
    float Ki;
    float Kd;

    float OutMax;
    float OutMin;
    float IntMax;
    float IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__LADRC2_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__LADRC2_DATA_STRUCT;

typedef struct{
    __LADRC2_IN_STRUCT In;
    __LADRC2_OUT_STRUCT Out;
    __LADRC2_Params_STRUCT Params;
    __LADRC2_DATA_STRUCT Data;
}__LADRC2_STRUCT;

void Transfer_LADRC2_Loop(__LADRC2_STRUCT *ladrc);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Ref;
    float Fbk;
}__SMC_IN_STRUCT;

typedef struct{
    float Output;
}__SMC_OUT_STRUCT;

typedef struct{
    float T;
    float Wc;

    float Kp;
    float Ki;
    float Kd;

    float OutMax;
    float OutMin;
    float IntMax;
    float IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__SMC_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__SMC_DATA_STRUCT;

typedef struct{
    __SMC_IN_STRUCT In;
    __SMC_OUT_STRUCT Out;
    __SMC_Params_STRUCT Params;
    __SMC_DATA_STRUCT Data;
}__SMC_STRUCT;

void Transfer_SMC_Loop(__SMC_STRUCT *smc);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Ref;
    float Fbk;
}__DPCC_IN_STRUCT;

typedef struct{
    float Output;
}__DPCC_OUT_STRUCT;

typedef struct{
    float T;
    float Wc;

    float Kp;
    float Ki;
    float Kd;

    float OutMax;
    float OutMin;
    float IntMax;
    float IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__DPCC_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__DPCC_DATA_STRUCT;

typedef struct{
    __DPCC_IN_STRUCT In;
    __DPCC_OUT_STRUCT Out;
    __DPCC_Params_STRUCT Params;
    __DPCC_DATA_STRUCT Data;
}__DPCC_STRUCT;

void Transfer_DPCC_Loop(__DPCC_STRUCT *dpcc);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Ref;
    float Fbk;
}__PIR_IN_STRUCT;

typedef struct{
    float Output;
}__PIR_OUT_STRUCT;

typedef struct{
    float T;
    float Wc;

    float Kp;
    float Ki;
    float Kd;

    float OutMax;
    float OutMin;
    float IntMax;
    float IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__PIR_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__PIR_DATA_STRUCT;

typedef struct{
    __PIR_IN_STRUCT In;
    __PIR_OUT_STRUCT Out;
    __PIR_Params_STRUCT Params;
    __PIR_DATA_STRUCT Data;
}__PIR_STRUCT;

void Transfer_PIR_Loop(__PIR_STRUCT *pir);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Ref;
    float Fbk;
}__PID_IN_STRUCT;

typedef struct{
    float Output;
}__PID_OUT_STRUCT;

typedef struct{
    float T;
    float Wc;

    float Kp;
    float Ki;
    float Kd;

    float OutMax;
    float OutMin;
    float IntMax;
    float IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__PID_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__PID_DATA_STRUCT;

typedef struct{
    __PID_IN_STRUCT In;
    __PID_OUT_STRUCT Out;
    __PID_Params_STRUCT Params;
    __PID_DATA_STRUCT Data;
}__PID_STRUCT;

void Transfer_PID_Loop(__PID_STRUCT *pid);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Error;
}__PLL_IN_STRUCT;

typedef struct{
    float We;
    float Re;
}__PLL_OUT_STRUCT;

typedef struct{
    float T;
    float Wc;

    float Kp;
    float Ki;

    uint8_t ReCalulate_Flag;
}__PLL_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__PLL_DATA_STRUCT;

typedef struct{
    __PLL_IN_STRUCT In;
    __PLL_OUT_STRUCT Out;
    __PLL_Params_STRUCT Params;
    __PLL_DATA_STRUCT Data;
}__PLL_STRUCT;

void Transfer_PLL_Loop(__PLL_STRUCT *pll);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__LPF1_IN_STRUCT;

typedef struct{
    float Output;
}__LPF1_OUT_STRUCT;

typedef struct{
    float T;
    float Wc;

    uint8_t ReCalulate_Flag;
}__LPF1_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__LPF1_DATA_STRUCT;

typedef struct{
    __LPF1_IN_STRUCT In;
    __LPF1_OUT_STRUCT Out;
    __LPF1_Params_STRUCT Params;
    __LPF1_DATA_STRUCT Data;
}__LPF1_STRUCT;

void Transfer_LPF1_Loop(__LPF1_STRUCT *lpf);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__LPF2_IN_STRUCT;

typedef struct{
    float Output;
}__LPF2_OUT_STRUCT;

typedef struct{
    float T;
    float Wc;

    uint8_t ReCalulate_Flag;
}__LPF2_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__LPF2_DATA_STRUCT;

typedef struct{
    __LPF2_IN_STRUCT In;
    __LPF2_OUT_STRUCT Out;
    __LPF2_Params_STRUCT Params;
    __LPF2_DATA_STRUCT Data;
}__LPF2_STRUCT;

void Transfer_LPF2_Loop(__LPF2_STRUCT *lpf);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__HPF1_IN_STRUCT;

typedef struct{
    float Output;
}__HPF1_OUT_STRUCT;

typedef struct{
    float T;
    float Wc;

    uint8_t ReCalulate_Flag;
}__HPF1_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__HPF1_DATA_STRUCT;

typedef struct{
    __HPF1_IN_STRUCT In;
    __HPF1_OUT_STRUCT Out;
    __HPF1_Params_STRUCT Params;
    __HPF1_DATA_STRUCT Data;
}__HPF1_STRUCT;

void Transfer_HPF1_Loop(__HPF1_STRUCT *hpf);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__HPF2_IN_STRUCT;

typedef struct{
    float Output;
}__HPF2_OUT_STRUCT;

typedef struct{
    float T;
    float Wc;

    uint8_t ReCalulate_Flag;
}__HPF2_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__HPF2_DATA_STRUCT;

typedef struct{
    __HPF2_IN_STRUCT In;
    __HPF2_OUT_STRUCT Out;
    __HPF2_Params_STRUCT Params;
    __HPF2_DATA_STRUCT Data;
}__HPF2_STRUCT;

void Transfer_HPF2_Loop(__HPF2_STRUCT *hpf);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__BPF1_IN_STRUCT;

typedef struct{
    float Output;
}__BPF1_OUT_STRUCT;

typedef struct{
    float T;
    float Wc_Low;
    float Wc_High;

    uint8_t ReCalulate_Flag;
}__BPF1_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__BPF1_DATA_STRUCT;

typedef struct{
    __BPF1_IN_STRUCT In;
    __BPF1_OUT_STRUCT Out;
    __BPF1_Params_STRUCT Params;
    __BPF1_DATA_STRUCT Data;
}__BPF1_STRUCT;

void Transfer_BPF1_Loop(__BPF1_STRUCT *bpf);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__BPF2_IN_STRUCT;

typedef struct{
    float Output;
}__BPF2_OUT_STRUCT;

typedef struct{
    float T;
    float Wo;
    float Zeta;

    uint8_t ReCalulate_Flag;
}__BPF2_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__BPF2_DATA_STRUCT;

typedef struct{
    __BPF2_IN_STRUCT In;
    __BPF2_OUT_STRUCT Out;
    __BPF2_Params_STRUCT Params;
    __BPF2_DATA_STRUCT Data;
}__BPF2_STRUCT;

void Transfer_BPF2_Loop(__BPF2_STRUCT *bpf);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__NF_IN_STRUCT;

typedef struct{
    float Output;
}__NF_OUT_STRUCT;

typedef struct{
    float T;
    float Wo;
    float Zeta;

    uint8_t ReCalulate_Flag;
}__NF_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__NF_DATA_STRUCT;

typedef struct{
    __NF_IN_STRUCT In;
    __NF_OUT_STRUCT Out;
    __NF_Params_STRUCT Params;
    __NF_DATA_STRUCT Data;
}__NF_STRUCT;

void Transfer_NF_Loop(__NF_STRUCT *nf);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__TPNF_IN_STRUCT;

typedef struct{
    float Output;
}__TPNF_OUT_STRUCT;

typedef struct{
    float T;
    float Wo;
    
    float K1;
    float K2;

    uint8_t ReCalulate_Flag;
}__TPNF_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__TPNF_DATA_STRUCT;

typedef struct{
    __TPNF_IN_STRUCT In;
    __TPNF_OUT_STRUCT Out;
    __TPNF_Params_STRUCT Params;
    __TPNF_DATA_STRUCT Data;
}__TPNF_STRUCT;

void Transfer_TPNF_Loop(__TPNF_STRUCT *tpnf);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__DOB_IN_STRUCT;

typedef struct{
    float Output;
}__DOB_OUT_STRUCT;

typedef struct{
    float T;
    float Wo;
    
    float K1;
    float K2;

    uint8_t ReCalulate_Flag;
}__DOB_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__DOB_DATA_STRUCT;

typedef struct{
    __DOB_IN_STRUCT In;
    __DOB_OUT_STRUCT Out;
    __DOB_Params_STRUCT Params;
    __DOB_DATA_STRUCT Data;
}__DOB_STRUCT;

void Transfer_DOB_Loop(__DOB_STRUCT *dob);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__RLS_IN_STRUCT;

typedef struct{
    float Output;
}__RLS_OUT_STRUCT;

typedef struct{
    float T;
    float Wo;
    
    float K1;
    float K2;

    uint8_t ReCalulate_Flag;
}__RLS_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__RLS_DATA_STRUCT;

typedef struct{
    __RLS_IN_STRUCT In;
    __RLS_OUT_STRUCT Out;
    __RLS_Params_STRUCT Params;
    __RLS_DATA_STRUCT Data;
}__RLS_STRUCT;

void Transfer_RLS_Loop(__RLS_STRUCT *rls);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__SMO_IN_STRUCT;

typedef struct{
    float Output;
}__SMO_OUT_STRUCT;

typedef struct{
    float T;
    float Wo;
    
    float K1;
    float K2;

    uint8_t ReCalulate_Flag;
}__SMO_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__SMO_DATA_STRUCT;

typedef struct{
    __SMO_IN_STRUCT In;
    __SMO_OUT_STRUCT Out;
    __SMO_Params_STRUCT Params;
    __SMO_DATA_STRUCT Data;
}__SMO_STRUCT;

void Transfer_SMO_Loop(__SMO_STRUCT *smo);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__NLFO_IN_STRUCT;

typedef struct{
    float Output;
}__NLFO_OUT_STRUCT;

typedef struct{
    float T;
    float Wo;
    
    float K1;
    float K2;

    uint8_t ReCalulate_Flag;
}__NLFO_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__NLFO_DATA_STRUCT;

typedef struct{
    __NLFO_IN_STRUCT In;
    __NLFO_OUT_STRUCT Out;
    __NLFO_Params_STRUCT Params;
    __NLFO_DATA_STRUCT Data;
}__NLFO_STRUCT;

void Transfer_NLFO_Loop(__NLFO_STRUCT *nlfo);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__HFI_IN_STRUCT;

typedef struct{
    float Output;
}__HFI_OUT_STRUCT;

typedef struct{
    float T;
    float Wo;
    
    float K1;
    float K2;

    uint8_t ReCalulate_Flag;
}__HFI_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__HFI_DATA_STRUCT;

typedef struct{
    __HFI_IN_STRUCT In;
    __HFI_OUT_STRUCT Out;
    __HFI_Params_STRUCT Params;
    __HFI_DATA_STRUCT Data;
}__HFI_STRUCT;

void Transfer_HFI_Loop(__HFI_STRUCT *hfi);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__MARS_IN_STRUCT;

typedef struct{
    float Output;
}__MARS_OUT_STRUCT;

typedef struct{
    float T;
    float Wo;
    
    float K1;
    float K2;

    uint8_t ReCalulate_Flag;
}__MARS_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__MARS_DATA_STRUCT;

typedef struct{
    __MARS_IN_STRUCT In;
    __MARS_OUT_STRUCT Out;
    __MARS_Params_STRUCT Params;
    __MARS_DATA_STRUCT Data;
}__MARS_STRUCT;

void Transfer_MARS_Loop(__MARS_STRUCT *mars);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__EKF_IN_STRUCT;

typedef struct{
    float Output;
}__EKF_OUT_STRUCT;

typedef struct{
    float T;
    float Wo;
    
    float K1;
    float K2;

    uint8_t ReCalulate_Flag;
}__EKF_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__EKF_DATA_STRUCT;

typedef struct{
    __EKF_IN_STRUCT In;
    __EKF_OUT_STRUCT Out;
    __EKF_Params_STRUCT Params;
    __EKF_DATA_STRUCT Data;
}__EKF_STRUCT;

void Transfer_EKF_Loop(__EKF_STRUCT *ekf);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float We;
    float Wh;
}__SINE_IN_STRUCT;

typedef struct{
    float Output;
}__SINE_OUT_STRUCT;

typedef struct{
    __SINE_IN_STRUCT In;
    __SINE_OUT_STRUCT Out;
}__SINE_STRUCT;

void Transfer_Sine_Loop(__SINE_STRUCT *sine);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float We;
    float Wh;
}__COSINE_IN_STRUCT;

typedef struct{
    float Output;
}__COSINE_OUT_STRUCT;

typedef struct{
    __COSINE_IN_STRUCT In;
    __COSINE_OUT_STRUCT Out;
}__COSINE_STRUCT;

void Transfer_Cosine_Loop(__COSINE_STRUCT *cosine);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float We;
    float Wh;
}__SIGN_IN_STRUCT;

typedef struct{
    float Output;
}__SIGN_OUT_STRUCT;

typedef struct{
    __SIGN_IN_STRUCT In;
    __SIGN_OUT_STRUCT Out;
}__SIGN_STRUCT;

void Transfer_Sign_Loop(__SIGN_STRUCT *sign);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float We;
    float Wh;
}__DELAY1_IN_STRUCT;

typedef struct{
    float Output;
}__DELAY1_OUT_STRUCT;

typedef struct{
    __DELAY1_IN_STRUCT In;
    __DELAY1_OUT_STRUCT Out;
}__DELAY1_STRUCT;

void Transfer_Delay1_Loop(__DELAY1_STRUCT *delay);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float We;
    float Wh;
}__DELAY2_IN_STRUCT;

typedef struct{
    float Output;
}__DELAY2_OUT_STRUCT;

typedef struct{
    __DELAY2_IN_STRUCT In;
    __DELAY2_OUT_STRUCT Out;
}__DELAY2_STRUCT;

void Transfer_Delay2_Loop(__DELAY2_STRUCT *delay);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float We;
    float Wh;
}__DELAY3_IN_STRUCT;

typedef struct{
    float Output;
}__DELAY3_OUT_STRUCT;

typedef struct{
    __DELAY3_IN_STRUCT In;
    __DELAY3_OUT_STRUCT Out;
}__DELAY3_STRUCT;

void Transfer_Delay3_Loop(__DELAY3_STRUCT *delay);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float We;
    float Wh;
}__clarke_IN_STRUCT;

typedef struct{
    float Output;
}__clarke_OUT_STRUCT;

typedef struct{
    __clarke_IN_STRUCT In;
    __clarke_OUT_STRUCT Out;
}__clarke_STRUCT;

void Transfer_clarke_Loop(__clarke_STRUCT *clarke);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float We;
    float Wh;
}__park_IN_STRUCT;

typedef struct{
    float Output;
}__park_OUT_STRUCT;

typedef struct{
    __park_IN_STRUCT In;
    __park_OUT_STRUCT Out;
}__park_STRUCT;

void Transfer_park_Loop(__park_STRUCT *park);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float We;
    float Wh;
}__ipark_IN_STRUCT;

typedef struct{
    float Output;
}__ipark_OUT_STRUCT;

typedef struct{
    __ipark_IN_STRUCT In;
    __ipark_OUT_STRUCT Out;
}__ipark_STRUCT;

void Transfer_ipark_Loop(__ipark_STRUCT *ipark);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float We;
    float Wh;
}__SPWM0_IN_STRUCT;

typedef struct{
    float Output;
}__SPWM0_OUT_STRUCT;

typedef struct{
    __SPWM0_IN_STRUCT In;
    __SPWM0_OUT_STRUCT Out;
}__SPWM0_STRUCT;

void Transfer_SPWM0_Loop(__SPWM0_STRUCT *spwm);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float We;
    float Wh;
}__SPWM_IN_STRUCT;

typedef struct{
    float Output;
}__SPWM_OUT_STRUCT;

typedef struct{
    __SPWM_IN_STRUCT In;
    __SPWM_OUT_STRUCT Out;
}__SPWM_STRUCT;

void Transfer_SPWM_Loop(__SPWM_STRUCT *spwm);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float We;
    float Wh;
}__SVPWM_IN_STRUCT;

typedef struct{
    float Output;
}__SVPWM_OUT_STRUCT;

typedef struct{
    __SVPWM_IN_STRUCT In;
    __SVPWM_OUT_STRUCT Out;
}__SVPWM_STRUCT;

void Transfer_SVPWM_Loop(__SVPWM_STRUCT *svpwm);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    float Input;
}__SINGLERS_IN_STRUCT;

typedef struct{
    float Output;
}__SINGLERS_OUT_STRUCT;

typedef struct{
    float T;
    float Wo;
    
    float K1;
    float K2;

    uint8_t ReCalulate_Flag;
}__SINGLERS_Params_STRUCT;

typedef struct{
    float num;
    float den;
}__SINGLERS_DATA_STRUCT;

typedef struct{
    __SINGLERS_IN_STRUCT In;
    __SINGLERS_OUT_STRUCT Out;
    __SINGLERS_Params_STRUCT Params;
    __SINGLERS_DATA_STRUCT Data;
}__SINGLERS_STRUCT;

void Transfer_SingleRs_Loop(__SINGLERS_STRUCT *singlers);
// ---------------------------工程模块Transfer---------------------------
void Transfer_Init_TRANSFER1(__TRANSFER1_STRUCT *transfer);
void Transfer_Init_TRANSFER2(__TRANSFER2_STRUCT *transfer);
void Transfer_Init_TRANSFER3(__TRANSFER3_STRUCT *transfer);
void Transfer_Init_TRANSFER4(__TRANSFER4_STRUCT *transfer);
void Transfer_Init_TRANSFER5(__TRANSFER5_STRUCT *transfer);
void Transfer_Init_INTEGRATOR(__INTEGRATOR_STRUCT *integrator);
void Transfer_Init_DERIVATIVE(__DERIVATIVE_STRUCT *derivative);
void Transfer_Init_LADRC1(__LADRC1_STRUCT *ladrc);
void Transfer_Init_LADRC2(__LADRC2_STRUCT *ladrc);
void Transfer_Init_SMC(__SMC_STRUCT *smc);
void Transfer_Init_DPCC(__DPCC_STRUCT *dpcc);
void Transfer_Init_PIR(__PIR_STRUCT *pir);
void Transfer_Init_PID(__PID_STRUCT *pid);
void Transfer_Init_PLL(__PLL_STRUCT *pll);
void Transfer_Init_LPF1(__LPF1_STRUCT *lpf);
void Transfer_Init_LPF2(__LPF2_STRUCT *lpf);
void Transfer_Init_HPF1(__HPF1_STRUCT *hpf);
void Transfer_Init_HPF2(__HPF2_STRUCT *hpf);
void Transfer_Init_BPF1(__BPF1_STRUCT *bpf);
void Transfer_Init_BPF2(__BPF2_STRUCT *bpf);
void Transfer_Init_NF(__NF_STRUCT *nf);
void Transfer_Init_TPNF(__TPNF_STRUCT *tpnf);
void Transfer_Init_DOB(__DOB_STRUCT *dob);
void Transfer_Init_RLS(__RLS_STRUCT *rls);
void Transfer_Init_SMO(__SMO_STRUCT *smo);
void Transfer_Init_NLFO(__NLFO_STRUCT *nlfo);
void Transfer_Init_HFI(__HFI_STRUCT *hfi);
void Transfer_Init_MARS(__MARS_STRUCT *mars);
void Transfer_Init_EKF(__EKF_STRUCT *ekf);
// ---------------------------工程模块Transfer---------------------------
void Transfer_ReInit_Integrator(void *p);
// ---------------------------工程模块Transfer---------------------------


#endif // SGUAN_TRANSFER_H
