#include "range.h"
extern "C" void func_0012F8E8(ArrayOwner12F* p,u32 value) {
    WordArray* a = &p->array;
    ArrayCounts counts = a->counts;
    if (counts.num < counts.max) {
        a->data[counts.num] = value;
        ++a->counts.num;
    }
}
