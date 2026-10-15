#include "range.h"
struct Base{virtual ~Base();u8 pad[0xa8];};extern void func_002E1B70(void*);struct M{u8 pad[0x5c];~M(){func_002E1B70(this);}};struct C:Base{M m;virtual ~C(){}};struct N{u8 pad[4];~N();};struct D:C{N n;virtual ~D();};D::~D(){}
