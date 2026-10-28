typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char bss_00737FB0[];
void func_0036E490(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned h901, h902, r2, r3, t2, t5, t6, t7;
  unsigned t8, t9, t10, t13, t14, t15, t16;
  if (a1 < 5) goto L2;
  if (*(unsigned char *)((char *)a0 + 0x6B) == 0) goto L14;
L2:;
  t2 = *(unsigned char *)((char *)a0);
  t5 = (unsigned)bss_00737FB0 + ((a1 + (a1 << 1)) << 3);
  t6 = (unsigned)bss_00737FB0 + ((t2 + (t2 << 1)) << 3);
  t7 = *(unsigned *)((char *)t6 + 0x10);
  if (t7 != 0) goto L5;
  t8 = *(unsigned *)((char *)t6 + 0x14);
  if ((t8 & 1) == 0) goto L8;
  if (t8 == 0) goto L8;
L5:;
  t9 = *(unsigned *)((char *)t6 + 0x14);
  t10 = a0 + (unsigned)((int)t9 >> 1);
  r3 = t7;
  if ((t9 & 1) == 0) goto L7;
  h901 = *(unsigned *)((char *)t10) + t7;
  r3 = *(unsigned *)((char *)h901);
L7:;
  ((unsigned (*)(unsigned, unsigned, unsigned))r3)(t10, a1, a2);
L8:;
  *(unsigned char *)((char *)a0) = a1;
  t13 = *(unsigned *)((char *)t5);
  if (t13 != 0) goto L11;
  t14 = *(unsigned *)((char *)t5 + 4);
  if ((t14 & 1) == 0) goto L14;
  if (t14 == 0) goto L14;
L11:;
  t15 = *(unsigned *)((char *)t5 + 4);
  t16 = a0 + (unsigned)((int)t15 >> 1);
  r2 = t13;
  if ((t15 & 1) == 0) goto L13;
  h902 = *(unsigned *)((char *)t16) + t13;
  r2 = *(unsigned *)((char *)h902);
L13:;
  ((unsigned (*)(unsigned, unsigned, unsigned))r2)(t16, a2, r2);
  return;
L14:;
  return;
}
