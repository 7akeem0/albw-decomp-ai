typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00200080(void);
unsigned func_003CBC1C(unsigned a0, unsigned a1)
{
  unsigned k1;
  if (a1 == 0) goto L2;
  *(unsigned *)((char *)a0) = 0;
  a0 = a0 + 4;
  *(unsigned *)((char *)a0) = (unsigned)func_00200080;
  a0 = a0 + 4;
  *(unsigned *)((char *)a0) = 0;
  a0 = a0 + 4;
  *(unsigned *)((char *)a0) = 0;
  a0 = a0 + 4;
L2:;
  *(unsigned *)((char *)a0) = 0;
  a0 = a0 + 4;
  *(unsigned *)((char *)a0) = 0xF008F;
  a0 = a0 + 4;
  k1 = 1;
  *(unsigned *)((char *)a0) = k1;
  a0 = a0 + 4;
  *(unsigned *)((char *)a0) = 0xF01C6;
  a0 = a0 + 4;
  *(unsigned *)((char *)a0) = 0;
  a0 = a0 + 4;
  *(unsigned *)((char *)a0) = 0xF01C6 & (~(unsigned)((int)0xF008F >> 5));
  a0 = a0 + 4;
  return a0;
}
