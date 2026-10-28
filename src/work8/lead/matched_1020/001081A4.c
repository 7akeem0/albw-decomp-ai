typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_001081CC(unsigned, unsigned, unsigned);
void func_001081A4(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned t1, t2, t4, ka1;
  t1 = a2 + 0xF00;
  t2 = t1 + 0xFF;
  ka1 = a0 + 0x14;
  *(unsigned *)((char *)ka1) = a1;
  t4 = (t2 >> 0xC) << 0xC;
  func_001081CC(a0, t4, a3);
  return;
}
