/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00111A64(unsigned);
static inline unsigned bind_002A4C00_0_4(unsigned p0, unsigned limit) { return (unsigned)(((unsigned long long)func_00111A64(p0) * limit) >> 32); }

extern unsigned func_0058A7D4(unsigned);
extern unsigned func_002A45FC(unsigned, unsigned);
extern unsigned func_004FC07C(unsigned, unsigned, unsigned, unsigned);
void func_002A4C00(unsigned a0)
{
  unsigned t2, t3, t4;
  *(unsigned char *)((char *)a0 + 0xB91) = 1;
  t2 = (a0 + 0xB00) + 0x91;
  t3 = func_0058A7D4(a0);
  t4 = (unsigned)bind_002A4C00_0_4(t3, 3U);
  *(unsigned char *)((char *)t2) = t4 + *(unsigned char *)((char *)t2);
  func_002A45FC(a0, 0);
  *(float *)((char *)(a0 + 0x800) + 0x324) = 0.0f;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  *(unsigned *)((char *)a0 + 0xB7C) = *(unsigned *)((char *)a0 + 0x3E8);
  func_004FC07C(a0, 0x16, (-1), 0);
  return;
}
