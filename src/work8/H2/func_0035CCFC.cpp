#include "range.h"
namespace sead {
template <typename T>
class SafeStringBase {
public:
    SafeStringBase(const T* s) : mStringTop(const_cast<T*>(s)) {}
    virtual ~SafeStringBase() {}
    virtual void assureTerminationImpl_() const {}
    T* mStringTop;
};
typedef SafeStringBase<char> SafeString;
}
extern "C" void func_003252B8(void*, s32, f32);
struct Act {
    virtual void f();
    u8 pad4[0x490 - 4];
    s8 m490;
    u8 pad491[0x4a8 - 0x491];
    f32 m4a8;
    void playSE(const sead::SafeString& se, s32 v);
};
void Act::f() {
    func_003252B8(this, m490, m4a8);
    playSE(sead::SafeString("SE_WaterMoveStatue_MOVE"), 0);
}
