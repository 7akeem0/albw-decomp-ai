#include "ds6.h"

void func_0016A02C(void* p, s32 a, s32 b, u32 c);

struct Obj4FB408 {
    char _pad[0x418];
    void* m418;
    char _pad2[0x59c - 0x41c];
    BitFlag m59c;
};

void func_004FB408(Obj4FB408* self) {
    func_0016A02C(self->m418, -1, -1, 0);
    func_0016898C(self->m418, Req5C(0, 0xa, false));
    self->m59c.set(0x200u);
}
