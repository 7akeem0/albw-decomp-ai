typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_52EE94 { char pad4A4[0x4A4]; void* m; };
bool f_52EE94(S_52EE94* p) { return p->m != 0; }
