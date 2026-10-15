#include "ladder_types.h"
struct Frames5239{char pad[0x10];u32 frames;};
s16 f_00523910(Frames5239* p){return (s16)(p->frames*(1.f/60.f));}
