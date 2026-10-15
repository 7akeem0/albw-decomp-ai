#include "range.h"
struct Virtual56F {
    virtual u32 v0(); virtual u32 v1(); virtual u32 v2(); virtual u32 v3();
    virtual u32 v4(); virtual u32 v5(); virtual u32 v6(); virtual u32 v7();
    virtual u32 v8(); virtual u32 v9(); virtual u32 v10(); virtual u32 v11();
    virtual u32 v12(); virtual u32 v13(); virtual u32 v14(); virtual u32 v15();
    virtual u32 value(s32);
};
u32 f_0056F56C(Virtual56F* p, s32 kind) { return (p->value(kind) >> 16) & 0xff; }
