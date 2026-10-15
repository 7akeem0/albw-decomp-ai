typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_259CBC;
struct S1_259CBC;
struct S1_259CBC { void g(); };
struct S0_259CBC { char pad50[0x50]; S1_259CBC* m50; };
void f_259CBC(S0_259CBC* p) { p->m50->g(); }
