#include "range.h"
extern u32 func_004D80EC(const Vec3*, const Vec3*, u32);
u32 Object5211::get() { return func_004D80EC(&position, data_0070FB60->position, angle); }
