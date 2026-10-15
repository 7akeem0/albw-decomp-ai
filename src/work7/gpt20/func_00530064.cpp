#include "ladder_types.h"
struct O5300 {char pad0[0x478];Vec3 a;char pad484[0xc];Vec3 b;};
extern void func_00115C70(Vec3*,const Vec3*,const Vec3*);
void f_00530064(O5300* p,Vec3* out){func_00115C70(out,&p->a,&p->b);}
