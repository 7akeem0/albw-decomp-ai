#include "range.h"
struct VDE1 {u32 x,y,z;};struct PDE1 {u8 pad[0x10];VDE1 value;};struct ODE1 {u8 pad[0x478];VDE1 value;u8 gap[0x509-0x484];u8 flag;};
extern "C" bool func_0039DE10(ODE1*p,PDE1*q){p->flag=1;p->value=q->value;return true;}
