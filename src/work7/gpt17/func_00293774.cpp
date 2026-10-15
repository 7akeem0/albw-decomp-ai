#include "range.h"
struct Base_004A1520 {virtual ~Base_004A1520();u8 pad[0x10-4];};
struct Child {virtual void v0();virtual void v1();virtual void v2();};
struct D:Base_004A1520 {u8 pad10[0x48-0x10];Child*child;u8 pad4c[0xc8-0x4c];u8 flag;virtual ~D();};
D::~D(){flag=1;child->v2();}
