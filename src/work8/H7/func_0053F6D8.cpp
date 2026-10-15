#include "h7.h"

struct Tab0053F6D8 { u8 m0; char _pad[15]; };
extern Tab0053F6D8 data_007111A8[];

struct Obj0053F6D8 {
    char _0[0x42];
    s16 m42;
};

bool func_0053F6D8(Obj0053F6D8* self) {
    s16 k = self->m42;
    if (k == 0x51) return false;
    if (k <= 0x51) {
        if (k == 2 || k == 0x41 || k == 0x4e) return false;
    } else {
        if (k == 0x68 || k == 0x69 || k == 0x89) return false;
    }
    if (data_007111A8[k].m0 == 0x16) return false;
    return true;
}
