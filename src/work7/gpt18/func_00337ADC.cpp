#include "range.h"
struct S{virtual void v();char pad[0xec-4];};struct B:ActorPrimary19,S{virtual~B();};struct M{u32 word;void func_0036D0E0();};struct O:B{M first,second;virtual~O();};O::~O(){second.func_0036D0E0();first.func_0036D0E0();}
