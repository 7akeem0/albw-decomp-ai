#include "range.h"
struct S {virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9(); virtual u32 query(u32);char pad[0x48];u8 flag;};
u32 f_00489F08(S* p,u32 arg){if(!p->flag)return 0;return p->query(arg);}
