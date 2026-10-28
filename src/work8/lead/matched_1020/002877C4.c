typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006930D4[];
extern char data_00706E20[];
extern char data_0070C8E0[];
extern void func_002DFF7C(unsigned);
extern unsigned func_0019B04C(unsigned);
extern unsigned func_00581D60(unsigned, unsigned, unsigned, unsigned);
extern  unsigned func_004C4AF4(unsigned, unsigned, unsigned);
void func_002877C4(unsigned a0, unsigned a1)
{
  unsigned lv[177];
  unsigned k1, t1, t2, t3, t4, t5, t6, t7;
  unsigned t8;
  float x1;
  k1 = 0;
  *(unsigned *)((char *)&lv[8]) = k1;
  *(unsigned *)((char *)&lv[9]) = k1;
  *(unsigned *)((char *)&lv[7]) = k1;
  *(unsigned *)((char *)&lv[18]) = k1;
  *(unsigned *)((char *)&lv[19]) = k1;
  *(unsigned *)((char *)&lv[176]) = k1;
  func_002DFF7C((unsigned)&lv[0]);
  t1 = *(unsigned *)((char *)ro_006930D4);
  t2 = func_0019B04C(t1);
  *(unsigned *)((char *)&lv[0]) = t2;
  t3 = *(unsigned *)((char *)a0);
  t4 = *(unsigned *)((char *)a0 + 4);
  t5 = *(unsigned *)((char *)a0 + 8);
  *(unsigned *)((char *)&lv[8]) = k1;
  *(unsigned *)((char *)&lv[1]) = t3;
  *(unsigned *)((char *)&lv[2]) = t4;
  *(unsigned *)((char *)&lv[3]) = t5;
  *(float *)((char *)&lv[4]) = 1.0f;
  *(float *)((char *)&lv[5]) = 1.0f;
  *(float *)((char *)&lv[6]) = 1.0f;
  t6 = *(unsigned *)((char *)data_0070C8E0);
  t7 = func_00581D60(t6, t4, t5, (unsigned)&lv[1]);
  *(unsigned short *)((char *)&lv[20]) = t7;
  x1 = 1.0f;
  if (a1 == 0) {
    x1 = 0.0f;
  }
  *(float *)((char *)&lv[17]) = x1;
  t8 = *(unsigned *)((char *)data_00706E20);
  func_004C4AF4(t8, (unsigned)&lv[0], 0);
  return;
}
