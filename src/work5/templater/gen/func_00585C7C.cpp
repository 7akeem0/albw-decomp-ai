typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_585C7C { char pad78C[0x78C]; u8 m; };
int f_585C7C(S_585C7C* p) { return p->m == 0 ? 12 : 0; }
