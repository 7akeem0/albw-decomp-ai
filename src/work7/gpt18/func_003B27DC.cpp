#include "range.h"
struct C27D {u8 pad[0xb10];u32 value;};struct O27D {u8 p[0x48];C27D*child;u8 q[0x90-0x4c];u32 value;};
extern "C" void func_003B2808(O27D*);
extern "C" void func_003B27DC(O27D*p){func_003B2808(p);p->value=0;p->child->value=0;}
