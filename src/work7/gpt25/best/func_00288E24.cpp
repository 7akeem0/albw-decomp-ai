#include "../range_types.h"
struct Child288E { char pad[0x61]; u8 enabled; void set(u8 n) {enabled=n;} };
struct Obj288E { char pad[0x430]; Child288E* child; char gap[0x24]; void* handle; };
extern "C" void func_004CF478(void*,s32,s32);
extern "C" void f_00288E24(Obj288E* p) {
    func_004CF478(p->handle,1,0);
    p->child->set(1);
}
