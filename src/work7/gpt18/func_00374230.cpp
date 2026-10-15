#include "range.h"
struct O{char pad[0x9d0];u8 index;};extern const u8 ro_006A01C8[];extern char data_0070ECA8[];extern void func_006533D8(O*,void*,u8,void*,s32);void f(O*p,void*q){u8 n=ro_006A01C8[p->index];func_006533D8(p,q,n,data_0070ECA8,0);}
