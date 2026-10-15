typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3D8150 { char pad18[0x18]; u32 m; };
int f_3D8150(S_3D8150* p) { return p->m == 0 ? 3 : 1; }
