typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F0354[];
extern char ro_006F0760[];
extern unsigned func_0010DECC(unsigned, unsigned);
unsigned func_0010D370(unsigned a0)
{
  unsigned h901, h902, h903, k1, t2, t3;
  k1 = 0;
  h901 = a0;
  *(unsigned *)((char *)h901) = (unsigned)ro_006F0760;
  h902 = a0;
  *(unsigned *)((char *)h902 + 4) = k1;
  a0 = a0 + 8;
  *(unsigned *)((char *)a0) = k1;
  h903 = a0;
  t2 = func_0010DECC(h903 + 4, (unsigned)ro_006F0760);
  *(unsigned *)((char *)t2 + 0x20C) = k1;
  t3 = (unsigned)ro_006F0354 + 0x20;
  *(unsigned *)((char *)t2) = t3;
  t2 = t2 + (-12);
  *(unsigned *)((char *)t2) = (unsigned)ro_006F0354;
  *(unsigned *)((char *)t2 + 0x21C) = k1;
  return t2;
}
