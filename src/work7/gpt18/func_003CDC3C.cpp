#include "range.h"
extern u8 bss_007A0670[];struct P{void* v;P(void*p):v(p){}operator void*()const{return v;}};extern void func_001082BC(P,void*,u32,u32);void func_003CDC3C(void*p,u32 n){func_001082BC(P(bss_007A0670),p,n,0x1000);}
