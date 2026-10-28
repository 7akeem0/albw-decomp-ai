typedef unsigned char u8; typedef unsigned int u32;
extern u8 ro_006E8178[];
extern u8 ro_00713410[];
extern "C" u8* func_0037BAD4(void*, u32, u32, u32, u32);
extern "C" void func_00260520(void*, u8*);
u8* f(void* a0) {
  u8* q = (u8*)a0;
  q = func_0037BAD4(q, 3, 0x12c, 5, 0x3c);
  u32 v = (u32)ro_006E8178;
  *(u32*)q = v;
  *(u32*)(q + 0x3c) = v + 0x70;
  func_00260520(q + 0x3c, ro_00713410);
  return q;
}
