#include "ds4.h"
struct Counter {
  int v;
  Counter(int x) : v(x) {}
  operator int() const { return v; }
  Counter& operator++() { v++; return *this; }
};
u32 f(u32 unused, u16* a, s32 n) {
  Counter i(0);
  if (n <= 0) return 0;
  do {
    u16 v = a[i];
    if (v == 0) break;
    if (v == 0x40 || v == 0xff20) return 1;
    ++i;
  } while (i < n);
  return 0;
}
