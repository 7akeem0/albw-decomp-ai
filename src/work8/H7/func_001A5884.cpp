#include "h7.h"

struct Req001A5884 { char _0[0x21]; s8 m21; };
struct P001A5884 { char _0[0x14]; char m14[0x20 - 0x14]; u8 m20; };
struct Obj001A5884 {
    char _0[0x3d0];
    char m3d0[0x43c - 0x3d0];
    P001A5884* m43c;
    char _440[0x904 - 0x440];
    u8 m904;
    char _905[0x94e - 0x905];
    u8 m94e;
};

bool func_005283C8(Obj001A5884* self, void* p);
void func_002917A4(void* mgr, void* p, s32 z, float f);
void func_00291A38(void* mgr, void* p, float f);
void func_00291FE0(void* mgr, void* p, float f);

float func_001A5884(Obj001A5884* self, Req001A5884* q) {
    if (q->m21 == 0x10) return 1.0f;
    if (self->m904 != 0) return 1.0f;
    P001A5884* p = self->m43c;
    if (q->m21 == 5 || q->m21 == 8 || q->m21 == 0xe) {
        if (p == 0) return 1.0f;
        if (func_005283C8(self, &p->m14) == 0) return 1.0f;
        self->m94e = 1;
        if (q->m21 == 5) {
            func_002917A4((void*)data_0070FB60, self->m3d0, 0, 0.3f);
        } else if (q->m21 == 8) {
            func_00291A38((void*)data_0070FB60, self->m3d0, 0.3f);
        } else if (q->m21 == 0xe) {
            func_00291FE0((void*)data_0070FB60, self->m3d0, 0.3f);
        }
        return 0.0f;
    }
    if (p == 0) return 1.0f;
    if (p->m20 == 0xc || p->m20 == 3) {
        if (func_005283C8(self, &p->m14) != 0) {
            self->m94e = 1;
            return 0.0f;
        }
    }
    return 1.0f;
}
