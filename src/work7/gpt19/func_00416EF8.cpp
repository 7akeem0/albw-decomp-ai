#include "range.h"
struct S{u8 pad[0x1c];u8* begin;u8* end;};
void f_00416EF8(S* p,u8* begin,u32 size){p->begin=begin;begin+=size;p->end=begin;}

