#include "ds4.h"
struct T { void* m0; void* m4; };
extern "C" u32 func_0032465C(void*);
T* f(T* self, void* x) {
  self->m0 = x;
  self->m4 = 0;
  if (!x) return self;
  if (func_0032465C(x)) {
    char* p = (char*)self->m0;
    u32 off = *(u32*)(p + 0xc);
    if (off) self->m4 = p + off;
    return self;
  }
  self->m0 = 0;
  self->m4 = 0;
  return self;
}

