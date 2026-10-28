typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709DF8[];
extern char data_0070B728[];
extern unsigned func_004CDF88(unsigned, unsigned, unsigned);
unsigned func_0058DEF4(unsigned a0, unsigned a1)
{
  unsigned t1, t2, t3, t4, t5, t6, t8;
  t1 = *(unsigned *)((char *)data_00709DF8);
  if (t1 == 0) goto L12;
  t2 = *(signed char *)((char *)t1 + 0x18);
  if (t2 > 5) {
    t3 = t2 + (-22);
  }
  if ((t2 > 5) && (t3 > 4)) goto L12;
  t4 = t2 + (-2);
  t5 = t4;
  if (t4 > 3) {
    t5 = t2 + (-22);
  }
  if ((t4 > 3) && (t5 > 1)) {
    t6 = t2 + (-4);
  }
  if (((t4 <= 3) || (t5 <= 1)) || (t6 <= 1)) goto L12;
  if (t2 == 10u) goto L8;
  if ((int)t2 > 0xA) goto L9;
  if ((t2 == 0) || (t2 == 2)) goto L8;
  if ((t2 == 4) || (t2 == 9)) goto L8;
L7:;
  t8 = func_004CDF88(*(unsigned *)((char *)data_0070B728), 0x3A4, 0x3B0);
  if (t8 == 0) goto L12;
L8:;
  return 1;
L9:;
  if ((t2 == 11u) || (t2 == 12u)) goto L8;
  if ((t2 == 18u) || (t2 == 22u)) goto L8;
  goto L7;
L12:;
  return 0;
}
