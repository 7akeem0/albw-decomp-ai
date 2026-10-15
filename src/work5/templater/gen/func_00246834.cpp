typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_246834 { void h(int, int); };
struct S_246834 { char pad410[0x410]; T_246834* q; };
void f_246834(S_246834* p) { p->q->h(0, 0); }
