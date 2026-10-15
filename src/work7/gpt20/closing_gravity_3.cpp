#include "ladder_types.h"
f32 mx(f32 a,const f32&b){if(a<b)return b;return a;}
void f_004F8964(f32*p,bool clamp,f32 g){f32 n=*p-g;if(clamp)n=mx(n,-.2f);*p=n;}
