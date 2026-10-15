#include "range.h"
struct Vec3 { f32 x,y,z; };
extern const Vec3 vzero_7A9260;
struct SVX { virtual void s0(); };
struct P { P(u32 a, u32 b, u32 c, const Vec3* d, u32 e, u32 f);
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18();
    char pad[0x31c]; };
extern void post_3094A0(void*);
template <int T> struct D : P, SVX { char pad2[T-0x324];
    D(u32 a):P(a,1,1,&vzero_7A9260,1,1){ post_3094A0(this); } };
template<int T> D<T>* mk(u32 a){ D<T>* p=(D<T>*)::operator new(T,NoThrow()); if(!p) return 0; return new (p) D<T>(a); }
D<0x458>* v607AAC(u32 a){ return mk<0x458>(a); }
