#include "../range_types.h"
struct Base230DD0 {Base230DD0(u32,u32,u32,u32);virtual ~Base230DD0();char pad[0x180];};
struct Member3A55A0 {Member3A55A0();char pad[0x148];};
struct Obj2BE9 : Base230DD0 {Member3A55A0 member;Obj2BE9(u32,u32,u32,u32);};
Obj2BE9::Obj2BE9(u32 a,u32 b,u32 c,u32 d):Base230DD0(a,b,c,d){}
