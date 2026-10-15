#include "range.h"
struct Ancestor{u8 pad[0xb4];~Ancestor();};extern "C" void func_006766E8(void*);
struct Part:Ancestor{void finalize();~Part(){finalize();}};void Part::finalize(){func_006766E8(this);}struct Outer:Part{Part child;~Outer();};Outer::~Outer(){}