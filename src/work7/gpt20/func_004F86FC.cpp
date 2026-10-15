#include "ladder_types.h"
struct O4F86{char pad0[0x4c4];f32 radius;char pad4c8[0x384];f32 squared;u8 flag;};
void f_004F86FC(O4F86* p,f32 x,u8 flag){f32 n=p->radius+x;p->squared=n*n;p->flag=flag;}
