typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_440358 { char pad195[0x195]; u8 m; };
struct S_440358 { char pad74[0x74]; T_440358* q; };
void f_440358(S_440358* p) { if (p->q) p->q->m = 1; }
