#include "range.h"
struct Owner5943C {u8 data[0x17C];s32 state;};
extern "C" bool sub_00532C78(void*);
extern "C"  void sub_0066D544(s32*,u32);
extern "C" void f_0045943C(Owner5943C*s){if(!sub_00532C78(s->data+0xF8)&&!sub_00532C78(s->data+0x11C))sub_0066D544(&s->state,10);}
