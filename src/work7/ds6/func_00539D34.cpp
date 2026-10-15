#include "ds6.h"

struct Obj539D34 {
    char _pad[0x38];
    u16 m38;
    char _pad2[0x786 - 0x3a];
    u8 m786;
};

u32 func_00530290(Obj539D34* self);
u32 func_00588BF0(Obj539D34* self, u32 a);

u32 func_00539D34(Obj539D34* self) {
    if (func_00530290(self) == 0) return 0;
    if (self->m38 != 0) {
        if (func_00588BF0(self, 1) != 0) return 0;
    }
    return self->m786;
}

