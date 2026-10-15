#include "range.h"
struct Obj {u8 pad[0x42];u16 kind;u32 unknown;StateControl*state;};
bool f_0028FCD0(Obj*p){if(p->kind==0x23){if(p->state->func_002D55D0(0x24))return true;}return false;}
