#include "ds4.h"
extern void* data_00716788;
extern void* data_00716784;
extern "C" u32 func_003D1A14(u32);
extern "C" u32 func_003D1560(u32);
u32 f(u32 a0) {
  if (data_00716788) return func_003D1A14(a0);
  if (data_00716784) return func_003D1560(a0);
  return 0xe0810bf8;
}
