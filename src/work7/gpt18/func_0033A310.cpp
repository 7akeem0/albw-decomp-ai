#include "range.h"
struct O{char pad[0x989];u8 flag;u8 getFlag()const;};extern void func_004BFD14(O*);extern void func_00324A1C(O*) __attribute__((weak));void f(O*p){if(p->getFlag())func_004BFD14(p);else func_00324A1C(p);}
