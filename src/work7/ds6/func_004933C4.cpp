#include "ds6.h"

struct V4933C4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual s32 v8(s32 a, u32 b);
    virtual s32 v9(u32 a);
};

s32 func_004933C4(V4933C4* self, u32 a, u32 b) {
    s32 r = self->v9(a);
    if (r < 0) return 0;
    return self->v8(r, b);
}
