#include "ds4.h"
struct S { u8 p[0x2e]; u16 h2e; };
struct T { u8 p[0x14]; void* m14; };
extern "C" u32 func_0053FD30(void*, u32);
extern "C" void func_00292184(void*, S*);
void f(T* self, S* s) {
  if (func_0053FD30(self->m14, 0) || (u8)s->h2e == 1)
    func_00292184(self->m14, s);
}
