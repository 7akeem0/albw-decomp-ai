#include "ds3.h"
struct E2974 { char b[1]; };
struct Arr2974 { u32 count; u32 pad; E2974** begin; };
struct S2974 { Arr2974* m0; };
extern "C" void func_00199F84(E2974*, f32);
void func_002974F0(S2974* p, f32 f) {
    Arr2974* a = p->m0;
    E2974** it = a->begin;
    u32 n = a->count;
    E2974** end = it + n;
    for (; it != end; ++it)
        func_00199F84(*it, f);
}
