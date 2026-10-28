typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char bss_00747824[];
extern unsigned func_001151EC(unsigned, unsigned, unsigned);
extern void func_004CEAF0(unsigned);
extern unsigned func_0018EDF8(unsigned, unsigned, unsigned, unsigned, float, float);
void func_003AB344(unsigned a0)
{
  unsigned lv[4];
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  unsigned t9, t10, t11, t12, t13, t14, t15, t16;
  unsigned t17, t18, t19, t20, t21, t22, t23, t24;
  unsigned t25, t26, t27, t28, t29, t30, t31;
  float x1, x2, x3;
  t1 = *(unsigned *)((char *)a0 + 0x34);
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
  t12 = *(unsigned *)((char *)a0 + 0x34);
  func_004CEAF0(t12);
  t13 = *(unsigned char *)((char *)a0 + 0x38);
  if (t13 != 0) {
    *(unsigned char *)((char *)a0 + 0x38) = 0;
    t14 = *(unsigned *)((char *)a0 + 4);
    t15 = *(unsigned *)((char *)t14 + 0x8D4);
    t16 = *(unsigned *)((char *)t14 + 0x8F4);
    t17 = *(unsigned *)((char *)t15 + 0x24);
    t18 = t16 + (t16 << 1);
    t19 = *(unsigned *)((char *)t17 + 0x14);
    t20 = t19 + (t18 << 4);
    t21 = *(unsigned *)((char *)t20 + 0xC);
    *(unsigned *)((char *)&lv[1]) = t21;
    t22 = *(unsigned *)((char *)t20 + 0x1C);
    *(unsigned *)((char *)&lv[2]) = t22;
    t23 = *(unsigned *)((char *)t20 + 0x2C);
    *(unsigned *)((char *)&lv[3]) = t23;
    t24 = *(unsigned *)((char *)a0 + 4);
    x1 = *(float *)((char *)(unsigned)bss_00747824 + 4);
    x2 = *(float *)((char *)t24 + 0x3D4);
    x3 = x2 + x1;
    *(float *)((char *)&lv[2]) = x3;
    t25 = *(signed char *)((char *)a0 + 0xC);
    t26 = *(unsigned *)((char *)a0 + 4);
    t27 = t25 == 0 ? 1 : 0;
    *(unsigned *)((char *)&lv[0]) = t27;
    t28 = *(unsigned *)((char *)t26 + 0x3E8);
    t29 = *(unsigned *)((char *)t26 + 0x2CC);
    t30 = (int)t25 >= 2 ? 1 : 0;
    t31 = func_0018EDF8(t29, (unsigned)&lv[1], t28, t30, x3, x2);
    *(unsigned *)((char *)a0 + 0x3C) = t31;
  }
  return;
}
