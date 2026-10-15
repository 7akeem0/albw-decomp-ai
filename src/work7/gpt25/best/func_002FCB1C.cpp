#include "../range_types.h"
struct Obj2FCB { char pad[0x119]; u8 flag; };
extern void* data_0070FB60;
extern "C" void func_00361658(void*);
extern "C" void f_002FCB1C(Obj2FCB* p) {
    if (p->flag) func_00361658(data_0070FB60);
}
