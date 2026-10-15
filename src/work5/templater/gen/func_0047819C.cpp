typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_47819C { char pad98[0x98]; u8 m; };
struct S_47819C { char pad214[0x214]; T_47819C* q; };
void f_47819C(S_47819C* p) { if (p->q) p->q->m = 9; }
