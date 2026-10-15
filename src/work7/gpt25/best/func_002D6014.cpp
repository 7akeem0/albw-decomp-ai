#include "../range_types.h"
struct Obj2D6014{u32 pad;u16 kind;};
extern void*data_00711F50;
extern "C" void func_002DEEF8(void*,s32);
extern "C" void func_004EBC08(void*);
extern "C" void f_002D6014(Obj2D6014*p){if(p->kind==95){func_002DEEF8(data_00711F50,0);func_004EBC08(data_00711F50);}}
