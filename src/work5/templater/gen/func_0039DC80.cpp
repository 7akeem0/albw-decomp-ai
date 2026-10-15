typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_39DC80;
struct S1_39DC80;
struct S1_39DC80 { void g(int, int); };
struct S0_39DC80 { char pad4D4[0x4D4]; S1_39DC80* m4D4; };
void f_39DC80(S0_39DC80* p) { p->m4D4->g(1, 0); }
