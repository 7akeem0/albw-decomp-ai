typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_494F50;
struct S1_494F50;
struct S1_494F50 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void t(int); };
struct S0_494F50 { char pad20[0x20]; S1_494F50* m20; };
void f_494F50(S0_494F50* p, int a1) { p->m20->t(a1); }
