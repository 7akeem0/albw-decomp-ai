#include "range.h"
struct Object523B { char pad0[0x2d8]; u32 frames; u32 get() const; };
u32 Object523B::get() const { return (u32)(frames*(1.0f/60.0f))/60; }
