#include "ds3.h"
struct SafeString;
struct S2944 { char pad[0x128]; Flag32 m128; };
extern "C" void* data_711F50;
extern "C" s32 func_00587FCC(void*, const SafeString&);
extern "C" void func_00294D18(S2944*, s32);
void func_002944CC(S2944* p, const SafeString& name) {
    s32 id = func_00587FCC(data_711F50, name);
    if (id != -1) { func_00294D18(p, id); return; }
    p->m128.set(0x10);
}
