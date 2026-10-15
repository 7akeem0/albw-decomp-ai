typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_43DBCC;
struct S0_43DBCC { char pad16C[0x16C]; u8 m16C; };
void f_43DBCC(S0_43DBCC* p) { p->m16C = 0x0; }
