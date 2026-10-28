typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FB60[];
extern unsigned func_0053F294(unsigned);
unsigned func_00325C70(unsigned a0)
{
  unsigned h901, t1, t5, t6, t8, t10;
  t1 = a0 + 0x400;
  if (*(unsigned char *)((char *)t1 + 0xEA) != 0) {
    t5 = (a0 + 0x400) + 0xB8;
    if (*(unsigned char *)((char *)t1 + 0xED) == 0) goto L6;
    t6 = *(unsigned *)((char *)a0 + 0x2CC);
    t8 = func_0053F294(*(unsigned *)((char *)data_0070FB60));
    if (t6 == t8) goto L6;
    t10 = *(unsigned *)((char *)a0 + 0x4B8) + (-1);
    *(unsigned *)((char *)t5) = t10;
    if ((int)t10 < 0) {
      *(unsigned *)((char *)a0 + 0x4B8) = 0;
      h901 = 1;
      return h901;
    }
  }
  return 0;
  L6:;
  *(unsigned *)((char *)a0 + 0x4B8) = 0x1E;
  return 0;
}
