#include "../../work7/ds3/ds3.h"
struct Sub286E8C { char pad[8]; f32 f8; f32 fC; f32 f10; f32 f14; char pad2[0x1c - 0x18]; u8 b1c; };
struct Arr { char pad[0xc]; s32 mNum; s32 mMax; Sub286E8C* mData;
    Sub286E8C& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; } };
struct S286E8C { char pad[0x410]; Arr* m410; };
extern "C" void func_00666838(void*, int) ;
void func_0035BAFC(S286E8C* self) {
    Arr* m = self->m410;
    if (m == 0) return;
    Sub286E8C* o = &(*m)[0];
    if (o->b1c != 0) return;
    f32 z = 0.0f;
    if (o->f10 >= z) {
        if (o->f8 == o->f14) goto doCall;
        return;
    } else {
        if (o->f8 <= z) {} else return;
    }
doCall:
    func_00666838((char*)self + 0x418, 2);
}
