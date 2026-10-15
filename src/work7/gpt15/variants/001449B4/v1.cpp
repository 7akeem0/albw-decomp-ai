#include "../../range.h"
struct State{u32 data;u8 kind;};struct S{u8 pad[0x790];State state;};extern void func_00657808(State*,u32);
bool func_001449B4(S*p,bool bypass){if(!bypass){if(p->state.kind!=3)func_00657808(&p->state,3);return false;}else return true;}
