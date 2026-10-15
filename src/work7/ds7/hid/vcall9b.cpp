typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct Vt { void (*slot[10])(void*, u32, u32); };
struct C { Vt* vt; };
void f(C* c, u32 a) { c->vt->slot[9](c, 1, a); }
