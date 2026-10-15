typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_40DA2C { char padC[0xC]; void* m; };
bool f_40DA2C(S_40DA2C* p) { return p->m != 0; }
