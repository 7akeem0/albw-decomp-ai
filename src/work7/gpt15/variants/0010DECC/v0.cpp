#include "../../range.h"
struct B{virtual void v();u32 a;B():a(0){}};struct S:B{char pad[0x200];u16 h;u8 b;S();virtual void v();};S::S():h(0),b(0){}
