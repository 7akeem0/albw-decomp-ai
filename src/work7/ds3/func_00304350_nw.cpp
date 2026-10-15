#include "ds3.h"
extern void* data_00711F50;
extern "C" s32 func_00588BF0(void*, int);
extern "C" void func_002E01FC(void*);
extern "C" void func_00664884(void*, int) ;
extern "C" void func_0029549C(void*, s16);
struct Sub500 { char pad[4]; s16 s504; };
struct S304350 { char pad[0x494]; u8 b494; char pad2[0x500 - 0x495]; Sub500 sub500;
                 char pad3[0x518 - 0x506]; u8 b518; char pad4[0x51c - 0x519]; u8 b51c; };
void func_00304350(S304350* self) {
    if (func_00588BF0(self, 0) == 0) return;
    self->b494 = 0;
    func_002E01FC(self);
    Sub500& s = self->sub500;
    if (self->b51c == 0) self->b518 = 1;
    func_00664884((char*)self + 0x4c0, 1);
    func_0029549C(data_00711F50, s.s504);
}
