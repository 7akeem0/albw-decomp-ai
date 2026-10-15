#include "ds6.h"

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}

void func_00150A84(void* self, const sead::SafeString& s, s32 v);

void func_004FB158(void* self) {
    func_00150A84(self, sead::SafeString("SE_EN_BOUND_FLOOR"), 0);
}

