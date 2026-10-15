#include "ipc_common.h"

typedef signed char s8;

extern "C" u8 data_007158E8[];
extern "C" void (*bss_007A03B8[8])();
extern "C" void func_0010C210(u32);

void func_0010AB0C() {
    if ((s8)data_007158E8[1] & ~(s8)data_007158E8[2]) {
        for (int i = 0; i < 8; i++) {
            void (*f)() = bss_007A03B8[i];
            if (f) f();
        }
        if (data_007158E8[1]) {
            func_0010C210(*(u32*)(data_007158E8 + 8));
            data_007158E8[1] = 0;
        }
        data_007158E8[2] = 1;
    }
}
