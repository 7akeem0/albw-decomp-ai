#include "range.h"
struct Owner14A {
    char pad0[0x18]; void* object;
    u32 reserved1c;
    u32 value;
    char pad24[0xa0-0x24]; u8 flag;
};
extern "C" void func_002569E0(void*);
extern "C" void func_0010C58C(Owner14A*,u32);
extern "C" void func_0014A098(Owner14A* p) {
    func_002569E0(p->object);
    func_0010C58C(p,p->value);
    p->flag = 0;
}
