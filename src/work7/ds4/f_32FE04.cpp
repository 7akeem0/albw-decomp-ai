#include "ds4.h"
extern u32 data_0070FB60;
extern u32 data_00709F30;
extern "C" void func_00230A08(void*);
extern "C" void func_00328624(u32, u32);
extern "C" void func_001DBD54(u32);
extern "C" char* func_005845D8(u32);

extern "C" void func_0032FE04(char* self) {
    func_00230A08(self);
    u32 p = *(u32*)(self + 0x2f0);
    if (*(u8*)(p + 0x14) == 0) func_00328624(p, 1);
    func_001DBD54(data_0070FB60);
    u32 g = data_00709F30;
    if (g != 0) {
        char* r = func_005845D8(g);
        if (r != 0) {
            *(u8*)(r + 0xb44) = 1;
            u32 q = *(u32*)(r + 0x93c);
            q = *(u32*)(q + 4);
            ((void (*)(u32))(*(void**)(*(u32*)q + 0x120)))(q);
        }
    }
}
