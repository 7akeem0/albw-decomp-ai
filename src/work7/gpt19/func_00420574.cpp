#include "range.h"
struct S {u8 pad[0x28];u8 ready,active;};
extern "C" void func_004205A4(S*);
extern "C" void f_00420574(S* s){if(!s->ready){func_004205A4(s);s->ready=1;s->active=0;}}
