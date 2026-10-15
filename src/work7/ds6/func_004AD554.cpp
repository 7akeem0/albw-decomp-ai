#include "ds6.h"

struct Mgr4AD554 { char _pad[0x68]; u16 m68; };
extern Mgr4AD554* data_00709DF8;

struct Obj4AD554 {
    char _pad[0x7704];
    u32 m7704;
    u32 m7708;
};

void func_004AD554(Obj4AD554* self, u32 v) {
    u32 old = self->m7704;
    self->m7708 = old;
    self->m7704 = v;
    if (data_00709DF8->m68 == 0) self->m7708 = 0;
}
