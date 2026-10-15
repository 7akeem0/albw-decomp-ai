#include "range.h"
struct Obj {u8 pad[0x454];u32 state;u8 flag;u8 gap[0x494-0x459];u32 timer;};
extern void func_00664C50(u32*,s32);
bool f_00315930(Obj*p){if(p->flag)p->timer=0;else func_00664C50(&p->state,1);return true;}
