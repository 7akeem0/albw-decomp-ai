#include "ladder_types.h"
struct O4EB4{char pad0[0x4c];void* child;char pad50[0x2b];u8 gate;char pad7c[3];u8 flag;};
extern void func_002972A0(void*,u32);
void f_004EB4A4(O4EB4* p){if(!p->gate){p->flag=1;return;}func_002972A0(p->child,0);}
