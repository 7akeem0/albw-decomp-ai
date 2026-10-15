#include "ds3.h"
struct SafeStr2F { virtual void vf(); const char* str; SafeStr2F(const char* s) : str(s) {} };
extern "C" void func_004FABDC(void*, int, int, int);
extern "C" void func_00150A84(void*, const SafeStr2F&, int);
struct S2F9FFC { char pad[0x3dc]; f32 m3dc; f32 m3e0; f32 m3e4; };
void func_002F9FFC(S2F9FFC* self) {
    self->m3dc = 0.0f;
    self->m3e4 = 0.0f;
    func_004FABDC(self, 7, -1, 0);
    func_00150A84(self, SafeStr2F("SE_EN_FALL"), 0);
}
