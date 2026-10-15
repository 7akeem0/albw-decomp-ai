#include "ds6.h"

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}

struct AEntry { u32 m0, m4; f32 m8; u32 mC; f32 m10; };
struct AArr {
    u32 pad[3];
    s32 mNum;
    s32 mMax;
    AEntry* mData;
    AEntry& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};

struct Obj50A2B0 {
    char _pad[0x410];
    AArr* m410;
    char _pad2[0x467 - 0x414];
    u8 m467;
};

void func_00150A84(Obj50A2B0* self, const sead::SafeString& s, s32 v);

void func_0050A2B0(Obj50A2B0* self) {
    if (self->m467 != 0) {
        (*self->m410)[0].m10 = 0.0f;
    } else {
        func_0016898C(self->m410, Req5C(1, 0xa, false));
    }
    func_00150A84(self, sead::SafeString("SE_LavaUp_DOWN"), 0);
}
