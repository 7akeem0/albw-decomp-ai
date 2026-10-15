typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_444C68 { char pad4B8[0x4B8]; u16 m; };
void f_444C68(S_444C68* p) { p->m = 0; }
