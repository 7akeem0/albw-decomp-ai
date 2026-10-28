typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_0069342C[];
extern char data_00706E20[];
extern unsigned func_002DFF7C(unsigned, unsigned);
extern unsigned func_0019B04C(unsigned);
extern  unsigned func_004C4AF4(unsigned, unsigned, unsigned);
void func_0027AE1C(unsigned a0)
{
  unsigned lv[177];
  unsigned k1, t1, t2, t3, t4, t5, kt1;
  if (((a0 != 24u) && (a0 != 25u)) && (a0 != 26u)) {
    return;
  }
  *(unsigned *)((char *)&lv[8]) = 0;
  *(unsigned *)((char *)&lv[9]) = 0;
  *(unsigned *)((char *)&lv[7]) = 0;
  *(unsigned *)((char *)&lv[18]) = 0;
  *(unsigned *)((char *)&lv[19]) = 0;
  *(unsigned *)((char *)&lv[176]) = 0;
  kt1 = (unsigned)&lv[0];
  func_002DFF7C(kt1, 0);
  k1 = (unsigned)ro_0069342C;
  t1 = *(unsigned *)((char *)k1);
  t2 = func_0019B04C(t1);
  *(unsigned *)((char *)&lv[0]) = t2;
  t3 = *(unsigned *)((char *)k1);
  t4 = -t3;
  *(unsigned short *)((char *)&lv[21]) = t4;
  t5 = *(unsigned *)((char *)data_00706E20);
  func_004C4AF4(t5, (unsigned)&lv[0], 0);
  return;
}
