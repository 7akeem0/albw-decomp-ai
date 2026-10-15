#include "range.h"
extern void* data_0070B800;
extern void func_0012ED04(void*, Object4B99*);
void f_004B9958(Object4B99* owner, u32 value) {
    u32 copy = value;
    Object4B99* object = owner;
    func_0012ED04(data_0070B800, object);
    object->value = copy;
}
