/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188



extern char data_0070B800[];
extern bool func_0051E300(unsigned);
extern unsigned func_001670E0(unsigned);
extern void func_001682A8(unsigned);
void func_00232384(unsigned a0)
{
  unsigned k1, r0, r1, r5, t1, t2, t3, t4;
  unsigned t5, t6, t8, t9, t11, t12, t13, t14;
  unsigned t15, t17, t18, t19, t20, t21;
  t1 = func_0051E300(a0);
  if (t1 != 0) {
    t2 = *(unsigned *)((char *)a0 + 0x1C);
    k1 = 0;
    r5 = k1;
    if (t2 != 0) {
      t3 = *(unsigned *)((char *)a0 + 0x18);
      t4 = t3 << 0x1C;
      r5 = k1;
      if ((int)t4 >= 0) {
        t5 = func_001670E0(t2);
        t6 = *(unsigned *)((char *)a0 + 0x1C);
        r5 = k1;
        if (t5 != 0) {
          r5 = 1;
        }
        func_001682A8(t6);
      }
    }
    t8 = *(unsigned *)((char *)a0 + 0x10);
    r1 = 0;
    if (t8 != 0) {
      t9 = *(unsigned *)((char *)t8 + 0x68);
      r1 = 0;
      if ((t9 & 0x18) != 0) {
        r1 = 1;
      }
    }
    if (r5 == 0) {
      return;
    }
    t11 = *(unsigned *)((char *)a0 + 0x1C);
    t12 = *(unsigned *)((char *)data_0070B800);
    t13 = t12 + 0xC00;
    t14 = t13 + 0x31C;
    r0 = t14;
    if (r1 < 2) {
      t15 = r1 * 0xA3;
      r0 = t14 + (t15 << 2);
    }
    t17 = *(unsigned *)((char *)r0);
    t18 = *(unsigned *)((char *)r0 + 4);
    if ((int)t17 >= (int)t18) {
      return;
    }
    t19 = *(unsigned *)((char *)r0 + 8);
    *(unsigned *)((char *)t19 + (t17 << 2)) = t11;
    t20 = *(unsigned *)((char *)r0);
    t21 = t20 + 1;
    *(unsigned *)((char *)r0) = t21;
  }
  return;
}
