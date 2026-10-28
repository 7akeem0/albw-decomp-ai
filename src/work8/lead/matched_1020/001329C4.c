typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0010F1F8(unsigned, unsigned);
extern void func_0010F1DC(unsigned, unsigned);
void func_001329C4(unsigned a0, unsigned a1)
{
  unsigned t1, t2, t3, t4;
  t1 = a1 != 0 ? (a1 + 0x10) : 0;
  t2 = a0 + 0x50;
  t3 = *(unsigned *)((char *)t1 + 0xC);
  t4 = a0;
  if (t3 != 0) {
    t4 = t1;
  }
  if (t3 == 0) goto L2;
  *(unsigned *)((char *)t4 + 0xC) = 0;
  func_0010F1F8(t4, 0);
  *(unsigned *)((char *)t3 + 8) = *(unsigned *)((char *)t3 + 8) + (-1);
L2:;
  *(unsigned *)((char *)t1 + 0xC) = t2;
  func_0010F1DC(t2, t1);
  *(unsigned *)((char *)t2 + 8) = *(unsigned *)((char *)t2 + 8) + 1;
  return;
}
