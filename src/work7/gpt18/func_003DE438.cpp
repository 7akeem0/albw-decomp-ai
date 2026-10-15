#include "range.h"
struct OE438 {u8 pad[7];u8 flags;u8 gap[0x60];void*child;};
extern "C" void func_003E1210(void*,u8);
extern "C" void func_003DE438(OE438*p,bool on){if(on)p->flags|=2;else p->flags&=~2;func_003E1210(p->child,p->flags);}
