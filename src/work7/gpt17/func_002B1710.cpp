#include "range.h"
struct Obj {u8 pad[0x38];BitFlag16 flags;};
extern u32 func_002B0D7C(Obj*,s32,f32,s32,s32);
u32 f_002B1710(Obj*p){u32 r=func_002B0D7C(p,7,0.22f,8,0);p->flags.set(8);return r;}
