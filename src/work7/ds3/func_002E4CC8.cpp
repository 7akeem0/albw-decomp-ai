#include "ds3.h"
struct X2E4CC8 { char pad[1]; s8 b1; char pad2[3 - 2]; u8 b3; };
struct Arg2E4CC8 { char pad[0x2c]; X2E4CC8* m2c; };
struct S2E4CC8 { char pad[0x8d0]; s8 b8d0; };
extern "C" void func_00663E64(void*, int);
bool func_002E4CC8(S2E4CC8* self, Arg2E4CC8* arg) {
    X2E4CC8* p = arg->m2c;
    if (p == 0) return false;
    s8 k = p->b1;
    if (k != 1) {
        if (k != 3) return false;
        if (p->b3 != 1) return false;
    }
    s8 v = self->b8d0;
    if (v == 8 || v == 6) return false;
    func_00663E64((char*)self + 0x8cc, 6);
    return true;
}
