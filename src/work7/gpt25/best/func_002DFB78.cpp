#include "../range_types.h"
struct Child2DFB { char pad[0xd]; u8 a,b; };
struct Obj2DFB { char pad[0x28]; Child2DFB* child; };
extern "C" void f_002DFB78(Obj2DFB* p) {
    Child2DFB* child=p->child;
    if(child->a==0 && child->b==0) child->b=1;
}
