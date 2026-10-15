#include "range.h"
struct Pair{u32 a,b;};__svc(0x28) __value_in_regs Pair svcCall();struct S{Pair p;S();};S::S(){p=svcCall();}
