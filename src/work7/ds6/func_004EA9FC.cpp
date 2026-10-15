#include "ds6.h"

struct Obj4EA9FC {
    char _pad[0x4c];
    void* m4c;
};

bool func_004B083C();
void func_0010C7E0(void* p, u32 a, f32 v);

void func_004EA9FC(Obj4EA9FC* self, u32 a, f32 v) {
    if (func_004B083C()) func_0010C7E0(self->m4c, a, v);
}

