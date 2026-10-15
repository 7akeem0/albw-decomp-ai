#include "ds6.h"

void func_004FABDC(void* self, u32 a, s32 b, u32 c);
void func_004FB4E0(void* self, f32 v);

struct Obj500D90 {
    char _pad[0x59c];
    BitFlag m59c;
};

void func_00500D90(Obj500D90* self) {
    self->m59c.set(2u);
    func_004FABDC(self, 2, -1, 0);
    func_004FB4E0(self, 1.0f);
}
