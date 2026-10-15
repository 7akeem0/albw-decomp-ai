#include "range.h"
struct Arg {u32 opaque;};
struct Sub {
virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();
virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();
virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void target(s32,const Arg&);
};
struct Obj {u8 pad[0x34];Sub* child;u8 p38[0xb4];Arg arg;};
void f_002AB92C(Obj* p){p->child->target(0,p->arg);}
