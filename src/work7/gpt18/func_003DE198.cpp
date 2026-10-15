#include "range.h"
struct Obj3DCB {char pad[0x14];u32 a[2];u32 b[2];};
extern Obj3DCB bss_007A06A0;
extern void func_003DCBD4(Obj3DCB*,u32,u32,u32);
void func_003DE198(u32 i,u32 a,u32 b){func_003DCBD4(&bss_007A06A0,i,a,b);}
