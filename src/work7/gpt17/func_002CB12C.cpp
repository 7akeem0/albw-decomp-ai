#include "range.h"
struct Base_0010DA7C {Base_0010DA7C(void*,s32);virtual ~Base_0010DA7C();u8 pad[0x10-4];};
struct D:Base_0010DA7C {void*a;void*b;u8 flag;D();virtual ~D();};
D::D():Base_0010DA7C(0,3),a(0),b(0),flag(0){}
