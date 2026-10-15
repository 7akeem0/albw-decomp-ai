#include "range.h"
struct Virtual252824{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4(s32);};
struct Obj252824{char pad[0x4f4];Virtual252824*model;char pad4f8[0x520-0x4f8];void*child;char pad524[0x570-0x524];u32 value;char pad574[0x898-0x574];u8 flag;};
extern void func_00151148(void*,s32);
extern void func_003249B4(Obj252824*);
extern "C" void target(Obj252824*p){p->flag=1;p->value=0;p->model->v4(36);func_00151148(p->child,0);func_003249B4(p);}
