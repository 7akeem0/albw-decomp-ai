#include "../range_types.h"
struct Base5027C4 { virtual ~Base5027C4(); char pad[0xa8]; };
struct Member2FCC;
extern "C" void func_002E1B70(Member2FCC*);
struct Member2FCC {u32 storage[2];~Member2FCC(){func_002E1B70(this);} };
struct Obj2FCC : Base5027C4 {Member2FCC member;virtual ~Obj2FCC();};
Obj2FCC::~Obj2FCC(){}
