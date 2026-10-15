#include "ds6.h"

struct VObj { virtual void vf0(u32 id, s32 arg); };

struct Sub510 {
    char _pad[0x38];
    BF16 m38;
};

struct Obj4FABDC {
    char _pad[0x410];
    void* m410;
    u32 m414;
    char _pad2[0x510 - 0x418];
    char* m510;
    char _pad3[0x5a0 - 0x514];
    u32 m5a0;
    char _pad4[0x655 - 0x5a4];
    u8 m655;
    char _pad5[0x81c - 0x656];
    VObj* m81c;
    char _pad6[0x82a - 0x820];
    u8 m82a;
};

bool func_004FABDC(Obj4FABDC* self, u32 id, s32 arg, s32 force) {
    if (!force) {
        if ((s32)(self->m5a0 << 20) < 0) return false;
    }
    if (arg < 0) arg = self->m655;
    if (self->m81c) {
        self->m81c->vf0(id, arg);
    } else {
        func_0016898C(self->m410, Req5C(id, arg, false));
    }
    Sub510* s = (Sub510*)self->m510;
    BF16* q = &s->m38;
    q->reset(1);
    self->m82a = 1;
    self->m414 = 0;
    return true;
}
