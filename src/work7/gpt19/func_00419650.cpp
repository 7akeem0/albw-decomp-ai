#include "range.h"
struct Base {Base();virtual void v();};
struct S:Base {S();virtual void v();};
S::S():Base(){}
// Base417C84; derived vtable6F080C.
