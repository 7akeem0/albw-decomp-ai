#include "range.h"
struct Owner457{u8 pad[0x17c];u32 state;u8 gap180[0x214-0x180];u32 first;u8 gap218[0x230-0x218];u32 second;};
extern "C" void*data_00711DE8;
extern "C" bool func_004C3798(void*,u32,u32);
extern "C" __attribute__((weak)) void func_0066D544(void*,s32);
void func_00457F88(Owner457*p){if(func_004C3798(data_00711DE8,p->second,p->first))func_0066D544(&p->state,26);}
