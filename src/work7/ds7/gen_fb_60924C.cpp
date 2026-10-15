#include "range.h"
struct SVX { virtual void s0(); };
struct BitFlag { u32 v; void set(u32 m){ v |= m; } void clear(u32 m){ v &= ~m; } };
extern u8 GD60924C[]; extern u8 GE60924C[]; extern void X60924C(void*, const void*);
struct P60924C { P60924C(u32 a, u32 b, const void* c, s32 d);
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19(); virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24(); virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29(); virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33(); virtual void a34(); virtual void a35(); virtual void a36(); virtual void a37(); virtual void a38(); virtual void a39(); virtual void a40(); virtual void a41(); virtual void a42(); virtual void a43();
    char pad[0x31c];
};
template <int T> struct D60924C : P60924C, SVX {
    char pad2[0x8ac - 0x324]; BitFlag m; char pad3[T - 0x8ac - 4];
    D60924C(u32 a) : P60924C(a,2,GD60924C,-1) { X60924C(this,GE60924C); m.set(0x10); } };
template <int T> D60924C<T>* mk60924C(u32 a) { D60924C<T>* p=(D60924C<T>*)::operator new(T,NoThrow()); if(!p) return 0; return new (p) D60924C<T>(a); }
D60924C<0x98c>* v60924C(u32 a) { return mk60924C<0x98c>(a); }
