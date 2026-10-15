#include "ds3.h"
struct S2AF108 { char pad[0x34]; void* m34; char pad2[0x64-0x38]; u8 b64; char pad3[0x2b8-0x65]; u32 m2B8; };
extern "C" void func_004FC78C(void*, int);
extern "C" void func_002B193C(S2AF108*, int, float);
extern "C" int func_005811E8(void*);
extern "C" void func_00352128(void*, void*, const char*) ;
void func_002AF108(S2AF108* self) {
    func_004FC78C(self->m34, 0);
    self->b64 = 0;
    func_002B193C(self, 0x14, 1.0f);
    if (func_005811E8((char*)self + 0x2b8) == 0) {
        func_00352128((char*)self->m34 + 0x324, (char*)self + 0x2b8, "DeathEx");
    }
}
