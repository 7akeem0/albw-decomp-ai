#include "ds3.h"
struct SafeString { virtual void vf(); const char* str; SafeString(const char* s) : str(s) {} };
struct SndMgr2 { char pad[0x40]; void* m40; };
extern "C" SndMgr2* data_00711F50;
extern "C" const char* data_00711FC8[];
extern "C" void func_0025BCAC(void*, const SafeString&, int);
void func_00321738(void* self, u32 idx) {
    if (idx >= 0x47) return;
    func_0025BCAC(data_00711F50->m40, SafeString(data_00711FC8[idx]), 0);
}
