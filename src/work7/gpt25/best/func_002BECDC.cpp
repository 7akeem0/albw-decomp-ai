#include "../range_types.h"
struct Obj2BEC { char pad0[0x130]; void* tail; char pad1[0x140-0x134]; void* child; char pad2[0x16d-0x144]; u8 flag; };
extern "C" void func_002BED00(void*);
extern "C" void f_002BECDC(Obj2BEC* p) {
    void* child=p->child;
    p->flag=0;
    func_002BED00(child);
    func_002BED00(p->tail);
}
