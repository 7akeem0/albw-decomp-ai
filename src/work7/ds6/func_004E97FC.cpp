#include "ds6.h"

struct Obj4E97FC {
    char _pad[0x38];
    void* m38;
};

void* func_0029767C(void* p, s32 a);
u32 func_0019A014(void* p, u32 a);
void func_0019A4C4(void* p, u32 b);

void func_004E97FC(Obj4E97FC* self, u32 a, u32 b) {
    void* p = func_0029767C(self->m38, 0);
    if (p == 0) return;
    if (func_0019A014(p, a) == 0) return;
    func_0019A4C4(p, b);
}

