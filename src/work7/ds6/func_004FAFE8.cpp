#include "ds6.h"

void func_004F88A0(void* self, void* a);
void func_004FABDC(void* self, u32 a, s32 b, u32 c);
void func_004FB024(void* self);

struct Obj4FAFE8 {
    char _pad[0x59c];
    BitFlag m59c;
    char _pad2[0x8e0 - 0x5a0];
    void* m8e0;
};

void func_004FAFE8(Obj4FAFE8* self) {
    func_004F88A0(self, self->m8e0);
    self->m59c.set(0x80u);
    func_004FABDC(self, 2, -1, 0);
    func_004FB024(self);
}
