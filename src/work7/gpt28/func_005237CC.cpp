#include "range.h"
struct Object5237 { char pad0[0x20]; u32 frames; char pad24[0x10]; u8 flags; f32 get() const; };
f32 Object5237::get() const {
    if(!(flags&0x10)) return 0.0f;
    return frames*(1.0f/60.0f);
}
