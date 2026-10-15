typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_29E36C { void g(); };
struct S_29E36C { char pad14[0x14]; T_29E36C* m; };
void f_29E36C(S_29E36C* p) { if (p->m) p->m->g(); }
