#include "ds3.h"
#include "vt64.h"
struct Sub38 { char pad[4]; };
struct S2BFAC8 : Vt64 {
    char pad[0x38 - 4];
    Sub38 m38;
    char pad2[0x5d - 0x3c];
    u8 b5D;
    u8 b5E;
};
extern "C" void func_00662C9C(void*, int) ;
void func_002BFAC8(S2BFAC8* self) {
    if (self->v25() != 0) return;
    if (self->b5E != 0) {
        if (self->b5D) self->b5D = 0; else self->b5D = 1;
    }
    func_00662C9C(&self->m38, 0);
}
