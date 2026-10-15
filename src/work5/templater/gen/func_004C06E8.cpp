typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_4C06E8 { char pad44[0x44]; u8 m; };
struct S_4C06E8 { char pad86C[0x86C]; T_4C06E8* q; };
void f_4C06E8(S_4C06E8* p) { if (p->q) p->q->m = 0; }
