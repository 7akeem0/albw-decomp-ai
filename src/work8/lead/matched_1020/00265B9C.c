typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FB60[];
extern unsigned func_00290320(unsigned, unsigned);
unsigned func_00265B9C(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned t1, t2, t3, t4, t5, t6, t7, t8, ka6;
  unsigned t10, t11;
  if (a1 == 3) {
    return 0;
  }
  t1 = *(signed char *)((char *)a2 + 0x24);
  if (t1 == 15u) {
    t2 = *(unsigned *)((char *)a0 + 0x910);
    t3 = *(unsigned *)((char *)a0 + 0x3A0);
    if (t2 == t3) {
      return 0;
    }
  }
  t4 = *(unsigned *)((char *)a0 + 0x910);
  t5 = *(unsigned *)((char *)a0 + 0x3A0);
  if (t4 == t5) {
    if ((t1 == 9) || (t1 == 10u)) {
      return 0;
    }
    if ((t1 == 7) || (t1 == 6)) {
      return 0;
    }
  }
  if ((t4 != t5) || (t1 != 5)) {
    ka6 = a0 + 0x5A0;
    t10 = *(unsigned *)((char *)ka6);
    t11 = t10 | 0x80;
    *(unsigned *)((char *)a0 + 0x5A0) = t11;
    return a1;
  }
  t6 = *(unsigned *)((char *)a0 + 0x420);
  t7 = *(unsigned short *)((char *)t6 + 0x30);
  t8 = -t7;
  func_00290320((*(unsigned *)((char *)data_0070FB60)), t8);
  return 0;
}
