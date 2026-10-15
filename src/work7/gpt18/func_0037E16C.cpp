#include "range.h"
struct OE16 {u8 pad[0x1c];u32 word;u8 a[4];f32 max;u8 b[0xc];f32 value;};
extern "C" void func_0037E16C(OE16*p){p->word=0;p->max=3.402823466e38f;p->value=0.f;}
