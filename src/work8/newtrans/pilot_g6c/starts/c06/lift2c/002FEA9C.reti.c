typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006DE848[];
extern unsigned func_0010DA7C(unsigned, unsigned, unsigned);
extern unsigned func_003CC124(unsigned, unsigned);
unsigned func_002FEA9C(unsigned a0)
{
  unsigned t1, t2, t3;
  t1 = func_0010DA7C(a0, 0, 3);
  *(unsigned *)((char *)t1) = (unsigned)ro_006DE848;
  t1 = t1 + 0x10;
  t2 = func_003CC124(t1, 0);
  t3 = t2 + (-16);
  *(unsigned *)((char *)t3 + 0x24) = 0;
  *(unsigned *)((char *)t3 + 0x40) = 0;
  *(unsigned char *)((char *)t3 + 0x44) = 0;
  *(unsigned char *)((char *)t3 + 0x45) = 0;
  *(unsigned char *)((char *)t3 + 0x46) = 0;
  *(unsigned char *)((char *)t3 + 0x47) = 0;
  *(unsigned *)((char *)t3 + 0x30) = 0;
  *(unsigned *)((char *)t3 + 0x38) = 0;
  *(unsigned *)((char *)t3 + 0x34) = 0;
  *(unsigned *)((char *)t3 + 0x3C) = 0;
  *(unsigned *)((char *)t3 + 0x28) = 0;
  *(unsigned *)((char *)t3 + 0x2C) = 0;
  return t3;
}
