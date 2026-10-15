#include "ds6.h"

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}

struct Obj50E298 {
    char _pad[0x7a0];
    void* m7a0;
    char _pad2[0xa06 - 0x7a4];
    u16 ma06;
};

void func_004BC8D8(void* p);
void func_004BC61C(void* p);
u16 func_00564A78(void* res, const sead::SafeString& name);

void func_0050E298(Obj50E298* self) {
    func_004BC8D8(self);
    func_004BC61C(self);
    self->ma06 = func_00564A78(self->m7a0, sead::SafeString("wrist_l"));
}
