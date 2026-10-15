#include "../range_types.h"
struct Obj2640 { char pad[0x8bc]; u32 state; };
extern "C" bool func_00521060(Obj2640*);
extern "C"  void func_00660490(u32*,s32);
extern "C" void f_002640E4(Obj2640* p) {
    if(func_00521060(p))func_00660490(&p->state,4);
}
