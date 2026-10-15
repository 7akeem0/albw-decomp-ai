#include "../a5.h"
struct A {
    void f(); void g();   // g = 0x1E6CE8 (empty, tail-called through branch-nop)
    s32 getActorId();     // 0x588BE4
    char pad[0x99c]; s32 m99c; bool m9a0;
};
void A::f() { m9a0 = true; m99c = getActorId(); g(); }
