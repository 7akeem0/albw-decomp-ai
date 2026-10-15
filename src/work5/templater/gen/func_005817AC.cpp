typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_5817AC { char pad16[0x16]; u16 m; };
struct S_5817AC { char pad14[0x14]; T_5817AC* q; };
bool f_5817AC(S_5817AC* p) { if (p->q->m & 0x4) return true; return false; }
