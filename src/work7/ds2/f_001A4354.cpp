#include "ds2.h"
extern s32 func_0058A8F0(void*);
extern void func_0065A5B8(void*, s32);
extern f32 func_0058AA40(void*);
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void func_001507D8(void*, const sead::SafeString&, s32);
void func_001A4354(void* self) {
    if (func_0058A8F0(self) != 0) func_0065A5B8((char*)self + 0x8bc, 6);
    f32 v = func_0058AA40(self);
    if (v < 21.0f) return;
    func_001507D8(self, sead::SafeString("SE_Funguin_SLIDE"), 0);
}
