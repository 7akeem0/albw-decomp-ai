typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FB60[];
extern void func_00115C70(unsigned, unsigned, unsigned);
extern float func_00115DC8(unsigned);
unsigned func_003ADE58(unsigned a0)
{
  unsigned lv[3];
  unsigned t6, t7, t8, kt1;
  kt1 = (unsigned)&lv[0];
  func_00115C70(kt1, *(unsigned *)((char *)*(unsigned *)((char *)data_0070FB60) + 0x1C), a0 + 0x3D0);
  func_00115DC8((unsigned)&lv[0]);
  t8 = *(unsigned *)((char *)a0 + 0x434) + 0x24;
  t6 = *(unsigned *)((char *)&lv[1]);
  t7 = *(unsigned *)((char *)&lv[2]);
  *(unsigned *)((char *)t8) = *(unsigned *)((char *)&lv[0]);
  *(unsigned *)((char *)t8 + 4) = t6;
  *(unsigned *)((char *)t8 + 8) = t7;
  return 1;
}
