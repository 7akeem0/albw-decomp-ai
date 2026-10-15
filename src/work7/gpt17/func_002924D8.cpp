#include "range.h"
struct Obj {u8 pad[0x48];StateControl*state;};
bool f_002924D8(Obj*p,u8 on){StateData*d=p->state->func_002D55D0(0x7e);if(d){d->flag=on;d->id=0xaa;}return true;}
