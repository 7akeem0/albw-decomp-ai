typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_003D63E4(unsigned a0, unsigned a1)
{
  unsigned k1, k2, r1, t1, t2, t3, t4, t5;
  unsigned t6, t7, t8, t9, t10, t12, t13;
  t1 = *(unsigned *)((char *)a0 + 0x18);
  t2 = *(unsigned *)((char *)a1);
  if ((int)t1 > 0) {
    t3 = a0 + 0x10;
    t4 = *(unsigned *)((char *)t3);
    t5 = *(unsigned *)((char *)t3 + 4);
    t6 = t5 + (-1);
    if (t4 != t6) {
      t7 = *(unsigned *)((char *)a0 + 0xC);
      k1 = 2;
      t8 = k1 + (t4 << 1);
      t9 = *(unsigned short *)((char *)t7 + t8);
      if (t9 == 38u) goto L5;
    }
  }
  k2 = 0;
  *(unsigned char *)((char *)t2 + 8) = k2;
  t12 = *(unsigned *)((char *)a1);
  *(unsigned short *)((char *)t12 + 0xA) = 0x26;
  t13 = *(unsigned *)((char *)a0 + 0x10);
  r1 = t13 + 1;
  L4:;
  *(unsigned *)((char *)a0 + 0x10) = r1;
  return 0;
  L5:;
  *(unsigned char *)((char *)t2 + 8) = 6;
  t10 = *(unsigned *)((char *)a0 + 0x10);
  r1 = t10 + 2;
  goto L4;
}
