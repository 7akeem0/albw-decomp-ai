#include "ladder_types.h"
struct O4E00AC {char pad0[0x3d0];Vec3 pos;char pad3DC[0xf8];char state4D4[4];};
extern "C" bool func_00392E48(Vec3*,u32,u32,u32);
extern "C"  void func_0066A650(void*,u32);
extern "C" void func_004E00AC(O4E00AC*p){if(!func_00392E48(&p->pos,1,0,0))func_0066A650(p->state4D4,7);else func_0066A650(p->state4D4,0);}
