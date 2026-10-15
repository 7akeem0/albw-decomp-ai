#include "range.h"
struct Base_004A1520{virtual ~Base_004A1520();};
extern void func_002E1B70(void*);
struct D:Base_004A1520{u8 pad[0x2c];u32 member;virtual ~D();};
D::~D(){func_002E1B70(&member);}
