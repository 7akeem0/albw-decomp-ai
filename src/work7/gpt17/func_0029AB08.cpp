#include "range.h"
struct Child {virtual bool v0(u32);virtual bool v1(u32);virtual bool v2(u32);virtual bool v3(u32);virtual bool v4(u32);virtual bool v5(u32);virtual bool v6(u32);virtual bool v7(u32);virtual bool v8(u32);virtual bool v9(u32);virtual bool v10(u32);virtual bool v11(u32);virtual bool v12(u32);virtual bool v13(u32);virtual bool v14(u32);};
struct Obj {u8 pad[0x43c];Child*child;u8 pad440[0x460-0x440];u8 flag;};
void f_0029AB08(Obj*p){if(p->flag&&p->child->v14(0))p->flag=0;}
