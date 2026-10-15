#include "ds2.h"
struct Vec3 { f32 x, y, z; };
extern const Vec3 zero3;
struct ActorBaseA {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual ~ActorBaseA();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char padA[0x320 - 4];
};
struct ActorBaseB { virtual void b0(); };
class Base324 : public ActorBaseA, public ActorBaseB {
public:
    Base324(u32);
    virtual ~Base324() {}
};
class X1E5F : public Base324 {
public:
    X1E5F(u32);
    virtual ~X1E5F() {}
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
    char pad0[0x475 - 0x324];
    u8 m475;
    char pad1[0x478 - 0x476];
    Vec3 m478, m484, m490, m49c;
    f32 m4a8;
    u8 m4ac;
};

X1E5F::X1E5F(u32 a) : Base324(a) {
    m475 = 0;
    m478 = zero3;
    m484 = zero3;
    m490 = zero3;
    m49c = zero3;
    m4a8 = 0.0f;
    m4ac = 0;
}
