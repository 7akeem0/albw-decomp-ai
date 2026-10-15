typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_485044;
struct S0_485044 { char pad98[0x98]; u16 m98; };
void f_485044(S0_485044* p) { p->m98 = 0x0; }
