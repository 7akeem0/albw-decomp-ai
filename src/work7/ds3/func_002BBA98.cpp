#include "ds3.h"
struct Child2BBA { char pad[0x2c]; u32 flags; };
struct S2BBA { char pad[0x424]; Child2BBA* m424; char pad2[0x584-0x428]; Flag32 m584; };
extern "C" void func_004FC570(S2BBA*);
extern "C" void func_002BBAD4(S2BBA*);
void func_002BBA98(S2BBA* p) {
    func_004FC570(p);
    p->m584.set(0x800);
    if (p->m424) p->m424->flags |= 8;
    func_002BBAD4(p);
}
