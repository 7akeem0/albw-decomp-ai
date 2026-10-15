#include "range.h"
extern "C"  bool func_00688C34(f32* value,f32 target,f32 step);
bool f_0068C794(f32* value,f32 target,f32 rate,f32 minimum,f32 maximum) {
    f32 step=(target-*value)*rate;
    step=step>0.0f ? step : -step;
    if(step<minimum) step=minimum;
    else if(step>maximum) step=maximum;
    return func_00688C34(value,target,step);
}
