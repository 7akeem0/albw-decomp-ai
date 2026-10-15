#include "range.h"
struct IntegerValue51D2 { s32 value; void chase(s32 target, f32 rate); };
void IntegerValue51D2::chase(s32 target, f32 rate) { value += (s32)((target-value)*rate); }
