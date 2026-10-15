typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_29E394 { char pad4BC[0x4BC]; u8 m; };
struct S_29E394 { char pad14[0x14]; T_29E394* q; };
void f_29E394(S_29E394* p) { if (p->q) p->q->m = 1; }
