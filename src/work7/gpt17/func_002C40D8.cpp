#include "range.h"
struct Sub320 { void func_002C40E4(void*); };
struct Obj2C40 { u8 pad[0x320]; Sub320 sub; void f(); };
void Obj2C40::f(){ sub.func_002C40E4(this); }
