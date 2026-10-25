#include "albw_types.h"

extern u32 ro_006C05C4[];
void func_0040E554(void* self, u32 idx) {
    *(u32*)((char*)self + 0x10) = ro_006C05C4[idx];
}
