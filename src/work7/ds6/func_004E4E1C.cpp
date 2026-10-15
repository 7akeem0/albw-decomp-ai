#include "ds6.h"

struct Sub4E4E1C { char _pad[0x38]; u8 m38; };

u32 func_00521080(void* self, void* p);

bool func_004E4E1C(void* self, Sub4E4E1C* s) {
    if (s->m38 == 0) {
        s8 k = *(s8*)((char*)self + 0x488);
        if (k != 6 && k != 7 && k != 5) return false;
    }
    return func_00521080(self, (char*)s + 0x28) != 0;
}
