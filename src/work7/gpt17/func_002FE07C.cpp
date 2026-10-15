#include "range.h"
struct Base_005027C4{virtual ~Base_005027C4();};
extern void func_002E1B70(void*);
struct D:Base_005027C4{u8 pad[0x2c];u32 member;virtual ~D();};
D::~D(){func_002E1B70(&member);}
