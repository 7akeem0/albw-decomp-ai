typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4793F8;
struct S0_4793F8 { char pad298[0x298]; u32 m298; void next(); };
void f_4793F8(S0_4793F8* p) { p->m298 = 0xf; p->next(); }
