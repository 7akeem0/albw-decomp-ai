#include "range.h"
extern "C" void func_004BC7BC(NpcControl30*);
void f_00632F8C(NpcControl30* p) {
    p->state85e=1;
    func_004BC7BC(p);
    p->request(p->id853,-1);
    p->visible361=0;
    p->v38();
}
