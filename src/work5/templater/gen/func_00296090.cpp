typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_296090;
struct S1_296090;
struct S1_296090 { void g(); };
struct S0_296090 { char pad4C[0x4C]; S1_296090* m4C; };
void f_296090(S0_296090* p) { p->m4C->g(); }
