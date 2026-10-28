typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_0053F1D4(unsigned a0, unsigned a1)
{
  unsigned h901, h902, h903, r0, r1, r2, r3, t2;
  unsigned t6, t7;
  if (*(unsigned short *)((char *)a0 + 0x42) == 70u) {
    h901 = a1;
    t2 = *(unsigned *)((char *)h901);
    if (t2 != 0) {
      h902 = a0 + 0x1C;
      r0 = *(unsigned *)((char *)h902);
      h903 = r0 + 0x4B0;
      r3 = *(unsigned *)((char *)h903);
      r2 = t2;
      r1 = 0;
      do {
        if ((int)r3 <= (int)r1) goto L6;
        t6 = *(unsigned *)((char *)(r0 + (r1 << 2)) + 0x488);
        t7 = r1;
        if (r2 != t6) {
          t7 = r1 + 1;
        }
        r1 = t7;
      } while (r2 != t6);
    }
    return 1;
  }
  L6:;
  return 0;
}
