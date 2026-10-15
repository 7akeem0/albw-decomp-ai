typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_361634;
struct S1_361634;
struct S1_361634 { char pad6C5[0x6C5]; u8 m6C5; };
struct S0_361634 { char pad10[0x10]; S1_361634* m10; };
void f_361634(S0_361634* p, u8 v) { p->m10->m6C5 = v; }
