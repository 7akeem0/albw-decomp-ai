#include "range.h"
struct Obj2976 { u8 pad[0x74]; Interp interp; f32 target; void f(s32 frames); };
void Obj2976::f(s32 frames) { interp.setTarget(frames,target); }
