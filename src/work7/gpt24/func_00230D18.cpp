#include "range.h"
struct Child230D { char pad[0x14]; u32 value; void set(u32 n){ value=n; } };
struct Manager230D { char pad[0x64]; Child230D* child; };
extern Manager230D* data_0070D7D0;
struct Object230D {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual u32 value();
};
void target(Object230D* p){ data_0070D7D0->child->set(p->value()); }
