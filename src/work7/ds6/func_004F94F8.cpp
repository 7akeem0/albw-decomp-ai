#include "ds6.h"

struct Obj4F94F8 {
    char _pad[0x430];
    void* m430;
    void* m434;
    char _pad2[0x59c - 0x438];
    BitFlag m59c;
    char _pad3[0x908 - 0x5a0];
    u32 m908;
};

bool func_004FABDC(void* self, u32 id, s32 arg, s32 force);
void func_004F9554(void* p, u32 a, u32 b, u32 c);

void func_004F94F8(Obj4F94F8* self) {
    self->m908 = 0;
    func_004FABDC(self, 0, -1, 0);
    self->m59c.set(0x80);
    func_004F9554(self->m430, 5, 0, 1);
    func_004F9554(self->m434, 5, 0, 1);
}
