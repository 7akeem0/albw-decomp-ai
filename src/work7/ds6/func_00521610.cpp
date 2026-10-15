#include "ds6.h"

struct Obj521610 {
    char _pad[0x8e0];
    u8 m8e0;
};

extern void* data_0070B728;
u32 func_00584B94(void* mgr, s32 id);

bool func_00521610(Obj521610* self) {
    if (self->m8e0 != 0) return false;
    void* mgr = data_0070B728;
    if (mgr != 0) {
        if (func_00584B94(mgr, 0x386) != 0) return true;
    }
    return false;
}
