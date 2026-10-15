#include "dtor_types.h"
extern void func_002E1B70(void*);struct Mem{char pad[4];~Mem(){func_002E1B70(this);}};struct D:ActorBase19{virtual void v19();virtual void v20();char pad[0x148];Mem m;virtual ~D();};D::~D(){}
