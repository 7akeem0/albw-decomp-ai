typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_520B84 { char pad168[0x168]; u32 m; };
struct S_520B84 { char pad1C[0x1C]; T_520B84* q; };
bool f_520B84(S_520B84* p) { if (p->q->m & 0x1) return true; return false; }
