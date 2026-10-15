#include "range.h"
struct Base_002D5C70 {Base_002D5C70(const void*);virtual ~Base_002D5C70();u8 pad[0x70-4];};
struct D:Base_002D5C70 {s32 value;u32 zero;u8 flag;D(const void*);virtual ~D();};
D::D(const void*p):Base_002D5C70(p),value(-1),zero(0),flag(0){}
