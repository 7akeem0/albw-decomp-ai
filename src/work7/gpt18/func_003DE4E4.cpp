#include "range.h"
struct OE4E {u8 pad[0x1c];f32 value;u8 gap[0x48];void*child;};
extern "C" void func_003E16AC(void*,f32);
extern "C" void func_003DE4E4(OE4E*p,f32 f){p->value=f>=0.0f?f:0.0f;func_003E16AC(p->child,f);}
