#include "range.h"
f32 target(f32 x,f32 x0,f32 y0,f32 t0,f32 x1,f32 y1,f32 t1){x-=x0;x1-=x0;f32 u=x/x1;f32 u2=u*u;f32 q=u*u-u;f32 r=q*u;f32 w=u2-r*2.0f;f32 h=r-q;y0-=w*y0;y0+=w*y1;y0+=h*t0;y0+=r*t1;return y0;}
