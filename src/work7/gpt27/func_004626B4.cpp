#include "range.h"
extern void func_00232468(void*);extern void func_00231524(void*);extern void func_00462760(void*);
struct Obj462 {u8 pad[0x20];Ctrl231 ctrl;u8 pad2c[0x90-0x2c];u32 value;};
void func_004626B4(Obj462* p){func_00232468(p);func_00231524(&p->ctrl);func_00462760(p);p->value=0;}
