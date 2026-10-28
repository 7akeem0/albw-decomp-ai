typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006A6D48[];
extern char data_007149D0[];
extern char data_00715968[];
__svc(0x23) unsigned svc_23(unsigned);
extern unsigned func_0010C1B8();
extern void func_00108250(unsigned);
void func_001026D8(unsigned a0)
{
  unsigned k2, k3, t2, t3, t4, t5, t6;
  unsigned t7, t8, t9, t10, t11, t12, t13, t14;
  unsigned t15, t16, t19, t20, t21;
  if (*(unsigned char *)((char *)((unsigned)data_007149D0)) == 0) {
    return;
  }
  k2 = 0;
  t2 = *(unsigned *)((char *)a0);
  *(unsigned *)((char *)a0) = k2;
  t3 = svc_23(t2);
  t4 = t3 >> 0x1F;
  if (t4 != 0) {
    func_0010C1B8(t4);
  }
  t5 = *(unsigned *)((char *)a0 + 8);
  *(unsigned *)((char *)a0 + 8) = k2;
  t6 = svc_23(t5);
  t7 = t6 >> 0x1F;
  if (t7 != 0) {
    func_0010C1B8(t7);
  }
  t8 = *(unsigned *)((char *)a0 + 0x10);
  *(unsigned *)((char *)a0 + 0x10) = k2;
  t9 = svc_23(t8);
  t10 = t9 >> 0x1F;
  if (t10 != 0) {
    func_0010C1B8(t10);
  }
  t11 = *(unsigned *)((char *)a0 + 0x1C);
  *(unsigned *)((char *)a0 + 0x1C) = k2;
  t12 = svc_23(t11);
  t13 = t12 >> 0x1F;
  if (t13 != 0) {
    func_0010C1B8(t13);
  }
  t14 = *(unsigned *)((char *)a0 + 0x24);
  *(unsigned *)((char *)a0 + 0x24) = k2;
  t15 = svc_23(t14);
  t16 = t15 >> 0x1F;
  if (t16 != 0) {
    func_0010C1B8(t16);
  }
  func_00108250(a0 + 0x2C);
  k3 = (unsigned)data_00715968;
  t19 = svc_23(*(unsigned *)((char *)k3));
  t20 = t19 >> 0x1F;
  t21 = *(unsigned *)((char *)ro_006A6D48);
  *(unsigned *)((char *)k3) = t21;
  if (t20 != 0) {
    func_0010C1B8(t20, t21);
  }
  *(unsigned char *)((char *)((unsigned)data_007149D0)) = k2;
  return;
}
