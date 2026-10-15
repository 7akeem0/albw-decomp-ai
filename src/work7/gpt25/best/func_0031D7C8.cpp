#include "../range_types.h"
struct Obj31D7 { char pad[0x4c]; u32 current,maximum; f32 rate; };
extern "C" void f_0031D7C8(Obj31D7* p) {
    p->maximum=360;
    p->rate=1.0f/360.0f;
    p->current=0;
}
