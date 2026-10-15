#include "ds3.h"
struct SafeString;
struct S296B { char pad[1]; };
extern "C" void* data_711F50;
extern "C" s32 func_00587FCC(void*, const SafeString&);
extern "C" void func_00296D70(S296B*, s32, s32, s32, s32);
void func_00296B8C(S296B* p, const SafeString& name, s32 a) {
    s32 id = func_00587FCC(data_711F50, name);
    if (id == -1) return;
    func_00296D70(p, 0x10000, id, a, 0);
}
