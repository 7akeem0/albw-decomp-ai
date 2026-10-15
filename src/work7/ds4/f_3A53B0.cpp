#include "ds4.h"
struct P53B0 { virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11(); virtual void v12(); };
struct T53B0 : P53B0 { u8 pad[0x141]; u8 b145; };
extern void* data_007142C8;
extern "C" u32 func_0058DA24(void*);
u32 f(T53B0* self, u8 a1) {
  void* g = data_007142C8;
  if (g != 0 && func_0058DA24(g) == 0) {
    self->v12();
    return 0;
  }
  self->b145 = a1;
  return 1;
}
