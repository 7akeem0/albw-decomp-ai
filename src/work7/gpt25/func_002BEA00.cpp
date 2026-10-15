#include "range_types.h"
struct Base2312F4 { virtual ~Base2312F4(); char pad[0x180]; };
struct Member30D010 { ~Member30D010(); u32 storage; };
struct Obj2BEA : Base2312F4 { Member30D010 member; virtual ~Obj2BEA(); };
Obj2BEA::~Obj2BEA() {}
