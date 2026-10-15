#include "ds2.h"

extern void func_004FC07C(void*, int, int, int);

struct TimerB464 { u32 cur; u32 max; f32 rate;
    void start(u32 n) { f32 r = 1.0f / n; max = n; rate = r; cur = 0; }
};
struct Obj22B464 {
    char pad0[0x3dc];
    f32 m3DC, m3E0, m3E4;
    char pad3e8[0xa88 - 0x3e8];
    TimerB464 mTimer;
};

void func_0022B464(Obj22B464* self) {
    self->m3DC = 0.0f;
    self->m3E0 = 0.0f;
    self->m3E4 = 0.0f;
    func_004FC07C(self, 0, -1, 0);
    self->mTimer.start(3);
}
