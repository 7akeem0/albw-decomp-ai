#include "ds6.h"

struct Arr8EDb {
    void* a[8];
    void*& operator[](s32 i) { void** p = a; if ((u32)i < 8) p = p + i; return *p; }
};

struct Obj4ED620 {
    char _pad[0xa0];
    Arr8EDb arr;
};

void func_004ED620(Obj4ED620* self, void* v) {
    for (s32 i = 0; i < 8; i++) {
        if (self->arr[i] == 0) { self->arr[i] = v; return; }
        if (self->arr[i] == v) return;
    }
}
