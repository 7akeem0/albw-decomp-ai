#include "range.h"
struct Owner2210C {u8 data[0xE2];u8 active;};
extern "C" void sub_001B6C04(void*);
extern "C" void sub_0031BEC0(void*,u32);
extern "C" void sub_00231340(void*);
extern "C" void f_0042210C(Owner2210C*s){sub_001B6C04(s);sub_0031BEC0(s->data+0x78,0);if(s->active){sub_00231340(s->data+0x20);s->active=0;}}
