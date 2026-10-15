#include "range_types.h"
struct Obj310D { char pad0[0x960]; s32 count; char pad1[0xad4-0x964]; u8 flag; };
extern "C" void func_00625B9C(Obj310D*);
extern "C" void f_00310D5C(Obj310D* p) {
    if (p->count>60) {
        p->flag=1;
        func_00625B9C(p);
    }
}
