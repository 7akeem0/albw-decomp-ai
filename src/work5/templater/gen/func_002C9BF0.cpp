typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_2C9BF0 { char pad4E8[0x4E8]; u8 m; };
bool f_2C9BF0(S_2C9BF0* p) { return p->m == 0; }
