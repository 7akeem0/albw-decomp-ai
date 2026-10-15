#include "ds3.h"
#include "vt64.h"
struct S2CA134 : Vt64 {
    char pad[0x4b8 - 4];
    u32 m4b8;
};
extern "C" int func_00530280(void*);
extern "C" int func_0052FDE8(void*);
extern "C" void func_00663810(void*, int) ;
void func_002CA134(S2CA134* self) {
    if (func_00530280(self) == 0) return;
    if (func_0052FDE8(self) == 0) return;
    if (self->v25() == 0) return;
    func_00663810(&self->m4b8, 1);
}
