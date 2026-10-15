#include "ds2.h"
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void func_00150A84(void*, const sead::SafeString&, s32);
extern void func_00659024(void*, s32) __attribute__((weak));
void func_00177924(void* self) {
    u64 v = *(u64*)((char*)self + 0x4a4);
    u32 x = (u32)v;
    u32 y = (u32)(v >> 32);
    if (y > x) { *(u32*)((char*)self + 0x4a4) = x + 1; return; }
    if (*(u8*)((char*)self + 0x4b0) == 0) {
        func_00150A84(self, sead::SafeString("SE_FanS_MOVE_START"), 0);
    } else {
        func_00150A84(self, sead::SafeString("SE_FanL_MOVE_START"), 0);
    }
    func_00659024((char*)self + 0x40c, 2);
}

