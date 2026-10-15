typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_416EF0;
struct S0_416EF0 { char pad104[0x104]; f32 m104; };
void f_416EF0(S0_416EF0* p, f32 v) { p->m104 = v; }
