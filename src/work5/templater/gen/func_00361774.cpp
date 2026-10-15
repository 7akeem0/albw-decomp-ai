typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_361774;
struct S1_361774;
struct S1_361774 { char pad6C7[0x6C7]; u8 m6C7; };
struct S0_361774 { char pad10[0x10]; S1_361774* m10; };
void f_361774(S0_361774* p) { S1_361774* q = p->m10; q->m6C7 = 0x1; }
