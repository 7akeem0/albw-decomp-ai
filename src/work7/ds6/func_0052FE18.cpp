#include "ds6.h"

struct Mgr5F { char _pad[0x44]; u32 m44; };

struct Obj52FE18 {
    char _pad[0x480];
    f32 m480;
    char _pad2[0x48c - 0x484];
    f32 m48c;
};

extern void* data_0070B728;

void func_0052FE18(Obj52FE18* self, Vec3* out) {
    out->x = 0.0f;
    out->y = 0.0f;
    out->z = 0.0f;
    Mgr5F* mgr = (Mgr5F*)data_0070B728;
    if (mgr->m44 == 0) {
        out->z = self->m480 - self->m48c;
    }
}

