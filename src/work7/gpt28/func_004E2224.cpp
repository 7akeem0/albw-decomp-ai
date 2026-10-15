#include "range.h"
void Timer4E22::start(u32 initial, u32 limit, f32 value) {
    count = limit;
    rate = value;
    current = initial;
}
void Object4E22::start() { timer.start(0, 8, 0.125f); }
