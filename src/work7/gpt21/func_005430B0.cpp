#include "range.h"
struct S{char pad[0x24];u8 value;};f32 f(void*a,void*b,S*p,u32*out){if(p->value==6){*out=15;return 0.5f;}return 1.f;}
