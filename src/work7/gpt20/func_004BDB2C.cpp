#include "ladder_types.h"
struct Input4BDB {char pad0[0x54];u16 kind;u16 pad56;f32 first;u32 pad5C;f32 second;};
extern "C" void func_004BDB2C(void*,Input4BDB*q,f32 value){if(!q)return;switch(q->kind){case 6:q->first=value;break;case 7:q->first=value*2.f;q->second=value*2.f;break;}}
