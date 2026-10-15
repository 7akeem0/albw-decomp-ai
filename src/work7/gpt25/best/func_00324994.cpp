#include "../range_types.h"
struct Obj3249 { char pad[0x52c]; void* child; };
extern "C" void func_00151148(void*,s32);
extern "C" void func_003249B4(Obj3249*);
extern "C" void f_00324994(Obj3249* p) {
    func_00151148(p->child,0);
    func_003249B4(p);
}
