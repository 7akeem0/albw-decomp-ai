#include "range.h"
struct Anim24C7 {char pad[8];f32 current;u32 c;f32 rate,end;char pad18[0x26-0x18];u8 dirty;void set(f32 f){if(current!=f){current=f;dirty=1;}}};
struct AnimArray24C7 {char pad[0xc];s32 count;u32 c10;Anim24C7* items;Anim24C7&operator[](s32 i){if((u32)i<(u32)count)return items[i];return items[0];}};
struct Obj24C7 {char pad[0x42c];AnimArray24C7* anim;};
extern "C" void target(Obj24C7*p){Anim24C7&a=(*p->anim)[0];f32 f=a.end;a.set(f);(*p->anim)[0].rate=-1.f;}
