typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3F11EC { char pad4[0x4]; u32 m4; u32 m8; u32 mC; u32 m10; };
void f_3F11EC(S_3F11EC* p) { p->m4 = 0; p->m8 = 0; p->mC = 0; p->m10 = 0; }
