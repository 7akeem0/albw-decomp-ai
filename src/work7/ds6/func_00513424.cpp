#include "ds6.h"

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}

struct AArr;
struct Sub51C { char _pad[0x30]; u8 m30; };

struct Obj513424 {
    char _pad[0x3e0];
    f32 m3e0;
    char _pad2[0x4b0 - 0x3e4];
    AArr* m4b0;
    char _pad3[0x51c - 0x4b4];
    Sub51C* m51c;
    void* m520;
    char _pad4[0x548 - 0x524];
    u8 m548;
    char _pad5[0x559 - 0x549];
    u8 m559;
};

void func_00150A84(Obj513424* self, const sead::SafeString& s, s32 v);
void func_004CF478(Sub51C* p, s32 a, s32 b);
void func_00151148(void* p, s32 a);

void func_00513424(Obj513424* self) {
    if (self->m51c->m30 == 0) {
        func_00150A84(self, sead::SafeString("SE_KinSta_APPEAR"), 0);
    }
    func_004CF478(self->m51c, 1, 0);
    func_00151148(self->m520, 1);
    if (self->m548 == 7) {
        func_0016898C(self->m4b0, Req5C(5, 6, false));
    } else {
        func_0016898C(self->m4b0, Req5C(1, 6, false));
    }
    self->m3e0 = 0.0f;
    self->m559 = 1;
}
