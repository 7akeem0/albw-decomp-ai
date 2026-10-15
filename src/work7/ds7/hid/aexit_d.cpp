typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct G { u32 a, b; };
extern G g;
extern char dtor[];
extern char dso[];
void reg(void*, void*, void*);
void f() { u32 z = 0; g.a = z; g.b = z; reg(&g, dtor, dso); }
