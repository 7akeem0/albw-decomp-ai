#include "range.h"
struct Vec3i {s32 x,y,z;};
struct Obj323B { u8 pad[0x2d8]; Vec3i pos; void f(Vec3i); };
void Obj323B::f(Vec3i v){pos=v;}
