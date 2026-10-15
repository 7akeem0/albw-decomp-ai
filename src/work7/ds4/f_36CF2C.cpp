#include "ds4.h"
struct Item { u32 m0; f32 m4; };
struct Arr { u32 count; u32 num; u32 pad; Item** ptrs;
  Item* at(u32 i) { if (i < num) return ptrs[i]; return 0; } };
void func_0036CF2C(Arr* a, u32 v, f32 f) {
  a->at(a->count)->m0 = v;
  a->at(a->count)->m4 = f;
  a->count++;
}
