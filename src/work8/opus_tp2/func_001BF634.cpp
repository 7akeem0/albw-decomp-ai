#include "../../work7/ds2/ds2.h"
extern void func_00588C14(void*, int, int);
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void func_00150A84(void*, const sead::SafeString&, s32);
u32 func_001BF634(void* self, char* msg) {
    u8* m = *(u8**)(msg + 0x2c);
    if (m == 0 || m[1] != 0xf) return 0;
    if (*(u16*)((char*)self + 0x36) != 0) func_00588C14(self, 0, 1);
    (*(void(**)(void*))(*(u32*)((char*)self + 0x320) + 0x30))((char*)self + 0x320);
    *(u8*)((char*)self + 0x2d7) = 1;
    func_00150A84(self, sead::SafeString("SE_CubeBreak_BREAK"), 0);
    return 0;
}

