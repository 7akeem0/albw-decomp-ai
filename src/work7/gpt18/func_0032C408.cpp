#include "range.h"
struct OC408 {u8 p[0xc60];u32 value;u8 q[0xc93-0xc64];u8 flag;};
extern "C" void func_00328984(OC408*);
extern "C" void func_0032C408(OC408*p){p->flag=1;func_00328984(p);p->value=0;}
