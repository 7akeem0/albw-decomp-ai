#include "ds2.h"

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void* g_711F50;
extern void func_004EC988(void*, const sead::SafeString&, s32);

void func_00259800() {
    func_004EC988(g_711F50, "SE_ENV_HOLY_PLACE", 0);
}
