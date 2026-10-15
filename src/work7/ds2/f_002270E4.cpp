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

void func_002270E4(void* self) {
    func_00150A84(self, "SE_Togegoma_PARTS_OFF", 0);
    *(u8*)((char*)self + 0x74e) = 0;
}
