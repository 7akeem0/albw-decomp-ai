#include "../range_types.h"
struct Obj2976F {char pad[0x38];void*array;void*child;};
extern "C" void func_002DEFD8(void*,s32);
extern "C" void func_004EA1E4(Obj2976F*,s32);
extern "C" void func_00297724(void*);
extern "C" void f_002976F8(Obj2976F*p){func_002DEFD8(p->child,30);func_004EA1E4(p,1);func_00297724(p->array);}
