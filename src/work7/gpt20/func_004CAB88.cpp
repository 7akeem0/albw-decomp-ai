#include "ladder_types.h"
struct O4CAB {char pad0[0x8bc];u32 count;};
extern "C" void func_004C90E8(O4CAB*);
extern "C" void func_004CABC0(O4CAB*);
extern "C" __weak void func_0066A284(void*,u32);
extern "C" void func_004CAB88(O4CAB*p){func_004C90E8(p);if(p->count>=300)func_0066A284(&p->count,5);else func_004CABC0(p);}
