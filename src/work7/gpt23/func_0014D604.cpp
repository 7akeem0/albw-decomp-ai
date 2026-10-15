#include "range.h"
struct Child14D { char pad0[0xd]; s8 first; u8 second; };
struct Owner14D { char pad0[0x2c]; Child14D* child; };
extern "C" void func_0014D604(Owner14D* p) {
    Child14D* q = p->child;
    if (q && !q->first && !q->second) q->second = 1;
}
