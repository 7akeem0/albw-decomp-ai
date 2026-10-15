#include "range.h"
struct Obj {u8 pad[0x48];StateControl*state;};
bool f_00292430(Obj*p){StateData*d=p->state->func_002D55D0(0x7e);if(d){d->id=0x89;d->flag=1;}return true;}
