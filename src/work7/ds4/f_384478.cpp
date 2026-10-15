#include "ds4.h"
extern "C" u32 func_003840A0(void*, u32);
u32 f(void* self) {
  if (func_003840A0(self, 0)) return 1;
  if (func_003840A0(self, 1)) return 1;
  if (func_003840A0(self, 0x50)) return 1;
  if (func_003840A0(self, 0x4f)) return 1;
  return 0;
}
