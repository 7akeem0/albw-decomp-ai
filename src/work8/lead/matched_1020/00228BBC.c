typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FB60[];
extern unsigned func_00556990(unsigned);
extern unsigned func_004D80EC(unsigned, unsigned, unsigned);
extern unsigned func_0065E774(unsigned, unsigned);
extern unsigned func_005811E8(unsigned);
extern unsigned func_004A3700(unsigned, unsigned);
void func_00228BBC(unsigned a0)
{
  unsigned r0, t1, t2, t3, t4, t5, t6;
  unsigned t7, t8, t9, t10, t11, t12, t13, t14;
  unsigned t15, t16, t17, t18, t19, t20, t21, t22;
  unsigned t23, t24, t25, t26, t27, t28;
  t1 = *(unsigned *)((char *)((unsigned)data_0070FB60));
  t2 = func_00556990(t1);
  t3 = a0 + 0x400;
  t4 = a0 + 0x400;
  t5 = t3 + 0x68;
  t6 = t4 + 0xC;
  if (t2 != 0) {
    t13 = *(unsigned *)((char *)((unsigned)data_0070FB60));
    t14 = *(unsigned *)((char *)a0 + 0x608);
    t15 = *(unsigned *)((char *)t13 + 0x1C);
    t16 = t14 + 4;
    t17 = func_004D80EC(t16, t15, 0);
    t18 = t17 + 0x40000000;
    t19 = t18 >> 0x1E;
    t20 = t19 << 0x1E;
    t21 = t20 + (-536870912);
    *(unsigned *)((char *)a0 + 0x6A4) = t21;
    func_0065E774(t5, 5);
    t22 = func_005811E8(t6);
    t23 = t22;
    if (t22 != 0) {
      t23 = *(unsigned *)((char *)t6);
    }
    if ((t22 != 0) && (t23 != 0)) {
      t24 = *(unsigned *)((char *)t23 + 0x1C);
      t25 = *(unsigned *)((char *)t6 + 4);
      r0 = t23;
      if (t24 == t25) goto L10;
    }
    return;
  }
  t7 = *(unsigned *)((char *)a0 + 0x468);
  if ((int)t7 < 0x78) {
    return;
  }
  t8 = *(unsigned short *)((char *)a0 + 0x73E);
  if (t8 != 0) {
    *(unsigned *)((char *)a0 + 0x6F4) = 4;
    func_0065E774(t5, 8);
  } else {
    func_0065E774(t5, 4);
  }
  t9 = func_005811E8(t6);
  t10 = t9;
  if (t9 != 0) {
    t10 = *(unsigned *)((char *)t6);
  }
  if ((t9 == 0) || (t10 == 0)) {
    return;
  }
  t11 = *(unsigned *)((char *)t10 + 0x1C);
  t12 = *(unsigned *)((char *)t6 + 4);
  r0 = t10;
  if (t11 != t12) {
    return;
  }
  L10:;
  t26 = *(unsigned *)((char *)r0 + 0x3C);
  t27 = t26 & (-69);
  t28 = t27 | 8;
  *(unsigned *)((char *)r0 + 0x3C) = t28;
  func_004A3700(r0, t28);
  return;
}
