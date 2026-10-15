#include "range.h"
struct S{u8 pad[3];u8 count;};float clamp(float t,float lo,float hi){if(t<lo)t=lo;else if(t>hi)t=hi;return t;}
float target(S*p,const float*values,float t){t=clamp(t,0.0f,1.0f);s32 index=(s32)((p->count-1)*t);return values[index];}
