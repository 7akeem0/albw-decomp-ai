#include "ladder_types.h"
struct O4A75{char pad0[0x10];void* first;char pad14[0x1c];void* second;};
extern void func_004A3B14(void*);
extern void func_004A7544(void*);
void f_004A7528(O4A75* p){func_004A3B14(p->first);func_004A7544(p->second);}
