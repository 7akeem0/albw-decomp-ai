#include "ds6.h"

struct G49E800 { void* m0; void* m4; };
extern G49E800 data_007165A0;

struct V49E800 { virtual void v0(); virtual void v1(); virtual void v2(); };

void func_0049E800() {
    V49E800* p = (V49E800*)data_007165A0.m4;
    if (p == 0) return;
    data_007165A0.m4 = 0;
    p->v0();
    V49E800* q = (V49E800*)data_007165A0.m0;
    if (q) q->v2();
    data_007165A0.m0 = 0;
}

