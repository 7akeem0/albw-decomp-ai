typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_361574;
struct S1_361574;
struct S1_361574 { char pad6C3[0x6C3]; u8 m6C3; };
struct S0_361574 { char pad10[0x10]; S1_361574* m10; };
void f_361574(S0_361574* p, u8 v) { p->m10->m6C3 = v; }
