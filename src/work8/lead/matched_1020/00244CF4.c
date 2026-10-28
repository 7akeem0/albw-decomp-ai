typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00588BF0(unsigned, unsigned);
extern unsigned func_0061C194(unsigned);
unsigned func_00244CF4(unsigned a0)
{
  unsigned h901, h902, r0, t2, t3;
  if (*(unsigned char *)((char *)a0 + 0x9D9) != 2) goto L5;
  t2 = func_00588BF0(a0, 0);
  if (t2 != 0) {
    t3 = func_00588BF0(a0, 1);
    if (t3 == 0) goto L6;
  }
  *(unsigned *)((char *)a0 + 0x984) = 0;
  h901 = a0;
  r0 = *(unsigned *)((char *)h901 + 0x8AC) & (-33);
  L4:;
  *(unsigned *)((char *)a0 + 0x8AC) = r0;
  L5:;
  return func_0061C194(a0);
  L6:;
  *(unsigned *)((char *)a0 + 0x984) = 6;
  h902 = a0;
  r0 = *(unsigned *)((char *)h902 + 0x8AC) | 0x20;
  goto L4;
}
