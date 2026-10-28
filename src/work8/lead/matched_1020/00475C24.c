typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070D7D0[];
extern char data_00713D00[];
extern void func_001B6C04(unsigned);
extern unsigned func_005826A4(unsigned, unsigned, unsigned, unsigned);
extern void func_001788DC(unsigned, unsigned);
void func_00475C24(unsigned a0)
{
  unsigned lv[4];
  unsigned k1, t2, t3, t4, t6, t7, t8, t11, kt2;
  unsigned t12, t13;
  func_001B6C04(a0);
  if (*(unsigned *)((char *)a0 + 0x74) == 0) {
    return;
  }
  *(unsigned *)((char *)&lv[3]) = (-1);
  k1 = 0;
  *(unsigned *)((char *)&lv[0]) = k1;
  *(unsigned *)((char *)&lv[1]) = k1;
  *(unsigned *)((char *)&lv[2]) = k1;
  t2 = *(unsigned *)((char *)data_0070D7D0);
  t3 = (unsigned)data_00713D00 + (-8);
  kt2 = (unsigned)data_00713D00;
  t4 = func_005826A4(t2, (unsigned)&lv[0], t3, kt2);
  if (t4 == 0) {
    return;
  }
  func_001788DC(*(unsigned *)((char *)a0 + 0x78), (unsigned)&lv[0]);
  t6 = *(unsigned *)((char *)a0 + 0x74);
  t7 = *(unsigned *)((char *)a0 + 0x78);
  *(unsigned short *)((char *)t7 + 0x32) = k1;
  *(unsigned char *)((char *)t7 + 0x3D) = k1;
  t8 = *(unsigned *)((char *)a0 + 0x78);
  t11 = *(unsigned *)((char *)*(unsigned *)((char *)t6) + 0x60);
  t12 = *(unsigned *)((char *)t8 + 8);
  t13 = *(unsigned short *)((char *)t8 + 0x20) >> 1;
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned))t11)(t6, t12, k1, t13);
  return;
}
