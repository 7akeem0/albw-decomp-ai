/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00111A64(unsigned);
static inline unsigned bind_001958EC_0_8(unsigned p0, unsigned limit) { return (unsigned)(((unsigned long long)func_00111A64(p0) * limit) >> 32); }

extern char data_007124F0[];
extern void func_00196330(unsigned, unsigned);
void func_001958EC(unsigned a0)
{
  unsigned h901, t1, t2, t5, t9;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  *(float *)((char *)a0 + 0x3E0) = 0.0f;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  h901 = a0;
  t1 = *(unsigned char *)((char *)h901 + 0x440);
  t2 = t1;
  if (t1 != 0) {
    t2 = 1;
  }
  func_00196330(a0, t2);
  t5 = (unsigned)bind_001958EC_0_8(*(unsigned *)((char *)data_007124F0) + 0x660, 5U);
  t9 = (a0 + 0x400) + 0x48;
  *(unsigned *)((char *)t9) = t5 + 1;
  *(unsigned *)((char *)t9 + 4) = 0;
  return;
}
