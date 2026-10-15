// ctor of the actor class with vtable ro_6D1E2C (dtor = 0x1E449C); base ctor 0x324A30
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

struct ActorBaseA {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual ~ActorBaseA();
    virtual void v5();  virtual void v6();  virtual void v7();  virtual void v8();
    virtual void v9();  virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char padA[0x2cc - 4];
    void* m2CC;
    char padA2[0x320 - 0x2d0];
};
struct ActorBaseB {
    virtual void b0();
    char padB[0x478 - 0x324];
};
struct ActorParam {
    char pad[0x1c];
    u32 m1C;
};
class ActorMid : public ActorBaseA, public ActorBaseB {
public:
    ActorMid(ActorParam* p);   // 0x324A30
    virtual ~ActorMid();
};

struct NoThrow { u8 pad; };
void* operator new(unsigned int size, NoThrow t) throw();

struct Obj488 {
    Obj488(void* owner, s32 kind);   // 0x2FCDA0
    u8 pad[0xb0];
};

class Actor6D1E2C : public ActorMid {
public:
    Actor6D1E2C(ActorParam* p);
    virtual ~Actor6D1E2C();
    u32 m478;
    u32 m47C;
    u32 m480;
    u32 m484;
    Obj488* m488;
    u32 m48C;
    u32 m490;
    u8 m494;
    u8 m495;
    u8 m496;
    u8 m497;
};

Actor6D1E2C::Actor6D1E2C(ActorParam* p)
    : ActorMid(p), m478(p->m1C), m47C(0), m480(0), m484(0) {
    NoThrow t;
    m488 = new (t) Obj488(m2CC, 2);
    m48C = 0;
    m490 = 0;
    m494 = 0;
    m495 = 0;
    m496 = 0;
    m497 = 0;
}
