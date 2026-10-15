#include "ds2.h"

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void func_00587F74(void*, const sead::SafeString&, s32);

void func_0019B7D4(void* self) {
    char* p = (char*)self + 0x440;
    *(u32*)(p + 4) = 0xa;
    *(f32*)(p + 8) = 0.1f;
    *(u32*)p = 0;
    func_00587F74(*(void**)0x711F50, "SE_S_WARP_HOLE_APPEAR", 0);
}
