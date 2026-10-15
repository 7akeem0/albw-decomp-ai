#include "../../work7/gpt15/range.h"
struct Child{u32 word;u8 active;};struct State{ void func_006563C8(s32);};struct S{u8 pad508[0x508];s16 life;u8 pad50A[6];Child*child;u8 pad514[0xa7c-0x514];State state;};
void func_0022E844(S*p){if(p->child->active)return;if(p->life<=0)p->state.func_006563C8(9);else p->state.func_006563C8(7);}
