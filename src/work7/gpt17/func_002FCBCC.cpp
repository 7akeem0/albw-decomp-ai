#include "range.h"
extern const u8 data_00725974[];
struct Base_001663BC {Base_001663BC(const u8*,void*,void*,void*);virtual ~Base_001663BC();u8 pad[0x108-4];};
struct D:Base_001663BC {Word32 value;u8 pad10c[0x118-0x10c];u8 flag1,flag2;D(void*,void*,void*,void*);virtual ~D();};
D::D(void*,void*a,void*b,void*c):Base_001663BC(data_00725974,a,b,c),value(0),flag1(0),flag2(0){}
