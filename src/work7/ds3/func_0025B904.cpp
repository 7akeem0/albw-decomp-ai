#include "ds3.h"
struct SafeStr25B { virtual void vf(); const char* str; SafeStr25B(const char* s) : str(s) {} };
extern "C" void func_0025BDA4(void*, const SafeStr25B&);
struct S25B904 { char pad[0x68]; u32 m68; char pad2[4]; u32 m70; };
void func_0025B904(S25B904* self) {
    if (self->m70 == 0 || (self->m70 & 3) == 0) {
        func_0025BDA4(self, SafeStr25B("SE_S_HEART_RECOVER"));
    }
    self->m68 = 0x1e;
    self->m70 = self->m70 + 1;
}
