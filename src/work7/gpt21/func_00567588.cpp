#include "range.h"
struct P{f32 a,b;P(const f32&x):a(x){}P*set(f32 y){b=y;return this;}};extern void func_0068FDFC(void*,void*,void*,void*,const P*);inline void apply(void*a,void*b,void*c,void*d,const f32&frame,f32 rate){P p(frame);func_0068FDFC(a,b,c,d,p.set(rate));}void f_567588(void*a,void*b,void*c,void*d,f32 frame,const f32*rate){apply(a,b,c,d,frame,*rate);}
