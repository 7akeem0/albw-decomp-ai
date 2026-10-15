#pragma once
// adapted from work4/agent3/dtor_1E7.h (same actor class family, base dtor 0x1510A4)
struct ActorBaseA7 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual ~ActorBaseA7();
    virtual void v5();  virtual void v6();  virtual void v7();  virtual void v8();
    virtual void v9();  virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char padA[0x320 - 4];
};
struct ActorBaseB7 {
    virtual void b0();
    char padB[0x410 - 0x324];
};
class ActorBase7 : public ActorBaseA7, public ActorBaseB7 {
public:
    virtual ~ActorBase7();
};
struct MemX7 { ~MemX7(); char pad[0x54]; };
struct MemY7 { ~MemY7(); char pad[0x2e4]; };
struct MemZ7 { ~MemZ7(); char pad[0x68]; };

class ActB7 : public ActorBase7 {
public:
    virtual ~ActB7() {}
    MemZ7 mZ;
};
class ActC7 : public ActB7 {
public:
    virtual ~ActC7();
    virtual void c21(); virtual void c22(); virtual void c23(); virtual void c24(); virtual void c25();
    virtual void c26(); virtual void c27(); virtual void c28(); virtual void c29(); virtual void c30();
    virtual void c31(); virtual void c32(); virtual void c33(); virtual void c34(); virtual void c35();
    MemY7 mY;
    MemX7 mX;
};

struct Mem680 { ~Mem680(); char pad[0x68]; };
class C238 : public ActB7 {
public:
    virtual ~C238();
    virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
    virtual void e5(); virtual void e6(); virtual void e7();
    char pad[0x680 - 0x478];
    Mem680 m680;
};

struct Mem588 { ~Mem588(); char pad[0x2cc]; };
struct Mem854 { ~Mem854(); char pad[0x68]; };
class C253 : public ActB7 {
public:
    virtual ~C253();
    virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
    virtual void e5(); virtual void e6(); virtual void e7();
    char pad[0x588 - 0x478];
    Mem588 m588;
    Mem854 m854;
};

struct Mem470 { ~Mem470(); char pad[0x68]; };
class C1BA : public ActorBase7 {
public:
    virtual ~C1BA();
    char pad[0x470 - 0x410];
    Mem470 m470;
};

struct Mem544 { ~Mem544(); char pad[0x68]; };
class C234 : public ActorBase7 {
public:
    virtual ~C234();
    char pad[0x544 - 0x410];
    Mem544 m544;
};
