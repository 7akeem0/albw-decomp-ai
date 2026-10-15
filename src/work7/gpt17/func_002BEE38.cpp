#include "range.h"
struct Child {u8 pad[0x16];BitFlag16 flags;};
struct Obj {virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void finish();u8 pad[0x14-4];Child*child;u8 gap[0x5c-0x18];u8 active,flag;};
void f_002BEE38(Obj*p){if(p->active){Child*c=p->child;c->flags.setWrapped(0x40);}p->flag=0;p->finish();}
