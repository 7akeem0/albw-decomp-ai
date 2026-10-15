/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00111A64(unsigned);
static inline unsigned bind_00222ED8_0_5(unsigned p0, unsigned limit) { return (unsigned)(((unsigned long long)func_00111A64(p0) * limit) >> 32); }

extern unsigned func_0058A7D4(unsigned);
extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
extern void func_004FB4E0(unsigned, float);
void func_00222ED8(unsigned a0)
{
  unsigned t1, t2;
  *(unsigned *)((char *)a0 + 0x91C) = 0;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  t1 = func_0058A7D4(a0);
  t2 = (unsigned)bind_00222ED8_0_5(t1, 3U);
  *(unsigned *)((char *)a0 + 0x920) = t2 + 1;
  func_004FABDC(a0, 5, (-1), 0);
  *(float *)((char *)(a0 + 0x800) + 0x124) = 1.0f;
  func_004FB4E0(a0, 1.0f);
  return;
}
