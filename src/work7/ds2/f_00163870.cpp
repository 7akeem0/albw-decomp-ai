#include "ds2.h"
extern void func_00163A30(void*, s32);
extern void func_004F87F8(void*, s32);
extern void func_004FABDC(void*, int, int, int);
extern char* data_00706E20;
extern void* func_0052FBA0(void*, u32);
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void func_00150A84(void*, const sead::SafeString&, s32);
void func_00163870(void* self) {
    char* r0 = (char*)self + 0x4e4;
    f32 v = 0.95f;
    *(f32*)(r0) = v;
    *(f32*)(r0 + 4) = v;
    *(f32*)(r0 + 8) = v;
    func_00163A30(self, 1);
    func_004F87F8(self, 1);
    func_004FABDC(self, 0xb, 0, 0);
    char* p = (char*)func_0052FBA0(data_00706E20 + 0x3dbbc, *(u32*)((char*)self + 0x8f8));
    if (p != 0) *(u32*)((char*)self + 0x3e8) = *(u32*)(p + 0x3e8);
    func_00150A84(self, sead::SafeString("SE_Omugai_SHELL_IN"), 0);
}
