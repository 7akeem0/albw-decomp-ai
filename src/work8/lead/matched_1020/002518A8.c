typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FA78[];
extern char bss_007946A0[];
extern void func_00115C54(unsigned, unsigned, unsigned);
extern unsigned func_00491E80(unsigned, unsigned, unsigned, unsigned);
extern  unsigned func_004CEAF0(unsigned, unsigned, unsigned);
void func_002518A8(unsigned a0)
{
  unsigned lv[3];
  unsigned t2, t4, t9, t10, t17, t20, t21, kt1;
  kt1 = (unsigned)&lv[0];
  func_00115C54(kt1, a0 + 0x3D0, (unsigned)bss_007946A0);
  t2 = *(unsigned *)((char *)a0 + 0x40C);
  t4 = (a0 + 0x400) + 0xC;
  *(unsigned *)((char *)t2 + 0x164) = *(unsigned *)((char *)t2 + 0x164) | 0x40000000;
  t9 = *(unsigned *)((char *)data_0070FA78);
  func_00491E80(t2 + 0x80, t9, *(unsigned *)((char *)a0 + 0x3E8), 0);
  t10 = *(unsigned *)((char *)t4);
  *(unsigned *)((char *)t10 + 0x164) = *(unsigned *)((char *)t10 + 0x164) | 0x40000000;
  *(unsigned *)((char *)t10 + 0x8C) = *(unsigned *)((char *)&lv[0]);
  *(unsigned *)((char *)t10 + 0x9C) = *(unsigned *)((char *)&lv[1]);
  *(unsigned *)((char *)t10 + 0xAC) = *(unsigned *)((char *)&lv[2]);
  t17 = *(unsigned *)((char *)t4);
  t20 = *(unsigned *)((char *)*(unsigned *)((char *)*(unsigned *)((char *)a0 + 0x2D0) + 0x14));
  t21 = *(unsigned *)((char *)t17 + 0x164) | 0x40000000;
  *(unsigned *)((char *)t17 + 0x74) = t20;
  *(unsigned *)((char *)t17 + 0x164) = t21;
  *(unsigned *)((char *)t17 + 0x78) = t20;
  *(unsigned *)((char *)t17 + 0x7C) = t20;
  func_004CEAF0(*(unsigned *)((char *)t4), t17, t21);
  return;
}
