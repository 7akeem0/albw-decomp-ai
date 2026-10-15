#include "ladder_types.h"
struct Word{s32 v;Word(s32 n):v(n){}};
s32 mn(s32 a,const s32&b){return a<b?a:b;}
void f_0051D37C(s32*p,s32 low,s32 high){s32 n=*p;if(n<low)*p=low;else *p=mn(high,n);}
