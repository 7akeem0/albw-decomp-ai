#define NoThrow func_0010BAB4
#include "../../../../../work7/ds7/range.h"
struct SV1 { virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
    virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
    virtual void b10(); virtual void b11(); virtual void b12(); virtual void b13(); virtual void b14();
    virtual void b15(); virtual void b16(); virtual void b17(); virtual void b18(); virtual void b19();
    virtual void b20(); virtual void b21(); virtual void b22();
    char pad[0xE8]; };
struct SV2 { virtual void c0(); };
struct P { P(u32 a);
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
    virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
    virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14();
    virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19();
    char pad[0x31c]; };
template <int T> struct D : P, SV1, SV2 {
    char pad2[T - 0x410];
    D(u32 a) : P(a) {}
};
template <int T> D<T>* mk(u32 a) {
    D<T>* p = (D<T>*)::operator new(T, func_0010BAB4());
    if (!p) return 0;
    return new (p) D<T>(a);
}
D<0x52c>* v6043A0(u32 a) { return mk<0x52c>(a); }
