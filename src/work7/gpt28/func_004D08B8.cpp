#include "range.h"
void Object4D08::markDirty() { flags |= 0x40000000; }
void Object4D08::writeScale(f32 scale) {
    x = scale; y = scale; z = scale;
}
void Object4D08::setScale(f32 scale) { markDirty(); writeScale(scale); }
