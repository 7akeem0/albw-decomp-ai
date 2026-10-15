#include "range.h"
struct Owner424D{u8 pad[0x79];u8 active;};
extern "C" void func_00232478(Owner424D*);
extern "C"  void func_0066C0CC(void*,s32);
void func_00424DD8(Owner424D*p){func_00232478(p);if(p->active)func_0066C0CC((u8*)p+0x20,2);else func_0066C0CC((u8*)p+0x20,0);}
