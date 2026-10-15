#include "ds3.h"
struct S327280 { char pad[0x47a]; u8 b47A; char pad2[0x48c-0x47b]; u8 b48C; char pad3[0x490-0x48d]; void* m490; char pad4[0x49c-0x494]; void* m49C; };
extern "C" int func_00324A1C(S327280*);
extern "C" void func_004CF478(void*, int, int);
int func_00327280(S327280* self) {
    if (self->b47A != 0) return 1;
    int r = func_00324A1C(self);
    u8 k = self->b48C;
    if (k != 0 && k != 7) {
        func_004CF478(self->m490, r, 0);
        *(u8*)((char*)self->m49C + 0x44) = (u8)r;
    }
    return r;
}
