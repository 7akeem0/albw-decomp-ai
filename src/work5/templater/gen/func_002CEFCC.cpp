typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_2CEFCC { char pad49C[0x49C]; u32 m49C; char pad4E8[0x48]; u32 m4E8; };
void f_2CEFCC(S_2CEFCC* p) { p->m49C = 0; p->m4E8 = 0; }
