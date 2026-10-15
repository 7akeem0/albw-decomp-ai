#include "range.h"
struct Callback494F {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void invoke(u32*,u32,u32);
};
struct Object494F { char pad0[0x20]; Callback494F* callback; u32 payload; void invoke(u32,u32); };
void Object494F::invoke(u32 a, u32 b) { callback->invoke(&payload,a,b); }
