#include "range.h"
struct Values {
    char pad[0x60];u16 values[8];
    void set(u16 v,s32 i) { u16* q=values;q[i]=v; }
};
struct Child { char pad[0x74];Values* sub; };
struct Sub {
    char pad[0xc];Child* child;u16 unused;u16 values[8];
    void set(u16 v,s32 i) {
        u16* q=values;q[i]=v;
        if(child&&child->sub)child->sub->set(v,i);
    }
};
struct S { char pad[0x14];Sub sub;void f(u16,s32); };
void S::f(u16 v,s32 i) { sub.set(v,i); }
