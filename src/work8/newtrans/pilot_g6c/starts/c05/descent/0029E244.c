typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006DAB14[];
extern char ro_006EF6CC[];
extern char data_007143B8[];
extern unsigned func_0010CEE0(unsigned, unsigned, unsigned);
extern unsigned func_0010DA7C(unsigned, unsigned, unsigned);
unsigned func_0029E244(unsigned a0)
{
  unsigned h901, h902, r0, t2, t3, t4;
  if (*(unsigned *)((char *)data_007143B8) == 0) {
    t2 = func_0010CEE0(0x24, a0, 4);
    t3 = t2 + 4;
    r0 = t3;
    if (t3 != 0) {
      h901 = a0;
      t4 = func_0010DA7C(t3, h901, 3);
      *(unsigned *)((char *)t4) = (unsigned)ro_006EF6CC;
      r0 = t4;
    }
    *(unsigned *)((char *)(unsigned)data_007143B8 + 4) = r0;
    if (t2 != 0) {
      *(unsigned *)((char *)t2 + 0x14) = 0;
      h902 = t2 + 0x18;
      *(unsigned *)((char *)h902) = 0;
      *(unsigned *)((char *)t2) = (unsigned)ro_006DAB14;
      *(unsigned *)((char *)t2 + 0x1C) = 0;
      *(unsigned *)((char *)t2 + 0x20) = 0;
    }
    *(unsigned *)((char *)data_007143B8) = t2;
  }
  return *(unsigned *)((char *)data_007143B8);
}
