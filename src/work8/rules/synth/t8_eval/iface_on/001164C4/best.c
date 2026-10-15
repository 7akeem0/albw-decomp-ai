typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_001164F8(unsigned, unsigned, unsigned, unsigned);
void func_001164C4(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned t1, t2;
  t1 = a2 & 0xFF;
  t2 = t1 | (t1 << 8);
  func_001164F8(a0, a1, t2 | (t2 << 0x10), t1);
  return;
}
