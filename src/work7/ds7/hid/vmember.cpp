typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct Pair { u32 a, b; };
extern const Pair k;
extern char vtbl[];
struct S { const void* t; u32 pad; Pair p; S(); };
S::S() : pad(0), p(k) { t = vtbl; }
