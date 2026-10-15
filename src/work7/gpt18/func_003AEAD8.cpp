#include "range.h"
struct PEAD {virtual ~PEAD();virtual void f0();virtual void f1();virtual void f2();virtual void f3();virtual void f4();virtual void f5();virtual void f6();virtual void f7();virtual void f8();virtual void f9();virtual void f10();virtual void f11();virtual void f12();virtual void f13();virtual void f14();virtual void f15();virtual void f16();u8 pad[0x14];};
struct SEAD{virtual void f();u8 pad[0x94];};struct BEAD:PEAD,SEAD{virtual ~BEAD();};struct MEAD{virtual ~MEAD();};struct DEAD:BEAD{MEAD member;virtual ~DEAD();};DEAD::~DEAD(){}
