#include "range.h"
struct Obj {u8 pad[0x48];StateControl* state;};
void f_0028FBD0(Obj* p,u32 n){StateData* d=p->state->func_002D55D0(0x8c);if(d)d->value=n;}
