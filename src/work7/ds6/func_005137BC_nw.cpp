#include "ds6.h"

 void func_0066B94C(void* p, u32 v);

struct Obj5137BC {
    char _pad[0x4b0];
    AnimArr* m4b0;
    AnimArr* m4b4;
};

void func_005137BC(Obj5137BC* self) {
    func_0016898C(self->m4b0, Req5C(7, 6, false));
    func_0016898C(self->m4b4, Req5C(0, 6, false));
    (*self->m4b4)[0].m10 = 1.0f;
    func_0066B94C((char*)self + 0x48c, 0x11);
}
