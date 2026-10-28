typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

void func_0010AD10(unsigned a0, unsigned a1)
{
  unsigned t3, t6, ka1;
  ka1 = a0 + 0xA;
  t3 = *(unsigned short *)((char *)ka1) + a1;
  if (*(unsigned *)((char *)a0) == 0) goto L2;
  t6 = *(unsigned *)((char *)a0 + 4);
  *(unsigned *)((char *)t3 + 4) = 0;
  *(unsigned *)((char *)t3) = t6;
  *(unsigned *)((char *)(*(unsigned *)((char *)a0 + 4) + *(unsigned short *)((char *)a0 + 0xA)) + 4) = a1;
  *(unsigned *)((char *)a0 + 4) = a1;
  *(unsigned short *)((char *)a0 + 8) = *(unsigned short *)((char *)a0 + 8) + 1;
  return;
L2:;
  *(unsigned *)((char *)t3 + 4) = 0;
  *(unsigned *)((char *)t3) = 0;
  *(unsigned *)((char *)a0) = a1;
  *(unsigned *)((char *)a0 + 4) = a1;
  *(unsigned short *)((char *)a0 + 8) = *(unsigned short *)((char *)a0 + 8) + 1;
  return;
}
