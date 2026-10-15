#include "range.h"
struct Actor4D9DA {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual ~Actor4D9DA();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18();
    char pad4[0x31c];
};
struct Actor4D9DB { virtual void b0(); char pad4[0xec]; };
struct Actor4D9D : Actor4D9DA, Actor4D9DB { virtual ~Actor4D9D(); };
struct Member4D9D { ~Member4D9D(); char pad[0x68]; };
class Base4D9D : public Actor4D9D {
public:
    virtual ~Base4D9D() {}
    char pad410[0x30];
    Member4D9D member;
};
class Object4D9D : public Base4D9D { public: virtual ~Object4D9D(); };
Object4D9D::~Object4D9D() {}
