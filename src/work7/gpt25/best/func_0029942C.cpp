#include "../range_types.h"
struct Base4ED124 { virtual ~Base4ED124(); char pad[0x394]; };
struct Member2994;
extern "C" void func_002E1B70(Member2994*);
struct Member2994 {u32 storage[2];~Member2994(){func_002E1B70(this);} };
struct Obj2994 : Base4ED124 {Member2994 member;virtual ~Obj2994();};
Obj2994::~Obj2994(){}
