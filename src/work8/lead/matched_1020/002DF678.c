typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_0012C718(unsigned);
void func_002DF678(unsigned a0)
{
  unsigned t1, t4, t5, t8, t9;
  t1 = *(unsigned *)((char *)a0 + 0x14);
  t4 = ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)t1) + 0x68))(t1);
  if (t4 == 0) goto L2;
  t5 = *(unsigned *)((char *)a0 + 0x14);
  ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)t5) + 0x64))(t5);
L2:;
  t8 = *(unsigned *)((char *)a0 + 0x14);
  t9 = *(signed char *)((char *)t8 + 0xD);
  if (t9 == 1) goto L5;
  if (t9 != 3) goto L6;
  if (*(unsigned char *)((char *)t8 + 0xE) != 3) goto L6;
L5:;
  func_0012C718(t8);
  return;
L6:;
  return;
}
