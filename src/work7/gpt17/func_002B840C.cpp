#include "range.h"
extern bool func_004D838C(const Vec3*,f32,f32,f32);
struct Obj2B84 {u8 pad[0x3d0];Vec3 pos;};
bool f_2B840C(Obj2B84* p,f32 a,f32 b){return func_004D838C(&p->pos,a,b,3.402823466e38f);}
