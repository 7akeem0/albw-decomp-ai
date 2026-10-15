#include "range.h"
struct S {char pad[0x8a];u8 state;char gap[5];u8 kind;};
void f_00440F00(S* p){if(p->kind!=3)p->state=255;}
