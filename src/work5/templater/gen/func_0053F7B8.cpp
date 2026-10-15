typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_53F7B8 { char pad42[0x42]; u16 m; };
bool f_53F7B8(S_53F7B8* p) { return p->m != 17; }
