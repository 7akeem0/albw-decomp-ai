#include "range.h"
inline s32 rounded(f32 value,f32 half,f32 zero,f32 scale){value*=scale;if(value>=zero)value+=half;else value-=half;return(s32)value;}
s32 func_00429F94(f32 value){return rounded(value,0.5f,0.0f,60.0f);}
