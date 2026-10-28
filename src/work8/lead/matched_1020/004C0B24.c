typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_0014FD48(unsigned);
extern unsigned func_00584E64(unsigned);
extern unsigned func_004D0194(unsigned, unsigned, unsigned);
extern unsigned func_00584E70(unsigned);
extern unsigned func_004D0268();
void func_004C0B24(unsigned a0)
{
  unsigned h901, t1, t3, t4, t5, t6, t7, t9;
  unsigned t10, t11, t13, t14, t15, t16, t18, t19;
  func_0014FD48(a0);
  t1 = *(unsigned *)((char *)a0 + 0x7A4);
  t3 = (a0 + 0x400) + 0x3A4;
  t4 = t1;
  t5 = a0 + 0x7A0;
  if (t1 != 0) {
    t4 = *(unsigned *)((char *)a0 + 0x7A0);
  }
  if ((t1 != 0) && (t4 != 0)) {
    t6 = func_00584E64(t4);
    t7 = *(unsigned *)((char *)a0 + 0x7A4);
    h901 = t7;
    func_004D0194(h901, t6, t7);
    t9 = func_00584E70(*(unsigned *)((char *)t5));
    t10 = *(unsigned *)((char *)t3);
    func_004D0268(t10, t9, t10);
  }
  t11 = *(unsigned *)((char *)a0 + 0x7A8);
  t13 = (a0 + 0x400) + 0x3A8;
  t14 = t11;
  if (t11 != 0) {
    t14 = *(unsigned *)((char *)a0 + 0x7A0);
  }
  if ((t11 != 0) && (t14 != 0)) {
    t15 = func_00584E64(t14);
    t16 = *(unsigned *)((char *)a0 + 0x7A8);
    func_004D0194(t16, t15, t16);
    t18 = func_00584E70(*(unsigned *)((char *)t5));
    t19 = *(unsigned *)((char *)t13);
    func_004D0268(t19, t18, t19);
    return;
  }
  return;
}
