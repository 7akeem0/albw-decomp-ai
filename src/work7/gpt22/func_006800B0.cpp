#include "range.h"
struct Pair{u32 a,b;};struct S{u8 head[0x10];Pair pair;u8 tail[0x48-0x18];~S();};extern "C" float func_0068010C(S*,void*,void*);
float target(S*p,void*a,void*b){S temp=*p;float value=func_0068010C(&temp,a,b);p->pair=temp.pair;return value;}
// Runtime copy00110D44 and linker-inlined S destructor NOP at6800F8.
