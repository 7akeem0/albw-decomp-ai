#include "ladder_types.h"
struct Object4CE {char pad[0x10];void* m10;};
extern void func_004CE804(void*,int,int,int);
void func_004CE7F4(Object4CE* p,int a) {func_004CE804(p->m10,a,0,0);}
