#include "ds6.h"

extern void* data_0070FB60;
extern void* data_00709DF8;
u32 func_0053FD24(void* p);
void func_004EF64C(void* a, void* b);

void func_004C5D28(void* self) {
    if (func_0053FD24(data_0070FB60) == 0) return;
    s8 v = *(s8*)((char*)self + 0x424);
    if (v == -1) return;
    func_004EF64C(data_00709DF8, (char*)self + 0x424);
}
