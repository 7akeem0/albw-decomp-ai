#include "range.h"
struct Obj3DCB {char pad[0x14];u32 a[2];u32 b[2];};
extern Obj3DCB bss_007A06A0;
extern void func_003DCB24(Obj3DCB*,u32,u32*,u32*);
void func_003DD48C(u32 i,u32* a,u32* b){func_003DCB24(&bss_007A06A0,i,a,b);}
