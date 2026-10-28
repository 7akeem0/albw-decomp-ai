typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
void func_001246D4(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned h901, t3;
  if ((a1 & 0xFF) + (-21) > 7) goto L2;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  *(float *)((char *)a0 + 0x3E0) = 0.0f;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  h901 = a0;
  *(unsigned *)((char *)h901 + 0x4FC) = 0;
  func_004FABDC(a0, 7, (-1), 0);
L2:;
  if (a1 == 14u) goto L7;
  t3 = *(signed char *)((char *)a2 + 0x24);
  if (t3 == 1) goto L6;
  if (t3 != 3) goto L8;
  if (*(unsigned char *)((char *)a2 + 0x25) != 1) goto L8;
L6:;
  func_004FABDC(a0, 2, (-1), 0);
  return;
L7:;
  func_004FABDC(a0, 1, (-1), 0);
  return;
L8:;
  return;
}
