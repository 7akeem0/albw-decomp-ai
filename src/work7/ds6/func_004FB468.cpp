#include "ds6.h"

void func_0016A02C(void* p, s32 a, s32 b, u32 c);

struct Obj4FB468 {
    char _pad[0x410];
    void* m410;
    char _pad2[0x59c - 0x414];
    BitFlag m59c;
};

void func_004FB468(Obj4FB468* self) {
    func_0016A02C(self->m410, -1, -1, 0);
    func_0016898C(self->m410, Req5C(0, 0, false));
    self->m59c.set(0x100u);
}
