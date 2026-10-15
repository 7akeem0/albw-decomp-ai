#include "range.h"
struct Object49BC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void first(u32); virtual void second();
    void invoke(u32);
};
void Object49BC::invoke(u32 value) { first(value); second(); }
