#include "ds4.h"
struct PA2B4 {
  virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
  virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
  virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(u32);
};
struct TA2B4 : PA2B4 { u8 pad[0x60 - 4]; u32 m60; u32* m64; u32 m68; };
extern "C" void func_001B6C04(void*);
extern "C" void func_0034C57C(u32, u32);
extern "C" void func_00428BEC(u32);
void f(TA2B4* self) {
  self->v19(1);
  self->v19(1);
  func_001B6C04(self);
  self->v17();
  func_0034C57C(self->m60, self->m68);
  u32 v = *self->m64;
  if (v != 0) func_00428BEC(v);
}
