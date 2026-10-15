#include "ds4.h"
struct Result26 { u32 value; };
extern void func_0010AC24(u32, u32);
extern u32 func_00108630(void*, u32, u32);
extern const u8 ro_006B4780[];
u32 sign26(Result26 r) { return r.value >> 31; }
inline void diagnose26(u32 result, u32 pc) {
  Result26 r = {result};
  if (sign26(r)) func_0010AC24(result, pc);
}
u32 f() {
  u8 tmp = ro_006B4780[0];
  u32 result = func_00108630(&tmp, 1, 0xa0002);
  diagnose26(result, __current_pc());
  return tmp;
}
