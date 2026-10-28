typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_001151EC(unsigned, unsigned, unsigned);
extern void func_004CEAF0(unsigned);
void func_00397B84(unsigned a0)
{
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  unsigned t9, t10, t11, t12, t13, t14, t15, t16;
  unsigned t17, t18, t19, t20, t21, t22, t23, t24;
  unsigned t25, t26, t27, t28, t29, t30, t31, t32;
  unsigned t33, t34, t35, t36, t37, t38;
  t1 = *(unsigned *)((char *)a0 + 0x34);
  t2 = (*(unsigned *)((char *)a0 + 0x34)) + 0x80;
  t3 = *(unsigned *)((char *)t1 + 0x164);
  t4 = t3 | 0x40000000;
  *(unsigned *)((char *)t1 + 0x164) = t4;
  t5 = *(unsigned *)((char *)a0 + 4);
  t6 = *(unsigned *)((char *)t5 + 0x8D4);
  t7 = *(unsigned *)((char *)t5 + 0x8F4);
  t8 = *(unsigned *)((char *)t6 + 0x24);
  t9 = t7 + (t7 << 1);
  t10 = *(unsigned *)((char *)t8 + 0x14);
  t11 = t10 + (t9 << 4);
  func_001151EC(t2, t11, t2);
  t12 = *(unsigned *)((char *)a0 + 0x34);
  func_004CEAF0(t12);
  t13 = *(unsigned *)((char *)a0 + 0x38);
  t14 = *(unsigned char *)((char *)t13 + 0x30);
  if (t14 != 0) {
    t15 = *(unsigned *)((char *)t13 + 0x164);
    t16 = t13 + 0x80;
    t17 = t15 | 0x40000000;
    *(unsigned *)((char *)t13 + 0x164) = t17;
    t18 = *(unsigned *)((char *)a0 + 4);
    t19 = *(unsigned *)((char *)t18 + 0x8D4);
    t20 = *(unsigned *)((char *)t18 + 0x8F4);
    t21 = *(unsigned *)((char *)t19 + 0x24);
    t22 = t20 + (t20 << 1);
    t23 = *(unsigned *)((char *)t21 + 0x14);
    t24 = t23 + (t22 << 4);
    func_001151EC(t16, t24, t16);
    t25 = *(unsigned *)((char *)a0 + 0x38);
    func_004CEAF0(t25);
  }
  t26 = *(unsigned *)((char *)a0 + 0x3C);
  t27 = *(unsigned char *)((char *)t26 + 0x30);
  if (t27 != 0) {
    t28 = *(unsigned *)((char *)t26 + 0x164);
    t29 = t26 + 0x80;
    t30 = t28 | 0x40000000;
    *(unsigned *)((char *)t26 + 0x164) = t30;
    t31 = *(unsigned *)((char *)a0 + 4);
    t32 = *(unsigned *)((char *)t31 + 0x8D4);
    t33 = *(unsigned *)((char *)t31 + 0x8F4);
    t34 = *(unsigned *)((char *)t32 + 0x24);
    t35 = t33 + (t33 << 1);
    t36 = *(unsigned *)((char *)t34 + 0x14);
    t37 = t36 + (t35 << 4);
    func_001151EC(t29, t37, t29);
    t38 = *(unsigned *)((char *)a0 + 0x3C);
    func_004CEAF0(t38);
    return;
  }
  return;
}
