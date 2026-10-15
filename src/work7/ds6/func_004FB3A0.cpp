#include "ds6.h"

struct Sub510_4FB3A0 {
    char _pad[0x48];
    f32 m48;
    f32 m4c;
    f32 m50;
    char _pad2[0x70 - 0x54];
    f32 m70;
    f32 m74;
    f32 m78;
};
struct Obj4FB3A0 {
    char _pad[0x4dc];
    u8 m4dc;
    char _pad2[0x500 - 0x4dd];
    u32 m500;
    u32 m504;
    char _pad3[0x510 - 0x508];
    Sub510_4FB3A0* m510;
};

void func_004FD0B4(Obj4FB3A0* self);

void func_004FB3A0(Obj4FB3A0* self) {
    self->m4dc = 8;
    self->m510->m48 = 1.0f;
    self->m510->m4c = 1.0f;
    self->m510->m50 = 1.0f;
    self->m510->m70 = 0.0f;
    self->m510->m74 = 0.0f;
    self->m510->m78 = 0.0f;
    self->m500 = 0;
    self->m504 = 0;
    func_004FD0B4(self);
}
