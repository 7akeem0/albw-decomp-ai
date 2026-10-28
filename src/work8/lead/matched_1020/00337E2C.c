typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_003A53B0(unsigned, unsigned);
extern unsigned func_001E6CE8(unsigned);
void func_00337E2C(unsigned a0)
{
  unsigned t1, t2, t4, t5;
  t1 = a0 + 0x700;
  t2 = *(unsigned char *)((char *)t1 + 0x94);
  t4 = (a0 + 0x400) + 0x1FC;
  t5 = (t2 != 0) ? 8 : t2;
  func_003A53B0(t4, t5);
  func_001E6CE8(a0);
  return;
}
