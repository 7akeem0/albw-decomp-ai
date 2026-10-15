#include "ds6.h"

struct Arr8ED {
    void* a[8];
    void*& operator[](s32 i) { void** p = a; if ((u32)i < 8) p = p + i; return *p; }
};

struct Obj4ED4DC {
    char _pad[0xc0];
    Arr8ED arr;
};

void func_004ED4DC(Obj4ED4DC* self, void* v) {
    for (s32 i = 0; i < 8; i++) {
        if (self->arr[i] == 0) { self->arr[i] = v; return; }
        if (self->arr[i] == v) return;
    }
}
