typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_49A024;
struct M_49A024;
struct M_49A024 { void g(); };
struct S0_49A024 { char pad110[0x110]; M_49A024 m110; };
void f_49A024(S0_49A024* p) { p->m110.g(); }
