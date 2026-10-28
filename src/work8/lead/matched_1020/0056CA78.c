typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0056ACF4(unsigned);
unsigned func_0056CA78(unsigned a0, unsigned a1)
{
  unsigned h901, r0, t2, t3, t4, t5, t6, t7;
  unsigned t8;
  r0 = *(unsigned char *)((char *)a0 + 0xC);
  if (r0 == 0) {
    return r0;
  }
  t2 = *(unsigned *)((char *)a0);
  t3 = func_0056ACF4(t2);
  t4 = *(unsigned *)((char *)a0 + 4);
  t5 = a1 + (a1 << 1);
  h901 = t4;
  t6 = h901 + (t5 << 2);
  t7 = *(unsigned *)((char *)t6 + 8);
  t8 = t7 + t3;
  r0 = t8 + 8;
  return r0;
}
