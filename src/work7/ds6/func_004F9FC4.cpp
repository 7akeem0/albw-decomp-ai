#include "ds6.h"

void func_002AF530(void* a, void* b, s8 c);
void func_0014FF58(void* p, u32 v);

struct Sub4F9FC4 {
    char _pad[0x14];
    char m14[0x21 - 0x14];
    s8 m21;
    char _pad2[0x38 - 0x22];
    u32 m38;
};

void func_004F9FC4(void* self, Sub4F9FC4* arg) {
    func_002AF530(self, arg->m14, arg->m21);
    if (arg->m21 == 5) {
        u32 v = (arg->m38 & 0xc000000u) >> 0x1a;
        func_0014FF58(arg->m14, v);
    }
}
