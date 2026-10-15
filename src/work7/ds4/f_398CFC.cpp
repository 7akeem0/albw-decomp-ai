#include "ds4.h"
struct M { u8 p0[0x8d4]; void* m8d4; u8 p1[0x8f4 - 0x8d8]; u32 m8f4; };
struct T { u8 p0[4]; M* m4; u8 p1[0x34 - 8]; void* m34; };
extern "C" void func_003AB994(T*, void*);
extern "C" void func_003AB8DC(T*, void*);
extern "C" void func_001151EC(void*, void*);
extern "C" void func_004CEAF0(void*);
void f(T* self) {
  func_003AB994(self, self->m34);
  func_003AB8DC(self, self->m34);
  char* p = (char*)self->m34;
  char* q = p + 0x80;
  *(u32*)(p + 0x164) |= 0x40000000;
  M* m = self->m4;
  u32 idx = m->m8f4;
  char* base = (char*)*(u32*)(*(u32*)((char*)m->m8d4 + 0x24) + 0x14);
  func_001151EC(q, base + idx * 0x30);
  func_004CEAF0(self->m34);
}

