#include "range.h"
struct S{char pad[0x464];f32 value;};
inline f32 choose(f32 value,f32 zero){if(value>zero)return .2f;return -.2f;}
f32 f_552C88(S*p){f32 v=p->value;return choose(v,0.f);}
