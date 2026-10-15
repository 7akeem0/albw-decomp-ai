#include "range.h"
struct Global424 {u8 pad[0x10];f32 value;};extern Global424* data_0070B850;
struct Obj424F {u8 pad[0x54];f32 entries[5];f32 value;u8 pad6c[0xc];u8 index;};
void func_00424FBC(Obj424F* p){p->value=data_0070B850->value-p->entries[p->index];}
