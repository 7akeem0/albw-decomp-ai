typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006930B4[];
extern char data_00706E20[];
extern char data_007142C8[];
extern void func_002DFF7C(unsigned);
extern unsigned func_0019B04C(unsigned);
extern unsigned func_004C4AF4(unsigned, unsigned, unsigned);
extern  unsigned func_00519B4C(unsigned);
void func_0022FE74(unsigned a0)
{
  unsigned lv[177];
  unsigned k1, k2, t1, t2, t3, t4, t5, t6;
  k1 = 1;
  *(unsigned char *)((char *)a0 + 0x274) = k1;
  k2 = 0;
  *(unsigned *)((char *)&lv[8]) = k2;
  *(unsigned *)((char *)&lv[9]) = k2;
  *(unsigned *)((char *)&lv[7]) = k2;
  *(unsigned *)((char *)&lv[18]) = k2;
  *(unsigned *)((char *)&lv[19]) = k2;
  *(unsigned *)((char *)&lv[176]) = k2;
  func_002DFF7C((unsigned)&lv[0]);
  t1 = *(unsigned *)((char *)ro_006930B4);
  t2 = func_0019B04C(t1);
  *(unsigned *)((char *)&lv[0]) = t2;
  *(unsigned short *)((char *)&lv[10]) = k1;
  t3 = *(unsigned *)((char *)data_00706E20);
  t4 = func_004C4AF4(t3, (unsigned)&lv[0], 0);
  if (t4 != 0) {
    t5 = *(unsigned *)((char *)t4 + 0x2CC);
    *(unsigned *)((char *)a0 + 0x278) = t5;
  }
  *(unsigned char *)((char *)a0 + 0x276) = k2;
  t6 = *(unsigned *)((char *)data_007142C8);
  func_00519B4C(t6);
  return;
}
