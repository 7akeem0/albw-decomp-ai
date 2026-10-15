#include "ds6.h"

struct Obj4FCDF4 {
    char _pad[0x54];
    void* m54[0x15];
    u8 ma8;
    u8 ma9;
};

void func_00151148(void* p, u32 a);

void func_004FCDF4(Obj4FCDF4* self, u32 v) {
    for (u32 i = 0; i < self->ma9; i++) {
        func_00151148(self->m54[i], v);
    }
}

