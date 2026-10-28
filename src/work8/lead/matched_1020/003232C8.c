typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006E08F4[];
extern char data_00708998[];
extern unsigned func_004ED4D4(unsigned, unsigned, unsigned, unsigned);
extern unsigned func_001510A4(unsigned);
void func_003232C8(unsigned a0)
{
  unsigned h901;
  *(unsigned *)((char *)a0) = (unsigned)ro_006E08F4;
  h901 = (unsigned)ro_006E08F4 + 0x54;
  *(unsigned *)((char *)a0 + 0x320) = h901;
  func_004ED4D4(*(unsigned *)((char *)data_00708998), (-1), a0 + 0x3D0, 0);
  func_001510A4(a0);
  return;
}
