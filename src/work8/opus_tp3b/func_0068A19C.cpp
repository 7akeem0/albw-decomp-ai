#include "../../work7/gpt22/range.h"
struct CurveHeader22{u8 unknown[3];u8 count;};

f32 target(CurveHeader22*h,const f32*p,f32 t){
Counter22 n(h->count/2);
s32 last=Counter22(n*2)-2;
if(p[0]>=t)return p[1];
if(p[last]<=t)return p[last+1];
for(Counter22 i(0);i<n;++i){Counter22 index(i*2);if(p[index+2]>t)return p[index+1]+(p[index+3]-p[index+1])*((t-p[index])/(p[index+2]-p[index]));}
return 0.0f;
}
