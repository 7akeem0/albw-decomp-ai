typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_003DA0A0(unsigned);
unsigned func_003D6A98(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned r0, r4, r5, r6, r7, t2, t3, t4;
  unsigned t5, t6, t7, t8, t9, t10, t11, t12;
  unsigned t13, t14, t16;
  r7 = a2 + a3;
  r6 = a0;
  r5 = a1;
  r4 = a2;
  if (a2 < r7) {
    do {
      t2 = *(unsigned *)((char *)r6);
      t3 = *(unsigned *)((char *)r5);
      t4 = t2 + (r4 << 1);
      t5 = *(unsigned short *)((char *)t4);
      t6 = *(unsigned short *)((char *)t3 + 0xA);
      if (t5 != t6) {
        t7 = func_003DA0A0(t6);
        r0 = t7;
        if (t7 != 0) {
          t8 = *(unsigned short *)((char *)t7 + 2);
          if (t8 != 0) {
            t9 = *(unsigned *)((char *)r6);
            t10 = t9 + (r4 << 1);
            t11 = *(unsigned short *)((char *)t10);
            if (t11 == t8) goto L11;
            t12 = *(unsigned short *)((char *)t7 + 4);
            if (t12 != 0) {
              if (t11 == t12) goto L11;
              t13 = *(unsigned short *)((char *)t7 + 6);
              if (t13 != 0) {
                if (t11 == t13) goto L11;
              }
            }
          }
          r0 = 0;
        }
        return r0;
      }
      L11:;
      t14 = *(unsigned *)((char *)r5);
      r4 = r4 + 1;
      t16 = *(unsigned *)((char *)t14 + 4);
      *(unsigned *)((char *)r5) = t16;
    } while (r4 < r7);
  }
  return 1;
}
