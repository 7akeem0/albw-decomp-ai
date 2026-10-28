typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_00693200[];
extern char ro_00693204[];
extern char ro_00693938[];
extern char data_00706E20[];
extern void func_002DFF7C(unsigned);
extern unsigned func_00588BE4(unsigned);
extern unsigned func_0019B04C(unsigned);
extern  void func_004C43E0(unsigned, unsigned);
void func_00288CAC(unsigned a0)
{
  unsigned lv[177];
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  unsigned t9, t10, t11, t12;
  *(unsigned *)((char *)&lv[8]) = 0;
  *(unsigned *)((char *)&lv[9]) = 0;
  *(unsigned *)((char *)&lv[7]) = 0;
  *(unsigned *)((char *)&lv[18]) = 0;
  *(unsigned *)((char *)&lv[19]) = 0;
  *(unsigned *)((char *)&lv[176]) = 0;
  func_002DFF7C((unsigned)&lv[0]);
  t1 = func_00588BE4(a0);
  t2 = *(unsigned *)((char *)ro_00693938);
  if (t1 == t2) {
    t5 = *(unsigned *)((char *)ro_00693200);
    t6 = func_0019B04C(t5);
    *(unsigned *)((char *)&lv[0]) = t6;
  } else {
    t3 = *(unsigned *)((char *)ro_00693204);
    t4 = func_0019B04C(t3);
    *(unsigned *)((char *)&lv[0]) = t4;
  }
  t7 = *(unsigned *)((char *)a0 + 0x2CC);
  *(unsigned *)((char *)&lv[19]) = t7;
  t8 = *(unsigned *)((char *)a0 + 0x3D0);
  *(unsigned *)((char *)&lv[1]) = t8;
  t9 = *(unsigned *)((char *)a0 + 0x3D4);
  *(unsigned *)((char *)&lv[2]) = t9;
  t10 = *(unsigned *)((char *)a0 + 0x3D8);
  *(unsigned *)((char *)&lv[3]) = t10;
  t11 = *(unsigned *)((char *)a0 + 0x3E8);
  *(unsigned *)((char *)&lv[8]) = t11;
  t12 = *(unsigned *)((char *)data_00706E20);
  func_004C43E0(t12, (unsigned)&lv[0]);
  return;
}
