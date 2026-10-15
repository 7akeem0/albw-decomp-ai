#include "../range_types.h"
struct Obj31D8 { char pad0[0x4c]; u32 current,maximum; f32 rate; char pad1[0x169-0x58]; u8 flag; };
extern "C" void f_0031D8A0(Obj31D8* p) {
    p->maximum=240;
    p->rate=1.0f/240.0f;
    p->current=0;
    p->flag=0;
}
