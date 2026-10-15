typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct Vt { void (*slot[40])(void*, u32); };
struct G { Vt* vt; };
extern G* g_singleton;
void f(u32 a) { G* g = g_singleton; g->vt->slot[0x23](g, a); }
