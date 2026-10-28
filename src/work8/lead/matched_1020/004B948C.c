typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_002C0028(void);
extern void func_0060B5D4(void);
extern void func_0010F1DC(unsigned, unsigned);
extern unsigned func_0049F434(unsigned, unsigned, unsigned);
void func_004B948C(unsigned a0, unsigned a1)
{
  unsigned t1, t2, t3, t4, t5, t6, t7, t8, ka2;
  unsigned t9, t10, t11, t12, t13, t14, t15, t16;
  unsigned t17, t18;
  t1 = a0 + 0x48;
  *(unsigned *)((char *)a1 + 0x10) = a0;
  ka2 = a0 + 0x54;
  t2 = *(unsigned *)((char *)ka2);
  t3 = t2 + a1;
  func_0010F1DC(t1, t3);
  t4 = *(unsigned *)((char *)t1 + 8);
  t5 = t4 + 1;
  *(unsigned *)((char *)t1 + 8) = t5;
  t6 = *(unsigned *)((char *)a1 + 0x14);
  if (t6 != 0) {
    t7 = *(signed char *)((char *)t6 + 0x14);
    if ((int)t7 < 0) {
      t8 = *(unsigned *)((char *)a0 + 0x60);
      *(unsigned char *)((char *)t6 + 0x14) = t8;
    }
    t9 = *(unsigned *)((char *)a1 + 0x14);
    t10 = *(unsigned *)((char *)a0 + 0x64);
    t11 = a0 + 0x58;
    t12 = t10 + t9;
    func_0010F1DC(t11, t12);
    t13 = *(unsigned *)((char *)t11 + 8);
    t14 = t13 + 1;
    *(unsigned *)((char *)t11 + 8) = t14;
    t15 = *(unsigned *)((char *)a0 + 0x64);
    t16 = a0 + 0x58;
    func_0049F434(t16, t15, (unsigned)func_002C0028);
  }
  t17 = *(unsigned *)((char *)a0 + 0x54);
  t18 = a0 + 0x48;
  func_0049F434(t18, t17, (unsigned)func_0060B5D4);
  return;
}
