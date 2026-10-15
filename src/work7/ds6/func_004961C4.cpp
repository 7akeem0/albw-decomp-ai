#include "ds6.h"

struct Obj4961C4 {
    char _pad[0x124];
    u32 m124;
};

void func_00601390();
void func_006003D8(u32 a, u32* out);
void func_006017F0(u32 v);
void func_00601600();
void func_005FF760();

void func_004961C4(Obj4961C4* self) {
    func_00601390();
    u32 v;
    func_006003D8(0x201, &v);
    if (v != 0) func_006017F0(v);
    func_00601600();
    func_005FF760();
    self->m124 = 1 - self->m124;
}
