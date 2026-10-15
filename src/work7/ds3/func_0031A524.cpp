#include "ds3.h"
struct SafeString { virtual void vf(); const char* str; SafeString(const char* s) : str(s) {} };
struct S31A524 { char pad[4]; };
extern "C" void func_00150A84(void*, const SafeString&, int);
void func_0031A524(S31A524* self) {
    *(f32*)((char*)self + 0x478) = 1.0f;
    func_00150A84(self, SafeString("SE_TurtleBullied_WATER"), 0);
}
