typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_48FDA4;
struct M_48FDA4;
struct M_48FDA4 { void g(); };
struct S0_48FDA4 { char pad6C[0x6C]; M_48FDA4 m6C; };
void f_48FDA4(S0_48FDA4* p) { p->m6C.g(); }
