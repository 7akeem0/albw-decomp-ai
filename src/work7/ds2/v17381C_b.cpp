#include "ds2.h"
extern void func_00588C14(void*, int, int);
extern void func_003249B4(void*);
extern void func_001E4090(void*, int);
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void func_00150A84(void*, const sead::SafeString&, s32);
extern void* data_0070FB60;
extern void func_00361458(void*);
s32 func_0017381C(void* self) {
    func_00588C14(self, 1, 1);
    *(u8*)((char*)self + 0x498) = 1;
    char* p = *(char**)((char*)self + 0x484);
    u8 z = 0;
    *(u8*)(p + 0x44) = z;
    *(u8*)(*(char**)((char*)self + 0x49c) + 0x44) = 1;
    func_003249B4(self);
    *(u8*)((char*)self + 0x4bc) = 1;
    func_001E4090(self, 0);
    func_00150A84(self, sead::SafeString("SE_DoorBoss_OPEN"), 0);
    func_00361458(data_0070FB60);
    return 2;
}
