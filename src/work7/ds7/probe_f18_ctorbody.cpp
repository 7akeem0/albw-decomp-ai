#include "range.h"
struct SVX { virtual void s0(); };
struct Byte1 { u8 v; void set(u8 x){ v = x; } };
struct P { P(u32 a);
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19(); virtual void a20(); virtual void a21(); virtual void a22();
    char pad[0x31c]; };
extern bool post_1CD098(void*);
extern void func_4ECF6C(void*);
template <int T> struct D : P, SVX { char pad2[0x4f9-0x324]; u8 m; char pad3[T-0x4f9-1];
    D(u32 a):P(a){ m = 1; if (post_1CD098(this)) func_4ECF6C(this); } };
template<int T> D<T>* mk(u32 a){ D<T>* p=(D<T>*)::operator new(T,NoThrow()); if(!p) return 0; return new (p) D<T>(a); }
D<0x510>* v6043E4(u32 a){ return mk<0x510>(a); }
