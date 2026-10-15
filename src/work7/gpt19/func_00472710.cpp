#include "range.h"
struct S {u8 data[0x9C];};
extern "C" void func_00231448(void*);
extern "C" void func_00231524(void*);
extern "C" void f_00472710(S* s){func_00231448(s->data+0x84);func_00231448(s->data+0x6C);func_00231448(s->data+0x78);func_00231448(s->data+0x60);func_00231524(s->data+0x90);}
