typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_540AE8 { char pad1C[0x1C]; void* m; };
bool f_540AE8(S_540AE8* p) { return p->m != 0; }
