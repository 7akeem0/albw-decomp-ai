#include "../../range.h"
struct C{char pad[0x168];u32 f;u32 change(bool b){u32 x=f;if(b)x|=7;else x&=~7u;f=x;return x;}};struct S{char pad[0x1c];C*p;};extern "C" u32 func_0014A998(S*p,bool b){return p->p->change(b);}
