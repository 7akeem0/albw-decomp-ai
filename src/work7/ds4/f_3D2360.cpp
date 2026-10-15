#include "ds4.h"
struct Result26 { u32 value; };
extern void func_0010AC24(u32, u32);
extern u32 func_00108630(void*, u32, u32);
extern const u32 ro_006B4784[];
u32 sign26b(Result26 r) { return r.value >> 31; }
inline void diagnose26b(u32 result, u32 pc) {
  Result26 r = {result};
  if (sign26b(r)) func_0010AC24(result, pc);
}
u32 f() {
  u32 tmp = ro_006B4784[0];
  u32 result = func_00108630(&tmp, 4, 0xb0000);
  diagnose26b(result, __current_pc());
  return tmp >> 24;
}
