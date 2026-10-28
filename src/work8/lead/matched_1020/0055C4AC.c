typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FB60[];
extern void func_00115C70(unsigned, unsigned, unsigned);
unsigned func_0055C4AC(unsigned a0, float fa0)
{
  unsigned lv[3];
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  float x1, x2, x3, x4, x5, x6, x7;
  float x9;
  t1 = *(unsigned *)((char *)data_0070FB60);
  t2 = *(unsigned *)((char *)a0);
  t3 = t2 + 0x3D0;
  t4 = *(unsigned *)((char *)t1 + 0x1C);
  func_00115C70((unsigned)&lv[0], t4, t3);
  t5 = *(unsigned *)((char *)a0);
  x1 = *(float *)((char *)&lv[0]);
  x2 = *(float *)((char *)&lv[1]);
  t6 = t5 + 0x800;
  t7 = t6 + 0x158;
  x3 = *(float *)((char *)&lv[2]);
  x4 = *(float *)((char *)t7);
  x5 = *(float *)((char *)t7 + 4);
  x6 = *(float *)((char *)t7 + 8);
  x7 = x1 * x4;
  x9 = (x7 + (x2 * x5)) + (x3 * x6);
  t8 = x9 > fa0 ? 1 : 0;
  return t8;
}
