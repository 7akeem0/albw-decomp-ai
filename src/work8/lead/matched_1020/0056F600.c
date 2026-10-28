typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_0056F600(unsigned a0, unsigned a1)
{
  unsigned h901, h902, h903, r0, r1, r2, r3, r12;
  unsigned t3, t6, t21, t24, t25, t26, t27;
  h901 = *(unsigned *)((char *)a0 + 0xC) + 0x14;
  r2 = *(unsigned *)((char *)h901);
  r1 = a1;
  r0 = 0xFFFF;
  if (r2 == 0) {
    return r0;
  }
  do {
    t3 = *(unsigned short *)((char *)r2);
    if ((t3 <= r1) && (r1 <= *(unsigned short *)((char *)r2 + 2))) {
      t6 = *(unsigned short *)((char *)r2 + 4);
      if (t6 == 0) {
        h903 = *(unsigned short *)((char *)r2 + 0xC);
        return (unsigned short)(h903 + (r1 - *(unsigned short *)((char *)r2)));
      }
      if (t6 == 1) {
        return *(unsigned short *)((char *)(r2 + ((r1 - *(unsigned short *)((char *)r2)) << 1)) + 0xC);
      }
      if (t6 != 2) {
        return r0;
      }
      r2 = r2 + 0xC;
      r3 = r2 + 2;
      r12 = (r2 + (*(unsigned short *)((char *)r2) << 2)) + (-2);
      if (r3 > r12) {
        return r0;
      }
      do {
        t21 = (unsigned)((int)(r12 - r3) >> 2);
        t24 = r3 + ((unsigned)((int)(t21 + (t21 >> 0x1F)) >> 1) << 2);
        h902 = t24;
        t25 = *(unsigned short *)((char *)h902);
        t26 = r12;
        if (t25 > r1) {
          t26 = t24 + (-4);
        }
        t27 = r3;
        if (t25 < r1) {
          t27 = t24 + 4;
        }
        if (t25 == r1) {
          r0 = *(unsigned short *)((char *)t24 + 2);
          return r0;
        }
        r3 = t27;
        r12 = t26;
      } while (t27 <= t26);
      return r0;
    }
    r2 = *(unsigned *)((char *)r2 + 8);
  } while (r2 != 0);
  return r0;
}
