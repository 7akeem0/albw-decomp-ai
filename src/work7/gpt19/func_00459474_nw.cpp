#include "range.h"
struct Owner59474 {u8 data[0x17C];s32 state;};
extern "C" bool sub_00532C78(void*);
extern "C"  void sub_0066D544(s32*,u32);
extern "C" void f_00459474(Owner59474*s){if(!sub_00532C78(s->data+0xF8)&&!sub_00532C78(s->data+0x11C))sub_0066D544(&s->state,6);}
