typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern unsigned func_00564A78(unsigned, unsigned, unsigned);
unsigned func_00544010(unsigned a0, unsigned a1)
{
  unsigned lv[2];
  unsigned r0, t1, t2, t5, kt3;
  t1 = *(unsigned *)((char *)a0 + 0x2C);
  if (t1 != 0) {
    t2 = *(unsigned char *)((char *)t1 + 0x16B);
    r0 = t1;
    if (t2 == 0) {
      r0 = t1 + 0x104;
    }
    if (t2 != 0) {
      *(unsigned *)((char *)&lv[1]) = a1;
      *(unsigned *)((char *)&lv[0]) = (unsigned)ro_006F5988;
      kt3 = (unsigned)ro_006F5988;
      t5 = func_00564A78(*(unsigned *)((char *)a0 + 0x2C), (unsigned)&lv[0], kt3);
      if ((t5 + (-65280)) + (-255) == 0) goto L5;
      r0 = *(unsigned *)((char *)*(unsigned *)((char *)*(unsigned *)((char *)a0 + 0x2C) + 0x24) + 0x14) + ((t5 + (t5 << 1)) << 4);
    }
    return r0;
  }
  L5:;
  return 0;
}
