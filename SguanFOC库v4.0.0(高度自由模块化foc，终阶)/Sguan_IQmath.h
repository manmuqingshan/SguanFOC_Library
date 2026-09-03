#ifndef __SGUAN_IQMATH_H
#define __SGUAN_IQMATH_H

#include <stdint.h>

// !!!这里定义整体IQmath算法是使用Q31还是Q15
#include "UserData_Config.h"
#define CONFIG_IQmath       DATA_Define_IQmath

// 定点化计算格式
typedef int16_t Q15_t;      // 1位符号+0位整数+15位小数
typedef int32_t Q31_t;      // 1位符号+0位整数+31位小数

#if DATA_Define_IQmath==0x01
typedef Q31_t               Sguan_t;
#elif DATA_Define_IQmath==0x02
typedef Q15_t               Sguan_t;
#else // CONFIG_IQmath
typedef float               Sguan_t;
#endif // CONFIG_IQmath

// ===================== Q31 常量定义 =====================
#define Q31_MAX         0x7FFFFFFF      // 表示最大值0.9999999995
#define Q31_MIN         0x80000000      // 表示最小值-1.0
#define Q31_HALF        0x40000000      // 表示0.5(特殊场景会用到)
// ===================== Q15 常量定义 =====================
#define Q15_MAX         0x7FFF          // 表示最大值0.9999694824
#define Q15_MIN         0x8000          // 表示最小值-1.0
#define Q15_HALF        0x4000          // 表示0.5(特殊场景会用到)

// Q的定点化公式计算
Sguan_t IQmath_Q_from_float(float f, float base_value);
float IQmath_Q_to_float(Sguan_t q, float base_value);
Sguan_t IQmath_Q_add(Sguan_t a, Sguan_t b);
Sguan_t IQmath_Q_sub(Sguan_t a, Sguan_t b);
Sguan_t IQmath_Q_mul(Sguan_t a, Sguan_t b);
Sguan_t IQmath_Q_div(Sguan_t a, Sguan_t b);
Sguan_t IQmath_Q_convert_base(Sguan_t q, float old_base, float new_base);


#endif // SGUAN_IQMATH_H
