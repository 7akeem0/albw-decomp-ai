#include "../range_types.h"
struct Primary2C8C {virtual ~Primary2C8C();virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();char pad[0x31c];};
struct Secondary2C8C {virtual void v0();char pad[0x110];};
struct Base2C8C : Primary2C8C,Secondary2C8C {virtual ~Base2C8C();};
struct Member4EDD04 {~Member4EDD04();u32 storage;};
struct Obj2C8C : Base2C8C {Member4EDD04 member;virtual ~Obj2C8C();};
Obj2C8C::~Obj2C8C(){}
