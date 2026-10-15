#include "ds6.h"

extern void* data_0070FB60;
extern void* data_0070B728;

void func_00122C78(void* p);
void func_002FD10C(void* p);
void func_004CD7C8(void* mgr, void* p);

void func_004B1ADC(void* self) {
    func_00122C78((char*)self + 0x216c);
    *(u8*)((char*)self + 0x23c4) = 1;
    func_002FD10C(data_0070FB60);
    func_004CD7C8(data_0070B728, (char*)self + 0x2c);
}
