#include "range.h"
struct State4FF4 { char bytes[0x38]; };
struct Object4FF4 { char pad[0x8bc]; State4FF4 state; CounterPair timer; void update(); };
extern  void func_0066AF2C(State4FF4*,s32);
void Object4FF4::update() {
    CounterPair t=timer;
    if(t.current<t.maximum) { timer.current=t.current+1;return; }
    func_0066AF2C(&state,4);
}

