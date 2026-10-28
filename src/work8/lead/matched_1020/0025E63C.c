typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern char data_00711F50[];
extern char data_00712FA8[];
extern char data_007143B8[];
extern unsigned func_004EC66C(unsigned, unsigned, unsigned);
extern unsigned func_00541604(unsigned);
extern  unsigned func_0065FF80(unsigned, unsigned);
void func_0025E63C(unsigned a0)
{
  unsigned lv[2];
  unsigned t2, t6, kt3;
  if (*(unsigned *)((char *)a0 + 0xC8) == 0) {
    t2 = *(unsigned *)((char *)data_00712FA8);
    *(unsigned *)((char *)&lv[0]) = (unsigned)ro_006F5988;
    *(unsigned *)((char *)&lv[1]) = t2;
    kt3 = (unsigned)ro_006F5988;
    func_004EC66C(*(unsigned *)((char *)data_00711F50), (unsigned)&lv[0], kt3);
  }
  if ((int)*(unsigned *)((char *)a0 + 0xC8) < 0x258) {
    return;
  }
  t6 = func_00541604(*(unsigned *)((char *)data_007143B8));
  if (t6 == 0) {
    return;
  }
  func_0065FF80(a0 + 0xC8, 1);
  return;
}
