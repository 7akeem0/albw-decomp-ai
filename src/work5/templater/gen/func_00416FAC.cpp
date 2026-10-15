typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_416FAC;
struct S0_416FAC { char padF4[0xF4]; u8 mF4; };
void f_416FAC(S0_416FAC* p, u8 v) { p->mF4 = v; }
