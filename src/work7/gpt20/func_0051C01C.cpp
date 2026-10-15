#include "ladder_types.h"
struct O51C0 {char pad0[0x80];void* child;};
extern void func_0043D280(void*,u32);
inline void put(void* p,u32 n){if(p)func_0043D280(p,n);}
void f_0051C01C(O51C0* p){put(p->child,2);}
