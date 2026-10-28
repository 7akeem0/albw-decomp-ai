typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

void func_0045F6B0(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned t1, ka1;
  ka1 = a0 + 0x11C;
  *(unsigned char *)((char *)ka1) = a1;
  *(unsigned char *)((char *)a0 + 0x126) = a2;
  t1 = a0 + 0x100;
  if (a1 == 1) goto L5;
  if (a1 != 2) goto L4;
  if ((int)*(signed char *)((char *)t1 + 0x25) >= 0) goto L4;
L3:;
  *(unsigned char *)((char *)a0 + 0x125) = 0;
  *(unsigned char *)((char *)a0 + 0x127) = 0;
L4:;
  return;
L5:;
  if ((int)*(signed char *)((char *)t1 + 0x25) > 0) goto L3;
  return;
}
