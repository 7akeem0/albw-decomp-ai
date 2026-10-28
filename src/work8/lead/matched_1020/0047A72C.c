typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FB60[];
extern void func_0044F498(unsigned, unsigned, unsigned);
extern unsigned func_0055696C(unsigned, unsigned);
void func_0047A72C(unsigned a0)
{
  unsigned lv[2];
  unsigned k1, k2, k3, r5, t1, t2, t3, t4;
  unsigned t5, t6, t7, t8, t9, t10, t11, t12;
  unsigned t13, t14, t15, t16, t17, t18, t19, t20;
  unsigned t21, t22, t23;
  float x1, x2, x3, x4;
  k1 = (-1);
  t1 = *(unsigned *)((char *)a0 + 0x214);
  r5 = k1;
  if (t1 != 0) {
    t2 = *(unsigned char *)((char *)t1 + 0x98);
    if (t2 != 6) {
      t3 = *(unsigned *)((char *)a0 + 0x1F8);
      t4 = *(unsigned *)((char *)t3 + 0x1C);
      t5 = *(unsigned *)((char *)t4);
      t6 = *(unsigned *)((char *)t5 + 0x10);
      t7 = t6 + 0x48;
      x1 = *(float *)((char *)t7 + 0xC);
      x2 = x1 - 3.0f;
      *(float *)((char *)&lv[0]) = x2;
      t8 = *(unsigned *)((char *)t7 + 0x1C);
      *(unsigned *)((char *)&lv[1]) = t8;
      t9 = *(unsigned *)((char *)a0 + 0x214);
      func_0044F498(t9, 6, (unsigned)&lv[0]);
    }
    k2 = 0;
    r5 = k2;
  }
  t10 = *(unsigned *)((char *)a0 + 0x210);
  if (t10 != 0) {
    t11 = *(unsigned *)((char *)data_0070FB60);
    if (t11 != 0) {
      t12 = func_0055696C(t11, 0x27);
      if (t12 != 0) {
        t14 = *(unsigned *)((char *)a0 + 0x210);
        t15 = *(unsigned char *)((char *)t14 + 0x98);
        if (t15 != 6) {
          t16 = *(unsigned *)((char *)a0 + 0x1F4);
          t17 = *(unsigned *)((char *)t16 + 0x1C);
          t18 = *(unsigned *)((char *)t17);
          t19 = *(unsigned *)((char *)t18 + 0x10);
          t20 = t19 + 0x48;
          x3 = *(float *)((char *)t20 + 0xC);
          x4 = x3 - 3.0f;
          *(float *)((char *)&lv[0]) = x4;
          t21 = *(unsigned *)((char *)t20 + 0x1C);
          *(unsigned *)((char *)&lv[1]) = t21;
          t22 = *(unsigned *)((char *)a0 + 0x210);
          func_0044F498(t22, 6, (unsigned)&lv[0]);
        }
        k3 = 1;
        r5 = k3;
        goto L11;
      }
    }
    t13 = *(unsigned *)((char *)a0 + 0x210);
    *(unsigned char *)((char *)t13 + 0x98) = 9;
  }
  L11:;
  t23 = *(unsigned *)((char *)a0 + 0x218);
  if (t23 != 0) {
    *(unsigned char *)((char *)t23 + 0x80) = r5;
  }
  return;
}
