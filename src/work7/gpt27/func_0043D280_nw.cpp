#include "range.h"
struct Owner43D2{u8 pad[0xd];u8 kind,next;u8 gapf[0x74-0xf];u32 state;u8 active;u8 gap79[0x19c-0x79];u8 argument;};
extern "C"  void func_0066C424(void*,s32);
void func_0043D280(Owner43D2*p,u8 value){if(p->kind!=3||p->next!=3)return;if(p->active)return;p->argument=value;func_0066C424(&p->state,5);}
