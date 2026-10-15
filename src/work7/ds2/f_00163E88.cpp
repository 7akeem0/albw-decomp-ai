#include "ds2.h"

extern void func_004FABDC(void*, int, int, int);
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void func_00150A84(void*, const sead::SafeString&, s32);

void func_00163E88(void* self) {
    func_004FABDC(self, 7, -1, 0);
    func_00150A84(self, "SE_Omugai_APPEAR", 0);
}
