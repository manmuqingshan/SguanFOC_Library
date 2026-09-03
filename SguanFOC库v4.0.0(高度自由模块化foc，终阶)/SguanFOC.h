#ifndef __SGUANFOC_H
#define __SGUANFOC_H

#include "Sguan_Function.h"
#include "Sguan_math.h"
#include "Sguan_printf.h"
#include "Sguan_Transfer.h"

typedef struct{
    void (*Func_Start)(void);
}__MOTOR_FUNCTION_STRUCT;

typedef struct{
    #if CONFIG_TRANSFER1 // 典型一阶传递函数
    __TRANSFER1_STRUCT  Transfer1_CH[CONFIG_TRANSFER1];
    #endif // CONFIG_TRANSFER1

    #if CONFIG_TRANSFER2 // 典型二阶传递函数
    __TRANSFER2_STRUCT  Transfer2_CH[CONFIG_TRANSFER2];
    #endif // CONFIG_TRANSFER2

    #if CONFIG_TRANSFER3 // 典型三阶传递函数
    __TRANSFER3_STRUCT  Transfer3_CH[CONFIG_TRANSFER3];
    #endif // CONFIG_TRANSFER3

    #if CONFIG_TRANSFER4 // 典型四阶传递函数
    __TRANSFER4_STRUCT  Transfer4_CH[CONFIG_TRANSFER4];
    #endif // CONFIG_TRANSFER4

    #if CONFIG_TRANSFER5 // 典型五阶传递函数
    __TRANSFER5_STRUCT  Transfer5_CH[CONFIG_TRANSFER5];
    #endif // CONFIG_TRANSFER5

    #if CONFIG_INTEGRATOR // 积分器
    __INTEGRATOR_STRUCT Integrator_CH[CONFIG_INTEGRATOR];
    #endif // CONFIG_INTEGRATOR

    #if CONFIG_DERIVATIVE // 微分器
    __DERIVATIVE_STRUCT Derivative_CH[CONFIG_DERIVATIVE];
    #endif // CONFIG_DERIVATIVE

    #if CONFIG_LADRC1 // 一阶线性自适应抗干扰控制
    __LADRC1_STRUCT     Ladrc1_CH[CONFIG_LADRC1];
    #endif // CONFIG_LADRC1

    #if CONFIG_LADRC2 // 二阶线性自适应抗干扰控制
    __LADRC2_STRUCT     Ladrc2_CH[CONFIG_LADRC2];
    #endif // CONFIG_LADRC2

    #if CONFIG_SMC // 传统指数型趋近率的滑模控制
    __SMC_STRUCT        Smc_CH[CONFIG_SMC];
    #endif // CONFIG_SMC

    #if CONFIG_DPCC // 增量式电流预测控制
    __DPCC_STRUCT       Dpcc_CH[CONFIG_DPCC];
    #endif // CONFIG_DPCC

    #if CONFIG_PIR // 比例积分谐振调节器
    __PIR_STRUCT        Pir_CH[CONFIG_PIR];
    #endif // CONFIG_PIR

    #if CONFIG_PID // 传统闭环控制器
    __PID_STRUCT        Pid_CH[CONFIG_PID];
    #endif // CONFIG_PID

    #if CONFIG_PLL // 开环锁相环
    __PLL_STRUCT        Pll_CH[CONFIG_PLL];
    #endif // CONFIG_PLL

    #if CONFIG_LPF1 // 一阶低通滤波器
    __LPF1_STRUCT       Lpf1_CH[CONFIG_LPF1];
    #endif // CONFIG_LPF1

    #if CONFIG_LPF2 // 二阶低通滤波器
    __LPF2_STRUCT       Lpf2_CH[CONFIG_LPF2];
    #endif // CONFIG_LPF2

    #if CONFIG_HPF1 // 一阶高通滤波器
    __HPF1_STRUCT       Hpf1_CH[CONFIG_HPF1];
    #endif // CONFIG_HPF1

    #if CONFIG_HPF2 // 二阶高通滤波器
    __HPF2_STRUCT       Hpf2_CH[CONFIG_HPF2];
    #endif // CONFIG_HPF2

    #if CONFIG_BPF1 // 带通滤波器(一阶低通和高通串联)
    __BPF1_STRUCT       Bpf1_CH[CONFIG_BPF1];
    #endif // CONFIG_BPF1

    #if CONFIG_BPF2 // 带通滤波器(典型二阶系统改型)
    __BPF2_STRUCT       Bpf2_CH[CONFIG_BPF2];
    #endif // CONFIG_BPF2

    #if CONFIG_NF // 陷波滤波器(典型二阶系统改型)
    __NF_STRUCT         Nf_CH[CONFIG_NF];
    #endif // CONFIG_NF

    #if CONFIG_TPNF // 陷波滤波器(三参数陷波滤波器)
    __TPNF_STRUCT       Tpnf_CH[CONFIG_TPNF];
    #endif // CONFIG_TPNF

    #if CONFIG_DOB // 超螺旋滑模扰动观测器
    __DOB_STRUCT        Dob_CH[CONFIG_DOB];
    #endif // CONFIG_DOB

    #if CONFIG_RLS // 电机参数在线辨识观测器
    __RLS_STRUCT        Rls_CH[CONFIG_RLS];
    #endif // CONFIG_RLS

    #if CONFIG_SMO // (无感)滑模观测器
    __SMO_STRUCT        Smo_CH[CONFIG_SMO];
    #endif // CONFIG_SMO

    #if CONFIG_NLFO // (无感)非线性磁链观测器
    __NLFO_STRUCT       Nlfo_CH[CONFIG_NLFO];
    #endif // CONFIG_NLFO

    #if CONFIG_HFI // (无感)高频正弦波注入
    __HFI_STRUCT        Hfi_CH[CONFIG_HFI];
    #endif // CONFIG_HFI

    #if CONFIG_ROLO // (无感)降阶龙伯格观测器
    __ROLO_STRUCT       Rolo_CH[CONFIG_ROLO];
    #endif // CONFIG_ROLO

    #if CONFIG_MARS // (无感)模型参考自适应观测器
    __MARS_STRUCT       Mars_CH[CONFIG_MARS];
    #endif // CONFIG_MARS

    #if CONFIG_EKF // (无感)扩展卡尔曼滤波
    __EKF_STRUCT        Ekf_CH[CONFIG_EKF];
    #endif // CONFIG_EKF

    #if CONFIG_DELAY1 // 延时函数(延时一拍)
    __DELAY1_STRUCT     Delay1_CH[CONFIG_DELAY1];
    #endif // CONFIG_DELAY1

    #if CONFIG_DELAY2 // 延时函数(延时两拍)
    __DELAY2_STRUCT     Delay2_CH[CONFIG_DELAY2];
    #endif // CONFIG_DELAY2

    #if CONFIG_DELAY3 // 延时函数(延时三拍)
    __DELAY3_STRUCT     Delay3_CH[CONFIG_DELAY3];
    #endif // CONFIG_DELAY3

    __Sine_STRUCT       Sine;                   // (单一功能模块)正弦发生器
    __Cosine_STRUCT     Cosine;                 // (单一功能模块)余弦发生器
    __Sign_STRUCT       Sign;                   // (单一功能模块)符号函数
    __clarke_STRUCT     clarke;                 // (单一功能模块)克拉克变换
    __park_STRUCT       park;                   // (单一功能模块)帕克变换
    __ipark_STRUCT      ipark;                  // (单一功能模块)帕克逆变换
    __SPWM0_STRUCT      SPWM0;                  // (单一功能模块)零序注入的SPWM模块
    __SPWM_STRUCT       SPWM;                   // (单一功能模块)普通SPWM模块
    __SVPWM_STRUCT      SVPWM;                  // (单一功能模块)七段式SVPWM模块
    __SingleRs_STRUCT   SingleRs;               // (单一功能模块)单电阻采样函数
}__MOTOR_TRANSFER_STRUCT;

typedef struct{
    #if CONFIG_Float // 浮点数
    Sguan_t             Float_CH[CONFIG_Float];
    #endif // CONFIG_Float

    #if CONFIG_Int8 // 8位数据
    int8_t              Int8_CH[CONFIG_Int8];
    #endif // CONFIG_Int8

    #if CONFIG_Uint8 // 8位数据
    uint8_t             Uint8_CH[CONFIG_Uint8];
    #endif // CONFIG_Uint8

    #if CONFIG_Int16 // 16位数据
    int16_t             Int16_CH[CONFIG_Int16];
    #endif // CONFIG_Int16

    #if CONFIG_Uint16 // 16位数据
    uint16_t            Uint16_CH[CONFIG_Uint16];
    #endif // CONFIG_Uint16

    #if CONFIG_Int32 // 32位数据
    int32_t             Int32_CH[CONFIG_Int32];
    #endif // CONFIG_Int32

    #if CONFIG_Uint32 // 32位数据
    uint32_t            Uint32_CH[CONFIG_Uint32];
    #endif // CONFIG_Uint32

    uint8_t Response;                           // (环路倍率)内外环控制倍率

    Sguan_t Num_Delta;                          // (固化参数)速度增减判断
    Sguan_t Num_Abs;                            // (固化参数)速度绝对值

    Sguan_t Num_L0;                             // (固化参数)速度段0标定
    Sguan_t Num_LA;                             // (固化参数)速度段A标定
    Sguan_t Num_LB;                             // (固化参数)速度段B标定
    Sguan_t Num_LC;                             // (固化参数)速度段C标定
    Sguan_t Num_LD;                             // (固化参数)速度段D标定

    Sguan_t Num_High_Data;                      // (数据)高位观测器数值
    Sguan_t Num_Low_Data;                       // (数据)低位观测器数值
}__MOTOR_VALUE_STRUCT;

typedef struct{
    Sguan_t Target_Speed;                       // (期望速度)Target期望机械角速度
    Sguan_t Target_Pos;                         // (期望角度)Target期望机械角度
    Sguan_t Target_Id;                          // (期望电流)期望D轴电流
    Sguan_t Target_Iq;                          // (期望电流)期望Q轴电流
    Sguan_t Target_Ud;                          // (期望电压)期望D轴电压
    Sguan_t Target_Uq;                          // (期望电压)期望Q轴电压

    Sguan_t Speed_in;                           // (输入量end)速度环输入值
    Sguan_t Ud_in;                              // (输入量end)D轴电压输入
    Sguan_t Uq_in;                              // (输入值end)Q轴电压输入

    // ================= 修改线(上面可修改，下面为自动计算量) =================
    Sguan_t Ualpha;                             // (中间量)alpha轴电压
    Sguan_t Ubeta;                              // (中间量)beta轴电压

    Sguan_t Du;                                 // (数据)U相占空比输入0~1
    Sguan_t Dv;                                 // (数据)V相占空比输入0~1
    Sguan_t Dw;                                 // (数据)W相占空比输入0~1

    Sguan_t sine;                               // (数据)sine临时保存的正弦值
    Sguan_t cosine;                             // (数据)cosine临时保存的余弦值

    Sguan_t Real_VBUS;                          // (数据)Real实际的电机母线电压
    Sguan_t Real_Temp;                          // (数据)Temp实际的驱动器物理温度
}__MOTOR_FOC_STRUCT;

typedef struct{
    Sguan_t Real_Id;                            // (Current电流)Real实际D轴电流
    Sguan_t Real_Iq;                            // (Current电流)Real实际Q轴电流

    Sguan_t Real_Ia;                            // (Current相电流)A相电流
    Sguan_t Real_Ib;                            // (Current相电流)B相电流
    Sguan_t Real_Ic;                            // (Current相电流)C相电流

    Sguan_t Real_Ialpha;                        // (Current中间量电流)alpha轴电流
    Sguan_t Real_Ibeta;                         // (Current中间量电流)beta轴电流

    Sguan_t Final_Gain;                         // (ADC增益)最终的ADC电流采样增益
    int32_t Current_offset0;                    // (Current电流偏置)offset偏置位
    int32_t Current_offset1;                    // (Current电流偏置)offset偏置位
}__MOTOR_CURRENT_STRUCT;

typedef struct{
    Sguan_t Rs;                                 // (电机实体参数)Rs相电阻参数
    Sguan_t Ld;                                 // (电机实体参数)Ld电感参数
    Sguan_t Lq;                                 // (电机实体参数)Lq电感参数
    Sguan_t Flux;                               // (电机实体参数)Flux磁链参数

    uint8_t Poles;                              // (电机实体参数)电机极对数
    Sguan_t VBUS;                               // (电机实体参数)母线电压

    int8_t Motor_Dir;                           // (参数设计)电机的运行方向设计
    int8_t Encoder_Dir;                         // (有感实体参数)编码器方向
    int8_t PWM_Dir;                             // (参数设计)PWM占空比高低对应
    uint32_t Duty;                              // (参数设计)PWM满占空比

    int8_t Current_Dir0;                        // (参数设计)电流采样方向0
    int8_t Current_Dir1;                        // (参数设计)电流采样方向1
    uint8_t Current_Num;                        // (参数设计)电流通道0->AB相，1->AC相，2->BC相
    uint32_t ADC_Precision;                     // (参数设计)ADC采样精度,如12位精度为4096
    Sguan_t Amplifier;                          // (参数设计)运放的放大倍数
    Sguan_t MCU_Voltage;                        // (参数设计)DSP/单片机的ADC基准电压
    Sguan_t Sampling_Rs;                        // (参数设计)采样电阻的阻值大小
}__MOTOR_MASTER_STRUCT;

typedef struct{
    uint8_t Run;

    uint8_t Mode;
    uint8_t Status;
    uint8_t Flag;

    __MOTOR_TRANSFER_STRUCT Transfer;
    __MOTOR_VALUE_STRUCT Value;
    __MOTOR_FOC_STRUCT Foc;
}SguanFOC_STRUCT;


#endif // SGUANFOC_H
