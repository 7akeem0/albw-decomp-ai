#include "range.h"
struct Obj {u8 pad[0x48];StateControl*state;};
bool f_00292384(Obj*p){StateData*d=p->state->func_002D55D0(126);if(d){d->id=0;d->flag=0;}return true;}
