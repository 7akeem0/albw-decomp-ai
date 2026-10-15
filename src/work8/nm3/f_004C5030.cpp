#include "ds6.h"

struct V4C5030 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

void func_004C5030(void* a, V4C5030** pp) {
    V4C5030* o = *pp;
    if (o) {
        o->v4();
        *pp = 0;
    }
}

