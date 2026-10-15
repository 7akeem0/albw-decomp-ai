#include "ds4.h"
struct X { char pad[0x38]; void* m38; char* m3c; };
extern "C" void* data_0070FB60;
extern "C" void func_001DE370(void*, void*, u32);
extern "C" void func_0028F7B0(void*, u32);
void func_0038F194(X* p) {
  char* q = p->m3c;
  if (!q) return;
  func_001DE370(data_0070FB60, q, *(u32*)(q + 0x18));
  func_0028F7B0(p->m38, 0x86);
  p->m3c = 0;
}
