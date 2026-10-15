#include "ds6.h"

struct Sub40_4E977C { char _pad[0x84]; u8 m84; u8 m85; };

struct Obj4E977C {
    char _pad[0x38];
    void* m38;
    char _pad1[4];
    Sub40_4E977C* m40;
    char _pad2[0x50 - 0x44];
    void* m50;
    char _pad3[0x60 - 0x54];
    u32 m60;
    char _pad4[0x82 - 0x64];
    u8 m82;
};

void func_00259214(void* p);
void func_00297648(void* p);

void func_004E977C(Obj4E977C* self) {
    func_00259214(self->m50);
    self->m40->m84 = 0;
    self->m40->m85 = 0;
    func_00297648(self->m38);
    self->m60 &= ~2u;
    self->m82 = 0;
}
