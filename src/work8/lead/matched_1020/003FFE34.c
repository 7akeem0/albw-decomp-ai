typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00112364(unsigned, unsigned, unsigned, unsigned);
void func_003FFE34(unsigned a0, unsigned a1)
{
  unsigned h901, t1, t2, t3, t4, t5, t6;
  t1 = *(unsigned *)((char *)a0 + 0x14);
  t2 = a1 + 4;
  t3 = a0 + 0x10;
  h901 = t1;
  func_00112364(t3, h901, t2, t1);
  *(unsigned *)((char *)a1 + 0xC) = a0;
  t4 = *(unsigned char *)((char *)a1 + 0x44);
  t5 = t4 & 0xEF;
  t6 = t5 | 0x10;
  *(unsigned char *)((char *)a1 + 0x44) = t6;
  return;
}
