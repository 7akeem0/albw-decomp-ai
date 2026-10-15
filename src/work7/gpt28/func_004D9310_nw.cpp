#include "range.h"
struct State4D93 { u32 value; };
struct Object4D93A { char pad[0x788]; State4D93 state;u8 active;void update(u32); };
extern  void func_0066A50C(State4D93*,s32);
extern void func_001E68F0(Object4D93A*,u32);
void Object4D93A::update(u32 a) { if(!active)func_0066A50C(&state,1);func_001E68F0(this,a); }
