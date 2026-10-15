#include "ds2.h"

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void func_004BC61C(void*);
extern u32 func_00564A78(void*, const sead::SafeString&);
extern void func_001843B0(void*);
extern void func_00168E9C(void*, u32, int);

void func_00183738(void* self) {
    func_004BC61C(self);
    if (*(u8*)((char*)self + 0x9f9) < 3) return;
    *(u32*)((char*)self + 0x9ec) = func_00564A78(*(void**)((char*)self + 0x7a0), "beam");
    func_001843B0(self);
    func_00168E9C(*(void**)((char*)self + 0x994), *(u32*)((char*)self + 0x990), 0);
}
