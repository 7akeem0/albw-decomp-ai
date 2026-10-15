#include "ds6.h"

struct Mgr50805C { char _pad[0x44]; u32 m44; };

extern void* data_0070B728;
extern void* data_0070FB60;
u32 func_005569BC(void* p);
void func_0014DDEC(void* self);

void func_0050805C(void* self) {
    Mgr50805C* m = (Mgr50805C*)data_0070B728;
    if (m->m44 != 0) {
        if (func_005569BC(data_0070FB60) == 0) return;
    }
    func_0014DDEC(self);
}

