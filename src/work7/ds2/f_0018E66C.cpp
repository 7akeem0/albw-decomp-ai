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

struct Obj18E66C {
    char pad0[0x3dc];
    f32 m3DC, m3E0, m3E4;
    char pad3e8[0x524 - 0x3e8];
    u32 m524;
};

void func_0018E66C(Obj18E66C* self) {
    self->m524 = 0;
    self->m3DC = 0.0f;
    self->m3E0 = 0.0f;
    self->m3E4 = 0.0f;
    func_00150A84(self, "SE_HookShot_GRAB", 0);
}
