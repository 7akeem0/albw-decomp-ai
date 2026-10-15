#include "h7.h"

extern const Vec3 gVec3Zero_007A9260;

struct P005445F8 {
    char _0[0x2c];
    u8 m2c;
    char _2d[0x6c - 0x2d];
    float m6c;
    float m70;
    float m74;
    char _78[0x7e - 0x78];
    u8 m7e;
};

Vec3 func_005445F8(void* self) {
    P005445F8* p = (P005445F8*)((char*)self + 0x400);
    Vec3 r = gVec3Zero_007A9260;
    if (p->m7e != 0) {
        if (p->m2c == 1) {
            r.x = -(p->m74 * p->m70);
            r.z = -(p->m74 * p->m6c);
        } else {
            r.x = p->m74 * p->m70;
            r.z = p->m74 * p->m6c;
        }
    }
    return r;
}
