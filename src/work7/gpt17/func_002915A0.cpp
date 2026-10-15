#include "range.h"
struct StateBase { void changeState(s32); };
struct Obj { u8 pad[0x48]; StateBase* state; };
bool f_002915A0(Obj* p) { p->state->changeState(0xa1); return true; }
