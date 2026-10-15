#include "range.h"
struct Ctrl{u32 data;void setup();};struct S{u8 pad[0x8f4];u32 count;u8 pad8f8[0x90c-0x8f8];Ctrl ctrl;};extern "C" void func_002F9008(S*);extern "C" void func_0065B098(Ctrl*,s32);extern "C" void func_003931EC(Ctrl*,s32);extern "C" void func_0065B104(Ctrl*);
inline void setup(Ctrl*c){func_0065B098(c,1);func_003931EC(c,1);func_0065B104(c);}void target(S*p){func_002F9008(p);if(p->count>=5)setup(&p->ctrl);}
