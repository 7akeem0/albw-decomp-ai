typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_004FBA18(unsigned, unsigned, unsigned, unsigned, float, float, unsigned, unsigned, unsigned);
unsigned func_00157B50(unsigned a0, unsigned a1)
{
  unsigned r0, t1, t2, t4, t5;
  r0 = a0;
  if (a1 == 3) goto L5;
  L1:;
  if ((int)*(short *)((char *)r0 + 0x508) <= 0) {
    t4 = a1 & 0xFF;
    if (t4 != 30u) {
      t5 = t4 + (-14);
    }
    if (((t4 == 30u) || (t5 <= 3)) && ((t4 != 30u) || (t4 <= 30u))) {
      func_004FBA18(r0, 0x10, 0x11, (-1), 0.3499999940395355f, 0.019999999552965164f, 0x11, 0, 0x7FFF);
    }
  }
  return a1;
  L5:;
  t1 = *(signed char *)((char *)a0 + 0x8C0);
  t2 = a0;
  if (((t1 == 4) || (t1 == 5)) || (t1 == 6)) {
    t2 = 0;
  }
  r0 = t2;
  if (((t1 != 4) && (t1 != 5)) && (t1 != 6)) goto L1;
  return t2;
}
