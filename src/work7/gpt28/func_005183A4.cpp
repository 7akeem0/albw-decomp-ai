#include "range.h"
struct Object5183 { char pad0[0x14]; void* child; };
extern s32 data_0070BB68;
extern void func_001DBD7C(void*);
void f_005183A4(Object5183* owner) {
    data_0070BB68=1;
    func_001DBD7C(owner->child);
    data_0070BB68=-1;
}
