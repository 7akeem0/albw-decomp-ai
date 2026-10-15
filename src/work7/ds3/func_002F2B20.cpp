#include "ds3.h"
struct ActorMgr2F { u32 mNum; void** mPtrs; u32 mFreeHint; void** mEnd; };
struct Game2F { char pad[0x3dbbc]; ActorMgr2F actors; };
extern Game2F* data_00706E20;
extern "C" void func_003A42B0(void*, int);
extern "C" void* func_0052FBA0(ActorMgr2F*, u32);
extern "C" void func_0039DC1C(void*, int, int);
extern "C" void func_004FB4E0(void*, f32);
struct S2F2B20 { char pad[0xc90]; u32 mC90; };
void func_002F2B20(S2F2B20* self, s32 arg) {
    if (arg == 0x21) return;
    func_003A42B0((char*)self + 0x8ec, 2);
    void* a = func_0052FBA0(&data_00706E20->actors, self->mC90);
    if (a != 0) func_0039DC1C(a, 0, 0);
    func_004FB4E0(self, 1.0f);
}
