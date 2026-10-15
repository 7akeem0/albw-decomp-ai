#include "range.h"
struct Actor28;
extern void func_00120F3C(Actor28*, u32);
extern void func_0052FD7C(ActorLookup28*, void (*)(Actor28*, u32), u32);
void f_004E0CA4() { ActorMgr28* manager = data_00706E20; func_0052FD7C(&manager->lookup, func_00120F3C, 1); }
