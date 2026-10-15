#include "range.h"
struct Sub {virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void target();};
struct Obj {u8 pad[0x48];Sub* child;};
void f_0028FE4C(Obj* p){if(p->child)p->child->target();}
