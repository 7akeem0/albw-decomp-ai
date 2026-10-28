#include "ds4.h"
extern void* data_00716788;
extern void* data_00716784;
extern "C" u32 func_003D1B10(u32, u32, u32, u32, u32);
extern "C" u32 func_003D165C(u32, u32, u32, u32, u32);
u32 f(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
  if (data_00716788) return func_003D1B10(a0, a1, a2, a3, a4);
  if (data_00716784) return func_003D165C(a0, a1, a2, a3, a4);
  return 0xe0810bf8;
}
