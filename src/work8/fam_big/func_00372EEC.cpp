typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
// agent3: actor class family around 0x1E76EC / 0x1E7FDC (3-level dtor chain, base ActorBase dtor 0x1510A4)
struct ActorBaseA {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual ~ActorBaseA();
    virtual void v5();  virtual void v6();  virtual void v7();  virtual void v8();
    virtual void v9();  virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char padA[0x320 - 4];
};
struct ActorBaseB {
    virtual void b0();
    char padB[0x410 - 0x324];
};
class ActorBase : public ActorBaseA, public ActorBaseB {
public:
    virtual ~ActorBase();   // 0x1510A4
};
struct MemX { ~MemX(); char pad[0x54]; };    // dtor 0x35D6D0
struct MemY { ~MemY(); char pad[0x2e4]; };   // dtor 0x503368
struct MemZ { ~MemZ(); char pad[0x68]; };    // dtor 0x4EE540

class ActB : public ActorBase {             // vtable ro_6E0B24 (21 slots, 2nd at +0x5c)
public:
    virtual ~ActB() {}
    MemZ mZ;                                 // +0x410
};
class ActC : public ActB {                   // vtable ro_6D2174 (36 slots, 2nd at +0x98)
public:
    virtual ~ActC() {}
    virtual void c21(); virtual void c22(); virtual void c23(); virtual void c24(); virtual void c25();
    virtual void c26(); virtual void c27(); virtual void c28(); virtual void c29(); virtual void c30();
    virtual void c31(); virtual void c32(); virtual void c33(); virtual void c34(); virtual void c35();
    MemY mY;                                 // +0x478
    MemX mX;                                 // +0x75c
};
extern "C" void func_0036D0E0(void*);
struct MemP { u32 w; ~MemP(){ func_0036D0E0(this); } };
class EC0 : public ActC { public: virtual ~EC0(); };
EC0::~EC0() {}
class EC1 : public EC0 { public: virtual ~EC1(); };
EC1::~EC1() {}
class ActD : public EC1 {
public:
    virtual ~ActD();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39();
    virtual void d40(); virtual void d41(); virtual void d42(); virtual void d43();
    u8 pad2[0x864 - 0x7b0];
    MemP mA;
    MemP mB;
};
ActD::~ActD() {}
class ED0 : public ActD { public: virtual ~ED0(); };
ED0::~ED0() {}
class ED1 : public ED0 { public: virtual ~ED1(); };
ED1::~ED1() {}
class ActG : public ED1 {
public:
    virtual ~ActG();
    u8 padg[0x9a4 - 0x86c];
    MemX mX;
};
ActG::~ActG() {}
