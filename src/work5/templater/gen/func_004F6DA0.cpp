typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_4F6DA0 { char pad61[0x61]; u8 m; };
struct S_4F6DA0 { char pad2C[0x2C]; T_4F6DA0* q; };
void f_4F6DA0(S_4F6DA0* p) { if (p->q) p->q->m = 0; }
