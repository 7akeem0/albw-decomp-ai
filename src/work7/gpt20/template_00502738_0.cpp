typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_502738;
struct S1_502738;
struct S1_502738 { virtual void target(); };
struct S0_502738 { char pad14[0x14]; S1_502738* m14; };
void f_00502738(S0_502738* p){if(p->m14)p->m14->target();}
