#include "ladder_types.h"
struct Object4A59{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual bool ready();char pad4[0x1c];u32 state;};
extern void func_0066F90C(void*,s32);
void target(Object4A59*p){if(p->ready())func_0066F90C(&p->state,2);}
