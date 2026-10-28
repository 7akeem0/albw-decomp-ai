typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004CF478(unsigned, unsigned, unsigned);
extern unsigned func_003AB994(unsigned, unsigned);
extern unsigned func_003AB8DC(unsigned, unsigned);
extern unsigned func_001151EC(unsigned, unsigned, unsigned);
extern void func_004CEAF0(unsigned);
void func_003BCCEC(unsigned a0)
{
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  unsigned t9, t10, t11, t12, t13, t14, t15, t16;
  unsigned t17;
  t1 = *(signed char *)((char *)a0 + 0x3A);
  t2 = *(unsigned *)((char *)a0 + 0x34);
  func_004CF478(t2, t1, 0);
  t3 = *(unsigned char *)((char *)a0 + 0x3A);
  if (t3 != 0) {
    t4 = *(unsigned *)((char *)a0 + 0x34);
    func_003AB994(a0, t4);
    t5 = *(unsigned *)((char *)a0 + 0x34);
    func_003AB8DC(a0, t5);
    t6 = *(unsigned *)((char *)a0 + 0x34);
    t7 = t6 + 0x80;
    t8 = *(unsigned *)((char *)t6 + 0x164);
    t9 = t8 | 0x40000000;
    *(unsigned *)((char *)t6 + 0x164) = t9;
    t10 = *(unsigned *)((char *)a0 + 4);
    t11 = *(unsigned *)((char *)t10 + 0x8D4);
    t12 = *(unsigned *)((char *)t10 + 0x8F0);
    t13 = *(unsigned *)((char *)t11 + 0x24);
    t14 = t12 + (t12 << 1);
    t15 = *(unsigned *)((char *)t13 + 0x14);
    t16 = t15 + (t14 << 4);
    func_001151EC(t7, t16, t7);
    t17 = *(unsigned *)((char *)a0 + 0x34);
    func_004CEAF0(t17);
    return;
  }
  return;
}
