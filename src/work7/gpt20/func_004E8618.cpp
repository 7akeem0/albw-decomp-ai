#include "ladder_types.h"
struct O4E8618 {char pad0[0x3dc];Vec3 velocity;char pad3E8[0x3f];u8 flag;char pad428[0x1c];f32 value;};
void setup4E8618(O4E8618*p){p->value=3.85f;p->flag=1;}
void velocity4E8618(Vec3*p,f32 x,f32 y,f32 z){p->x=x;p->y=y;p->z=z;}
extern "C" void func_004E8618(O4E8618*p){setup4E8618(p);velocity4E8618(&p->velocity,0.f,.25f,0.f);}
