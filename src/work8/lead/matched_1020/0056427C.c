typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_0056427C(unsigned a0)
{
  unsigned r0, r1;
  r0 = a0;
  r1 = 0;
L1:;
  if (*(unsigned char *)((char *)r0 + r1) != 0) goto L3;
  if (*(unsigned char *)((char *)(r0 + r1) + 1) == 0) goto L4;
L3:;
  return 0;
L4:;
  r1 = r1 + 2;
  if ((int)r1 < 8) goto L1;
  return 1;
}
