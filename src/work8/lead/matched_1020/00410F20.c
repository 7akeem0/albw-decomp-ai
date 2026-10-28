typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F0670[];
extern unsigned func_0010C1B8(unsigned);
extern void func_003C8BD8(unsigned);
extern void func_00413634(unsigned);
extern void func_00408B7C(unsigned);
extern void func_00408BC8(unsigned);
void func_00410F20(unsigned a0)
{
  unsigned h901, h902, h903, h904, k1, t1, t2, t3;
  unsigned t4, t5, t6, t7, t8, t9, t10, t11;
  k1 = 0;
  *(unsigned *)((char *)a0) = (unsigned)ro_006F0670;
  h901 = a0 + 0x190;
  t1 = *(unsigned char *)((char *)h901);
  if (t1 != 0) {
    t2 = *(unsigned *)((char *)a0 + 0x120);
    t3 = t2 & (-2);
    if (t3 != 0) {
      if ((t2 & 1) != 0) {
        func_0010C1B8(t2);
      }
      t4 = *(unsigned *)((char *)a0 + 0x120);
      t5 = t4 & (-2);
      func_003C8BD8(t5);
      *(unsigned *)((char *)a0 + 0x120) = k1;
    }
    t6 = a0 + 0x13C;
    func_00413634(t6);
    *(unsigned char *)((char *)a0 + 0x190) = k1;
  }
  h902 = a0;
  func_00408B7C(h902);
  h903 = (-1);
  h904 = a0 + 0x18C;
  *(unsigned *)((char *)h904) = h903;
  t7 = *(unsigned *)((char *)a0 + 0x120);
  t8 = a0 + 0x120;
  t9 = t7 & (-2);
  if (t9 != 0) {
    if ((t7 & 1) != 0) {
      func_0010C1B8(t7);
    }
    t10 = *(unsigned *)((char *)t8);
    t11 = t10 & (-2);
    func_003C8BD8(t11);
    *(unsigned *)((char *)t8) = k1;
  }
  func_00408BC8(a0);
  return;
}
