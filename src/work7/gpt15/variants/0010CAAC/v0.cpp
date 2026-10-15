#include "../../range.h"
struct Primary{u8 pad[8];virtual ~Primary();virtual void v0();virtual void v1();virtual void v2();virtual void v3();};struct Secondary{u8 pad[0x210];virtual ~Secondary();};struct Base_0010D370:Primary,Secondary{Base_0010D370();};struct Owner{u32 ptr;Owner():ptr(0){}};struct S:Base_0010D370,Owner{u32 a,b;u8 flag;S();};S::S():a(0),b(0),flag(0){}
