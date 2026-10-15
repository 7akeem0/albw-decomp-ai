#include "ds4.h"
extern "C" s32 func_00104800();
extern "C" s32 func_00103CBC(const char*);
extern "C" s32 func_00104868(void*, const char*, s32, s32);
extern void* data_00716784;
extern const char ro_006B4768[];
s32 f() {
  s32 r = func_00104800();
  bool neg = r < 0;
  if (neg) return r;
  return func_00104868(&data_00716784, ro_006B4768, func_00103CBC(ro_006B4768), 0);
}
