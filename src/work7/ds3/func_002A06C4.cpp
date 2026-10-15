#include "ds3.h"
struct S2A06C4 { char pad[0x40c]; void* m40C; };
extern "C" void* data_0070FB60;
extern "C" int func_00556B94(void*);
extern "C" void func_004CF478(void*, int, int);
extern "C" int func_004F68AC(S2A06C4*, u32);
int func_002A06C4(S2A06C4* self, u32 flag) {
    if (flag == 0) {
        if (data_0070FB60 != 0 && func_00556B94(data_0070FB60) != 0) {
            func_004CF478(self->m40C, 0, 0);
        }
    }
    return func_004F68AC(self, flag);
}
