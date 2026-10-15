#include "ds3.h"
extern "C" char data_00725974[];
struct Base2FCD { Base2FCD(const void*, void*, u32, u32); virtual void bv(); char pad[0xac-4]; };
struct S2FCD : Base2FCD {
    virtual void v0();
    u16 hAC; u8 bAE;
    S2FCD(void* mgr, u32 a);
};
S2FCD::S2FCD(void* mgr, u32 a) : Base2FCD(data_00725974, mgr, a, 1) { hAC = 0; bAE = 0; }
