#include "../range_types.h"
struct Primary3213 {virtual ~Primary3213(){};virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();};
struct Secondary3213 {virtual ~Secondary3213(){};char pad[0x68];};
struct Member49116C {Member49116C();~Member49116C();u32 storage[4];};
struct Obj3213 : Primary3213,Secondary3213 {Member49116C member;void finalize(){};virtual ~Obj3213();};
Obj3213::~Obj3213(){finalize();}
