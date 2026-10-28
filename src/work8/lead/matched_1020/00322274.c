typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00110DB8(unsigned, unsigned);
extern unsigned func_0010F1DC(unsigned, unsigned, unsigned);
void func_00322274(unsigned a0, unsigned a1)
{
  unsigned h901, t2, t3, t5;
  h901 = a1;
  t2 = *(unsigned *)((char *)a0 + 0x14) + h901;
  t3 = *(unsigned *)((char *)t2 + 4);
  if ((t3 != 0) || (*(unsigned *)((char *)t2) != 0)) {
    func_00110DB8(a1, 0);
    return;
  }
  t5 = a0 + 8;
  func_0010F1DC(t5, t2, a0);
  *(unsigned *)((char *)t5 + 8) = *(unsigned *)((char *)t5 + 8) + 1;
  return;
}
