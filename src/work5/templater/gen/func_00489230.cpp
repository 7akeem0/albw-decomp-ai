typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_489230 { char pad80[0x80]; u32 m; void g(); };
void f_489230(S_489230* p) { p->g(); p->m = 0; }
