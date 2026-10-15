#include "ds6.h"

extern char data_00725974[];

struct T004FB30C {
    char _pad[0xa8];
    T004FB30C(u32 a, const void* b, u32 c);
};

struct Obj4FB30C {
    char _pad[0x418];
    void* m418;
};

void func_004FB30C(Obj4FB30C* self, u32 a) {
    self->m418 = new ((NoThrowTag())) T004FB30C(a, data_00725974, 1);
}
