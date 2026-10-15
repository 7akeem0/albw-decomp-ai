#include "ds4.h"
struct P5354 { virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); };
struct T5354 : P5354 { };
extern void* data_007142C8;
extern "C" u32 func_0058D840(void*);
extern "C" u32 func_0058DA24(void*);
u32 f(T5354* self) {
  void* g = data_007142C8;
  if (g != 0) {
    if (func_0058D840(g) != 0) return 1;
    g = data_007142C8;
    if (g != 0 && func_0058DA24(g) != 0) self->v13();
  }
  return 0;
}
