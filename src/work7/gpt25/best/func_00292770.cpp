#include "../range_types.h"
struct Child2927;
struct Obj2927 {char pad[0x608];void*context;char gap[8];Child2927*child;};
extern "C" void* func_0028F7B0(Child2927*,s32);
extern "C" void func_002927A0(Child2927*,void*,bool);
extern "C" void f_00292770(Obj2927*p){Obj2927*owner=p;Child2927**slot=&owner->child;func_0028F7B0(*slot,0);func_002927A0(*slot,owner->context,true);}
