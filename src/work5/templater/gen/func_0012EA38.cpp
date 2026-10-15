typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern char g_0060B5C4;
struct M_12EA38 { void g(void*); };
struct S_12EA38 { char padE10[0xE10]; M_12EA38 m; };
void f_12EA38(S_12EA38* p) { p->m.g(&g_0060B5C4); }
