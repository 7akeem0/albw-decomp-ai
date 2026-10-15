#include "ds3.h"
struct SafeString { virtual void vf(); const char* str; SafeString(const char* s) : str(s) {} };
struct Obj29D1 { char pad[0x4c]; u8 b4C; };
struct S29D104 { char pad[0xec]; Obj29D1* mEC; };
extern "C" char data_00712940[];
extern "C" void* data_00711F50;
extern "C" void func_006600C4(void*, int);
extern "C" void func_00259354(void*, const SafeString&, int);
void func_0029D104(S29D104* self) {
    Obj29D1* o = self->mEC;
    if (o->b4C == 0) func_006600C4((char*)o + 0x48, 1);
    func_00259354(data_00711F50, SafeString(*(const char**)(data_00712940 + 4)), 0x3c);
}
