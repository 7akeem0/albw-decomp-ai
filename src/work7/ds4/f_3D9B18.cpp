#include "ds4.h"
struct Node9B { u32 m0; Node9B* m4; u16 h8; u16 hA; };
extern "C" u32 func_003D9974(void*, u32, u32);
bool f(void* self, Node9B* head) {
  for (Node9B* n = head->m4; n != head; n = n->m4) {
    if (func_003D9974(self, n->h8, n->hA) == 0) return false;
  }
  return true;
}
