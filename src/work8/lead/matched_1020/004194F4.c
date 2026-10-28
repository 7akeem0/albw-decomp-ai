typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F0788[];
extern char ro_006F07E8[];
extern unsigned func_00419344(unsigned, unsigned, unsigned);
unsigned func_004194F4(unsigned a0)
{
  unsigned h901, h902, t1, t2, kt1;
  h901 = (unsigned)ro_006F0788 + 0x30;
  t1 = h901;
  *(unsigned *)((char *)a0 + 0x44) = t1;
  t2 = (unsigned)ro_006F0788 + 0x44;
  h902 = a0;
  *(unsigned *)((char *)h902) = (unsigned)ro_006F0788;
  *(unsigned *)((char *)a0 + 0x50) = t2;
  kt1 = (unsigned)ro_006F0788;
  func_00419344(a0, kt1, t2);
  *(unsigned *)((char *)a0) = (unsigned)ro_006F07E8;
  return a0;
}
