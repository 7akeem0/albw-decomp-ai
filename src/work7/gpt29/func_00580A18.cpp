#include "range.h"
struct W{u32 v;};W sum(u32 a,u32 b){W w={(u32)((unsigned long long)a+b)};return w;}struct I{u32 start,size;};struct O{char pad[0x78];I r;};bool f(O*p,u32 v){u32 size=p->r.size;u32 start=p->r.start;W e=sum(size,start);return v>=start&&e.v>v;}
