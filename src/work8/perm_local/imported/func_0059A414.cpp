typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct G {
u32 a, b;
};
extern G g;
extern char dtor[];
extern char dso[];
void reg(void*, void*, void*);
void f() {
  u32 perm_t8;
  unsigned int perm_t20;
u32 z = 0;
perm_t20 = (z ^ 0); g.a = perm_t20; perm_t8 = z; if (perm_t8) {}
if ((perm_t20 & 0xffff)) { g.b = z; } else { g.b = z; }
__schedule_barrier();
reg(&g, dtor, dso);
}
