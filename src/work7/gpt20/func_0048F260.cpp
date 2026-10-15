#include "ladder_types.h"
// Base complete D1=0058FA5C; member D1=0049116C; primary vtable006F572C, secondary+4C.
struct Primary48F2{virtual ~Primary48F2(){};virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();};
struct Secondary48F2{virtual ~Secondary48F2(){};char pad4[0x68];};
struct Base48F2:Primary48F2,Secondary48F2{virtual ~Base48F2();};
struct O48F2:Base48F2{Member4911 member;virtual ~O48F2();};
O48F2::~O48F2(){}
