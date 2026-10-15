#include "ds6.h"

struct V4957DC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
};
struct Obj4957DC {
    char _pad[0x220];
    V4957DC* m220;
    void* m224;
    u32 m228;
    u8 m22c;
};

void func_0040959C(Obj4957DC* self);
void func_0058FA08(void* p);

void func_004957DC(Obj4957DC* self) {
    if (self->m22c != 0) {
        func_0040959C(self);
        self->m22c = 0;
    }
    if (self->m220) {
        self->m220->v3();
        self->m220 = 0;
    }
    if (self->m224) {
        func_0058FA08(self->m224);
        self->m224 = 0;
    }
}
