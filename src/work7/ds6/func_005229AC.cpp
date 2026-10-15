#include "ds6.h"

struct D;
struct Mid { char _pad[0x10]; D* m10; };
struct A5229AC { Mid* m0; };

struct D {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11(u32 a, u32 b);
};

struct B5229AC {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    u32 m4;
};

void func_005229AC(A5229AC* a, B5229AC* b) {
    D* d = a->m0->m10;
    b->v2();
    d->v11(b->m4, 1);
}
