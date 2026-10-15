#include "ds3.h"
struct SafeStr28 { virtual void vf(); const char* str; SafeStr28(const char* s) : str(s) {} };
extern "C" u32 func_00564A78(void*, const SafeStr28&);
struct S283C88 { char pad[0x7a0]; void* m7a0; char pad2[0x840 - 0x7a4]; u32 m840; u32 m844; };
void func_00283C88(S283C88* self) {
    self->m840 = func_00564A78(self->m7a0, SafeStr28("head"));
    self->m844 = func_00564A78(self->m7a0, SafeStr28("chest"));
}
