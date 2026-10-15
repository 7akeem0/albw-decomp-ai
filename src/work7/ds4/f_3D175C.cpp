#include "ds4.h"
extern void* data_00716788;
extern void* data_00716784;
extern "C" u32 func_003D1A50(u32,u32,u32,u32);
extern "C" u32 func_003D159C(u32,u32,u32,u32);
u32 f(u32 a0,u32 a1,u32 a2,u32 a3) {
  if (data_00716788) return func_003D1A50(a0,a1,a2,a3);
  if (data_00716784) return func_003D159C(a0,a1,a2,a3);
  return 0xe0810bf8;
}
