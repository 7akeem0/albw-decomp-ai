typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00537E04(unsigned, unsigned);
unsigned func_00540568(unsigned a0, unsigned a1)
{
  unsigned h901, h902, h903, r4, r5, r6, r7, t1;
  unsigned t7;
  t1 = a0 + 0x34;
  if (*(unsigned *)((char *)t1 + 8) != 0) {
    r5 = *(unsigned *)((char *)t1 + 0xC);
    r6 = t1 - r5;
    h901 = t1 + 4;
    h902 = *(unsigned *)((char *)h901);
    r4 = h902 - r5;
    r7 = a1;
    if (r4 == r6) {
      return 0;
    }
    do {
      t7 = func_00537E04(r4, r7);
      if (t7 != 0) {
        return r4;
      }
      h903 = *(unsigned *)((char *)(r4 + r5) + 4);
      r4 = h903 - r5;
    } while (r4 != r6);
  }
  return 0;
}
