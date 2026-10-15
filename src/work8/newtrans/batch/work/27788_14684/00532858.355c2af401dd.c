typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709DF8[];
extern unsigned func_00261160(void);
unsigned func_00532858(unsigned a0, unsigned a1)
{
  unsigned r0, r1, t2, t4, t5, t6, t7;
  t2 = *(signed char *)((char *)*(unsigned *)((char *)data_00709DF8) + 0x18);
  if ((t2 == 24u) || (t2 == 25u)) goto L5;
  r1 = a1;
  if (t2 != 26u) {
    r1 = 0;
  }
  if (t2 == 26u) goto L5;
  L2:;
  t4 = t2 + (-9);
  if (t4 > 12u) {
    t5 = t2 + (-2);
  }
  if ((t4 > 12u) && (t5 > 3)) {
    t6 = t2 + (-22);
  }
  if (((t4 <= 12u) || (t5 <= 3)) || (t6 <= 1)) {
    r0 = 0;
    return r0;
  }
  if (r1 != 0) {
    r0 = 0;
    return r0;
  }
  goto L6;
  L5:;
  r1 = 1;
  goto L2;
  L6:;
  t7 = func_00261160();
  r0 = t7;
  if (t7 == 0) {
    r0 = 1;
  }
  if (t7 != 0) {
    r0 = 0;
  }
  return r0;
}
