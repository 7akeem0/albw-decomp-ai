#include "range.h"
struct Child77E98 {u8 data[0x20];};
struct Owner77E98 {u8 data[0x200];Child77E98*child;u8 gap[0x308-0x204];s8 mode;};
extern "C" void sub_0066BF2C(void*,u32);
extern "C" void sub_0047A260(void*,s8);
extern "C"  void sub_0066E7A0(void*,s8);
extern "C" void f_00477E98(Owner77E98*s){sub_0066BF2C(s->child->data+0x20,0);sub_0047A260(s,s->mode);sub_0066E7A0(s->data+0xF0,0);}
