#include "range.h"
struct OE438 {u8 pad[7];u8 flags;u8 gap[0x60];void*child;};
extern "C" void func_003E1210(void*,u8);
extern "C" void func_003E11F0(OE438*p,bool on){if(on)p->flags|=1;else p->flags&=~1;func_003E1210(p->child,p->flags);}

