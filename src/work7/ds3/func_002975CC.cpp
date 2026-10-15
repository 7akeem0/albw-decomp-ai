#include "ds3.h"
struct E2975 { char b[1]; };
struct Arr2975 { u32 count; u32 pad; E2975** begin; };
struct S2975 { Arr2975* m0; };
extern "C" void func_0019A248(E2975*, f32);
void func_002975CC(S2975* p, f32 f) {
    Arr2975* a = p->m0;
    E2975** it = a->begin;
    u32 n = a->count;
    E2975** end = it + n;
    for (; it != end; ++it)
        func_0019A248(*it, f);
}
