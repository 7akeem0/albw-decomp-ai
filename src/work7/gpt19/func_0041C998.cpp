#include "range.h"
struct C {u8 pad[0x12C];u32 value;u32 word130;void* owner;};
struct S {u32 word;void* owner;u8 sub[4];};
extern "C" void* func_0041D840(void*);
extern "C" C* func_00419650(void*);
extern "C" void f_0041C998(S* s,u32 value){void* p=func_0041D840(s->sub);if(p){C* c=func_00419650(p);if(c){c->value=value;c->owner=s->owner;}}}
