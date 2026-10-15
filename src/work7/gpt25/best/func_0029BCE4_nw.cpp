#include "../range_types.h"
struct Child29BC { char pad[0xc0]; s8 flag; };
struct Obj29BC { Child29BC* child; u32 state; };
extern "C"  void func_0066BD18(u32*,s32);
extern "C" void f_0029BCE4(Obj29BC* p) {
    if(p->child->flag>=1) func_0066BD18(&p->state,1);
}
