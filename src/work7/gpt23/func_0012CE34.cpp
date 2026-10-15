#include "range.h"
extern "C" void func_002C00A8(Child12CE*);
extern "C" void func_0012CE68(Owner12CE*);
extern "C" void func_0012CE34(Owner12CE* p) {
    func_002C00A8(p->child);
    Child12CE* child = p->child;
    BitFlag16* flags = &child->flags;
    flags->reset(0x40);
    p->flag = 0;
    func_0012CE68(p);
}
