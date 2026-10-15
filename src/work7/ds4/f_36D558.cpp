#include "ds4.h"
struct Base558 {
  virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
  virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
  virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21();
  virtual u32 v22(u32, u32, u32);
};
extern "C" Base558* func_00557B10(void*);
u32 f(void* self, u32 a1, u32 a2, u32 a3) {
  if (func_00557B10(self) == 0) return 0;
  return func_00557B10(self)->v22(a1, a2, a3);
}
