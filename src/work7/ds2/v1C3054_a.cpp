#include "ds2.h"
extern void* data_00709D28;
extern void func_004A8304(void*, u32);
extern void func_004CF478(void*, u32, u32);
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void func_00150A84(void*, const sead::SafeString&, s32);
void func_001C3054(void* self) {
    func_004A8304(data_00709D28, *(u32*)((char*)self + 0x7bc));
    for (s32 i = 0; i < 2; i++) {
        func_004CF478(*(void**)((char*)self + 0x7b0 + i * 4), 0, 0);
    }
    func_00150A84(self, sead::SafeString("SE_Signboard_BREAK"), 0);
}

