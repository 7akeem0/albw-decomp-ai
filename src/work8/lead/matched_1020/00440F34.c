typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00178B5C(unsigned);
extern unsigned func_00524708(unsigned);
extern unsigned func_0017A190(unsigned);
void func_00440F34(unsigned a0)
{
  unsigned h901, t1, t2, t3, t4, t5, t6, t7;
  unsigned t8, t9, t10, t11, t12, t13, t14, t15;
  unsigned t16, t17;
  t1 = *(unsigned *)((char *)a0);
  t2 = *(unsigned *)((char *)t1 + 0x6C);
  ((unsigned (*)(unsigned))t2)(a0);
  t3 = *(unsigned char *)((char *)a0 + 0xE2);
  if (t3 != 0) {
    t4 = *(unsigned *)((char *)a0 + 0x74);
    func_00178B5C(t4);
    t5 = *(unsigned *)((char *)a0 + 0x78);
    if (t5 != 0) {
      t6 = *(unsigned *)((char *)a0 + 0x74);
      t7 = func_00524708(t6);
      t8 = *(unsigned *)((char *)a0 + 0x74);
      h901 = t8 + 0x32;
      *(unsigned short *)((char *)h901) = 0;
      *(unsigned char *)((char *)t8 + 0x3D) = 0;
      t9 = *(unsigned *)((char *)t5);
      t10 = *(unsigned *)((char *)a0 + 0x74);
      t11 = *(unsigned *)((char *)t9 + 0x60);
      t12 = *(unsigned *)((char *)t10 + 8);
      ((unsigned (*)(unsigned, unsigned, unsigned, unsigned))t11)(t5, t12, 0, t7);
      t13 = *(unsigned *)((char *)a0 + 0x74);
      func_0017A190(t13);
    }
  }
  t14 = *(unsigned *)((char *)a0 + 0x74);
  t15 = *(unsigned char *)((char *)t14 + 0x3E);
  if (t15 != 0) {
    t16 = *(unsigned *)((char *)a0);
    t17 = *(unsigned *)((char *)t16 + 0xA0);
    ((unsigned (*)(unsigned, unsigned))t17)(a0, t17);
    return;
  }
  return;
}
