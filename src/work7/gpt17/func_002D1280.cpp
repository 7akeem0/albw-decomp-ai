#include "range.h"
#include "actor19.h"
struct Secondary23 {virtual void b0();virtual void b1();virtual void b2();virtual void b3();virtual void b4();virtual void b5();virtual void b6();virtual void b7();virtual void b8();virtual void b9();virtual void b10();virtual void b11();virtual void b12();virtual void b13();virtual void b14();virtual void b15();virtual void b16();virtual void b17();virtual void b18();virtual void b19();virtual void b20();virtual void b21();virtual void b22();u8 pad[0xec-4];};
struct Base_001510A4:ActorPrimary19,Secondary23 {virtual ~Base_001510A4();};
struct Third {virtual void call();u8 pad[0x44-4];};
struct Member_004EE540 {u8 opaque[0x78];~Member_004EE540();};
struct D:Base_001510A4,Third {Member_004EE540 member;virtual ~D();};
D::~D(){}
