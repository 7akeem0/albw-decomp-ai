#include "ds4.h"
extern void* data_00716788;
extern void* data_00716784;
extern "C" u32 func_003D1AA0(u32);
extern "C" u32 func_003D15EC(u32);
u32 f(u32 a0) {
  if (data_00716788) return func_003D1AA0(a0);
  if (data_00716784) return func_003D15EC(a0);
  return 0xe0810bf8;
}
