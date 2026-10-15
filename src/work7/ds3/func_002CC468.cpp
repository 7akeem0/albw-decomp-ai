#include "ds3.h"
struct S2CC468 { char pad[0x476]; u8 b476; char pad2[0x9d0-0x477]; u8 b9D0; };
extern "C" char data_0070EFE8[];
extern "C" int func_001E6A6C(S2CC468*, void*);
extern "C" void func_001E6AB4(S2CC468*);
void func_002CC468(S2CC468* self) {
    if (self->b9D0 == 0) { func_001E6AB4(self); return; }
    if (self->b476 == 0) return;
    if (func_001E6A6C(self, data_0070EFE8) == 0) return;
    self->b476 = 0;
    self->b9D0 = 0;
}
