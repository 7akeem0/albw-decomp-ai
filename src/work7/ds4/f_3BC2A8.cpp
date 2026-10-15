#include "ds4.h"
struct PBC2 {
  virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
  virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
  virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
  virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
  virtual void v28(); virtual void v29(); virtual void v30();
  virtual void v31();
};
struct InnerC2 { u8 pad[0x50]; u8 b50; };
struct TC2 : PBC2 { u8 pad[0x1e8]; InnerC2* m1ec; };
extern void* data_0070B800;
extern "C" void func_00231E58(InnerC2*);
extern "C" void func_0012D8DC(void*);
void f(TC2* self) {
  func_00231E58(self->m1ec);
  if (self->m1ec->b50 != 2) return;
  func_0012D8DC(data_0070B800);
  self->v31();
}
