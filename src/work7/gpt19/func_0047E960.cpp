#include "range.h"
struct C {u16 kind;u8 pad[10];};
struct S {u8 pad[0x60];C c60,c6C,c78;};
extern "C" void func_00231448(C*);
extern "C" void func_002317C0(C*,f32);
extern "C" void f_0047E960(S* s){func_00231448(&s->c6C);func_00231448(&s->c78);s->c60.kind=2;func_002317C0(&s->c60,1);}
