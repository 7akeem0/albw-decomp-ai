#include "ds3.h"
struct Elem { char pad[0x10]; f32 m10; };
struct Mid { char pad[0xc]; s32 mNum; s32 mMax; Elem* mData;
    Elem& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; } };
struct S25F9AC { char pad[0x6c]; void* m6C; char pad70[0x74-0x70]; Mid* m74; Mid* m78; f32 m7C; u32 m80; };
extern "C" void func_004CF864(void*, int, int);
void func_0025F9AC(S25F9AC* self) {
    func_004CF864(self->m6C, 1, -1);
    (*self->m74)[0].m10 = 1.0f;
    (*self->m78)[0].m10 = 1.0f;
    self->m7C = 1.0f;
    self->m80 = 0;
}
