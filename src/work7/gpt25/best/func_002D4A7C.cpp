#include "../range_types.h"
struct Matrix34_25 {f32 values[12];};
struct Child2D4A {char pad[0x80];Matrix34_25 matrix;char gap[0xb4];Flag32 flags;};
struct Obj2D4A {char pad[0x24];Child2D4A*child;};
extern "C" void func_001151EC(Matrix34_25*,const Matrix34_25&);
extern "C" void func_004CEAF0(Child2D4A*);
extern "C" void f_002D4A7C(Obj2D4A*p,const Matrix34_25&m){Child2D4A*q=p->child;q->flags.v|=0x40000000;func_001151EC(&q->matrix,m);func_004CEAF0(p->child);}
