#include "range_types.h"
struct State30DC { char storage[0x15c]; };
struct Obj30DC { char pad[0x184]; State30DC state; void* child; };
extern "C" void func_00230A08(Obj30DC*);
extern "C" void func_0030DCCC(State30DC*,void*);
extern "C" void f_0030DCB0(Obj30DC* p) {
    func_00230A08(p);
    func_0030DCCC(&p->state,p->child);
}
