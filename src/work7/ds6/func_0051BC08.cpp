#include "ds6.h"

struct Arr51BC08 {
    void* m[3];
    void* at(s32 i) { void** p = m; if ((u32)i < 3u) p = p + i; return *p; }
};
struct Obj51BC08 { char _pad[0xa4]; Arr51BC08 arr; };

void func_001B6C2C(void* p);

void func_0051BC08(Obj51BC08* self) {
    for (s32 i = 0; i < 3; i++) {
        if (self->arr.at(i)) func_001B6C2C(self->arr.at(i));
    }
}

