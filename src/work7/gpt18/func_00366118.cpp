#include "range.h"
struct B611 {B611(void*);virtual ~B611();u8 pad[0x6c];};
struct D611:B611 {u8 a,b;D611(void*);};
D611::D611(void*p):B611(p),a(0),b(0){}
