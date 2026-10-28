typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709D28[];
extern unsigned func_0010BAB4(unsigned);
extern unsigned func_004EDC9C(unsigned);
extern unsigned func_0054D964(unsigned, unsigned);
extern void func_004EDAD0(unsigned, unsigned);
extern unsigned func_004ED9C8(unsigned, unsigned);
extern  void func_004A7F00(unsigned, unsigned, unsigned);
void func_0017401C(unsigned a0)
{
  unsigned lv[3];
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  unsigned t9, t10, t11, t12, t13, t14, t15, t16;
  unsigned t17;
  t1 = func_0010BAB4(0x48);
  t2 = t1;
  if (t1 != 0) {
    t2 = func_004EDC9C(t1);
  }
  t3 = a0 + 0x400;
  *(unsigned *)((char *)a0 + 0x40C) = t2;
  t4 = t3 + 0xC;
  t5 = func_0054D964(a0, 0);
  *(unsigned *)((char *)&lv[0]) = 0xA0;
  t6 = *(unsigned short *)((char *)&lv[0]);
  *(unsigned short *)((char *)t5 + 0x28) = t6;
  t7 = *(unsigned *)((char *)t4);
  *(unsigned *)((char *)t7 + 0x18) = t5;
  t8 = *(unsigned *)((char *)a0 + 0x2CC);
  *(unsigned *)((char *)&lv[2]) = t8;
  t9 = *(unsigned *)((char *)t4);
  func_004EDAD0(t9, (unsigned)&lv[2]);
  *(unsigned *)((char *)&lv[0]) = 4;
  t10 = *(unsigned *)((char *)t4);
  t11 = *(unsigned short *)((char *)&lv[0]);
  t12 = *(unsigned *)((char *)t10 + 0x18);
  *(unsigned short *)((char *)t12 + 0x28) = t11;
  t13 = *(unsigned *)((char *)t4);
  func_004ED9C8(t13, t11);
  t14 = *(unsigned *)((char *)t4);
  t15 = *(unsigned short *)((char *)a0 + 0x54);
  *(unsigned short *)((char *)t14 + 0x2C) = t15;
  t16 = *(unsigned *)((char *)t4);
  t17 = *(unsigned *)((char *)data_00709D28);
  func_004A7F00(t17, t16, 2);
  return;
}
