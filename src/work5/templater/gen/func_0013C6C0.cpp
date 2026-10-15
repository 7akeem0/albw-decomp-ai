typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_13C6C0 { char pad41C[0x41C]; u8 m; };
bool f_13C6C0(S_13C6C0* p) { return p->m != 1; }
