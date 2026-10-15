typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_1B6C24;
struct S1_1B6C24;
struct S1_1B6C24 { void g(); };
struct S0_1B6C24 { char pad144[0x144]; S1_1B6C24* m144; };
void f_1B6C24(S0_1B6C24* p) { p->m144->g(); }
