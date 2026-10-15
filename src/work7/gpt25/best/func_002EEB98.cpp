#include "../range_types.h"
struct Obj2EEB { char pad[0x59c]; Flag32 flags; };
extern "C" void func_004FAD90(Obj2EEB*);
extern "C" void f_002EEB98(Obj2EEB* p) {
    func_004FAD90(p);
    p->flags.reset(0x30);
    p->flags.set(0x4000);
}
