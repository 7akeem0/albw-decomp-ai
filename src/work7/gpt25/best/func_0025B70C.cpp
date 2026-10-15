#include "../range_types.h"
struct Obj25B7 {char pad[0x10];void*child;u32 kind;};
extern "C" void func_001DFECC(void*,Obj25B7*);
extern "C" void f_0025B70C(Obj25B7*p){if(p->child){func_001DFECC(p->child,p);p->child=0;p->kind=0;}}
