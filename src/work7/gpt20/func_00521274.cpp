#include "ladder_types.h"
struct O5212{char pad0[8];Vec3 goal;char pad14[0x3bc];Vec3 pos;};
f32 f_00521274(O5212* p){f32 x=p->goal.x-p->pos.x;f32 z=p->goal.z-p->pos.z;return x*x+z*z;}
