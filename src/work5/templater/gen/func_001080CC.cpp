typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_1080CC;
struct M_1080CC;
struct M_1080CC { void g(); };
struct S0_1080CC { char pad4[0x4]; M_1080CC m4; };
void f_1080CC(S0_1080CC* p) { p->m4.g(); }
