typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006930B4[];
extern char ro_006F5988[];
extern char data_00706E20[];
extern char data_0070D7D0[];
extern void func_002DFF7C(unsigned);
extern unsigned func_0019B04C(unsigned);
extern unsigned func_004C4AF4(unsigned, unsigned, unsigned);
extern unsigned func_003A4C3C(unsigned, unsigned, unsigned);
extern void func_003A53B0(unsigned, unsigned);
void func_0022FD8C(unsigned a0)
{
  unsigned lv[180];
  unsigned k1, t2, t4, t5, kt7;
  k1 = 0;
  *(unsigned *)((char *)&lv[8]) = k1;
  *(unsigned *)((char *)&lv[9]) = k1;
  *(unsigned *)((char *)&lv[7]) = k1;
  *(unsigned *)((char *)&lv[18]) = k1;
  *(unsigned *)((char *)&lv[19]) = k1;
  *(unsigned *)((char *)&lv[176]) = k1;
  func_002DFF7C((unsigned)&lv[0]);
  t2 = func_0019B04C(*(unsigned *)((char *)ro_006930B4));
  *(unsigned *)((char *)&lv[0]) = t2;
  *(unsigned short *)((char *)&lv[10]) = k1;
  t4 = func_004C4AF4(*(unsigned *)((char *)data_00706E20), (unsigned)&lv[0], 0);
  if (t4 != 0) {
    t5 = *(unsigned *)((char *)t4 + 0x2CC);
  }
  if (t4 != 0) {
    *(unsigned *)((char *)a0 + 0x278) = t5;
  }
  *(unsigned *)((char *)&lv[179]) = (unsigned)"WarpEvent_Maple";
  *(unsigned *)((char *)&lv[178]) = (unsigned)ro_006F5988;
  kt7 = (unsigned)ro_006F5988;
  func_003A4C3C(a0 + 0x108, (unsigned)&lv[178], kt7);
  func_003A53B0(a0 + 0x108, 0xD);
  *(unsigned *)((char *)*(unsigned *)((char *)*(unsigned *)((char *)data_0070D7D0) + 0x64) + 0x14) = a0 + 0x108;
  return;
}
