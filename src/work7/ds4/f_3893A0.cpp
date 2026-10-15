#include "ds4.h"
// X::~X. Primary has 19 virtuals (secondary vt = +0x5c). Intermediate B
// (vtable ro_6E0B24) has an inline dtor and member @0x410 (0x4EE540); X has
// member @0x484 (0x4EDD04); tail base dtor 0x1510A4.
struct Primary { u8 pad[0x31c]; virtual ~Primary();
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); virtual void v17(); virtual void v18(); };
struct Secondary { virtual ~Secondary(){} };
struct Base0 : Primary, Secondary { u8 pad[0x410 - 0x324];
  virtual ~Base0(); };
struct Member410 { u8 pad[0x74]; ~Member410(); };
struct Member484 { u8 pad[0x54]; ~Member484(); };
struct B : Base0 { Member410 m410; virtual ~B(){} };
struct X : B { Member484 m484; virtual ~X(); };
X::~X(){}
