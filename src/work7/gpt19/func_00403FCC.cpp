#include "range.h"
struct Base {Base();virtual void v();};
struct S:Base {S();virtual void v();};
S::S():Base(){}
// Base constructor target00420110; derived vtable006F0008.
