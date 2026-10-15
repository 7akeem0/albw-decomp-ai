typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_427930 { void h(int, int); };
struct S_427930 { char pad98[0x98]; T_427930* q; };
void f_427930(S_427930* p) { p->q->h(1, 1); }
