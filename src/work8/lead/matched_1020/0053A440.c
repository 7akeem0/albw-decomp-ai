typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00706E20[];
extern unsigned func_0052FBA0(unsigned, unsigned, unsigned);
extern unsigned func_0053A7AC(unsigned, unsigned);
extern unsigned func_0053A4CC(unsigned, unsigned, unsigned);
unsigned func_0053A440(unsigned a0, unsigned a1, unsigned a2, unsigned a3, unsigned a4)
{
  unsigned t1, t2, t5, t6, t7, t8, t9, t10;
  unsigned t11, t12, t13, t14;
  t1 = a4;
  if (a3 != 15u) {
    if (a3 == 2) goto L6;
  } else {
    t2 = *(unsigned *)((char *)a2);
    t5 = (*(unsigned *)((char *)data_00706E20) + 0x3D800) + 0x3BC;
    t6 = func_0052FBA0(t5, t2, a2);
    if (t6 != 0) {
      t7 = t6 + 0x3D0;
      t8 = *(unsigned *)((char *)t6 + 0x3D8);
      t10 = *(unsigned *)((char *)t7 + 4);
      t9 = *(unsigned *)((char *)t7);
      *(unsigned *)((char *)a1 + 8) = t8;
      *(unsigned *)((char *)a1) = t9;
      *(unsigned *)((char *)a1 + 4) = t10;
      return t8;
    }
  }
  t12 = *(unsigned *)((char *)t1);
  t13 = *(unsigned *)((char *)t1 + 4);
  t14 = *(unsigned *)((char *)t1 + 8);
  *(unsigned *)((char *)a1) = t12;
  *(unsigned *)((char *)a1 + 4) = t13;
  *(unsigned *)((char *)a1 + 8) = t14;
  return t12;
  L6:;
  t11 = func_0053A7AC(a0, t1);
  return func_0053A4CC(a0, a1, t11);
}
