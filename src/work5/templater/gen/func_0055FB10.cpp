typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_55FB10 { char pad16[0x16]; u16 m; };
struct S_55FB10 { char pad14[0x14]; T_55FB10* q; };
bool f_55FB10(S_55FB10* p) { if (p->q->m & 0x4) return true; return false; }
