#include "range.h"
struct Child12E { char pad0[0xd]; u8 first,second; };
struct Owner12E { char pad0[0x1434]; Child12E* children[1]; };
extern "C" void func_0012C718(Child12E*);
extern "C" void func_0012E794(Owner12E* p) {
    Child12E** slots = p->children;
    Child12E* q = slots[0];
    if (q->first == 3 && q->second == 3) func_0012C718(q);
}
