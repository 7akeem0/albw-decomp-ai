#include "../../range.h"
struct S{u8 pad3DC[0x3dc];Vec3 velocity;u8 pad3E8[0x4f0-0x3e8];f32 rate;u8 pad4F4[0x59c-0x4f4];Flag32 flags;};
void func_0012B4E4(S*p,s32 mode){if(mode!=5)p->rate=1.0f;p->velocity.z=0.0f;p->velocity.x=0.0f;p->flags.set(0x80);}
