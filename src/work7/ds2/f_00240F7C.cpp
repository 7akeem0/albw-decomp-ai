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

void func_00240F7C(void* self) {
    func_00150A84(self, "SE_SwitchPull_PULL_START", 0);
    *(u8*)((char*)self + 0x4f0) = 0;
}
