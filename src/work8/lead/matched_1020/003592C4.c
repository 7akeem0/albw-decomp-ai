typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_003592C4(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned h901, h902, k1, r0, r4, r5, r6, t1;
  unsigned t2, t3, t5, t6, t7, t8, t9, t11;
  unsigned t12, t13, t14, t15, t16;
  t1 = *(unsigned *)((char *)a0 + 0x10);
  k1 = 0;
  r4 = a0;
  r6 = a1;
  r5 = k1;
  if ((int)t1 > 0) {
    do {
      t2 = *(unsigned *)((char *)r4 + 0x10);
      t3 = r4 + 0x58;
      h901 = t2;
      r0 = h901;
      if (t2 <= r5) {
        r0 = *(unsigned *)((char *)r4 + 4);
      }
      if (t2 > r5) {
        t6 = *(unsigned *)((char *)r4 + 0xC);
        h902 = r4 + 8;
        t5 = *(unsigned *)((char *)h902);
        t7 = t6 + r5;
        t8 = t7;
        if ((int)t5 <= (int)t7) {
          t8 = t7 - t5;
        }
        t9 = *(unsigned *)((char *)r4 + 4);
        r0 = t9 + (t8 << 2);
      }
      t11 = *(unsigned *)((char *)r0);
      t12 = *(unsigned *)((char *)t3 + (t11 << 2));
      t13 = *(unsigned *)((char *)t12);
      t14 = *(unsigned *)((char *)t13 + 0x14);
      t15 = ((unsigned (*)(unsigned, unsigned))t14)(t12, r6);
      r0 = t15;
      if (t15 != 0) {
        return r0;
      }
      t16 = *(unsigned *)((char *)r4 + 0x10);
      r5 = r5 + 1;
    } while ((int)t16 > (int)r5);
  }
  r0 = 0;
  return r0;
}
