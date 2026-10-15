#include "../range_types.h"
struct Obj28AF {char pad[0x5b4];Vec3 value;};
struct Input28AF {u32 kind;Vec3 value;};
extern "C" void func_00115C54(Vec3*,const Vec3&,const Vec3&);
extern "C" void func_001507A8(Obj28AF*,const Input28AF*);
extern "C" void f_0028AFD8(Obj28AF*p,const Input28AF*q){Vec3*d=&p->value;func_00115C54(d,*d,q->value);func_001507A8(p,q);}
