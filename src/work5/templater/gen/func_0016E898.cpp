typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_16E898 { char pad3F8[0x3F8]; f32 m3F8; };
void f_16E898(S_16E898* p) { p->m3F8 = 0.0f; }
