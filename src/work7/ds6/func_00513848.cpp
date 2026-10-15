#include "ds6.h"

extern void* data_0070FB60;
void* func_00556E7C(void* g, u32 id);
__attribute__((weak)) void func_0066B94C(void* p, u32 v);

struct Obj513848 {
    char _pad[0x48c];
    char tail;
};

void func_00513848(Obj513848* self) {
    if (!func_00556E7C(data_0070FB60, 0xaa)) func_0066B94C((char*)self + 0x48c, 1);
}
