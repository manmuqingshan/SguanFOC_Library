#ifndef __SGUAN_MATH_H
#define __SGUAN_MATH_H

#include <stdint.h>

#define Value_2PI           6.283185307179586f      // 2pi的数值
#define Value_PI_2          1.570796326794896f      // 二分之pi


// 快速正余弦求解float版本
float fast_sin(float x);
#define fast_cos(x) fast_sin(Value_PI_2 - x);
void fast_sin_cos(float x, float *sin_x, float *cos_x);
float fast_tan(float x);
float fast_atan(float x);



#endif // SGUAN_MATH_H
