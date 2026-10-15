#include "range.h"
extern void func_001B6DE0(void*);extern void func_00231448(void*);extern void func_003687AC(void*);extern void func_004B964C(void*);
struct Obj454 {u8 pad[0x98];void* child;u8 pad9c[0xbc-0x9c];Ctrl231 ctrl;};
void func_00454270(Obj454* p){func_001B6DE0(p);func_00231448(&p->ctrl);func_003687AC(p->child);func_004B964C(p);}
