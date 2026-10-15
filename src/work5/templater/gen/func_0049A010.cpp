typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_49A010;
struct M_49A010;
struct M_49A010 { void g(); };
struct S0_49A010 { char pad20[0x20]; M_49A010 m20; };
void f_49A010(S0_49A010* p) { p->m20.g(); }
