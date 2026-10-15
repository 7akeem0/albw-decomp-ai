#include "ds4.h"
// Derived D1 dtor: ActorBase(21 slots) primary + secondary @0x320,
// two members @0x40c / @0x414 with out-of-line dtor 0x2E1B70,
// tail base dtor 0x1510A4.  No chained vptr writeback (r4 = this).
struct Primary { u8 pad[0x31c]; virtual ~Primary();
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); };
struct Secondary { virtual ~Secondary(){} };
struct Base_001510A4 : Primary, Secondary { u8 pad[0x40c-0x324];
  virtual ~Base_001510A4(); };
extern void func_002E1B70(void*);
struct Member_002E1B70 { u32 w; ~Member_002E1B70(){ func_002E1B70(this); } };
struct S : Base_001510A4 {
  Member_002E1B70 a;   // +0x40c
  u8 gap[0x414-0x410];
  Member_002E1B70 b;   // +0x414
  virtual ~S();
};
S::~S(){}
