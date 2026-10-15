#include "range.h"
struct Object4F2B { char pad0[0x4f0]; f32 scale; char pad4f4[0x410]; f32 speed; void set(s32); };
void Object4F2B::set(s32 mode) { speed=0.1f; if(mode!=4) scale=1.0f; }
