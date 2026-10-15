#include "ds2.h"

extern void func_004D8AEC(void*, u32, const void*);
extern void func_004CEAF0(void*);
extern void func_001512E8(void*);

struct Sub92B8 {
    char pad0[0x74];
    f32 m74, m78, m7C;
    char pad80[0x164 - 0x80];
    u32 m164;
};
struct Obj192B8C {
    char pad0[0x3d0];
    char m3D0[0xc];
    char pad3dc[0x3e8 - 0x3dc];
    u32 m3E8;
    char pad3ec[0x40C - 0x3ec];
    Sub92B8* m40C;
    char pad410[0x428 - 0x410];
    void* m428;
};

void func_00192B8C(Obj192B8C* self) {
    Sub92B8* p = self->m40C;
    p->m164 |= 0x40000000;
    func_004D8AEC((char*)p + 0x80, self->m3E8, self->m3D0);
    Sub92B8* q = self->m40C;
    q->m164 |= 0x40000000;
    q->m74 = 1.0f;
    q->m78 = 1.0f;
    q->m7C = 1.0f;
    func_004CEAF0(self->m40C);
    func_001512E8(self->m428);
}
