#include "range.h"
struct Owner5A538 {u8 data[0x17C];s32 state;};
extern "C" bool sub_00532C78(void*);
extern "C"  void sub_0066D544(s32*,u32);
extern "C" void f_0045A538(Owner5A538*s){if(!sub_00532C78(s->data+0x140)&&!sub_00532C78(s->data+0xF8))sub_0066D544(&s->state,21);}
