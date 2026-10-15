typedef unsigned int u32;
typedef long long s64;
typedef void (*Fn)(u32);
void f(Fn fn, u32* p) { fn(*p); }
