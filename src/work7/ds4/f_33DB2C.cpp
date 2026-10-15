#include "ds4.h"
// Derived D1 dtor: ActorBase(21 slots) primary + secondary @0x320,
// member @0x484 with out-of-line dtor 0x4EE540, two void-cleanup members
// @0x434/0x430, tail base dtor 0x1510A4.  Recipe KB #1086 / #764.
struct Primary { u8 pad[0x31c]; virtual ~Primary();
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); };
struct Secondary { virtual ~Secondary(){} };
struct Base_001510A4 : Primary, Secondary { u8 pad[0x430-0x324];
  virtual ~Base_001510A4(); };
extern void func_0036D0E0(void*);
struct Member_0036D0E0 { u32 word; ~Member_0036D0E0(){ func_0036D0E0(this); } };
struct Member_004EE540 { u8 pad[0x54]; ~Member_004EE540(); };
struct S : Base_001510A4 {
  Member_0036D0E0 a;
  Member_0036D0E0 b;
  u8 pad2[0x484-0x438];
  Member_004EE540 m;
  virtual ~S();
};
S::~S(){}
