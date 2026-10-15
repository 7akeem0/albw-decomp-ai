#include "range.h"
struct C {void method();};typedef void(C::*Method)(f32);
extern const Method ro_006BB358[];
extern __attribute__((weak)) void func_0067F858(void*,u32,Method,f32);
void f_0041BC20(void* p,u32 i,f32 v){func_0067F858(p,i,ro_006BB358[5],v);}
