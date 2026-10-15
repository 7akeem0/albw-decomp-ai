#include "range.h"
inline void bit1BB(u32 word,BitFlag*a,u32 bit,bool on,u32 one){u32*p=&a[word].v;u32 old=*p;u32 m=one<<bit;if(on)old|=m;else old&=~m;*p=old;}void f1BB8F4(Obj1BB7*p,u32 n,bool on){bit1BB(n>>5,p->b,n&31,on,1);}
