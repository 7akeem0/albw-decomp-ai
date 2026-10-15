typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_41DEDC { char pad114[0x114]; void* m; };
bool f_41DEDC(S_41DEDC* p) { return p->m != 0; }
