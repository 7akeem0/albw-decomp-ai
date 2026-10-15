#define CLS_EXTRA void func_001DC804(int a, int b); void func_001DE0E8(int a, int b);
#include "../shared_include/cls_1DE.h"

void func_0028C3E8(Model600* m, int a, int b);
void func_002D41B0(Part630* p, int a, int b);

// 0x1DE0E8 (agent6's): out-of-line; ARMCC -O3 inlines it into the virtual below (same TU).
void Cls::func_001DE0E8(int a, int b) {
    func_0028C3E8(m600, a, b);
    for (int i = 0; i < 25; i++)
        func_002D41B0(m630[i], a, b);
}

// 0x1DC804: virtual (vtable 0x6D1ACC) forwarding to 0x1DE0E8, inlined -> r6/r7 swapped vs 0x1DE0E8
void Cls::func_001DC804(int a, int b) {
    func_001DE0E8(a, b);
}
