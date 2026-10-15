#include "range.h"
struct Actor512BA {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual ~Actor512BA();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18();
    char pad4[0x31c];
};
struct Actor512BB { virtual void b0(); char pad4[0xec]; };
struct Actor512B : Actor512BA, Actor512BB { virtual ~Actor512B(); };
struct Member512B { ~Member512B(); char pad[0x68]; };
class Base512B : public Actor512B {
public:
    virtual ~Base512B() {}
    char pad410[4];
    Member512B member;
};
class Object512B : public Base512B { public: virtual ~Object512B(); };
Object512B::~Object512B() {}
