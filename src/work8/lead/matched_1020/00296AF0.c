typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern char data_00711E68[];
extern char data_00711F50[];
extern void func_00407880(unsigned, unsigned);
extern unsigned func_00409F64(unsigned);
extern unsigned func_00588258(unsigned);
extern unsigned func_00587FCC(unsigned, unsigned);
void func_00296AF0(unsigned a0)
{
  unsigned lv[2];
  unsigned h901, k3, t3, t4, t6, t8, t9, t11;
  unsigned t12, t14;
  h901 = a0 + 0x64;
  func_00407880(*(unsigned *)((char *)data_00711F50), h901);
  t3 = *(unsigned *)((char *)data_00711F50);
  t4 = a0 + 0x64;
  func_00407880(t3, t4);
  t6 = func_00409F64(*(unsigned *)((char *)data_00711F50));
  *(unsigned *)((char *)a0 + 0xBC) = t6;
  t8 = func_00588258(*(unsigned *)((char *)data_00711F50));
  *(unsigned *)((char *)a0 + 0xC0) = t8;
  k3 = (unsigned)ro_006F5988;
  t9 = *(unsigned *)((char *)(unsigned)data_00711E68 + 0x2C);
  *(unsigned *)((char *)&lv[0]) = k3;
  *(unsigned *)((char *)&lv[1]) = t9;
  t11 = func_00587FCC(*(unsigned *)((char *)data_00711F50), (unsigned)&lv[0]);
  *(unsigned *)((char *)a0 + 0x194) = t11;
  t12 = *(unsigned *)((char *)(unsigned)data_00711E68 + 0x30);
  *(unsigned *)((char *)&lv[0]) = k3;
  *(unsigned *)((char *)&lv[1]) = t12;
  t14 = func_00587FCC(*(unsigned *)((char *)data_00711F50), (unsigned)&lv[0]);
  *(unsigned *)((char *)a0 + 0x198) = t14;
  return;
}
