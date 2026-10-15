#include "range.h"
struct State {s32 count;};struct Obj {u8 pad[0xc8];State state;};extern void*data_007143B8;extern bool func_00541674(void*);extern void func_0065FF80(State*,s32) __attribute__((weak));
void f_0025E308(Obj*p){if(p->state.count>=0x32c&&func_00541674(data_007143B8))func_0065FF80(&p->state,4);}
