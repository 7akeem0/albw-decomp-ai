#include "ds6.h"
struct Sub52E58C { char _pad[0x44]; u32 m44; };
struct Obj52E58C { char _pad[0x614]; Sub52E58C* m614; };
u32 func_0054000C(void* p);
u32 func_0053F5E0(void* p);
u32 func_0053F5F4(void* p);
bool func_0052E58C(Obj52E58C* self) {
    return func_0054000C(self->m614) && func_0053F5E0(self->m614) == 3
        && (func_0053F5F4(self->m614) != 2 || self->m614->m44 >= 0x14);
}
