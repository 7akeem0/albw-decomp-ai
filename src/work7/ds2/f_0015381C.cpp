#include "ds2.h"

extern void func_004FC07C(void*, int, int, int);
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void func_00150A84(void*, const sead::SafeString&, s32);

void func_0015381C(void* self) {
    func_004FC07C(self, 4, -1, 0);
    func_00150A84(self, "SE_Bubble_BURN", 0);
}
