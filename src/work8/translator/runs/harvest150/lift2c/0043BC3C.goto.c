typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0043BD0C(unsigned, unsigned);
void func_0043BC3C(unsigned a0, unsigned a1)
{
  unsigned t1;
  t1 = *(unsigned *)((char *)a0 + 0x1EC);
  if (a1 == 10u) goto L8;
  if ((int)a1 > 0xA) goto L6;
  if ((a1 == 0) || (a1 == 2)) goto L8;
  if ((a1 == 4) || (a1 == 9)) goto L8;
L4:;
  switch (a1) {
  case 0: goto L10;
  case 1: goto L9;
  case 2: goto L10;
  case 3: goto L9;
  case 4: goto L10;
  case 5: goto L9;
  case 6: goto L10;
  case 7: goto L10;
  case 8: goto L10;
  case 9: goto L10;
  case 10: goto L10;
  case 11: goto L10;
  case 12: goto L10;
  case 13: goto L9;
  case 14: goto L9;
  case 15: goto L9;
  case 16: goto L9;
  case 17: goto L9;
  case 18: goto L10;
  case 19: goto L9;
  case 20: goto L9;
  case 21: goto L9;
  case 22: goto L10;
  case 23: goto L9;
  case 24: goto L9;
  case 25: goto L9;
  case 26: goto L9;
  default: goto L5;
  }
L5:;
  goto L10;
L6:;
  if ((a1 == 11u) || (a1 == 12u)) goto L8;
  if ((a1 != 18u) && (a1 != 22u)) goto L4;
L8:;
  func_0043BD0C(t1, 0);
  return;
L9:;
  func_0043BD0C(t1, 1);
  return;
L10:;
  func_0043BD0C(t1, 2);
  return;
}
