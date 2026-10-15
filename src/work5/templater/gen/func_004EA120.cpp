typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4EA120;
struct S1_4EA120;
struct S1_4EA120 { void g(); };
struct S0_4EA120 { char pad4C[0x4C]; S1_4EA120* m4C; };
void f_4EA120(S0_4EA120* p) { p->m4C->g(); }
