#ifndef __SGUAN_TRANSFER_H
#define __SGUAN_TRANSFER_H

#include "Sguan_Config.h"

// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t Input;
}__TRANSFER1_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__TRANSFER1_OUT_STRUCT;

typedef struct{
    Sguan_t T;

    Sguan_t num0;
    Sguan_t num1;

    Sguan_t den0;
    Sguan_t den1;

    uint8_t ReCalulate_Flag;
}__TRANSFER1_Params_STRUCT;

typedef struct{
    Sguan_t i;
    Sguan_t o;

    Sguan_t data_num[2];
    Sguan_t data_den[2];
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
    Sguan_t Input;
}__TRANSFER2_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__TRANSFER2_OUT_STRUCT;

typedef struct{
    Sguan_t T;

    Sguan_t num0;
    Sguan_t num1;
    Sguan_t num2;

    Sguan_t den0;
    Sguan_t den1;
    Sguan_t den2;

    uint8_t ReCalulate_Flag;
}__TRANSFER2_Params_STRUCT;

typedef struct{
    Sguan_t i[2];
    Sguan_t o[2];

    Sguan_t data_num[3];
    Sguan_t data_den[3];
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
    Sguan_t Input;
}__TRANSFER3_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__TRANSFER3_OUT_STRUCT;

typedef struct{
    Sguan_t T;

    Sguan_t num0;
    Sguan_t num1;
    Sguan_t num2;
    Sguan_t num3;

    Sguan_t den0;
    Sguan_t den1;
    Sguan_t den2;
    Sguan_t den3;

    uint8_t ReCalulate_Flag;
}__TRANSFER3_Params_STRUCT;

typedef struct{
    Sguan_t i[3];
    Sguan_t o[3];

    Sguan_t data_num[4];
    Sguan_t data_den[4];
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
    Sguan_t Input;
}__TRANSFER4_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__TRANSFER4_OUT_STRUCT;

typedef struct{
    Sguan_t T;

    Sguan_t num0;
    Sguan_t num1;
    Sguan_t num2;
    Sguan_t num3;
    Sguan_t num4;

    Sguan_t den0;
    Sguan_t den1;
    Sguan_t den2;
    Sguan_t den3;
    Sguan_t den4;

    uint8_t ReCalulate_Flag;
}__TRANSFER4_Params_STRUCT;

typedef struct{
    Sguan_t i[4];
    Sguan_t o[4];

    Sguan_t data_num[5];
    Sguan_t data_den[5];
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
    Sguan_t Input;
}__TRANSFER5_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__TRANSFER5_OUT_STRUCT;

typedef struct{
    Sguan_t T;

    Sguan_t num0;
    Sguan_t num1;
    Sguan_t num2;
    Sguan_t num3;
    Sguan_t num4;
    Sguan_t num5;

    Sguan_t den0;
    Sguan_t den1;
    Sguan_t den2;
    Sguan_t den3;
    Sguan_t den4;
    Sguan_t den5;

    uint8_t ReCalulate_Flag;
}__TRANSFER5_Params_STRUCT;

typedef struct{
    Sguan_t i[5];
    Sguan_t o[5];

    Sguan_t data_num[6];
    Sguan_t data_den[6];
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
    Sguan_t Input;
}__INTEGRATOR_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__INTEGRATOR_OUT_STRUCT;

typedef struct{
    Sguan_t T;
}__INTEGRATOR_Params_STRUCT;

typedef struct{
    Sguan_t i;

    Sguan_t data_num;
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
    Sguan_t Input;
}__DERIVATIVE_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__DERIVATIVE_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    uint8_t ReCalulate_Flag;
}__DERIVATIVE_Params_STRUCT;

typedef struct{
    Sguan_t i;
    Sguan_t o;

    Sguan_t data_num[2];
    Sguan_t data_den[2];
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
    Sguan_t Ref;
    Sguan_t Fbk;
}__HALL_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__HALL_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    Sguan_t Kp;
    Sguan_t Ki;
    Sguan_t Kd;

    Sguan_t OutMax;
    Sguan_t OutMin;
    Sguan_t IntMax;
    Sguan_t IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__HALL_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
}__HALL_DATA_STRUCT;

typedef struct{
    __HALL_IN_STRUCT In;
    __HALL_OUT_STRUCT Out;
    __HALL_Params_STRUCT Params;
    __HALL_DATA_STRUCT Data;
}__HALL_STRUCT;

void Transfer_HALL_Loop(__HALL_STRUCT *hall);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t Ref;
    Sguan_t Fbk;
}__LADRC1_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__LADRC1_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    Sguan_t Kp;
    Sguan_t Ki;
    Sguan_t Kd;

    Sguan_t OutMax;
    Sguan_t OutMin;
    Sguan_t IntMax;
    Sguan_t IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__LADRC1_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Ref;
    Sguan_t Fbk;
}__LADRC2_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__LADRC2_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    Sguan_t Kp;
    Sguan_t Ki;
    Sguan_t Kd;

    Sguan_t OutMax;
    Sguan_t OutMin;
    Sguan_t IntMax;
    Sguan_t IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__LADRC2_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Ref;
    Sguan_t Fbk;
}__SMC_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__SMC_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    Sguan_t Kp;
    Sguan_t Ki;
    Sguan_t Kd;

    Sguan_t OutMax;
    Sguan_t OutMin;
    Sguan_t IntMax;
    Sguan_t IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__SMC_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Ref;
    Sguan_t Fbk;
}__DPCC_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__DPCC_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    Sguan_t Kp;
    Sguan_t Ki;
    Sguan_t Kd;

    Sguan_t OutMax;
    Sguan_t OutMin;
    Sguan_t IntMax;
    Sguan_t IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__DPCC_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Ref;
    Sguan_t Fbk;
}__PIR_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__PIR_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    Sguan_t Kp;
    Sguan_t Ki;
    Sguan_t Kd;

    Sguan_t OutMax;
    Sguan_t OutMin;
    Sguan_t IntMax;
    Sguan_t IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__PIR_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Ref;
    Sguan_t Fbk;
}__PID_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__PID_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    Sguan_t Kp;
    Sguan_t Ki;
    Sguan_t Kd;

    Sguan_t OutMax;
    Sguan_t OutMin;
    Sguan_t IntMax;
    Sguan_t IntMin;

    uint8_t ReCalulate_Flag;
    uint8_t IntegralFrozen_Flag;
}__PID_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Error;
}__PLL_IN_STRUCT;

typedef struct{
    Sguan_t We;
    Sguan_t Re;
}__PLL_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    Sguan_t Kp;
    Sguan_t Ki;

    uint8_t ReCalulate_Flag;
}__PLL_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__LPF1_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__LPF1_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    uint8_t ReCalulate_Flag;
}__LPF1_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__LPF2_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__LPF2_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    uint8_t ReCalulate_Flag;
}__LPF2_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__HPF1_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__HPF1_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    uint8_t ReCalulate_Flag;
}__HPF1_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__HPF2_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__HPF2_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc;

    uint8_t ReCalulate_Flag;
}__HPF2_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__BPF1_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__BPF1_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wc_Low;
    Sguan_t Wc_High;

    uint8_t ReCalulate_Flag;
}__BPF1_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__BPF2_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__BPF2_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wo;
    Sguan_t Zeta;

    uint8_t ReCalulate_Flag;
}__BPF2_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__NF_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__NF_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wo;
    Sguan_t Zeta;

    uint8_t ReCalulate_Flag;
}__NF_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__TPNF_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__TPNF_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wo;
    
    Sguan_t K1;
    Sguan_t K2;

    uint8_t ReCalulate_Flag;
}__TPNF_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__DOB_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__DOB_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wo;
    
    Sguan_t K1;
    Sguan_t K2;

    uint8_t ReCalulate_Flag;
}__DOB_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__RLS_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__RLS_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wo;
    
    Sguan_t K1;
    Sguan_t K2;

    uint8_t ReCalulate_Flag;
}__RLS_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__SMO_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__SMO_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wo;
    
    Sguan_t K1;
    Sguan_t K2;

    uint8_t ReCalulate_Flag;
}__SMO_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__NLFO_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__NLFO_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wo;
    
    Sguan_t K1;
    Sguan_t K2;

    uint8_t ReCalulate_Flag;
}__NLFO_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__HFI_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__HFI_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wo;
    
    Sguan_t K1;
    Sguan_t K2;

    uint8_t ReCalulate_Flag;
}__HFI_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__ROLO_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__ROLO_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wo;
    
    Sguan_t K1;
    Sguan_t K2;

    uint8_t ReCalulate_Flag;
}__ROLO_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
}__ROLO_DATA_STRUCT;

typedef struct{
    __ROLO_IN_STRUCT In;
    __ROLO_OUT_STRUCT Out;
    __ROLO_Params_STRUCT Params;
    __ROLO_DATA_STRUCT Data;
}__ROLO_STRUCT;

void Transfer_ROLO_Loop(__ROLO_STRUCT *rolo);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t Input;
}__MARS_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__MARS_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wo;
    
    Sguan_t K1;
    Sguan_t K2;

    uint8_t ReCalulate_Flag;
}__MARS_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t Input;
}__EKF_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__EKF_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wo;
    
    Sguan_t K1;
    Sguan_t K2;

    uint8_t ReCalulate_Flag;
}__EKF_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
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
    Sguan_t We;
    Sguan_t Wh;
}__DELAY1_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__DELAY1_OUT_STRUCT;

typedef struct{
    __DELAY1_IN_STRUCT In;
    __DELAY1_OUT_STRUCT Out;
}__DELAY1_STRUCT;

void Transfer_DELAY1_Loop(__DELAY1_STRUCT *delay);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t We;
    Sguan_t Wh;
}__DELAY2_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__DELAY2_OUT_STRUCT;

typedef struct{
    __DELAY2_IN_STRUCT In;
    __DELAY2_OUT_STRUCT Out;
}__DELAY2_STRUCT;

void Transfer_DELAY2_Loop(__DELAY2_STRUCT *delay);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t We;
    Sguan_t Wh;
}__DELAY3_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__DELAY3_OUT_STRUCT;

typedef struct{
    __DELAY3_IN_STRUCT In;
    __DELAY3_OUT_STRUCT Out;
}__DELAY3_STRUCT;

void Transfer_DELAY3_Loop(__DELAY3_STRUCT *delay);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t We;
    Sguan_t Wh;
}__Sine_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__Sine_OUT_STRUCT;

typedef struct{
    __Sine_IN_STRUCT In;
    __Sine_OUT_STRUCT Out;
}__Sine_STRUCT;

void Transfer_Sine_Loop(__Sine_STRUCT *sine);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t We;
    Sguan_t Wh;
}__Cosine_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__Cosine_OUT_STRUCT;

typedef struct{
    __Cosine_IN_STRUCT In;
    __Cosine_OUT_STRUCT Out;
}__Cosine_STRUCT;

void Transfer_Cosine_Loop(__Cosine_STRUCT *cosine);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t We;
    Sguan_t Wh;
}__Sign_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__Sign_OUT_STRUCT;

typedef struct{
    __Sign_IN_STRUCT In;
    __Sign_OUT_STRUCT Out;
}__Sign_STRUCT;

void Transfer_Sign_Loop(__Sign_STRUCT *sign);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t We;
    Sguan_t Wh;
}__clarke_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__clarke_OUT_STRUCT;

typedef struct{
    __clarke_IN_STRUCT In;
    __clarke_OUT_STRUCT Out;
}__clarke_STRUCT;

void Transfer_clarke_Loop(__clarke_STRUCT *clarke);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t We;
    Sguan_t Wh;
}__park_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__park_OUT_STRUCT;

typedef struct{
    __park_IN_STRUCT In;
    __park_OUT_STRUCT Out;
}__park_STRUCT;

void Transfer_park_Loop(__park_STRUCT *park);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t We;
    Sguan_t Wh;
}__ipark_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__ipark_OUT_STRUCT;

typedef struct{
    __ipark_IN_STRUCT In;
    __ipark_OUT_STRUCT Out;
}__ipark_STRUCT;

void Transfer_ipark_Loop(__ipark_STRUCT *ipark);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t We;
    Sguan_t Wh;
}__SPWM0_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__SPWM0_OUT_STRUCT;

typedef struct{
    __SPWM0_IN_STRUCT In;
    __SPWM0_OUT_STRUCT Out;
}__SPWM0_STRUCT;

void Transfer_SPWM0_Loop(__SPWM0_STRUCT *spwm);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t We;
    Sguan_t Wh;
}__SPWM_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__SPWM_OUT_STRUCT;

typedef struct{
    __SPWM_IN_STRUCT In;
    __SPWM_OUT_STRUCT Out;
}__SPWM_STRUCT;

void Transfer_SPWM_Loop(__SPWM_STRUCT *spwm);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t We;
    Sguan_t Wh;
}__SVPWM_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__SVPWM_OUT_STRUCT;

typedef struct{
    __SVPWM_IN_STRUCT In;
    __SVPWM_OUT_STRUCT Out;
}__SVPWM_STRUCT;

void Transfer_SVPWM_Loop(__SVPWM_STRUCT *svpwm);
// ---------------------------工程模块Transfer---------------------------
typedef struct{
    Sguan_t Input;
}__SingleRs_IN_STRUCT;

typedef struct{
    Sguan_t Output;
}__SingleRs_OUT_STRUCT;

typedef struct{
    Sguan_t T;
    Sguan_t Wo;
    
    Sguan_t K1;
    Sguan_t K2;

    uint8_t ReCalulate_Flag;
}__SingleRs_Params_STRUCT;

typedef struct{
    Sguan_t num;
    Sguan_t den;
}__SingleRs_DATA_STRUCT;

typedef struct{
    __SingleRs_IN_STRUCT In;
    __SingleRs_OUT_STRUCT Out;
    __SingleRs_Params_STRUCT Params;
    __SingleRs_DATA_STRUCT Data;
}__SingleRs_STRUCT;

void Transfer_SingleRs_Loop(__SingleRs_STRUCT *singlers);
// ---------------------------工程模块Transfer---------------------------
void Transfer_Init_TRANSFER1(__TRANSFER1_STRUCT *transfer);
void Transfer_Init_TRANSFER2(__TRANSFER2_STRUCT *transfer);
void Transfer_Init_TRANSFER3(__TRANSFER3_STRUCT *transfer);
void Transfer_Init_TRANSFER4(__TRANSFER4_STRUCT *transfer);
void Transfer_Init_TRANSFER5(__TRANSFER5_STRUCT *transfer);
void Transfer_Init_INTEGRATOR(__INTEGRATOR_STRUCT *integrator);
void Transfer_Init_DERIVATIVE(__DERIVATIVE_STRUCT *derivative);
void Transfer_Init_HALL(__HALL_STRUCT *hall);
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
void Transfer_Init_ROLO(__ROLO_STRUCT *rolo);
void Transfer_Init_MARS(__MARS_STRUCT *mars);
void Transfer_Init_EKF(__EKF_STRUCT *ekf);
void Transfer_Init_DELAY1(__DELAY1_STRUCT *delay);
void Transfer_Init_DELAY2(__DELAY2_STRUCT *delay);
void Transfer_Init_DELAY3(__DELAY3_STRUCT *delay);
// ---------------------------工程模块Transfer---------------------------
void Transfer_ReInit_Integrator(void *p);
// ---------------------------工程模块Transfer---------------------------


#endif // SGUAN_TRANSFER_H
