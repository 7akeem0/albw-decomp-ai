#include "ds6.h"

struct G4C4218 { char _pad[8]; void* m8; };
extern G4C4218 data_00711DE8;

struct Obj4C4218 {
    char _pad[0x10];
    void* m10;
    char _pad2[0x9b9 - 0x14];
    u8 m9b9;
    char _pad3[0x9c0 - 0x9ba];
    u32 m9c0;
};

void func_00102130(void* p);

u32 func_004C4218(Obj4C4218* self) {
    if (self->m10 == 0) return 0;
    if (self->m9c0 > 1) return 0;
    if (self->m9b9 != 0) func_00102130(data_00711DE8.m8);
    self->m9c0 = 2;
    return 1;
}

