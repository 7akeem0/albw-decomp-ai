#include "range.h"
struct S{char pad[0xc];f32 volume;u32 id;};extern void* data_00711F50;extern void func_004EA9FC(void*,f32,u32);
void f_55EC10(S*p){func_004EA9FC(data_00711F50,p->volume,p->id);}
