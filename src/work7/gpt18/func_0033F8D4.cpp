#include "range.h"
struct O{char pad[0x2d7];u8 flag;char p2d8[0x458-0x2d8];s32 count;};void f(O*p){if((f32)p->count*0.01f>=2.5f)p->flag=1;}
