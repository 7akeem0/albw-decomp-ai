#include "ds6.h"

extern char ro_006F58A8[];

struct V49048C { virtual void v0(); virtual void v1(); };
struct Obj49048C { void* m0; char _pad[0x50 - 4]; void* m50; };

void func_0048A134(void* self);

void func_0049048C(Obj49048C* self) {
    void* p = self->m50;
    self->m0 = ro_006F58A8;
    if (p) {
        ((V49048C*)p)->v1();
        self->m50 = 0;
    }
    func_0048A134(self);
}

