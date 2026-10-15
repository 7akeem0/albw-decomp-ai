#include "../../range.h"
extern const f32 ro_006A3890[721];f32 lookup(s16 index){s32 i=index+360;if(i<0)i=0;else if(i>720)i=720;return ro_006A3890[i];}f32 func_0014A124(f32 value){return lookup((s16)(s32)(value*10.0f));}
