typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00476CA0(unsigned, unsigned);
void func_0043D434(unsigned a0)
{
  unsigned t1, t2, t3, t4;
  t1 = *(unsigned *)((char *)a0 + 0x158);
  t2 = *(signed char *)((char *)t1 + 0xD0);
  if ((t2 == 1) || (t2 == 3)) {
    t3 = 0;
    func_00476CA0(t1, t3);
  }
  t4 = *(unsigned *)((char *)a0 + 0x154);
  if (t4 == 0) {
    return;
  }
  *(unsigned char *)((char *)t4 + 0x284) = 1;
  *(unsigned char *)((char *)t4 + 0x285) = 0;
  return;
}
