typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006D2174[];
extern unsigned func_00324A30(void);
extern unsigned func_00503324(unsigned, unsigned, unsigned);
extern unsigned func_0036D6F4(unsigned, unsigned);
unsigned func_001E6CEC(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned k1, t1, t2, t5, t11;
  t1 = func_00324A30();
  k1 = 0;
  t2 = (unsigned)ro_006D2174 + 0x98;
  *(unsigned *)((char *)t1) = (unsigned)ro_006D2174;
  *(unsigned *)((char *)t1 + 0x320) = t2;
  *(unsigned char *)((char *)t1 + 0x475) = a2;
  *(unsigned char *)((char *)t1 + 0x476) = k1;
  t5 = func_00503324((t1 + 0x400) + 0x78, (unsigned)ro_006D2174, t2);
  t11 = (func_0036D6F4(t5 + 0x2E4, (t5 + (-1024)) + (-120))) + (-1024) + (-860);
  *(unsigned short *)((char *)t11 + 0x784) = k1;
  return t11;
}
