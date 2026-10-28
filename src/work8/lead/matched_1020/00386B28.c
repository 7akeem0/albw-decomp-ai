typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_001151EC(unsigned, unsigned, unsigned);
extern unsigned func_004CEAF0();
void func_00386B28(unsigned a0)
{
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  unsigned t9, t10, t11, t12, t13, t14, t15, t16;
  unsigned t17, t18, t19, t20, t21, t22, t23, t24;
  unsigned t25, t26, t27, t28, t29, t30, t31, t32;
  unsigned t33, t34, t35, t36, t37, t38, t39, t40;
  unsigned t41, t42, t43, t44, t45, t46;
  t1 = *(unsigned *)((char *)a0 + 0x3C);
  t2 = t1 + 0x80;
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
  t12 = *(unsigned *)((char *)a0 + 0x3C);
  t13 = *(unsigned *)((char *)a0 + 4);
  t14 = *(unsigned *)((char *)t12 + 0x164);
  t15 = *(unsigned *)((char *)t13 + 0x510);
  t16 = t14 | 0x40000000;
  *(unsigned *)((char *)t12 + 0x164) = t16;
  t17 = *(unsigned *)((char *)t15 + 0x48);
  *(unsigned *)((char *)t12 + 0x74) = t17;
  t18 = *(unsigned *)((char *)t15 + 0x4C);
  *(unsigned *)((char *)t12 + 0x78) = t18;
  t19 = *(unsigned *)((char *)t15 + 0x50);
  *(unsigned *)((char *)t12 + 0x7C) = t19;
  t20 = *(unsigned *)((char *)a0 + 0x3C);
  func_004CEAF0(t20, t19, t18);
  t21 = *(unsigned *)((char *)a0 + 0x40);
  t22 = *(unsigned char *)((char *)t21 + 0x30);
  if (t22 != 0) {
    t23 = *(unsigned *)((char *)t21 + 0x164);
    t24 = t21 + 0x80;
    t25 = t23 | 0x40000000;
    *(unsigned *)((char *)t21 + 0x164) = t25;
    t26 = *(unsigned *)((char *)a0 + 4);
    t27 = *(unsigned *)((char *)t26 + 0x8D4);
    t28 = *(unsigned *)((char *)t26 + 0x8F4);
    t29 = *(unsigned *)((char *)t27 + 0x24);
    t30 = t28 + (t28 << 1);
    t31 = *(unsigned *)((char *)t29 + 0x14);
    t32 = t31 + (t30 << 4);
    func_001151EC(t24, t32, t24);
    t33 = *(unsigned *)((char *)a0 + 0x40);
    func_004CEAF0(t33);
  }
  t34 = *(unsigned *)((char *)a0 + 0x44);
  t35 = *(unsigned char *)((char *)t34 + 0x30);
  if (t35 != 0) {
    t36 = *(unsigned *)((char *)t34 + 0x164);
    t37 = t34 + 0x80;
    t38 = t36 | 0x40000000;
    *(unsigned *)((char *)t34 + 0x164) = t38;
    t39 = *(unsigned *)((char *)a0 + 4);
    t40 = *(unsigned *)((char *)t39 + 0x8D4);
    t41 = *(unsigned *)((char *)t39 + 0x8F4);
    t42 = *(unsigned *)((char *)t40 + 0x24);
    t43 = t41 + (t41 << 1);
    t44 = *(unsigned *)((char *)t42 + 0x14);
    t45 = t44 + (t43 << 4);
    func_001151EC(t37, t45, t37);
    t46 = *(unsigned *)((char *)a0 + 0x44);
    func_004CEAF0(t46);
    return;
  }
  return;
}
