typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_296B84;
struct S1_296B84;
struct S1_296B84 { void g(); };
struct S0_296B84 { char pad4C[0x4C]; S1_296B84* m4C; };
void f_296B84(S0_296B84* p) { p->m4C->g(); }
