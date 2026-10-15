#include "range.h"
struct Obj3A0D{char pad[0x394];s32 a,b;};
extern "C" void func_003A0C04(Obj3A0D*);
void func_003A0D68(Obj3A0D*p){p->a=-1;p->b=-2;func_003A0C04(p);}
