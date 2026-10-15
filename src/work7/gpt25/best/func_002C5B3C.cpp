#include "../range_types.h"
struct Obj2C5B {char pad[0x47c];u8 flag;};
extern "C" bool func_00521080(Obj2C5B*,const u32&);
extern "C" bool func_00520FD4(Obj2C5B*);
extern "C" void f_002C5B3C(Obj2C5B*p,const u32&ref){if(func_00521080(p,ref)&&!func_00520FD4(p))p->flag=1;}
