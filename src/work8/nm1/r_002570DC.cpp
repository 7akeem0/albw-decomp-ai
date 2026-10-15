#include "range.h"
extern void func_0010C7F8(void*,u32,f32);
struct Interp256b{u8 pad0[0x28];u8 interp[0x18];f32 m40;};
void f_002570E4(Interp256b* s,u32 frames){func_0010C7F8(s->interp,frames,s->m40);}
