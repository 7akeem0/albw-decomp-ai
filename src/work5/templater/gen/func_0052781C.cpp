typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_52781C { char pad30[0x30]; void* m; };
bool f_52781C(S_52781C* p) { return p->m != 0; }
