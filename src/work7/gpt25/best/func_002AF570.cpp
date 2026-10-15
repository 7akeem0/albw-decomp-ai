#include "../range_types.h"
struct Child2AF5 {char pad[0x508];s16 count;};
struct Obj2AF5 {char pad[0x34];Child2AF5*child;};
extern "C" void func_002B1644(Obj2AF5*,s32,u8);
extern "C" void func_002B05F0(Obj2AF5*,s32,u8);
void dispatch2AF5(Obj2AF5*p,s32 mode,s32 n){if(p->child->count<=0)func_002B1644(p,mode,n);else func_002B05F0(p,mode,n);}
extern "C" void f_002AF570(Obj2AF5*p,s32 n){dispatch2AF5(p,15,n);}
