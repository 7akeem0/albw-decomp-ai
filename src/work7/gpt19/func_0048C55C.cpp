#include "range.h"
struct B {virtual void dummy();B();};
struct M:B {u32 w4;M():w4(1){}};
struct S:M {u32 w8,wC;u8 b10,b11;S();};
S::S():w8(1),wC(0),b10(0),b11(0){}
