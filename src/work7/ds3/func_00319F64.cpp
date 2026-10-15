#include "ds3.h"
// D1 destructor. vtable ro_6E0514 (secondary vptr @0x320 = vt+0x54).
// members: 0x438 dtor func_004EE540 (out-of-line dtor -> returns this), 0x4e0 dtor func_002E1B70
// (plain void call -> forces r4=this save + separate vptr stores); base dtor 0x1510A4.
struct A21 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual ~A21();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18();
    char padA[0x320 - 4];
};
struct B21 { virtual void b0(); char padB[0x410 - 0x324]; };
class Base21 : public A21, public B21 { public: virtual ~Base21(); };
void func_002E1B70(void*);
struct Mem4EE540 { u8 pad[0x54]; ~Mem4EE540(); };
class X319F64 : public Base21 {
public:
    virtual ~X319F64();
    char pad[0x438 - 0x410];
    Mem4EE540 m438;
    char pad2[0x4e0 - 0x48c];
    u32 m4e0;
};
X319F64::~X319F64() { func_002E1B70((char*)this + 0x4e0); }
