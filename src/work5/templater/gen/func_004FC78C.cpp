typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4FC78C;
struct S0_4FC78C { char pad508[0x508]; u16 m508; };
void f_4FC78C(S0_4FC78C* p, u16 v) { p->m508 = v; }
