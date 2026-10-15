typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_004ED550(unsigned a0, unsigned a1)
{
  unsigned r0, r1, r2, t1, t2, t4, t5, t8;
  unsigned t9, t10, t11, t12;
  r0 = a0;
  r1 = a1;
  r2 = 0;
  do {
    t1 = r0 + 0xC0;
    t2 = t1;
    if (r2 < 8) {
      t2 = t1 + (r2 << 2);
    }
    if (*(unsigned *)((char *)t2) == 0) {
      return 0;
    }
    t4 = r0 + 0xC0;
    t5 = t4;
    if (r2 < 8) {
      t5 = t4 + (r2 << 2);
    }
    if (*(unsigned *)((char *)t5) == r1) {
      if ((int)r2 < 7) goto L7;
      goto L8;
    }
    r2 = r2 + 1;
  } while ((int)r2 < 8);
  return 0;
  L7:;
  do {
    t8 = r0 + 0xC0;
    t9 = t8;
    if (r2 < 8) {
      t9 = t8 + (r2 << 2);
    }
    t10 = r2 + 1;
    t11 = r0 + 0xC0;
    t12 = t11;
    if (t10 < 8) {
      t12 = t11 + (t10 << 2);
    }
    r2 = r2 + 1;
    *(unsigned *)((char *)t9) = *(unsigned *)((char *)t12);
  } while ((int)r2 < 7);
  L8:;
  *(unsigned *)((char *)r0 + 0xDC) = 0;
  return 1;
}
