#include "ds4.h"
u32 f(f32 x) {
  u32 r = *(u32*)&x;
  u32 e = r & 0x7fffffff;
  if (e != 0) {
    u32 sh = (r << 1) >> 24;
    s32 t = (s32)sh - 0x70;
    if (t < 0) return (u16)((r >> 31) << 15);
    e = (u32)t;
  }
  u32 m = (r & ~0x1f800000u) >> 13;
  u32 s = r >> 31;
  u32 v = m | (e << 10);
  v = v | (s << 15);
  return (u16)v;
}
