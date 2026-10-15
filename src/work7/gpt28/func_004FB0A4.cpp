#include "range.h"
struct Object4FB0A { char pad[0x410]; Frames4FB0* frames; void set(f32); };
void Object4FB0A::set(f32 value) { if(frames) (*frames)[0].set(value); }
