#include "Sguan_Transfer.h"


// ---------------------------工程模块Transfer---------------------------
void Transfer_TRANSFER1_Loop(__TRANSFER1_STRUCT *transfer){
    // 1.传递函数运算系数动态计算
    if (transfer->Params.ReCalulate_Flag){
        transfer->Data.data_num[0] = 2.0f*transfer->Params.num1 + transfer->Params.num0*transfer->Params.T;
        transfer->Data.data_num[1] = -2.0f*transfer->Params.num1 + transfer->Params.num0*transfer->Params.T;

        transfer->Data.data_den[0] = 2.0f*transfer->Params.den1 + transfer->Params.den0*transfer->Params.T;
        transfer->Data.data_num[1] = -2.0f*transfer->Params.den1 + transfer->Params.den0*transfer->Params.T;
    }

    // 2.运算传递函数
    transfer->Out.Output = (transfer->In.Input*transfer->Data.data_num[0] + transfer->Data.i*transfer->Data.data_num[1] - transfer->Data.o*transfer->Data.data_den[1])/transfer->Data.data_den[0];

    // 3.更新历史数值
    transfer->Data.i = transfer->In.Input;
    transfer->Data.o = transfer->Out.Output;
}

void Transfer_TRANSFER2_Loop(__TRANSFER2_STRUCT *transfer){
    // 1.传递函数运算系数动态计算
    if (transfer->Params.ReCalulate_Flag){
        transfer->Data.data_num[0] = 4.0f*transfer->Params.num2 + 2.0f*transfer->Params.num1*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[1] = -8.0f*transfer->Params.num2 + 2.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[2] = 4.0f*transfer->Params.num2 - 2.0f*transfer->Params.num1*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T;
        
        transfer->Data.data_den[0] = 4.0f*transfer->Params.den2 + 2.0f*transfer->Params.den1*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[1] = -8.0f*transfer->Params.den2 + 2.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[2] = 4.0f*transfer->Params.den2 - 2.0f*transfer->Params.den1*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T;
    }

    // 2.运算传递函数
    transfer->Out.Output = (transfer->In.Input*transfer->Data.data_num[0] + transfer->Data.i[0]*transfer->Data.data_num[1] + transfer->Data.i[1]*transfer->Data.data_num[2] - transfer->Data.o[0]*transfer->Data.data_den[1] - transfer->Data.o[1]*transfer->Data.data_den[2])/transfer->Data.data_den[0];

    // 3.更新历史数值
    transfer->Data.i[1] = transfer->Data.i[0];
    transfer->Data.i[0] = transfer->In.Input;

    transfer->Data.o[1] = transfer->Data.o[0];
    transfer->Data.o[0] = transfer->Out.Output;
}

void Transfer_TRANSFER3_Loop(__TRANSFER3_STRUCT *transfer){
    // 1.传递函数运算系数动态计算
    if (transfer->Params.ReCalulate_Flag){
        transfer->Data.data_num[0] = 8.0f*transfer->Params.num3 + 4.0f*transfer->Params.num2*transfer->Params.T + 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[1] = -24.0f*transfer->Params.num3 - 4.0f*transfer->Params.num2*transfer->Params.T + 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T + 3.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[2] = 24.0f*transfer->Params.num3 - 4.0f*transfer->Params.num2*transfer->Params.T - 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T + 3.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[3] = -8.0f*transfer->Params.num3 + 4.0f*transfer->Params.num2*transfer->Params.T - 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        
        transfer->Data.data_den[0] = 8.0f*transfer->Params.den3 + 4.0f*transfer->Params.den2*transfer->Params.T + 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[1] = -24.0f*transfer->Params.den3 - 4.0f*transfer->Params.den2*transfer->Params.T + 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T + 3.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[2] = 24.0f*transfer->Params.den3 - 4.0f*transfer->Params.den2*transfer->Params.T - 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T + 3.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[3] = -8.0f*transfer->Params.den3 + 4.0f*transfer->Params.den2*transfer->Params.T - 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    }

    // 2.运算传递函数
    transfer->Out.Output = (transfer->In.Input*transfer->Data.data_num[0] + transfer->Data.i[0]*transfer->Data.data_num[1] + transfer->Data.i[1]*transfer->Data.data_num[2] + transfer->Data.i[2]*transfer->Data.data_num[3] - transfer->Data.o[0]*transfer->Data.data_den[1] - transfer->Data.o[1]*transfer->Data.data_den[2] - transfer->Data.o[2]*transfer->Data.data_den[3])/transfer->Data.data_den[0];

    // 3.更新历史数值
    transfer->Data.i[2] = transfer->Data.i[1];
    transfer->Data.i[1] = transfer->Data.i[0];
    transfer->Data.i[0] = transfer->In.Input;

    transfer->Data.o[2] = transfer->Data.o[1];
    transfer->Data.o[1] = transfer->Data.o[0];
    transfer->Data.o[0] = transfer->Out.Output;
}

void Transfer_TRANSFER4_Loop(__TRANSFER4_STRUCT *transfer){
    // 1.传递函数运算系数动态计算
    if (transfer->Params.ReCalulate_Flag){
        transfer->Data.data_num[0] = 16.0f*transfer->Params.num4 + 8.0f*transfer->Params.num3*transfer->Params.T + 4.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T + 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[1] = -64.0f*transfer->Params.num4 - 16.0f*transfer->Params.num3*transfer->Params.T + 4.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[2] = 96.0f*transfer->Params.num4 - 8.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T + 6.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[3] = -64.0f*transfer->Params.num4 + 16.0f*transfer->Params.num3*transfer->Params.T - 4.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[4] = 16.0f*transfer->Params.num4 - 8.0f*transfer->Params.num3*transfer->Params.T + 4.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T - 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        
        transfer->Data.data_den[0] = 16.0f*transfer->Params.den4 + 8.0f*transfer->Params.den3*transfer->Params.T + 4.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T + 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[1] = -64.0f*transfer->Params.den4 - 16.0f*transfer->Params.den3*transfer->Params.T + 4.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[2] = 96.0f*transfer->Params.den4 - 8.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T + 6.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[3] = -64.0f*transfer->Params.den4 + 16.0f*transfer->Params.den3*transfer->Params.T - 4.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[4] = 16.0f*transfer->Params.den4 - 8.0f*transfer->Params.den3*transfer->Params.T + 4.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T - 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    }
    
    // 2.运算传递函数
    transfer->Out.Output = (transfer->In.Input*transfer->Data.data_num[0] + transfer->Data.i[0]*transfer->Data.data_num[1] + transfer->Data.i[1]*transfer->Data.data_num[2] + transfer->Data.i[2]*transfer->Data.data_num[3] + transfer->Data.i[3]*transfer->Data.data_num[4] - transfer->Data.o[0]*transfer->Data.data_den[1] - transfer->Data.o[1]*transfer->Data.data_den[2] - transfer->Data.o[2]*transfer->Data.data_den[3] - transfer->Data.o[3]*transfer->Data.data_den[4])/transfer->Data.data_den[0];

    // 3.更新历史数值
    transfer->Data.i[3] = transfer->Data.i[2];
    transfer->Data.i[2] = transfer->Data.i[1];
    transfer->Data.i[1] = transfer->Data.i[0];
    transfer->Data.i[0] = transfer->In.Input;

    transfer->Data.o[3] = transfer->Data.o[2];
    transfer->Data.o[2] = transfer->Data.o[1];
    transfer->Data.o[1] = transfer->Data.o[0];
    transfer->Data.o[0] = transfer->Out.Output;
}

void Transfer_TRANSFER5_Loop(__TRANSFER5_STRUCT *transfer){
    // 1.传递函数运算系数动态计算
    if (transfer->Params.ReCalulate_Flag){
        transfer->Data.data_num[0] = 32.0f*transfer->Params.num5 + 16.0f*transfer->Params.num4*transfer->Params.T + 8.0f*transfer->Params.num3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T*transfer->Params.T + 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[1] = -160.0f*transfer->Params.num5 - 48.0f*transfer->Params.num4*transfer->Params.T - 8.0f*transfer->Params.num3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T*transfer->Params.T + 6.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 5.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[2] = 320.0f*transfer->Params.num5 + 32.0f*transfer->Params.num4*transfer->Params.T - 16.0f*transfer->Params.num3*transfer->Params.T*transfer->Params.T - 8.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 10.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[3] = -320.0f*transfer->Params.num5 + 32.0f*transfer->Params.num4*transfer->Params.T + 16.0f*transfer->Params.num3*transfer->Params.T*transfer->Params.T - 8.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T*transfer->Params.T - 4.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 10.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[4] = 160.0f*transfer->Params.num5 - 48.0f*transfer->Params.num4*transfer->Params.T + 8.0f*transfer->Params.num3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T*transfer->Params.T - 6.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 5.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_num[5] = -32.0f*transfer->Params.num5 + 16.0f*transfer->Params.num4*transfer->Params.T - 8.0f*transfer->Params.num3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T*transfer->Params.T - 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        
        
        transfer->Data.data_den[0] = 32.0f*transfer->Params.den5 + 16.0f*transfer->Params.den4*transfer->Params.T + 8.0f*transfer->Params.den3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T*transfer->Params.T + 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[1] = -160.0f*transfer->Params.den5 - 48.0f*transfer->Params.den4*transfer->Params.T - 8.0f*transfer->Params.den3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T*transfer->Params.T + 6.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 5.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[2] = 320.0f*transfer->Params.den5 + 32.0f*transfer->Params.den4*transfer->Params.T - 16.0f*transfer->Params.den3*transfer->Params.T*transfer->Params.T - 8.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 10.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[3] = -320.0f*transfer->Params.den5 + 32.0f*transfer->Params.den4*transfer->Params.T + 16.0f*transfer->Params.den3*transfer->Params.T*transfer->Params.T - 8.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T*transfer->Params.T - 4.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 10.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[4] = 160.0f*transfer->Params.den5 - 48.0f*transfer->Params.den4*transfer->Params.T + 8.0f*transfer->Params.den3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T*transfer->Params.T - 6.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 5.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
        transfer->Data.data_den[5] = -32.0f*transfer->Params.den5 + 16.0f*transfer->Params.den4*transfer->Params.T - 8.0f*transfer->Params.den3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T*transfer->Params.T - 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    }
    
    // 2.运算传递函数
    transfer->Out.Output = (transfer->In.Input*transfer->Data.data_num[0] + transfer->Data.i[0]*transfer->Data.data_num[1] + transfer->Data.i[1]*transfer->Data.data_num[2] + transfer->Data.i[2]*transfer->Data.data_num[3] + transfer->Data.i[3]*transfer->Data.data_num[4] + transfer->Data.i[4]*transfer->Data.data_num[5] - transfer->Data.o[0]*transfer->Data.data_den[1] - transfer->Data.o[1]*transfer->Data.data_den[2] - transfer->Data.o[2]*transfer->Data.data_den[3] - transfer->Data.o[3]*transfer->Data.data_den[4] - transfer->Data.o[4]*transfer->Data.data_den[5])/transfer->Data.data_den[0];

    // 3.更新历史数值
    transfer->Data.i[4] = transfer->Data.i[3];
    transfer->Data.i[3] = transfer->Data.i[2];
    transfer->Data.i[2] = transfer->Data.i[1];
    transfer->Data.i[1] = transfer->Data.i[0];
    transfer->Data.i[0] = transfer->In.Input;

    transfer->Data.o[4] = transfer->Data.o[3];
    transfer->Data.o[3] = transfer->Data.o[2];
    transfer->Data.o[2] = transfer->Data.o[1];
    transfer->Data.o[1] = transfer->Data.o[0];
    transfer->Data.o[0] = transfer->Out.Output;
}

void Transfer_INTEGRATOR_Loop(__INTEGRATOR_STRUCT *integrator){
    // 1.运算传递函数
    integrator->Out.Output += (integrator->In.Input + integrator->Data.i)*integrator->Data.data_num;

    // 2.更新历史数值
    integrator->Data.i = integrator->In.Input;
}

void Transfer_DERIVATIVE_Loop(__DERIVATIVE_STRUCT *derivative){
    // 1.运算传递函数


    // 2.更新历史数值
}

void Transfer_LADRC1_Loop(__LADRC1_STRUCT *ladrc){
    
}

void Transfer_LADRC2_Loop(__LADRC2_STRUCT *ladrc){

}

void Transfer_SMC_Loop(__SMC_STRUCT *smc){

}

void Transfer_DPCC_Loop(__DPCC_STRUCT *dpcc){

}

void Transfer_PIR_Loop(__PIR_STRUCT *pir){

}

void Transfer_PID_Loop(__PID_STRUCT *pid){

}

void Transfer_PLL_Loop(__PLL_STRUCT *pll){

}

void Transfer_LPF1_Loop(__LPF1_STRUCT *lpf){

}

void Transfer_LPF2_Loop(__LPF2_STRUCT *lpf){

}

void Transfer_HPF1_Loop(__HPF1_STRUCT *hpf){

}

void Transfer_HPF2_Loop(__HPF2_STRUCT *hpf){

}

void Transfer_BPF1_Loop(__BPF1_STRUCT *bpf){

}

void Transfer_BPF2_Loop(__BPF2_STRUCT *bpf){

}

void Transfer_NF_Loop(__NF_STRUCT *nf){

}

void Transfer_TPNF_Loop(__TPNF_STRUCT *tpnf){

}

void Transfer_DOB_Loop(__DOB_STRUCT *dob){

}

void Transfer_RLS_Loop(__RLS_STRUCT *rls){

}

void Transfer_SMO_Loop(__SMO_STRUCT *smo){

}

void Transfer_NLFO_Loop(__NLFO_STRUCT *nlfo){

}

void Transfer_HFI_Loop(__HFI_STRUCT *hfi){

}

void Transfer_MARS_Loop(__MARS_STRUCT *mars){

}

void Transfer_EKF_Loop(__EKF_STRUCT *ekf){

}

void Transfer_Sine_Loop(__SINE_STRUCT *sine){

}

void Transfer_Cosine_Loop(__COSINE_STRUCT *cosine){

}

void Transfer_Sign_Loop(__SIGN_STRUCT *sign){

}

void Transfer_Delay1_Loop(__DELAY1_STRUCT *delay){

}

void Transfer_Delay2_Loop(__DELAY2_STRUCT *delay){

}

void Transfer_Delay3_Loop(__DELAY3_STRUCT *delay){

}

void Transfer_clarke_Loop(__clarke_STRUCT *clarke){

}

void Transfer_park_Loop(__park_STRUCT *park){

}

void Transfer_ipark_Loop(__ipark_STRUCT *ipark){

}

void Transfer_SPWM0_Loop(__SPWM0_STRUCT *spwm){

}

void Transfer_SPWM_Loop(__SPWM_STRUCT *spwm){

}

void Transfer_SVPWM_Loop(__SVPWM_STRUCT *svpwm){

}

void Transfer_SingleRs_Loop(__SINGLERS_STRUCT *singlers){
    
}

// ---------------------------工程模块Transfer---------------------------
void Transfer_Init_TRANSFER1(__TRANSFER1_STRUCT *transfer){
    // 传递函数运算系数固定计算
    transfer->Data.data_num[0] = 2.0f*transfer->Params.num1 + transfer->Params.num0*transfer->Params.T;
    transfer->Data.data_num[1] = -2.0f*transfer->Params.num1 + transfer->Params.num0*transfer->Params.T;

    transfer->Data.data_den[0] = 2.0f*transfer->Params.den1 + transfer->Params.den0*transfer->Params.T;
    transfer->Data.data_num[1] = -2.0f*transfer->Params.den1 + transfer->Params.den0*transfer->Params.T;

    // 初始化为零
    transfer->Data.i = 0.0f;
    transfer->Data.o = 0.0f;

    transfer->In.Input = 0.0f;
    transfer->Out.Output = 0.0f;
}

void Transfer_Init_TRANSFER2(__TRANSFER2_STRUCT *transfer){
    // 传递函数运算系数固定计算
    transfer->Data.data_num[0] = 4.0f*transfer->Params.num2 + 2.0f*transfer->Params.num1*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[1] = -8.0f*transfer->Params.num2 + 2.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[2] = 4.0f*transfer->Params.num2 - 2.0f*transfer->Params.num1*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T;
    
    transfer->Data.data_den[0] = 4.0f*transfer->Params.den2 + 2.0f*transfer->Params.den1*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[1] = -8.0f*transfer->Params.den2 + 2.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[2] = 4.0f*transfer->Params.den2 - 2.0f*transfer->Params.den1*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T;

    // 初始化为零
    transfer->Data.i[0] = 0.0f;
    transfer->Data.i[1] = 0.0f;
    
    transfer->Data.o[1] = 0.0f;
    transfer->Data.o[1] = 0.0f;

    transfer->In.Input = 0.0f;
    transfer->Out.Output = 0.0f;
}

void Transfer_Init_TRANSFER3(__TRANSFER3_STRUCT *transfer){
    // 传递函数运算系数固定计算
    transfer->Data.data_num[0] = 8.0f*transfer->Params.num3 + 4.0f*transfer->Params.num2*transfer->Params.T + 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[1] = -24.0f*transfer->Params.num3 - 4.0f*transfer->Params.num2*transfer->Params.T + 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T + 3.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[2] = 24.0f*transfer->Params.num3 - 4.0f*transfer->Params.num2*transfer->Params.T - 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T + 3.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[3] = -8.0f*transfer->Params.num3 + 4.0f*transfer->Params.num2*transfer->Params.T - 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    
    transfer->Data.data_den[0] = 8.0f*transfer->Params.den3 + 4.0f*transfer->Params.den2*transfer->Params.T + 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[1] = -24.0f*transfer->Params.den3 - 4.0f*transfer->Params.den2*transfer->Params.T + 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T + 3.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[2] = 24.0f*transfer->Params.den3 - 4.0f*transfer->Params.den2*transfer->Params.T - 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T + 3.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[3] = -8.0f*transfer->Params.den3 + 4.0f*transfer->Params.den2*transfer->Params.T - 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    
    // 初始化为零
    transfer->Data.i[0] = 0.0f;
    transfer->Data.i[1] = 0.0f;
    transfer->Data.i[2] = 0.0f;
    
    transfer->Data.o[0] = 0.0f;
    transfer->Data.o[1] = 0.0f;
    transfer->Data.o[2] = 0.0f;

    transfer->In.Input = 0.0f;
    transfer->Out.Output = 0.0f;
}

void Transfer_Init_TRANSFER4(__TRANSFER4_STRUCT *transfer){
    // 传递函数运算系数固定计算
    transfer->Data.data_num[0] = 16.0f*transfer->Params.num4 + 8.0f*transfer->Params.num3*transfer->Params.T + 4.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T + 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[1] = -64.0f*transfer->Params.num4 - 16.0f*transfer->Params.num3*transfer->Params.T + 4.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[2] = 96.0f*transfer->Params.num4 - 8.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T + 6.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[3] = -64.0f*transfer->Params.num4 + 16.0f*transfer->Params.num3*transfer->Params.T - 4.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[4] = 16.0f*transfer->Params.num4 - 8.0f*transfer->Params.num3*transfer->Params.T + 4.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T - 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    
    transfer->Data.data_den[0] = 16.0f*transfer->Params.den4 + 8.0f*transfer->Params.den3*transfer->Params.T + 4.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T + 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[1] = -64.0f*transfer->Params.den4 - 16.0f*transfer->Params.den3*transfer->Params.T + 4.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[2] = 96.0f*transfer->Params.den4 - 8.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T + 6.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[3] = -64.0f*transfer->Params.den4 + 16.0f*transfer->Params.den3*transfer->Params.T - 4.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[4] = 16.0f*transfer->Params.den4 - 8.0f*transfer->Params.den3*transfer->Params.T + 4.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T - 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;

    // 初始化为零
    transfer->Data.i[0] = 0.0f;
    transfer->Data.i[1] = 0.0f;
    transfer->Data.i[2] = 0.0f;
    transfer->Data.i[3] = 0.0f;

    transfer->Data.o[0] = 0.0f;
    transfer->Data.o[1] = 0.0f;
    transfer->Data.o[2] = 0.0f;
    transfer->Data.o[3] = 0.0f;

    transfer->In.Input = 0.0f;
    transfer->Out.Output = 0.0f;
}

void Transfer_Init_TRANSFER5(__TRANSFER5_STRUCT *transfer){
    // 传递函数运算系数固定计算
    transfer->Data.data_num[0] = 32.0f*transfer->Params.num5 + 16.0f*transfer->Params.num4*transfer->Params.T + 8.0f*transfer->Params.num3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T*transfer->Params.T + 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[1] = -160.0f*transfer->Params.num5 - 48.0f*transfer->Params.num4*transfer->Params.T - 8.0f*transfer->Params.num3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T*transfer->Params.T + 6.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 5.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[2] = 320.0f*transfer->Params.num5 + 32.0f*transfer->Params.num4*transfer->Params.T - 16.0f*transfer->Params.num3*transfer->Params.T*transfer->Params.T - 8.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 10.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[3] = -320.0f*transfer->Params.num5 + 32.0f*transfer->Params.num4*transfer->Params.T + 16.0f*transfer->Params.num3*transfer->Params.T*transfer->Params.T - 8.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T*transfer->Params.T - 4.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 10.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[4] = 160.0f*transfer->Params.num5 - 48.0f*transfer->Params.num4*transfer->Params.T + 8.0f*transfer->Params.num3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T*transfer->Params.T - 6.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 5.0f*transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_num[5] = -32.0f*transfer->Params.num5 + 16.0f*transfer->Params.num4*transfer->Params.T - 8.0f*transfer->Params.num3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.num2*transfer->Params.T*transfer->Params.T*transfer->Params.T - 2.0f*transfer->Params.num1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.num0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    
    
    transfer->Data.data_den[0] = 32.0f*transfer->Params.den5 + 16.0f*transfer->Params.den4*transfer->Params.T + 8.0f*transfer->Params.den3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T*transfer->Params.T + 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[1] = -160.0f*transfer->Params.den5 - 48.0f*transfer->Params.den4*transfer->Params.T - 8.0f*transfer->Params.den3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T*transfer->Params.T + 6.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 5.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[2] = 320.0f*transfer->Params.den5 + 32.0f*transfer->Params.den4*transfer->Params.T - 16.0f*transfer->Params.den3*transfer->Params.T*transfer->Params.T - 8.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 10.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[3] = -320.0f*transfer->Params.den5 + 32.0f*transfer->Params.den4*transfer->Params.T + 16.0f*transfer->Params.den3*transfer->Params.T*transfer->Params.T - 8.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T*transfer->Params.T - 4.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 10.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[4] = 160.0f*transfer->Params.den5 - 48.0f*transfer->Params.den4*transfer->Params.T + 8.0f*transfer->Params.den3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T*transfer->Params.T - 6.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + 5.0f*transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    transfer->Data.data_den[5] = -32.0f*transfer->Params.den5 + 16.0f*transfer->Params.den4*transfer->Params.T - 8.0f*transfer->Params.den3*transfer->Params.T*transfer->Params.T + 4.0f*transfer->Params.den2*transfer->Params.T*transfer->Params.T*transfer->Params.T - 2.0f*transfer->Params.den1*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T + transfer->Params.den0*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T*transfer->Params.T;
    
    // 初始化为零
    transfer->Data.i[0] = 0.0f;
    transfer->Data.i[1] = 0.0f;
    transfer->Data.i[2] = 0.0f;
    transfer->Data.i[3] = 0.0f;
    transfer->Data.i[4] = 0.0f;

    transfer->Data.o[0] = 0.0f;
    transfer->Data.o[1] = 0.0f;
    transfer->Data.o[2] = 0.0f;
    transfer->Data.o[3] = 0.0f;
    transfer->Data.o[4] = 0.0f;

    transfer->In.Input = 0.0f;
    transfer->Out.Output = 0.0f;
}

void Transfer_Init_INTEGRATOR(__INTEGRATOR_STRUCT *integrator){

}

void Transfer_Init_DERIVATIVE(__DERIVATIVE_STRUCT *derivative){

}

void Transfer_Init_LADRC1(__LADRC1_STRUCT *ladrc){

}

void Transfer_Init_LADRC2(__LADRC2_STRUCT *ladrc){

}

void Transfer_Init_SMC(__SMC_STRUCT *smc){

}

void Transfer_Init_DPCC(__DPCC_STRUCT *dpcc){

}

void Transfer_Init_PIR(__PIR_STRUCT *pir){

}

void Transfer_Init_PID(__PID_STRUCT *pid){

}

void Transfer_Init_PLL(__PLL_STRUCT *pll){

}

void Transfer_Init_LPF1(__LPF1_STRUCT *lpf){

}

void Transfer_Init_LPF2(__LPF2_STRUCT *lpf){

}

void Transfer_Init_HPF1(__HPF1_STRUCT *hpf){

}

void Transfer_Init_HPF2(__HPF2_STRUCT *hpf){

}

void Transfer_Init_BPF1(__BPF1_STRUCT *bpf){

}

void Transfer_Init_BPF2(__BPF2_STRUCT *bpf){

}

void Transfer_Init_NF(__NF_STRUCT *nf){

}

void Transfer_Init_TPNF(__TPNF_STRUCT *tpnf){

}

void Transfer_Init_DOB(__DOB_STRUCT *dob){

}

void Transfer_Init_RLS(__RLS_STRUCT *rls){

}

void Transfer_Init_SMO(__SMO_STRUCT *smo){

}

void Transfer_Init_NLFO(__NLFO_STRUCT *nlfo){

}

void Transfer_Init_HFI(__HFI_STRUCT *hfi){

}

void Transfer_Init_MARS(__MARS_STRUCT *mars){

}

void Transfer_Init_EKF(__EKF_STRUCT *ekf){

}

void Transfer_ReInit_Integrator(void *p){

}

