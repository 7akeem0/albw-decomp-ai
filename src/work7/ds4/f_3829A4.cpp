#include "ds4.h"
// Derived D1 dtor: primary+secondary vtable @0/0x320, three members at
// 0x8bc/0x8c0/0x8c4 each with out-of-line dtor 0x36D0E0, tail base 0x1510A4.
struct Primary { u8 pad[0x31c]; virtual ~Primary();
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
  virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
  virtual void v28(); };
struct Secondary { virtual ~Secondary(){} };
struct Base_001510A4 : Primary, Secondary {
  struct Nop { ~Nop(){} } mNop;
  u8 pad[0x8bc-0x328];
  virtual ~Base_001510A4(){} };
extern void func_0036D0E0(void*);
struct Member_0036D0E0 { u32 w; ~Member_0036D0E0(){ func_0036D0E0(this); } };
struct S : Base_001510A4 {
  Member_0036D0E0 a;   // +0x8bc
  Member_0036D0E0 b;   // +0x8c0
  Member_0036D0E0 c;   // +0x8c4
  virtual ~S();
};
S::~S(){}
