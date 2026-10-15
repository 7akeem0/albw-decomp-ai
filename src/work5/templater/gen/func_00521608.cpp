typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_521608;
struct S1_521608;
struct S1_521608 { void g(); };
struct S0_521608 { char pad518[0x518]; S1_521608* m518; };
void f_521608(S0_521608* p) { p->m518->g(); }
