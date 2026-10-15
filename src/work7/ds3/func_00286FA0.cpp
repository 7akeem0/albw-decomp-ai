#include "ds3.h"
struct Req5C2 { char p[0x5c]; };
struct ElemB { char pad[0x10]; f32 m10; };
struct MidB { char pad[0xc]; s32 mNum; s32 mMax; ElemB* mData;
    ElemB& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; } };
struct S286FA0 { char pad[0x414]; MidB* m414; };
extern "C" Req5C2* func_002C11E8(Req5C2*, int, int, int);
extern "C" void func_0016898C(void*, Req5C2*);
void func_00286FA0(S286FA0* self) {
    Req5C2 req;
    Req5C2* r = func_002C11E8(&req, 0, 0, 0);
    func_0016898C(self->m414, r);
    (*self->m414)[0].m10 = 1.0f;
}
