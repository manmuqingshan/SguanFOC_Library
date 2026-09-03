#ifndef __SGUAN_CONFIG_H
#define __SGUAN_CONFIG_H

#include "Sguan_IQmath.h"
#include "Sguan_Math.h"
#include "UnitLib_Config.h"
#include "UserData_Config.h"


// ======================== Transfer模块使用 宏定义 =========================
#define CONFIG_TRANSFER1    CODE_Define_TRANSFER1
#define CONFIG_TRANSFER2    CODE_Define_TRANSFER2
#define CONFIG_TRANSFER3    CODE_Define_TRANSFER3
#define CONFIG_TRANSFER4    CODE_Define_TRANSFER4
#define CONFIG_TRANSFER5    CODE_Define_TRANSFER5
#define CONFIG_INTEGRATOR   CODE_Define_INTEGRATOR
#define CONFIG_DERIVATIVE   CODE_Define_DERIVATIVE
#define CONFIG_LADRC1       CODE_Define_LADRC1
#define CONFIG_LADRC2       CODE_Define_LADRC2
#define CONFIG_SMC          CODE_Define_SMC
#define CONFIG_DPCC         CODE_Define_DPCC
#define CONFIG_PIR          CODE_Define_PIR
#define CONFIG_PID          CODE_Define_PID
#define CONFIG_PLL          CODE_Define_PLL
#define CONFIG_LPF1         CODE_Define_LPF1
#define CONFIG_LPF2         CODE_Define_LPF2
#define CONFIG_HPF1         CODE_Define_HPF1
#define CONFIG_HPF2         CODE_Define_HPF2
#define CONFIG_BPF1         CODE_Define_BPF1
#define CONFIG_BPF2         CODE_Define_BPF2
#define CONFIG_NF           CODE_Define_NF
#define CONFIG_TPNF         CODE_Define_TPNF
#define CONFIG_DOB          CODE_Define_DOB
#define CONFIG_RLS          CODE_Define_RLS
#define CONFIG_SMO          CODE_Define_SMO
#define CONFIG_NLFO         CODE_Define_NLFO
#define CONFIG_HFI          CODE_Define_HFI
#define CONFIG_ROLO         CODE_Define_ROLO
#define CONFIG_MARS         CODE_Define_MARS
#define CONFIG_EKF          CODE_Define_EKF
#define CONFIG_DELAY1       CODE_Define_DELAY1
#define CONFIG_DELAY2       CODE_Define_DELAY2
#define CONFIG_DELAY3       CODE_Define_DELAY3

// ======================== Value模块使用 宏定义 =========================
#define CONFIG_Float        CODE_Define_Float
#define CONFIG_Int8         CODE_Define_Int8
#define CONFIG_Uint8        CODE_Define_Uint8
#define CONFIG_Int16        CODE_Define_Int16
#define CONFIG_Uint16       CODE_Define_Uint16
#define CONFIG_Int32        CODE_Define_Int32
#define CONFIG_Uint32       CODE_Define_Uint32
// ======================== Value模块使用 宏定义 =========================
// #define CONFIG_IQmath       DATA_Define_IQmath
#define CONFIG_Q31          IQmath_Define_Q31
#define CONFIG_Q15          IQmath_Define_Q15


// ======================== 控制系统离散周期 宏定义 =========================
#define PMSM_RUN_T          TIM_T                       // 系统离散运行时间


#endif // SGUAN_CONFIG_H
