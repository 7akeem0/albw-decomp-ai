#include "range.h"
struct S{char pad[0x418];FloatContext21*child;};f32 f(S*p){FloatContext21*c=p->child;if(!c)return 0.f;return c->at(0)->value;}
