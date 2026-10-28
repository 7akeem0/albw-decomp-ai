typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_002D455C(unsigned, unsigned, unsigned, unsigned);
unsigned func_0036167C(unsigned a0)
{
  unsigned k1, kt2, kt3;
  kt2 = (-1);
  func_002D455C(*(unsigned *)((char *)a0 + 0x10) + 0x6A0, kt2, 0, 1);
  k1 = 1;
  kt3 = (-1);
  func_002D455C((*(unsigned *)((char *)a0 + 0x10) + 0x400) + 0x2AC, kt3, 0, k1);
  return k1;
}
