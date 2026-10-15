#include "ds4.h"
struct P { u8 pad[0x604]; u32 m604; };
struct T { u8 p0[0x10]; void* m10; u32 m14; void* m18; void* m1c;
           void* m20; void* m24; void* m28; void* m2c; };
void f(T* self, P* p, u32 v) {
  self->m10 = p;
  self->m14 = v;
  self->m18 = (void*)p->m604;
  self->m1c = (char*)p + 0x3d0;
  self->m20 = (char*)p + 0x3dc;
  self->m24 = (char*)p + 0x3e8;
  self->m28 = (char*)p + 0x5ac;
  self->m2c = (char*)p + 0x620;
}
