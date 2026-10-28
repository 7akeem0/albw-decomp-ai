/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00111A64(unsigned);
static inline unsigned bind_001963F4_0_4(unsigned p0, unsigned limit) { return (unsigned)(((unsigned long long)func_00111A64(p0) * limit) >> 32); }

extern char data_007124F0[];
extern unsigned func_00111A64(unsigned);
extern void func_00196330(unsigned, unsigned);
void func_001963F4(unsigned a0)
{
  unsigned k1, t5;
  k1 = (unsigned)data_007124F0;
  func_00111A64(*(unsigned *)((char *)k1) + 0x660);
  func_00196330(a0, 1);
  t5 = (unsigned)bind_001963F4_0_4(*(unsigned *)((char *)k1) + 0x660, 100U);
  *(unsigned *)((char *)a0 + 0x448) = t5 + 0x64;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  *(float *)((char *)a0 + 0x3E0) = 0.0f;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  return;
}
