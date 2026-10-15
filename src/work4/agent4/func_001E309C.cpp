struct A {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual ~A();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    char padA[0x320 - 4];
};
struct B { virtual void b0(); };
class ActorBase : public A, public B {
public:
    virtual ~ActorBase();
};
struct M40c { ~M40c(); char pad[0x28]; };
struct M434 { ~M434(); char pad[4]; };
class T : public ActorBase {
public:
    virtual ~T();
    char pad324[0x40c - 0x324];
    M40c m40c;
    M434 m434;
};
T::~T() {}
