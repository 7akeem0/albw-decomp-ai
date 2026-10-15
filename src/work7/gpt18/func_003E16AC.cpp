#include "range.h"
struct AudioValue{char pad[0x24];f32 gain;char p28[0x6c-0x28];u16 flags;void set(f32 v,f32 zero){gain=v>=zero?v:zero;flags|=2;}};void f(AudioValue*p,f32 v){p->set(v,0.0f);}
