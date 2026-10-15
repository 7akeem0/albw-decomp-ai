typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_15EEBC { char padE2C[0xE2C]; u8 m; void g(); };
void f_15EEBC(S_15EEBC* p) { p->g(); p->m = 1; }
