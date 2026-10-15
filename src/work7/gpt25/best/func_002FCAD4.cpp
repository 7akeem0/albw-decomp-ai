#include "../range_types.h"
struct Obj2FCB { char pad[0x119]; u8 flag; };
extern void* data_0070FB60;
extern "C" void func_003615F0(void*);
extern "C" void f_002FCAD4(Obj2FCB* p) {
    func_003615F0(data_0070FB60);
    p->flag=1;
}
