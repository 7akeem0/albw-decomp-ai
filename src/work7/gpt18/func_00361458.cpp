#include "range.h"
struct S614 {u8 pad[0x25];u8 count;};
struct C614 {u8 pad[0x40c];S614 sub[1];};
struct O614 {u8 pad[0x10];C614* child;};
extern "C" void func_00361458(O614*p){S614*s=p->child->sub;if(s->count)--s->count;}
