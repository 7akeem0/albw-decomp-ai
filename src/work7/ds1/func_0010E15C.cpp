#include "ipc_common.h"

extern "C" u8* data_00715430;
extern "C" void func_0010E294(void*);
extern "C" u32 func_0010EEE0(void*);

struct VE15C {
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
    virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15();
    virtual void d16(); virtual void d17();
    virtual void v18();
};

u32 func_0010E15C(u8* a0) {
    u32 fn = *(u32*)(a0 + 0x34);
    if (fn != 0) {
        return ((u32(*)(u32))fn)(0);
    }
    func_0010E294((void*)(data_00715430 + 0x24));
    u32 c = *(u32*)(a0 + 0x14) - 1;
    *(u32*)(a0 + 0x14) = c;
    if (c != 0) return c;
    *(u32*)(a0 + 0x10) = 0;
    ((VE15C*)a0)->v18();
    return func_0010EEE0(a0 + 0x18);
}
