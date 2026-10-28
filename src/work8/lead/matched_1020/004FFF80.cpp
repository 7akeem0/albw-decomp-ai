/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00111A64(unsigned);
static inline unsigned bind_004FFF80_0_5(unsigned p0, unsigned limit) { return (unsigned)(((unsigned long long)func_00111A64(p0) * limit) >> 32); }

extern unsigned func_0058A7D4(void);
extern unsigned func_004FC07C(unsigned, unsigned, unsigned, unsigned);
void func_004FFF80(unsigned a0)
{
  unsigned t1, t2;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  *(float *)((char *)a0 + 0x3E0) = 0.0f;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  t1 = func_0058A7D4();
  t2 = (unsigned)bind_004FFF80_0_5(t1, 1U);
  *(unsigned *)((char *)a0 + 0x930) = t2 + 1;
  *(float *)((char *)(a0 + 0x800) + 0xE0) = 0.0f;
  func_004FC07C(a0, 0, 0xC, 0);
  return;
}
