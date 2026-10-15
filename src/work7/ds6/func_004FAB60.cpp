#include "ds6.h"

struct Obj4FAB60 {
    char _pad[0x418];
    void* m418;
    char _pad2[0x510 - 0x41c];
    char* m510;
    char _pad3[0x5a0 - 0x514];
    u32 m5a0;
};

struct Sub510 {
    char _pad[0x38];
    BF16 m38;
};

bool func_004FAB60(Obj4FAB60* self, u32 id, s32 force) {
    if (!force) {
        if ((s32)(self->m5a0 << 20) < 0) return false;
    }
    func_0016898C(self->m418, Req5C(id, 0xa, false));
    Sub510* s = (Sub510*)self->m510;
    BF16* p = &s->m38;
    p->reset(1);
    return true;
}
