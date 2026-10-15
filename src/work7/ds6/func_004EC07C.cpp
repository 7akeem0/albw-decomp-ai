#include "ds6.h"

struct T50EC { char pad[0x50]; T50EC(); };
u32 func_00539024(void* a, T50EC* b);
void func_00297140(void* a, T50EC* b);

struct Obj4EC07C {
    char _pad[0x4c];
    void* m4c;
    void* m50;
};

void func_004EC07C(Obj4EC07C* self) {
    T50EC tmp;
    if (func_00539024(self->m50, &tmp)) func_00297140(self->m4c, &tmp);
}
