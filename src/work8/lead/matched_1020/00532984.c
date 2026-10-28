typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_00532984(unsigned a0, unsigned a1)
{
  unsigned r0, r1, r2, r4, r12, t1, t2, t6, ka5;
  unsigned t9, t11;
  t1 = *(unsigned *)((char *)a0 + 0x30);
  t2 = *(unsigned *)((char *)a1 + 0x2CC);
  if (t1 != 0) {
    if (t1 == t2) {
      r0 = 1;
      return r0;
    }
  }
  r12 = a0 + 0x30;
  r2 = *(unsigned *)((char *)a0 + 0x38) + (-4);
  r0 = a0;
  r4 = t2;
  if (r2 != r12) {
    do {
      t6 = *(unsigned *)((char *)r2);
      if (t6 != 0) {
        if (t6 == r4) {
          r0 = 1;
          return r0;
        }
      }
      r2 = *(unsigned *)((char *)r2 + 8) + (-4);
    } while (r2 != r12);
  }
  ka5 = r0 + 0x1C;
  t9 = *(unsigned *)((char *)ka5);
  r0 = t9;
  if (t9 == 0) {
    return r0;
  }
  t11 = *(unsigned *)((char *)*(unsigned *)((char *)t9));
  return ((unsigned (*)(unsigned, unsigned, unsigned))t11)(t9, r1, t11);
}
