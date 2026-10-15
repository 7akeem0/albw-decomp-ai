#include "../range_types.h"
struct Obj28C8{char pad[0x10];void*model;};
extern "C" void* func_00584E64(void*);
extern "C" void* func_00584E70(void*);
extern "C" void func_004D0194(void*,void*);
extern "C" void func_004D0268(void*,void*);
void func_0028C81C(Obj28C8*p,void*out){func_004D0194(out,func_00584E64(p->model));func_004D0268(out,func_00584E70(p->model));}
