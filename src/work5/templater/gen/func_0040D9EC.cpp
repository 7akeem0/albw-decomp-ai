typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_40D9EC { char pad8[0x8]; void* m; };
bool f_40D9EC(S_40D9EC* p) { return p->m != 0; }
