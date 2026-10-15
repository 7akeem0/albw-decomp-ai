#include "range.h"
struct C {u8 pad[0x24];u8 kind;};
struct S {u8 pad[0xF0];u32 state;u8 gap[0x114];C* child;};
extern "C" void func_0047B5E4(S*);
extern "C"  void func_0066E7A0(void*,s8);
extern "C" void f_00477554(S* s){if(s->child->kind!=4){func_0047B5E4(s);func_0066E7A0(&s->state,0);}}
