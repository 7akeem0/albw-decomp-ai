#include "range.h"
void Timer4E22::start(u32 initial, u32 limit, f32 value) { count=limit; rate=value; current=initial; }
void Object5161::start() { timer.start(0,60,1.0f/60.0f); }
