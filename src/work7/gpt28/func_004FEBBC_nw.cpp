#include "range.h"
struct State4FEB { char bytes[0x38]; };
struct Object4FEB { char pad[0x8bc]; State4FEB state; CounterPair timer; void update(); };
extern  void func_0066AF2C(State4FEB*,s32);
void Object4FEB::update() {
    CounterPair t=timer;
    if(t.current<t.maximum) { timer.current=t.current+1;return; }
    func_0066AF2C(&state,2);
}
