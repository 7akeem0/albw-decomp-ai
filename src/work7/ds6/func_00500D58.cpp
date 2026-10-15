#include "ds6.h"

void func_004FAD90(void* self);
void func_004FABDC(void* self, u32 a, s32 b, u32 c);

struct Obj500D58 {
    char _pad[0x440];
    void* m440;
    char _pad2[0x59c - 0x444];
    BitFlag m59c;
    char _pad3[0x8e0 - 0x5a0];
    char tail;
};

void func_00500D58(Obj500D58* self) {
    func_004FAD90(self);
    self->m59c.clear(2u);
    func_004FABDC(self, 5, -1, 0);
    self->m440 = (char*)self + 0x8e0;
}
