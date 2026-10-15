#include "range.h"
extern "C"  void func_00657070(StateMgrBlock*,s32);
extern "C" void func_00137CAC(Actor137* p) {
    UnsignedCounts counts = p->counts;
    if (counts.num < counts.max) {
        p->counts.num = counts.num + 1;
        return;
    }
    func_00657070(&p->state,0);
}
