#include "range.h"
struct Object4A4B { char pad0[0x5c]; u32 controller[3]; u32 state; void update(); };
extern bool func_00532BA0(u32*);
extern void func_00231488(u32*,f32);
void Object4A4B::update() { func_00231488(&state,func_00532BA0(controller) ? 1.0f : 0.0f); }
