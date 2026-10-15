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

struct Obj18D9FC {
    char pad0[0x3dc];
    f32 m3DC, m3E0, m3E4;
};

void func_0018D9FC(Obj18D9FC* self) {
    self->m3DC = 0.0f;
    self->m3E0 = 0.0f;
    self->m3E4 = 0.0f;
    func_00150A84(self, "SE_HookShot_GRAB", 0);
}
