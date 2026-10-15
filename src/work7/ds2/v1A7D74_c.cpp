#include "ds2.h"
u32 func_001A7D74(void* self, u32 ret, char* o) {
    if (*(u8*)(o + 0x27) != 0) {
        s8 x = *(s8*)(o + 0x26);
        if (x == 9 || x == 0xa || x == 0xc) {
            s8 y = *(s8*)(o + 0x24);
            if ((y == 0 || y == 5) || (y == 6 || y == 7) || (y == 8 || y == 9) ||
                (y == 0xa || y == 0xd) || (y == 0xe || y == 0xf)) {
                *(u8*)((char*)self + 0x939) = 1;
            }
        }
    }
    u32& f = *(u32*)((char*)self + 0x5a0);
    f |= 0x80u;
    return ret;
}
