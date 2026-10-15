#include "range.h"
struct SlotOwner {u8 pad[0x40c];u32 model;};
struct Slot {SlotOwner* owner;s8 mode,current,pending;u8 pad;u8 gate8,gate9;u8 tail[2];};
extern u32 func_00537B18(u32*,s32);
void f_002D4434(Slot*p){if(func_00537B18(&p->owner->model,p->current)==0)p->current=-1;}
