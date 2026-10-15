#include "ladder_types.h"
// Primary D1=004A1520, memberD1=0049116C; vtable006F7418, secondary+64.
struct Primary49B1{virtual ~Primary49B1();virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();char pad4[0x14];};
struct Secondary49B1{virtual ~Secondary49B1(){};char pad4[0x38];};
struct O49B1:Primary49B1,Secondary49B1{Member4911 member;virtual ~O49B1();};
O49B1::~O49B1(){}
