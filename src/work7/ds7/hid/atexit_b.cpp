typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct G { const void* p; u32 b, c, d; };
extern G g;
extern char ro[];
extern char dtor[];
extern char dso[];
void reg(void*, void*, void*);
void f() { g.b = 0; g.c = 0; g.d = 0; g.p = ro; reg(&g, dtor, dso); }
