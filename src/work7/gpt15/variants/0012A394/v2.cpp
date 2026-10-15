#include "../../range.h"
struct S{char a[0x3dc];Vec3 vel;char b[0x544];float speed;char c[0x4b];u8 flag;void zero();};void S::zero(){float z=0.0f;speed=z;vel.x=z;vel.z=z;}extern "C" void func_004FAD90(S*);extern "C" void func_0012A394(S*p){p->flag=1;p->zero();func_004FAD90(p);}
