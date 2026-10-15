#include "ds6.h"

struct V51ACC4 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
                 virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
                 virtual void v8(); virtual void v9(); virtual void v10(); };
struct Obj51ACC4 {
    char _pad[0x50];
    V51ACC4* m50;
    void* m54;
    u16 m58;
};

void func_0051ACC4(Obj51ACC4* self) {
    if (self->m58 != 3) return;
    if (self->m54 == 0) return;
    if (self->m50) self->m50->v10();
    self->m54 = 0;
    self->m58 = (u16)-1;
}

