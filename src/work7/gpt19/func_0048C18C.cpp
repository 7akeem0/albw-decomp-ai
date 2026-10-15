#include "range.h"
struct Arg{u8 pad[0x44];void* items[5];u32 index;};
extern "C" void* func_0048C19C(void*);
void* f_0048C18C(void*,Arg* a){return func_0048C19C(a->items[a->index]);}
