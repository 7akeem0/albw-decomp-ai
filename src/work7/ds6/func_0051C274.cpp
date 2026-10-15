#include "ds6.h"

struct Arr51C274 {
    void* m[3];
    void* at(s32 i) { void** p = m; if ((u32)i < 3u) p = p + i; return *p; }
};
struct Obj51C274 { char _pad[0xa4]; Arr51C274 arr; };

void func_0044DA44(void* p, u32 a);

void func_0051C274(Obj51C274* self, u32 a) {
    for (s32 i = 0; i < 3; i++) {
        if (self->arr.at(i)) func_0044DA44(self->arr.at(i), a);
    }
}

