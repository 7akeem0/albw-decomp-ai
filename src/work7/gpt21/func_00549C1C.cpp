#include "range.h"
struct S{char pad[0x28];u8 mode;char pad29[0x54-0x29];u32 value;};
bool f_549C1C(const S*p,u32*out){if(p->mode==10||p->mode==11){*out=p->value;return true;}return false;}
