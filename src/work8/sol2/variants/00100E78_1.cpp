typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct G { char pad[8]; u32 f8; };
extern G g;
void func_00101D4C(G*, void*);
void func_0010168C(u32, void*);
void f(void* a) { func_00101D4C(&g, a); u32 v=g.f8;__schedule_barrier();func_0010168C(v,a); }
