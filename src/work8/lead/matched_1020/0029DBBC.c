typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern char data_00711DE8[];
extern char data_00711F50[];
extern char data_00712F58[];
extern char data_007143B8[];
extern unsigned func_0029E2CC(unsigned, unsigned);
extern  unsigned func_004EA0E0(unsigned, unsigned, unsigned);
void func_0029DBBC(unsigned a0, unsigned a1)
{
  unsigned lv[2];
  unsigned t1, t2, t3, t4, t5, t6, t7, t8, kt2;
  t1 = *(unsigned *)((char *)data_00711DE8);
  t2 = t1 + 0x4000;
  t3 = t2 + 0xBE0;
  t4 = *(unsigned char *)((char *)t3);
  t5 = t4 == 0 ? 1 : 0;
  t6 = *(unsigned *)((char *)data_007143B8);
  func_0029E2CC(t6, t5);
  t7 = *(unsigned *)((char *)data_00712F58);
  *(unsigned *)((char *)&lv[0]) = (unsigned)ro_006F5988;
  *(unsigned *)((char *)&lv[1]) = t7;
  t8 = *(unsigned *)((char *)data_00711F50);
  kt2 = (unsigned)ro_006F5988;
  func_004EA0E0(t8, (unsigned)&lv[0], kt2);
  return;
}
