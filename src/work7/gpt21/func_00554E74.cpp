#include "range.h"
struct S{char pad[0x20];u8 flag;char pad21[0x1bc-0x21];f32 value;};
f32 f_554E74(const S*p){if(!p->flag)return -1.0f;return p->value;}
