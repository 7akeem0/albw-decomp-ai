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

struct Obj1986E0 {
    char pad0[0x2d7];
    u8 m2D7;
};

void func_001986E0(Obj1986E0* self) {
    self->m2D7 = 1;
    func_00150A84(self, "SE_ZoraFire_DISAPPEAR", 0);
}
