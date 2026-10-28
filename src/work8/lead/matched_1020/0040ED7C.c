typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0040D8C8(void);
void func_0040ED7C(unsigned a0)
{
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  unsigned t9, t10, t11, t12, t13, t14, t15, t16;
  unsigned t17, t18, t19, t20, t21, t22, t23, t24;
  unsigned t25;
  func_0040D8C8();
  t1 = *(unsigned short *)((char *)a0 + 0x2C2C);
  if ((t1 & 1) != 0) {
    t2 = a0 + 0x2800;
    t3 = t2 + 0x1E8;
    t4 = *(unsigned *)((char *)t3 + 0xC);
    t5 = *(unsigned *)((char *)t3 + 8);
    if ((int)t5 > (int)t4) {
      t6 = t4 + 1;
      *(unsigned *)((char *)t3 + 0xC) = t6;
    }
  }
  t7 = t1 >> 1;
  if ((t7 & 1) != 0) {
    t8 = a0 + 0x2800;
    t9 = t8 + 0x1F8;
    t10 = *(unsigned *)((char *)t9 + 0xC);
    t11 = *(unsigned *)((char *)t9 + 8);
    if ((int)t11 > (int)t10) {
      t12 = t10 + 1;
      *(unsigned *)((char *)t9 + 0xC) = t12;
    }
  }
  t13 = t7 >> 1;
  if ((t13 & 1) != 0) {
    t14 = a0 + 0x2800;
    t15 = t14 + 0x208;
    t16 = *(unsigned *)((char *)t15 + 0xC);
    t17 = *(unsigned *)((char *)t15 + 8);
    if ((int)t17 > (int)t16) {
      t18 = t16 + 1;
      *(unsigned *)((char *)t15 + 0xC) = t18;
    }
  }
  t19 = t13 << 0x1E;
  t20 = t19 >> 0x1F;
  if (t20 != 0) {
    t21 = a0 + 0x2800;
    t22 = t21 + 0x218;
    t23 = *(unsigned *)((char *)t22 + 0xC);
    t24 = *(unsigned *)((char *)t22 + 8);
    if ((int)t24 > (int)t23) {
      t25 = t23 + 1;
      *(unsigned *)((char *)t22 + 0xC) = t25;
    }
  }
  return;
}
