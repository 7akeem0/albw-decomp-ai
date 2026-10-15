#include "range.h"
struct G445 {u8 pad[0x2b4];u32 flags;};extern G445* data_0070D858;
extern "C" bool func_0014DDEC(void*);
extern "C" bool func_00334450(void*p){bool r=func_0014DDEC(p);if(data_0070D858->flags&8)r=true;return r;}
