#include "range.h"
struct Actor50BCA {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual ~Actor50BCA();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18();
    char pad4[0x31c];
};
struct Actor50BCB { virtual void b0(); char pad4[0xec]; };
struct Actor50BC : Actor50BCA, Actor50BCB { virtual ~Actor50BC(); };
struct Member50BC { ~Member50BC(); char pad[0x68]; };
class Base50BC : public Actor50BC {
public:
    virtual ~Base50BC() {}
    char pad410[0x2c];
    Member50BC member;
};
class Object50BC : public Base50BC { public: virtual ~Object50BC(); };
Object50BC::~Object50BC() {}
