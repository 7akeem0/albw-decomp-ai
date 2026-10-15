#include "../range_types.h"
struct Obj296A { char pad0[0x38]; void* a; u32 pad1; void* b; u32 pad2[2]; void* c; };
extern "C" void func_00297750(void*);
extern "C" void func_0025BC5C(void*);
extern "C" void func_00296AF0(void*);
extern "C" void f_00296ACC(Obj296A* p) {
    func_00297750(p->a);
    func_0025BC5C(p->b);
    func_00296AF0(p->c);
}
