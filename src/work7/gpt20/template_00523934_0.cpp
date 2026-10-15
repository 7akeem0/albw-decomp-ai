#include "ladder_types.h"
struct Frames_00523934{char pad[0x2d8];u32 frames;};
s16 f_00523934(Frames_00523934*p){return (s16)(p->frames*(1.f/60.f));}
