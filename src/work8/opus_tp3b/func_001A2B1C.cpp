#include "../../work7/ds3/ds3.h"
struct ActorBaseA {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual ~ActorBaseA();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char padA[0x320 - 4];
};
struct ActorBaseB { virtual void b0(); char padB[0x410 - 0x324]; };
class ActorBase : public ActorBaseA, public ActorBaseB { public: virtual ~ActorBase(); };
class Base6EDB00 : public ActorBase {
public:
    void finalize() {}
    virtual ~Base6EDB00() { finalize(); }
    virtual void c21(); virtual void c22(); virtual void c23(); virtual void c24(); virtual void c25();
    virtual void c26(); virtual void c27(); virtual void c28(); virtual void c29(); virtual void c30();
};
void func_0036D0E0(void*);
struct Mem96 { ~Mem96(); char pad[0x2c]; };
struct Mem9AC : Mem96 {};
struct Mem4 { ~Mem4() { func_0036D0E0(this); } u32 v; };
class X26C01C : public Base6EDB00 {
public:
    virtual ~X26C01C();
    char pad[0x8bc - 0x410];
    Mem4 m8bc;
    Mem4 m8c0;
    Mem4 m8c4;

    Mem9AC m9ac;
};
X26C01C::~X26C01C() {}
